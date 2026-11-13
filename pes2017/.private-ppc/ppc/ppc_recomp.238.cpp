#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F28958"))) PPC_WEAK_FUNC(sub_82F28958);
PPC_FUNC_IMPL(__imp__sub_82F28958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f28968
	if (cr6.lt) goto loc_82F28968;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F28968:
	// b 0x82f288d8
	sub_82F288D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2896C"))) PPC_WEAK_FUNC(sub_82F2896C);
PPC_FUNC_IMPL(__imp__sub_82F2896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F28970"))) PPC_WEAK_FUNC(sub_82F28970);
PPC_FUNC_IMPL(__imp__sub_82F28970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F28978;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F28984;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82F2898C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F28990;
	sub_830FFAA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r30,r11,-27604
	ctx.r30.s64 = ctx.r11.s64 + -27604;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// bl 0x8259cc28
	ctx.lr = 0x82F289BC;
	sub_8259CC28(ctx, base);
	// addis r11,r29,221
	ctx.r11.s64 = ctx.r29.s64 + 14483456;
	// addi r11,r11,1613
	ctx.r11.s64 = ctx.r11.s64 + 1613;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f28a8c
	if (cr6.eq) goto loc_82F28A8C;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// bl 0x830ff290
	ctx.lr = 0x82F289D8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F289DC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82f289ec
	if (!cr6.eq) goto loc_82F289EC;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// b 0x82f28a84
	goto loc_82F28A84;
loc_82F289EC:
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f289fc
	if (!cr6.eq) goto loc_82F289FC;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// b 0x82f28a84
	goto loc_82F28A84;
loc_82F289FC:
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82f28a80
	if (!cr6.eq) goto loc_82F28A80;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,40124
	ctx.r10.u64 = ctx.r11.u64 | 40124;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82f28a24
	if (!cr6.eq) goto loc_82F28A24;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// b 0x82f28a88
	goto loc_82F28A88;
loc_82F28A24:
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x8259d6c0
	ctx.lr = 0x82F28A2C;
	sub_8259D6C0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82F28A30;
	sub_831156E8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addis r30,r29,221
	ctx.r30.s64 = ctx.r29.s64 + 14483456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// bl 0x831178a0
	ctx.lr = 0x82F28A54;
	sub_831178A0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8316fb10
	ctx.lr = 0x82F28A64;
	sub_8316FB10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F28A70;
	sub_8311C338(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r31,1296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1296, ctx.r31.u32);
	// stw r11,1292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1292, ctx.r11.u32);
	// b 0x82f28a8c
	goto loc_82F28A8C;
loc_82F28A80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82F28A84:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82F28A88:
	// bl 0x8259d6c0
	ctx.lr = 0x82F28A8C;
	sub_8259D6C0(ctx, base);
loc_82F28A8C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F28A98;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f28ab8
	if (cr6.lt) goto loc_82F28AB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F28AB8;
	sub_825952B8(ctx, base);
loc_82F28AB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28AC4"))) PPC_WEAK_FUNC(sub_82F28AC4);
PPC_FUNC_IMPL(__imp__sub_82F28AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F28AC8"))) PPC_WEAK_FUNC(sub_82F28AC8);
PPC_FUNC_IMPL(__imp__sub_82F28AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F28AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83075ac0
	ctx.lr = 0x82F28ADC;
	sub_83075AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f28bf4
	if (cr6.eq) goto loc_82F28BF4;
	// bl 0x831156e8
	ctx.lr = 0x82F28AEC;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x83073dc0
	ctx.lr = 0x82F28AF4;
	sub_83073DC0(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F28B10;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82fdcec8
	ctx.lr = 0x82F28B18;
	sub_82FDCEC8(ctx, base);
	// stw r3,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r3.u32);
	// bl 0x82fdcf40
	ctx.lr = 0x82F28B20;
	sub_82FDCF40(ctx, base);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,388(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// bl 0x8308f4e0
	ctx.lr = 0x82F28B30;
	sub_8308F4E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830782d8
	ctx.lr = 0x82F28B38;
	sub_830782D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83078720
	ctx.lr = 0x82F28B40;
	sub_83078720(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x8308e078
	ctx.lr = 0x82F28B50;
	sub_8308E078(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// bl 0x8308e078
	ctx.lr = 0x82F28B6C;
	sub_8308E078(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r9,-31754
	ctx.r9.s64 = -2081030144;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r8,136(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r3,21944(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21944);
	// lwz r4,388(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 388);
	// bl 0x83089c00
	ctx.lr = 0x82F28B8C;
	sub_83089C00(ctx, base);
	// lis r7,221
	ctx.r7.s64 = 14483456;
	// ori r6,r7,1620
	ctx.r6.u64 = ctx.r7.u64 | 1620;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lbzx r5,r27,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r6.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x82f28bd0
	if (cr6.eq) goto loc_82F28BD0;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r9,31
	ctx.r9.s64 = 31;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r3,388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// bl 0x83084a98
	ctx.lr = 0x82F28BC4;
	sub_83084A98(ctx, base);
	// stb r31,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r31.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F28BD0:
	// lwz r7,136(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r3,388(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 388);
	// bl 0x8307e898
	ctx.lr = 0x82F28BDC;
	sub_8307E898(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x82F28BF0;
	sub_83103100(ctx, base);
	// stb r31,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r31.u8);
loc_82F28BF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F28BFC"))) PPC_WEAK_FUNC(sub_82F28BFC);
PPC_FUNC_IMPL(__imp__sub_82F28BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F28C00"))) PPC_WEAK_FUNC(sub_82F28C00);
PPC_FUNC_IMPL(__imp__sub_82F28C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f28c30
	if (cr6.eq) goto loc_82F28C30;
	// bl 0x82f28ac8
	ctx.lr = 0x82F28C1C;
	sub_82F28AC8(ctx, base);
loc_82F28C1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82F28C30:
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f28c1c
	if (cr6.eq) goto loc_82F28C1C;
	// addi r4,r3,100
	ctx.r4.s64 = ctx.r3.s64 + 100;
	// bl 0x82e88020
	ctx.lr = 0x82F28C44;
	sub_82E88020(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28C58"))) PPC_WEAK_FUNC(sub_82F28C58);
PPC_FUNC_IMPL(__imp__sub_82F28C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F28C70;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-27024
	ctx.r8.s64 = ctx.r10.s64 + -27024;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
	// addi r4,r4,-22544
	ctx.r4.s64 = ctx.r4.s64 + -22544;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82F28CC8;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28CE0"))) PPC_WEAK_FUNC(sub_82F28CE0);
PPC_FUNC_IMPL(__imp__sub_82F28CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27024
	ctx.r9.s64 = ctx.r11.s64 + -27024;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// lwz r7,120(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82f28d34
	if (cr6.lt) goto loc_82F28D34;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F28D34;
	sub_825952B8(ctx, base);
loc_82F28D34:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82f42278
	ctx.lr = 0x82F28D50;
	sub_82F42278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28D68"))) PPC_WEAK_FUNC(sub_82F28D68);
PPC_FUNC_IMPL(__imp__sub_82F28D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f28ce0
	ctx.lr = 0x82F28D88;
	sub_82F28CE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f28da0
	if (cr6.eq) goto loc_82F28DA0;
	// bl 0x82416268
	ctx.lr = 0x82F28D9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F28DA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F28DB8"))) PPC_WEAK_FUNC(sub_82F28DB8);
PPC_FUNC_IMPL(__imp__sub_82F28DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F28DC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x831156e8
	ctx.lr = 0x82F28DD4;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,1620
	ctx.r9.u64 = ctx.r11.u64 | 1620;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f28f68
	if (cr6.eq) goto loc_82F28F68;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-31774
	ctx.r8.s64 = -2082340864;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// oris r4,r9,65532
	ctx.r4.u64 = ctx.r9.u64 | 4294705152;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,2512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2512);
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r9,r11,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r8,r3,14
	ctx.r8.u64 = ctx.r3.u32 & 0x3FFFF;
	// clrlwi r7,r10,14
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFF;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// rlwinm r3,r6,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r11,r5,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// or r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x830ff290
	ctx.lr = 0x82F28E68;
	sub_830FF290(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r11,r6,-27124
	ctx.r11.s64 = ctx.r6.s64 + -27124;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r10,32(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82F28E90;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F28E9C;
	sub_83824D80(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x82f28ed0
	if (!cr6.eq) goto loc_82F28ED0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f28f20
	if (cr6.eq) goto loc_82F28F20;
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82416268
	ctx.lr = 0x82F28EC8;
	sub_82416268(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// b 0x82f28f20
	goto loc_82F28F20;
loc_82F28ED0:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82f28efc
	if (!cr6.eq) goto loc_82F28EFC;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f28f20
	if (cr6.eq) goto loc_82F28F20;
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82416268
	ctx.lr = 0x82F28EF4;
	sub_82416268(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// b 0x82f28f20
	goto loc_82F28F20;
loc_82F28EFC:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f28f20
	if (cr6.eq) goto loc_82F28F20;
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82416268
	ctx.lr = 0x82F28F18;
	sub_82416268(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// bl 0x830759d0
	ctx.lr = 0x82F28F20;
	sub_830759D0(ctx, base);
loc_82F28F20:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f291a4
	if (!cr6.eq) goto loc_82F291A4;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089c00
	ctx.lr = 0x82F28F3C;
	sub_83089C00(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F28F44;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83126148
	ctx.lr = 0x82F28F5C;
	sub_83126148(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F28F68:
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f290e4
	if (!cr6.eq) goto loc_82F290E4;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r8,-31774
	ctx.r8.s64 = -2082340864;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// oris r4,r9,65532
	ctx.r4.u64 = ctx.r9.u64 | 4294705152;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,2512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2512);
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r9,r11,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r8,r3,14
	ctx.r8.u64 = ctx.r3.u32 & 0x3FFFF;
	// clrlwi r7,r10,14
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFF;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// rlwinm r3,r6,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r11,r5,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// or r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x830ff290
	ctx.lr = 0x82F28FF8;
	sub_830FF290(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r11,r6,-27124
	ctx.r11.s64 = ctx.r6.s64 + -27124;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r5,32(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// bl 0x8259d6c0
	ctx.lr = 0x82F2901C;
	sub_8259D6C0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x82f2904c
	if (!cr6.eq) goto loc_82F2904C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2909c
	if (cr6.eq) goto loc_82F2909C;
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82416268
	ctx.lr = 0x82F29044;
	sub_82416268(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// b 0x82f2909c
	goto loc_82F2909C;
loc_82F2904C:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82f29078
	if (!cr6.eq) goto loc_82F29078;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2909c
	if (cr6.eq) goto loc_82F2909C;
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82416268
	ctx.lr = 0x82F29070;
	sub_82416268(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// b 0x82f2909c
	goto loc_82F2909C;
loc_82F29078:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2909c
	if (cr6.eq) goto loc_82F2909C;
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82416268
	ctx.lr = 0x82F29094;
	sub_82416268(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// bl 0x830759d0
	ctx.lr = 0x82F2909C;
	sub_830759D0(ctx, base);
loc_82F2909C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f291a4
	if (!cr6.eq) goto loc_82F291A4;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089c00
	ctx.lr = 0x82F290B8;
	sub_83089C00(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F290C0;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83126148
	ctx.lr = 0x82F290D8;
	sub_83126148(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F290E4:
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82f2911c
	if (cr6.eq) goto loc_82F2911C;
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82f2911c
	if (cr6.eq) goto loc_82F2911C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83824d80
	ctx.lr = 0x82F29110;
	sub_83824D80(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F2911C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r11,-27124
	ctx.r4.s64 = ctx.r11.s64 + -27124;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2912C;
	sub_8259D6C0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x82f2915c
	if (!cr6.eq) goto loc_82F2915C;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f291a4
	if (cr6.eq) goto loc_82F291A4;
	// bl 0x82416268
	ctx.lr = 0x82F29148;
	sub_82416268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F2915C:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82f29188
	if (!cr6.eq) goto loc_82F29188;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f291a4
	if (cr6.eq) goto loc_82F291A4;
	// bl 0x82416268
	ctx.lr = 0x82F29174;
	sub_82416268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F29188:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f291a4
	if (cr6.eq) goto loc_82F291A4;
	// bl 0x82416268
	ctx.lr = 0x82F29198;
	sub_82416268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x830759d0
	ctx.lr = 0x82F291A4;
	sub_830759D0(ctx, base);
loc_82F291A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F291B0"))) PPC_WEAK_FUNC(sub_82F291B0);
PPC_FUNC_IMPL(__imp__sub_82F291B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F291B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F291C4;
	sub_831156E8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f293fc
	if (!cr6.eq) goto loc_82F293FC;
	// bl 0x830ff290
	ctx.lr = 0x82F291D8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F291DC;
	sub_830FFAA8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bne cr6,0x82f292d4
	if (!cr6.eq) goto loc_82F292D4;
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,37976
	ctx.r4.u64 = ctx.r4.u64 | 37976;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F29204;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82fdcec8
	ctx.lr = 0x82F2920C;
	sub_82FDCEC8(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// bl 0x82fdd300
	ctx.lr = 0x82F29214;
	sub_82FDD300(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,388(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// bl 0x8308f4e0
	ctx.lr = 0x82F29224;
	sub_8308F4E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f23990
	ctx.lr = 0x82F2922C;
	sub_82F23990(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83079628
	ctx.lr = 0x82F29234;
	sub_83079628(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a6e1e8
	ctx.lr = 0x82F2923C;
	sub_82A6E1E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// bl 0x8308e078
	ctx.lr = 0x82F2924C;
	sub_8308E078(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lis r9,-31754
	ctx.r9.s64 = -2081030144;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,21944(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21944);
	// lwz r4,388(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 388);
	// bl 0x83089c00
	ctx.lr = 0x82F2926C;
	sub_83089C00(ctx, base);
	// lis r7,221
	ctx.r7.s64 = 14483456;
	// ori r6,r7,1620
	ctx.r6.u64 = ctx.r7.u64 | 1620;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lbzx r5,r28,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x82f292ac
	if (cr6.eq) goto loc_82F292AC;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r9,31
	ctx.r9.s64 = 31;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r3,388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// bl 0x83084a98
	ctx.lr = 0x82F292A4;
	sub_83084A98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F292AC:
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,388(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 388);
	// bl 0x8307e898
	ctx.lr = 0x82F292B8;
	sub_8307E898(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x82F292CC;
	sub_83103100(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F292D4:
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82f293c8
	if (!cr6.eq) goto loc_82F293C8;
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r4,177
	ctx.r4.s64 = 11599872;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,244
	ctx.r4.u64 = ctx.r4.u64 | 244;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82F292F8;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82fdcec8
	ctx.lr = 0x82F29300;
	sub_82FDCEC8(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// bl 0x82fdd128
	ctx.lr = 0x82F29308;
	sub_82FDD128(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,388(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// bl 0x8308f4e0
	ctx.lr = 0x82F29318;
	sub_8308F4E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f23b48
	ctx.lr = 0x82F29320;
	sub_82F23B48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83078f18
	ctx.lr = 0x82F29328;
	sub_83078F18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a6e1e8
	ctx.lr = 0x82F29330;
	sub_82A6E1E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// bl 0x8308e078
	ctx.lr = 0x82F29340;
	sub_8308E078(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lis r9,-31754
	ctx.r9.s64 = -2081030144;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,21944(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21944);
	// lwz r4,388(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 388);
	// bl 0x83089c00
	ctx.lr = 0x82F29360;
	sub_83089C00(ctx, base);
	// lis r7,221
	ctx.r7.s64 = 14483456;
	// ori r6,r7,1620
	ctx.r6.u64 = ctx.r7.u64 | 1620;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lbzx r5,r28,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x82f293a0
	if (cr6.eq) goto loc_82F293A0;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r9,31
	ctx.r9.s64 = 31;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r3,388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// bl 0x83084a98
	ctx.lr = 0x82F29398;
	sub_83084A98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F293A0:
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,388(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 388);
	// bl 0x8307e898
	ctx.lr = 0x82F293AC;
	sub_8307E898(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x82F293C0;
	sub_83103100(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F293C8:
	// bl 0x83073da0
	ctx.lr = 0x82F293CC;
	sub_83073DA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f293ec
	if (!cr6.eq) goto loc_82F293EC;
	// bl 0x83078170
	ctx.lr = 0x82F293DC;
	sub_83078170(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F293EC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r11,-27116
	ctx.r4.s64 = ctx.r11.s64 + -27116;
	// bl 0x8259d6c0
	ctx.lr = 0x82F293FC;
	sub_8259D6C0(ctx, base);
loc_82F293FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29404"))) PPC_WEAK_FUNC(sub_82F29404);
PPC_FUNC_IMPL(__imp__sub_82F29404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F29408"))) PPC_WEAK_FUNC(sub_82F29408);
PPC_FUNC_IMPL(__imp__sub_82F29408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2942c
	if (cr6.lt) goto loc_82F2942C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f29430
	goto loc_82F29430;
loc_82F2942C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F29430:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F29448;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f29460
	if (cr6.eq) goto loc_82F29460;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f28c58
	ctx.lr = 0x82F29458;
	sub_82F28C58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f29464
	if (!cr6.eq) goto loc_82F29464;
loc_82F29460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F29464:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29478"))) PPC_WEAK_FUNC(sub_82F29478);
PPC_FUNC_IMPL(__imp__sub_82F29478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26752
	ctx.r9.s64 = ctx.r11.s64 + -26752;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F294B0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f294c8
	if (cr6.eq) goto loc_82F294C8;
	// bl 0x82416268
	ctx.lr = 0x82F294C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F294C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F294E0"))) PPC_WEAK_FUNC(sub_82F294E0);
PPC_FUNC_IMPL(__imp__sub_82F294E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F29510;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f29544
	if (cr6.eq) goto loc_82F29544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F29524;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26752
	ctx.r9.s64 = ctx.r11.s64 + -26752;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f29548
	goto loc_82F29548;
loc_82F29544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F29548:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29560"))) PPC_WEAK_FUNC(sub_82F29560);
PPC_FUNC_IMPL(__imp__sub_82F29560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f29570
	if (cr6.lt) goto loc_82F29570;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F29570:
	// b 0x82f294e0
	sub_82F294E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29574"))) PPC_WEAK_FUNC(sub_82F29574);
PPC_FUNC_IMPL(__imp__sub_82F29574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F29578"))) PPC_WEAK_FUNC(sub_82F29578);
PPC_FUNC_IMPL(__imp__sub_82F29578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F29580;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F295A0;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82F295A8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F295AC;
	sub_830FFAA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8310cc00
	ctx.lr = 0x82F295B4;
	sub_8310CC00(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f295d4
	if (cr6.lt) goto loc_82F295D4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f295d8
	if (!cr6.gt) goto loc_82F295D8;
loc_82F295D4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F295D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f296a4
	if (cr6.eq) goto loc_82F296A4;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,1604
	ctx.r10.u64 = ctx.r11.u64 | 1604;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f296a4
	if (cr6.eq) goto loc_82F296A4;
	// bl 0x830ff290
	ctx.lr = 0x82F295FC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F29600;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bne cr6,0x82f29630
	if (!cr6.eq) goto loc_82F29630;
	// bl 0x83198688
	ctx.lr = 0x82F2960C;
	sub_83198688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f29630
	if (cr6.eq) goto loc_82F29630;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-26844
	ctx.r11.s64 = ctx.r11.s64 + -26844;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2962C;
	sub_8259D6C0(ctx, base);
	// b 0x82f296b8
	goto loc_82F296B8;
loc_82F29630:
	// cmplwi cr6,r29,12
	cr6.compare<uint32_t>(ctx.r29.u32, 12, xer);
	// beq cr6,0x82f29640
	if (cr6.eq) goto loc_82F29640;
	// cmplwi cr6,r29,13
	cr6.compare<uint32_t>(ctx.r29.u32, 13, xer);
	// bne cr6,0x82f2967c
	if (!cr6.eq) goto loc_82F2967C;
loc_82F29640:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x8316d690
	ctx.lr = 0x82F2965C;
	sub_8316D690(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82f2967c
	if (cr6.eq) goto loc_82F2967C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-26844
	ctx.r11.s64 = ctx.r11.s64 + -26844;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8259d6c0
	ctx.lr = 0x82F29678;
	sub_8259D6C0(ctx, base);
	// b 0x82f296b8
	goto loc_82F296B8;
loc_82F2967C:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,1608
	ctx.r9.u64 = ctx.r11.u64 | 1608;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r8,-26844
	ctx.r11.s64 = ctx.r8.s64 + -26844;
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259d6c0
	ctx.lr = 0x82F296A0;
	sub_8259D6C0(ctx, base);
	// b 0x82f296b8
	goto loc_82F296B8;
loc_82F296A4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-26844
	ctx.r4.s64 = ctx.r11.s64 + -26844;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82F296B8;
	sub_8259CC28(ctx, base);
loc_82F296B8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F296C4;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f296e4
	if (cr6.lt) goto loc_82F296E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F296E4;
	sub_825952B8(ctx, base);
loc_82F296E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F296F0"))) PPC_WEAK_FUNC(sub_82F296F0);
PPC_FUNC_IMPL(__imp__sub_82F296F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26480
	ctx.r9.s64 = ctx.r11.s64 + -26480;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F29728;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f29740
	if (cr6.eq) goto loc_82F29740;
	// bl 0x82416268
	ctx.lr = 0x82F2973C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F29740:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29758"))) PPC_WEAK_FUNC(sub_82F29758);
PPC_FUNC_IMPL(__imp__sub_82F29758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F29788;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f297bc
	if (cr6.eq) goto loc_82F297BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2979C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26480
	ctx.r9.s64 = ctx.r11.s64 + -26480;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f297c0
	goto loc_82F297C0;
loc_82F297BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F297C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F297D8"))) PPC_WEAK_FUNC(sub_82F297D8);
PPC_FUNC_IMPL(__imp__sub_82F297D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f297e8
	if (cr6.lt) goto loc_82F297E8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F297E8:
	// b 0x82f29758
	sub_82F29758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F297EC"))) PPC_WEAK_FUNC(sub_82F297EC);
PPC_FUNC_IMPL(__imp__sub_82F297EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F297F0"))) PPC_WEAK_FUNC(sub_82F297F0);
PPC_FUNC_IMPL(__imp__sub_82F297F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F297F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F29818;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52845
	ctx.r10.u64 = ctx.r11.u64 | 52845;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f29910
	if (!cr6.eq) goto loc_82F29910;
	// bl 0x830ff290
	ctx.lr = 0x82F29834;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F29838;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82f29850
	if (cr6.eq) goto loc_82F29850;
	// bl 0x830ff290
	ctx.lr = 0x82F29844;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F29848;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82f29910
	if (!cr6.eq) goto loc_82F29910;
loc_82F29850:
	// bl 0x831156e8
	ctx.lr = 0x82F29854;
	sub_831156E8(ctx, base);
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r10,46752
	ctx.r9.u64 = ctx.r10.u64 | 46752;
	// lbzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f298a8
	if (cr6.eq) goto loc_82F298A8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-26572
	ctx.r11.s64 = ctx.r11.s64 + -26572;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x82F29880;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2988C;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82F29894;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2989C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F298A8:
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123768
	ctx.lr = 0x82F298B4;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f298dc
	if (cr6.eq) goto loc_82F298DC;
	// bl 0x830ff290
	ctx.lr = 0x82F298C4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F298C8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82f298dc
	if (!cr6.eq) goto loc_82F298DC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-26572
	ctx.r4.s64 = ctx.r11.s64 + -26572;
	// b 0x82f298e8
	goto loc_82F298E8;
loc_82F298DC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-26572
	ctx.r11.s64 = ctx.r11.s64 + -26572;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82F298E8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d6c0
	ctx.lr = 0x82F298F0;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F298FC;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82F29904;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F29910:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r11,r11,-26572
	ctx.r11.s64 = ctx.r11.s64 + -26572;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8259cc28
	ctx.lr = 0x82F29934;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F29940;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f29960
	if (cr6.lt) goto loc_82F29960;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F29960;
	sub_825952B8(ctx, base);
loc_82F29960:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82f29988
	if (cr6.lt) goto loc_82F29988;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82F29988;
	sub_825952B8(ctx, base);
loc_82F29988:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29994"))) PPC_WEAK_FUNC(sub_82F29994);
PPC_FUNC_IMPL(__imp__sub_82F29994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F29998"))) PPC_WEAK_FUNC(sub_82F29998);
PPC_FUNC_IMPL(__imp__sub_82F29998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26008
	ctx.r9.s64 = ctx.r11.s64 + -26008;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F299D0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f299e8
	if (cr6.eq) goto loc_82F299E8;
	// bl 0x82416268
	ctx.lr = 0x82F299E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F299E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29A00"))) PPC_WEAK_FUNC(sub_82F29A00);
PPC_FUNC_IMPL(__imp__sub_82F29A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F29A30;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f29a64
	if (cr6.eq) goto loc_82F29A64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F29A44;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26008
	ctx.r9.s64 = ctx.r11.s64 + -26008;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f29a68
	goto loc_82F29A68;
loc_82F29A64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F29A68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29A80"))) PPC_WEAK_FUNC(sub_82F29A80);
PPC_FUNC_IMPL(__imp__sub_82F29A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x82F29A98;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82F29AA0;
	sub_830FF290(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,19
	cr6.compare<uint32_t>(ctx.r10.u32, 19, xer);
	// bne cr6,0x82f29bbc
	if (!cr6.eq) goto loc_82F29BBC;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F29ABC;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319df40
	ctx.lr = 0x82F29AC8;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f29c24
	if (cr6.eq) goto loc_82F29C24;
	// addis r11,r31,234
	ctx.r11.s64 = ctx.r31.s64 + 15335424;
	// addic. r11,r11,-18776
	xer.ca = ctx.r11.u32 > 18775;
	ctx.r11.s64 = ctx.r11.s64 + -18776;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82f29c24
	if (cr0.eq) goto loc_82F29C24;
	// lis r10,222
	ctx.r10.s64 = 14548992;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ori r8,r10,30400
	ctx.r8.u64 = ctx.r10.u64 | 30400;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// ldx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r8.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lhz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x82f29b1c
	if (!cr6.eq) goto loc_82F29B1C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f29b20
	if (cr6.eq) goto loc_82F29B20;
loc_82F29B1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F29B20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f29b94
	if (!cr6.eq) goto loc_82F29B94;
	// addis r11,r31,222
	ctx.r11.s64 = ctx.r31.s64 + 14548992;
	// addi r11,r11,-8464
	ctx.r11.s64 = ctx.r11.s64 + -8464;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addi r8,r8,-26672
	ctx.r8.s64 = ctx.r8.s64 + -26672;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ble cr6,0x82f29b64
	if (!cr6.gt) goto loc_82F29B64;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F29B64:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f29b80
	if (!cr6.eq) goto loc_82F29B80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f29b84
	if (cr6.eq) goto loc_82F29B84;
loc_82F29B80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F29B84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82f29b98
	if (cr6.eq) goto loc_82F29B98;
loc_82F29B94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F29B98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f29c24
	if (cr6.eq) goto loc_82F29C24;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f29c24
	if (cr6.eq) goto loc_82F29C24;
	// li r3,328
	ctx.r3.s64 = 328;
	// b 0x82f29c20
	goto loc_82F29C20;
loc_82F29BBC:
	// bl 0x830ff290
	ctx.lr = 0x82F29BC0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bne cr6,0x82f29c24
	if (!cr6.eq) goto loc_82F29C24;
	// addis r10,r31,229
	ctx.r10.s64 = ctx.r31.s64 + 15007744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23248
	ctx.r10.s64 = ctx.r10.s64 + -23248;
loc_82F29BDC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,60
	cr6.compare<int32_t>(ctx.r8.s32, 60, xer);
	// beq cr6,0x82f29bfc
	if (cr6.eq) goto loc_82F29BFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r11,200
	cr6.compare<uint32_t>(ctx.r11.u32, 200, xer);
	// blt cr6,0x82f29bdc
	if (cr6.lt) goto loc_82F29BDC;
	// b 0x82f29c00
	goto loc_82F29C00;
loc_82F29BFC:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82F29C00:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f29c24
	if (cr6.eq) goto loc_82F29C24;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f29c24
	if (cr6.eq) goto loc_82F29C24;
	// li r3,368
	ctx.r3.s64 = 368;
loc_82F29C20:
	// bl 0x82d84728
	ctx.lr = 0x82F29C24;
	sub_82D84728(ctx, base);
loc_82F29C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29C38"))) PPC_WEAK_FUNC(sub_82F29C38);
PPC_FUNC_IMPL(__imp__sub_82F29C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f29c48
	if (cr6.lt) goto loc_82F29C48;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F29C48:
	// b 0x82f29a00
	sub_82F29A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29C4C"))) PPC_WEAK_FUNC(sub_82F29C4C);
PPC_FUNC_IMPL(__imp__sub_82F29C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F29C50"))) PPC_WEAK_FUNC(sub_82F29C50);
PPC_FUNC_IMPL(__imp__sub_82F29C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F29C58;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F29C78;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r29,48(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82f29a80
	ctx.lr = 0x82F29C88;
	sub_82F29A80(ctx, base);
	// bl 0x82f06520
	ctx.lr = 0x82F29C8C;
	sub_82F06520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f053f0
	ctx.lr = 0x82F29C94;
	sub_82F053F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f29d24
	if (cr6.eq) goto loc_82F29D24;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f053f0
	ctx.lr = 0x82F29CA8;
	sub_82F053F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bge cr6,0x82f29d10
	if (!cr6.lt) goto loc_82F29D10;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r31,r11,53000
	ctx.r31.u64 = ctx.r11.u64 | 53000;
loc_82F29CC0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f05408
	ctx.lr = 0x82F29CCC;
	sub_82F05408(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// beq cr6,0x82f29cf0
	if (cr6.eq) goto loc_82F29CF0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82f29cf0
	if (cr6.eq) goto loc_82F29CF0;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// bge cr6,0x82f29cf0
	if (!cr6.lt) goto loc_82F29CF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stbx r28,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u8);
loc_82F29CF0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82f053f0
	ctx.lr = 0x82F29D04;
	sub_82F053F0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82f29cc0
	if (cr6.lt) goto loc_82F29CC0;
loc_82F29D10:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r11,r11,-26100
	ctx.r11.s64 = ctx.r11.s64 + -26100;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82f29d30
	goto loc_82F29D30;
loc_82F29D24:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-26100
	ctx.r4.s64 = ctx.r11.s64 + -26100;
loc_82F29D30:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82F29D38;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F29D44;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f29d64
	if (cr6.lt) goto loc_82F29D64;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F29D64;
	sub_825952B8(ctx, base);
loc_82F29D64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29D70"))) PPC_WEAK_FUNC(sub_82F29D70);
PPC_FUNC_IMPL(__imp__sub_82F29D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25752
	ctx.r9.s64 = ctx.r11.s64 + -25752;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F29DA8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f29dc0
	if (cr6.eq) goto loc_82F29DC0;
	// bl 0x82416268
	ctx.lr = 0x82F29DBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F29DC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29DD8"))) PPC_WEAK_FUNC(sub_82F29DD8);
PPC_FUNC_IMPL(__imp__sub_82F29DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F29E08;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f29e3c
	if (cr6.eq) goto loc_82F29E3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F29E1C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25752
	ctx.r9.s64 = ctx.r11.s64 + -25752;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f29e40
	goto loc_82F29E40;
loc_82F29E3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F29E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F29E58"))) PPC_WEAK_FUNC(sub_82F29E58);
PPC_FUNC_IMPL(__imp__sub_82F29E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f29e68
	if (cr6.lt) goto loc_82F29E68;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F29E68:
	// b 0x82f29dd8
	sub_82F29DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F29E6C"))) PPC_WEAK_FUNC(sub_82F29E6C);
PPC_FUNC_IMPL(__imp__sub_82F29E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F29E70"))) PPC_WEAK_FUNC(sub_82F29E70);
PPC_FUNC_IMPL(__imp__sub_82F29E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82F29E78;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F29E98;
	sub_831156E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r22,r11,-25844
	ctx.r22.s64 = ctx.r11.s64 + -25844;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r22,-8
	ctx.r4.s64 = ctx.r22.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r23,48(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x8259cc28
	ctx.lr = 0x82F29EB8;
	sub_8259CC28(ctx, base);
	// addis r11,r23,209
	ctx.r11.s64 = ctx.r23.s64 + 13697024;
	// addic. r11,r11,320
	xer.ca = ctx.r11.u32 > 4294966975;
	ctx.r11.s64 = ctx.r11.s64 + 320;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82f2a050
	if (cr0.eq) goto loc_82F2A050;
	// addis r27,r11,5
	ctx.r27.s64 = ctx.r11.s64 + 327680;
	// addic. r27,r27,-1868
	xer.ca = ctx.r27.u32 > 1867;
	ctx.r27.s64 = ctx.r27.s64 + -1868;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x82f2a050
	if (cr0.eq) goto loc_82F2A050;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r26,r11,2976
	ctx.r26.s64 = ctx.r11.s64 + 2976;
loc_82F29ED8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82f29fd0
	if (!cr6.gt) goto loc_82F29FD0;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82F29EF4:
	// cmplwi cr6,r30,100
	cr6.compare<uint32_t>(ctx.r30.u32, 100, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82f29f04
	if (!cr6.lt) goto loc_82F29F04;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82F29F04:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x82f29fa8
	if (!cr6.eq) goto loc_82F29FA8;
	// cmplwi cr6,r30,100
	cr6.compare<uint32_t>(ctx.r30.u32, 100, xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bge cr6,0x82f29f20
	if (!cr6.lt) goto loc_82F29F20;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82F29F20:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r30,100
	cr6.compare<uint32_t>(ctx.r30.u32, 100, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82f29f38
	if (!cr6.lt) goto loc_82F29F38;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82F29F38:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f29f58
	if (!cr6.eq) goto loc_82F29F58;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82f29f84
	goto loc_82F29F84;
loc_82F29F58:
	// lhz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f29f7c
	if (!cr6.eq) goto loc_82F29F7C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f29f80
	if (cr6.eq) goto loc_82F29F80;
loc_82F29F7C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82F29F80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F29F84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f29fa8
	if (!cr6.eq) goto loc_82F29FA8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82F29F9C;
	sub_8311BF98(ctx, base);
	// lbz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x82f29fc0
	if (!cr6.eq) goto loc_82F29FC0;
loc_82F29FA8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82f29ef4
	if (cr6.lt) goto loc_82F29EF4;
	// b 0x82f29fd0
	goto loc_82F29FD0;
loc_82F29FC0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b141f0
	ctx.lr = 0x82F29FCC;
	sub_82B141F0(ctx, base);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_82F29FD0:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f29ed8
	if (cr6.eq) goto loc_82F29ED8;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2a050
	if (cr6.eq) goto loc_82F2A050;
	// addi r8,r27,4
	ctx.r8.s64 = ctx.r27.s64 + 4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82F29FF4:
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82f2a004
	if (!cr6.lt) goto loc_82F2A004;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82F2A004:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x82f2a040
	if (cr6.eq) goto loc_82F2A040;
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82f2a020
	if (!cr6.lt) goto loc_82F2A020;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82F2A020:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x82f2a040
	if (cr6.eq) goto loc_82F2A040;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82f29ff4
	if (cr6.lt) goto loc_82F29FF4;
	// b 0x82f2a050
	goto loc_82F2A050;
loc_82F2A040:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82F2A050;
	sub_8259CC28(ctx, base);
loc_82F2A050:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2A05C;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2a07c
	if (cr6.lt) goto loc_82F2A07C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2A07C;
	sub_825952B8(ctx, base);
loc_82F2A07C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2A088"))) PPC_WEAK_FUNC(sub_82F2A088);
PPC_FUNC_IMPL(__imp__sub_82F2A088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25280
	ctx.r9.s64 = ctx.r11.s64 + -25280;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2A0C0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2a0d8
	if (cr6.eq) goto loc_82F2A0D8;
	// bl 0x82416268
	ctx.lr = 0x82F2A0D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2A0D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A0F0"))) PPC_WEAK_FUNC(sub_82F2A0F0);
PPC_FUNC_IMPL(__imp__sub_82F2A0F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2A120;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2a15c
	if (cr6.eq) goto loc_82F2A15C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2A134;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25280
	ctx.r9.s64 = ctx.r11.s64 + -25280;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r7.u64);
	// b 0x82f2a160
	goto loc_82F2A160;
loc_82F2A15C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2A160:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A178"))) PPC_WEAK_FUNC(sub_82F2A178);
PPC_FUNC_IMPL(__imp__sub_82F2A178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d26640
	ctx.lr = 0x82F2A190;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82F2A194;
	sub_82D25AB8(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82F2A198;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82F2A19C;
	sub_83524138(ctx, base);
	// std r3,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r3.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A1B4"))) PPC_WEAK_FUNC(sub_82F2A1B4);
PPC_FUNC_IMPL(__imp__sub_82F2A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2A1B8"))) PPC_WEAK_FUNC(sub_82F2A1B8);
PPC_FUNC_IMPL(__imp__sub_82F2A1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2a1c8
	if (cr6.lt) goto loc_82F2A1C8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2A1C8:
	// b 0x82f2a0f0
	sub_82F2A0F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2A1CC"))) PPC_WEAK_FUNC(sub_82F2A1CC);
PPC_FUNC_IMPL(__imp__sub_82F2A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2A1D0"))) PPC_WEAK_FUNC(sub_82F2A1D0);
PPC_FUNC_IMPL(__imp__sub_82F2A1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82F2A1EC;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82F2A1F0;
	sub_83524138(ctx, base);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// subf r30,r11,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x837d59a0
	ctx.lr = 0x82F2A1FC;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5cf8
	ctx.lr = 0x82F2A204;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82f2a258
	if (!cr6.eq) goto loc_82F2A258;
	// bl 0x82d17aa0
	ctx.lr = 0x82F2A210;
	sub_82D17AA0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-25372
	ctx.r11.s64 = ctx.r11.s64 + -25372;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82F2A224;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2A230;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f2a250
	if (cr6.lt) goto loc_82F2A250;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2A250;
	sub_825952B8(ctx, base);
loc_82F2A250:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f2a290
	goto loc_82F2A290;
loc_82F2A258:
	// cmpldi cr6,r30,15000
	cr6.compare<uint64_t>(ctx.r30.u64, 15000, xer);
	// blt cr6,0x82f2a28c
	if (cr6.lt) goto loc_82F2A28C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-25372
	ctx.r4.s64 = ctx.r11.s64 + -25372;
	// bl 0x837b0c10
	ctx.lr = 0x82F2A270;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2A27C;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2A284;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f2a290
	goto loc_82F2A290;
loc_82F2A28C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2A290:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A2A8"))) PPC_WEAK_FUNC(sub_82F2A2A8);
PPC_FUNC_IMPL(__imp__sub_82F2A2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F2A2B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r29,r3,176
	ctx.r29.s64 = ctx.r3.s64 + 176;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r4.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwimi r10,r5,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r9,196(r3)
	PPC_STORE_U16(ctx.r3.u32 + 196, ctx.r9.u16);
	// lwz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r31,176(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f2a338
	if (cr6.eq) goto loc_82F2A338;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82F2A330;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82F2A338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2A340"))) PPC_WEAK_FUNC(sub_82F2A340);
PPC_FUNC_IMPL(__imp__sub_82F2A340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2A358;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24784
	ctx.r9.s64 = ctx.r11.s64 + -24784;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82eff1a8
	ctx.lr = 0x82F2A374;
	sub_82EFF1A8(ctx, base);
	// lwz r6,144(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r5,140(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r7,56
	ctx.r7.s64 = 56;
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw. r11,r4,r7
	ctx.r11.s32 = PPCDivide(ctx.r4.s32, ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82f2a3bc
	if (cr0.eq) goto loc_82F2A3BC;
	// bl 0x82b1c848
	ctx.lr = 0x82F2A390;
	sub_82B1C848(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82f2a3c0
	if (cr6.eq) goto loc_82F2A3C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82F2A3BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2A3C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A3D4"))) PPC_WEAK_FUNC(sub_82F2A3D4);
PPC_FUNC_IMPL(__imp__sub_82F2A3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2A3D8"))) PPC_WEAK_FUNC(sub_82F2A3D8);
PPC_FUNC_IMPL(__imp__sub_82F2A3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24784
	ctx.r9.s64 = ctx.r11.s64 + -24784;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2A410;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2a428
	if (cr6.eq) goto loc_82F2A428;
	// bl 0x82416268
	ctx.lr = 0x82F2A424;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2A428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A440"))) PPC_WEAK_FUNC(sub_82F2A440);
PPC_FUNC_IMPL(__imp__sub_82F2A440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2a464
	if (cr6.lt) goto loc_82F2A464;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f2a468
	goto loc_82F2A468;
loc_82F2A464:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F2A468:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2A480;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2a498
	if (cr6.eq) goto loc_82F2A498;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f2a340
	ctx.lr = 0x82F2A490;
	sub_82F2A340(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f2a49c
	if (!cr6.eq) goto loc_82F2A49C;
loc_82F2A498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2A49C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A4B0"))) PPC_WEAK_FUNC(sub_82F2A4B0);
PPC_FUNC_IMPL(__imp__sub_82F2A4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82F2A4B8;
	__savegprlr_17(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F2A4D8;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82f00728
	ctx.lr = 0x82F2A4E0;
	sub_82F00728(ctx, base);
	// bl 0x82eff1a8
	ctx.lr = 0x82F2A4E4;
	sub_82EFF1A8(ctx, base);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82f2a504
	if (cr6.eq) goto loc_82F2A504;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82f2a504
	if (cr6.eq) goto loc_82F2A504;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82f2a574
	if (!cr6.eq) goto loc_82F2A574;
loc_82F2A504:
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2a574
	if (cr6.eq) goto loc_82F2A574;
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r9,r10,52146
	ctx.r9.u64 = ctx.r10.u64 | 52146;
	// lhzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2a540
	if (cr6.eq) goto loc_82F2A540;
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// ori r9,r10,52144
	ctx.r9.u64 = ctx.r10.u64 | 52144;
	// lhzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2a540
	if (cr6.eq) goto loc_82F2A540;
	// stb r25,274(r27)
	PPC_STORE_U8(ctx.r27.u32 + 274, ctx.r25.u8);
loc_82F2A540:
	// stb r25,345(r11)
	PPC_STORE_U8(ctx.r11.u32 + 345, ctx.r25.u8);
	// stb r25,62(r11)
	PPC_STORE_U8(ctx.r11.u32 + 62, ctx.r25.u8);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2a568
	if (cr6.lt) goto loc_82F2A568;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2A568;
	sub_825952B8(ctx, base);
loc_82F2A568:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82F2A574:
	// lwz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r9,140(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// li r19,2
	ctx.r19.s64 = 2;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82f2a5a4
	if (!cr0.eq) goto loc_82F2A5A4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-24876
	ctx.r11.s64 = ctx.r11.s64 + -24876;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f2ab30
	goto loc_82F2AB30;
loc_82F2A5A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b1c848
	ctx.lr = 0x82F2A5AC;
	sub_82B1C848(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// ori r20,r9,7
	ctx.r20.u64 = ctx.r9.u64 | 7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// addi r21,r10,-24876
	ctx.r21.s64 = ctx.r10.s64 + -24876;
	// beq cr6,0x82f2aae8
	if (cr6.eq) goto loc_82F2AAE8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2aae8
	if (cr6.eq) goto loc_82F2AAE8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b1c848
	ctx.lr = 0x82F2A5D8;
	sub_82B1C848(ctx, base);
	// lis r22,-31774
	ctx.r22.s64 = -2082340864;
	// ld r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 36);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// lwz r11,3280(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3280);
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82b1c848
	ctx.lr = 0x82F2A5F8;
	sub_82B1C848(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r30,r11,3232
	ctx.r30.s64 = ctx.r11.s64 + 3232;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lwz r23,48(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// bl 0x825a2298
	ctx.lr = 0x82F2A61C;
	sub_825A2298(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2a8c0
	if (cr6.eq) goto loc_82F2A8C0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b1c848
	ctx.lr = 0x82F2A634;
	sub_82B1C848(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f2a684
	if (!cr6.eq) goto loc_82F2A684;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82F2A650;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x831235b8
	ctx.lr = 0x82F2A660;
	sub_831235B8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// b 0x82f2a8c4
	goto loc_82F2A8C4;
loc_82F2A684:
	// cmpw cr6,r23,r20
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r20.s32, xer);
	// bne cr6,0x82f2a6c4
	if (!cr6.eq) goto loc_82F2A6C4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r21,-252
	ctx.r5.s64 = ctx.r21.s64 + -252;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831178a0
	ctx.lr = 0x82F2A6A4;
	sub_831178A0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// b 0x82f2a8c4
	goto loc_82F2A8C4;
loc_82F2A6C4:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f2a750
	if (!cr6.eq) goto loc_82F2A750;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r21,-252
	ctx.r5.s64 = ctx.r21.s64 + -252;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x831178a0
	ctx.lr = 0x82F2A6F0;
	sub_831178A0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82F2A700;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x831235b8
	ctx.lr = 0x82F2A710;
	sub_831235B8(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2a73c
	if (!cr6.eq) goto loc_82F2A73C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2a740
	if (cr6.eq) goto loc_82F2A740;
loc_82F2A73C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F2A740:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f2a754
	if (cr6.eq) goto loc_82F2A754;
loc_82F2A750:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F2A754:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2a79c
	if (cr6.eq) goto loc_82F2A79C;
	// li r11,4971
	ctx.r11.s64 = 4971;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83157548
	ctx.lr = 0x82F2A77C;
	sub_83157548(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// b 0x82f2a8c4
	goto loc_82F2A8C4;
loc_82F2A79C:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f2a7d4
	if (!cr6.eq) goto loc_82F2A7D4;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addis r3,r29,231
	ctx.r3.s64 = ctx.r29.s64 + 15138816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x82b1b488
	ctx.lr = 0x82F2A7C0;
	sub_82B1B488(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2a8c0
	if (cr6.eq) goto loc_82F2A8C0;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// b 0x82f2a8c4
	goto loc_82F2A8C4;
loc_82F2A7D4:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f2a80c
	if (!cr6.eq) goto loc_82F2A80C;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addis r3,r29,231
	ctx.r3.s64 = ctx.r29.s64 + 15138816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x82b1b488
	ctx.lr = 0x82F2A7F8;
	sub_82B1B488(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2a8c0
	if (cr6.eq) goto loc_82F2A8C0;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// b 0x82f2a8c4
	goto loc_82F2A8C4;
loc_82F2A80C:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f2a844
	if (!cr6.eq) goto loc_82F2A844;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// addis r3,r29,231
	ctx.r3.s64 = ctx.r29.s64 + 15138816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x82b1b488
	ctx.lr = 0x82F2A830;
	sub_82B1B488(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2a8c0
	if (cr6.eq) goto loc_82F2A8C0;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// b 0x82f2a8c4
	goto loc_82F2A8C4;
loc_82F2A844:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f2a880
	if (!cr6.eq) goto loc_82F2A880;
	// li r11,3
	ctx.r11.s64 = 3;
	// addis r3,r29,231
	ctx.r3.s64 = ctx.r29.s64 + 15138816;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x82b1b488
	ctx.lr = 0x82F2A86C;
	sub_82B1B488(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2a8c0
	if (cr6.eq) goto loc_82F2A8C0;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// b 0x82f2a8c4
	goto loc_82F2A8C4;
loc_82F2A880:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82F2A890;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x831235b8
	ctx.lr = 0x82F2A8A0;
	sub_831235B8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// b 0x82f2a8c4
	goto loc_82F2A8C4;
loc_82F2A8C0:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82F2A8C4:
	// lwz r11,3280(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3280);
	// li r10,29
	ctx.r10.s64 = 29;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2a8f4
	if (!cr6.eq) goto loc_82F2A8F4;
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2a8f8
	if (cr6.eq) goto loc_82F2A8F8;
loc_82F2A8F4:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82F2A8F8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2a9b8
	if (!cr6.eq) goto loc_82F2A9B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c148
	ctx.lr = 0x82F2A90C;
	sub_8311C148(ctx, base);
	// lbz r11,790(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 790);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lhz r9,808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2a9b0
	if (cr6.eq) goto loc_82F2A9B0;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r9,r3,248
	ctx.r9.s64 = ctx.r3.s64 + 248;
	// lhz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
loc_82F2A938:
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82f2a954
	if (!cr6.lt) goto loc_82F2A954;
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r24,512(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 512);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
loc_82F2A954:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82f2a96c
	if (!cr6.eq) goto loc_82F2A96C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// b 0x82f2a994
	goto loc_82F2A994;
loc_82F2A96C:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82f2a98c
	if (!cr6.eq) goto loc_82F2A98C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f2a990
	if (cr6.eq) goto loc_82F2A990;
loc_82F2A98C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F2A990:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F2A994:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2a9b0
	if (!cr6.eq) goto loc_82F2A9B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82f2a938
	if (cr6.lt) goto loc_82F2A938;
loc_82F2A9B0:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,3280(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3280);
loc_82F2A9B8:
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2a9dc
	if (!cr6.eq) goto loc_82F2A9DC;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2a9e0
	if (cr6.eq) goto loc_82F2A9E0;
loc_82F2A9DC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F2A9E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2aa08
	if (cr6.eq) goto loc_82F2AA08;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b1cb68
	ctx.lr = 0x82F2A9F4;
	sub_82B1CB68(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2A9FC;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82F2AA08:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// li r31,18
	ctx.r31.s64 = 18;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// bne cr6,0x82f2aa4c
	if (!cr6.eq) goto loc_82F2AA4C;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8316fb10
	ctx.lr = 0x82F2AA2C;
	sub_8316FB10(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f2aa4c
	if (cr6.eq) goto loc_82F2AA4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F2AA44;
	sub_8311C338(ctx, base);
	// lhz r31,532(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 532);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
loc_82F2AA4C:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2aa68
	if (cr6.eq) goto loc_82F2AA68;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f2aa68
	if (cr6.eq) goto loc_82F2AA68;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x82f2aa70
	if (!cr6.eq) goto loc_82F2AA70;
loc_82F2AA68:
	// li r11,18
	ctx.r11.s64 = 18;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_82F2AA70:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831bd440
	ctx.lr = 0x82F2AA78;
	sub_831BD440(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f2a2a8
	ctx.lr = 0x82F2AAA4;
	sub_82F2A2A8(ctx, base);
	// stb r25,272(r27)
	PPC_STORE_U8(ctx.r27.u32 + 272, ctx.r25.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82F2AAB0;
	sub_82D17AA0(ctx, base);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,9
	ctx.r9.u64 = ctx.r10.u64 | 9;
	// cmpw cr6,r23,r9
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, xer);
	// beq cr6,0x82f2aac8
	if (cr6.eq) goto loc_82F2AAC8;
	// cmpw cr6,r23,r20
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r20.s32, xer);
	// bne cr6,0x82f2aae0
	if (!cr6.eq) goto loc_82F2AAE0;
loc_82F2AAC8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,3280(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3280);
	// stw r10,280(r27)
	PPC_STORE_U32(ctx.r27.u32 + 280, ctx.r10.u32);
	// stw r11,284(r27)
	PPC_STORE_U32(ctx.r27.u32 + 284, ctx.r11.u32);
	// bl 0x82eff838
	ctx.lr = 0x82F2AAE0;
	sub_82EFF838(ctx, base);
loc_82F2AAE0:
	// lfs f0,-20(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 288, temp.u32);
loc_82F2AAE8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b1c848
	ctx.lr = 0x82F2AAF0;
	sub_82B1C848(ctx, base);
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82f2ab28
	if (cr6.eq) goto loc_82F2AB28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b1c848
	ctx.lr = 0x82F2AB0C;
	sub_82B1C848(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r20
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, xer);
	// beq cr6,0x82f2ab28
	if (cr6.eq) goto loc_82F2AB28;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2AB24;
	sub_8259D6C0(ctx, base);
	// b 0x82f2ab38
	goto loc_82F2AB38;
loc_82F2AB28:
	// addi r4,r21,-8
	ctx.r4.s64 = ctx.r21.s64 + -8;
	// li r5,6
	ctx.r5.s64 = 6;
loc_82F2AB30:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82F2AB38;
	sub_8259CC28(ctx, base);
loc_82F2AB38:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2AB44;
	sub_82E88020(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2ab60
	if (cr6.lt) goto loc_82F2AB60;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82F2AB60;
	sub_825952B8(ctx, base);
loc_82F2AB60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AB6C"))) PPC_WEAK_FUNC(sub_82F2AB6C);
PPC_FUNC_IMPL(__imp__sub_82F2AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AB70"))) PPC_WEAK_FUNC(sub_82F2AB70);
PPC_FUNC_IMPL(__imp__sub_82F2AB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24488
	ctx.r9.s64 = ctx.r11.s64 + -24488;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2ABA8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2abc0
	if (cr6.eq) goto loc_82F2ABC0;
	// bl 0x82416268
	ctx.lr = 0x82F2ABBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2ABC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ABD8"))) PPC_WEAK_FUNC(sub_82F2ABD8);
PPC_FUNC_IMPL(__imp__sub_82F2ABD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2AC08;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2ac3c
	if (cr6.eq) goto loc_82F2AC3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2AC1C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24488
	ctx.r9.s64 = ctx.r11.s64 + -24488;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2ac40
	goto loc_82F2AC40;
loc_82F2AC3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2AC40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AC58"))) PPC_WEAK_FUNC(sub_82F2AC58);
PPC_FUNC_IMPL(__imp__sub_82F2AC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2ac68
	if (cr6.lt) goto loc_82F2AC68;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2AC68:
	// b 0x82f2abd8
	sub_82F2ABD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AC6C"))) PPC_WEAK_FUNC(sub_82F2AC6C);
PPC_FUNC_IMPL(__imp__sub_82F2AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AC70"))) PPC_WEAK_FUNC(sub_82F2AC70);
PPC_FUNC_IMPL(__imp__sub_82F2AC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F2ACA0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r10,r11,221
	ctx.r10.s64 = ctx.r11.s64 + 14483456;
	// addi r10,r10,-18932
	ctx.r10.s64 = ctx.r10.s64 + -18932;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2acc8
	if (cr6.eq) goto loc_82F2ACC8;
	// lis r9,221
	ctx.r9.s64 = 14483456;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// ori r8,r9,1604
	ctx.r8.u64 = ctx.r9.u64 | 1604;
	// stbx r31,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r31.u8);
loc_82F2ACC8:
	// bl 0x830ff290
	ctx.lr = 0x82F2ACCC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2ACD0;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f2ad54
	if (cr6.gt) goto loc_82F2AD54;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f2ad54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2AD54;
	// bdzf 4*cr6+eq,0x82f2ad54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2AD54;
	// bdzf 4*cr6+eq,0x82f2ad10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2AD10;
	// bdzf 4*cr6+eq,0x82f2ad28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2AD28;
	// bne cr6,0x82f2ad40
	if (!cr6.eq) goto loc_82F2AD40;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-24580
	ctx.r11.s64 = ctx.r11.s64 + -24580;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2AD0C;
	sub_8259D6C0(ctx, base);
	// b 0x82f2ad6c
	goto loc_82F2AD6C;
loc_82F2AD10:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-24580
	ctx.r11.s64 = ctx.r11.s64 + -24580;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2AD24;
	sub_8259D6C0(ctx, base);
	// b 0x82f2ad6c
	goto loc_82F2AD6C;
loc_82F2AD28:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-24580
	ctx.r11.s64 = ctx.r11.s64 + -24580;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2AD3C;
	sub_8259D6C0(ctx, base);
	// b 0x82f2ad6c
	goto loc_82F2AD6C;
loc_82F2AD40:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-24580
	ctx.r4.s64 = ctx.r11.s64 + -24580;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2AD50;
	sub_8259D6C0(ctx, base);
	// b 0x82f2ad6c
	goto loc_82F2AD6C;
loc_82F2AD54:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r11,r11,-24580
	ctx.r11.s64 = ctx.r11.s64 + -24580;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x8259cc28
	ctx.lr = 0x82F2AD6C;
	sub_8259CC28(ctx, base);
loc_82F2AD6C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2AD78;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2ad98
	if (cr6.lt) goto loc_82F2AD98;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2AD98;
	sub_825952B8(ctx, base);
loc_82F2AD98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ADB4"))) PPC_WEAK_FUNC(sub_82F2ADB4);
PPC_FUNC_IMPL(__imp__sub_82F2ADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ADB8"))) PPC_WEAK_FUNC(sub_82F2ADB8);
PPC_FUNC_IMPL(__imp__sub_82F2ADB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23872
	ctx.r9.s64 = ctx.r11.s64 + -23872;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2ADF0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2ae08
	if (cr6.eq) goto loc_82F2AE08;
	// bl 0x82416268
	ctx.lr = 0x82F2AE04;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2AE08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AE20"))) PPC_WEAK_FUNC(sub_82F2AE20);
PPC_FUNC_IMPL(__imp__sub_82F2AE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2AE50;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2ae84
	if (cr6.eq) goto loc_82F2AE84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2AE64;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23872
	ctx.r9.s64 = ctx.r11.s64 + -23872;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2ae88
	goto loc_82F2AE88;
loc_82F2AE84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2AE88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AEA0"))) PPC_WEAK_FUNC(sub_82F2AEA0);
PPC_FUNC_IMPL(__imp__sub_82F2AEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2aeb0
	if (cr6.lt) goto loc_82F2AEB0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2AEB0:
	// b 0x82f2ae20
	sub_82F2AE20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AEB4"))) PPC_WEAK_FUNC(sub_82F2AEB4);
PPC_FUNC_IMPL(__imp__sub_82F2AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2AEB8"))) PPC_WEAK_FUNC(sub_82F2AEB8);
PPC_FUNC_IMPL(__imp__sub_82F2AEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F2AEC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F2AEE0;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82F2AEE8;
	sub_831156E8(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,5392
	ctx.r3.s64 = ctx.r10.s64 + 5392;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8316d690
	ctx.lr = 0x82F2AF0C;
	sub_8316D690(ctx, base);
	// lis r9,221
	ctx.r9.s64 = 14483456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r8,r9,52996
	ctx.r8.u64 = ctx.r9.u64 | 52996;
	// lwzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82f2afa4
	if (cr6.eq) goto loc_82F2AFA4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// addi r4,r11,-152
	ctx.r4.s64 = ctx.r11.s64 + -152;
	// bl 0x837b0c10
	ctx.lr = 0x82F2AF44;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2AF50;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f2af70
	if (cr6.lt) goto loc_82F2AF70;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82F2AF70;
	sub_825952B8(ctx, base);
loc_82F2AF70:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x82f2b234
	if (cr6.lt) goto loc_82F2B234;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82F2AF98;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F2AFA4:
	// bl 0x830ff290
	ctx.lr = 0x82F2AFA8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2AFAC;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f2b1f0
	if (cr6.gt) goto loc_82F2B1F0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f2b18c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2B18C;
	// bdzf 4*cr6+eq,0x82f2b18c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2B18C;
	// bdzf 4*cr6+eq,0x82f2b014
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2B014;
	// bdzf 4*cr6+eq,0x82f2b0ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2B0AC;
	// bne cr6,0x82f2b0ac
	if (!cr6.eq) goto loc_82F2B0AC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// bne cr6,0x82f2aff4
	if (!cr6.eq) goto loc_82F2AFF4;
	// addi r4,r11,-136
	ctx.r4.s64 = ctx.r11.s64 + -136;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2AFF0;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2AFF4:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x82f2b008
	if (!cr6.eq) goto loc_82F2B008;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B004;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B008:
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B010;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B014:
	// addis r3,r28,5
	ctx.r3.s64 = ctx.r28.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123768
	ctx.lr = 0x82F2B020;
	sub_83123768(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,1613
	ctx.r10.u64 = ctx.r11.u64 | 1613;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2b04c
	if (cr6.eq) goto loc_82F2B04C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B048;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B04C:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x82f2b094
	if (cr6.eq) goto loc_82F2B094;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46744
	ctx.r10.u64 = ctx.r11.u64 | 46744;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2b094
	if (cr6.eq) goto loc_82F2B094;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// bne cr6,0x82f2b088
	if (!cr6.eq) goto loc_82F2B088;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B084;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B088:
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B090;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B094:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B0A8;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B0AC:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x82f2b160
	if (!cr6.eq) goto loc_82F2B160;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,46732
	ctx.r10.u64 = ctx.r11.u64 | 46732;
	// lwzx r30,r30,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F2B0C8;
	sub_8319DC20(ctx, base);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r9,r30,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f2b0fc
	if (!cr6.eq) goto loc_82F2B0FC;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r10,r30,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f2b0fc
	if (!cr6.eq) goto loc_82F2B0FC;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r8,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82F2B0FC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2b120
	if (cr6.eq) goto loc_82F2B120;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B11C;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B120:
	// bl 0x831156e8
	ctx.lr = 0x82F2B124;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2b154
	if (cr6.eq) goto loc_82F2B154;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B150;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B154:
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B15C;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B160:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// bne cr6,0x82f2b180
	if (!cr6.eq) goto loc_82F2B180;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B17C;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B180:
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B188;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B18C:
	// bl 0x83198688
	ctx.lr = 0x82F2B190;
	sub_83198688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// beq cr6,0x82f2b1b4
	if (cr6.eq) goto loc_82F2B1B4;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B1B0;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B1B4:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x82f2b1cc
	if (!cr6.eq) goto loc_82F2B1CC;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B1C8;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B1CC:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x82f2b1e4
	if (!cr6.eq) goto loc_82F2B1E4;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B1E0;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B1E4:
	// addi r4,r11,-23964
	ctx.r4.s64 = ctx.r11.s64 + -23964;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B1EC;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b208
	goto loc_82F2B208;
loc_82F2B1F0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// bl 0x8259cc28
	ctx.lr = 0x82F2B208;
	sub_8259CC28(ctx, base);
loc_82F2B208:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2B214;
	sub_82E88020(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2b234
	if (cr6.lt) goto loc_82F2B234;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2B234;
	sub_825952B8(ctx, base);
loc_82F2B234:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B240"))) PPC_WEAK_FUNC(sub_82F2B240);
PPC_FUNC_IMPL(__imp__sub_82F2B240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23608
	ctx.r9.s64 = ctx.r11.s64 + -23608;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2B278;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2b290
	if (cr6.eq) goto loc_82F2B290;
	// bl 0x82416268
	ctx.lr = 0x82F2B28C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2B290:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B2A8"))) PPC_WEAK_FUNC(sub_82F2B2A8);
PPC_FUNC_IMPL(__imp__sub_82F2B2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2B2D8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2b30c
	if (cr6.eq) goto loc_82F2B30C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2B2EC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23608
	ctx.r9.s64 = ctx.r11.s64 + -23608;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2b310
	goto loc_82F2B310;
loc_82F2B30C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2B310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B328"))) PPC_WEAK_FUNC(sub_82F2B328);
PPC_FUNC_IMPL(__imp__sub_82F2B328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2b338
	if (cr6.lt) goto loc_82F2B338;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2B338:
	// b 0x82f2b2a8
	sub_82F2B2A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B33C"))) PPC_WEAK_FUNC(sub_82F2B33C);
PPC_FUNC_IMPL(__imp__sub_82F2B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B340"))) PPC_WEAK_FUNC(sub_82F2B340);
PPC_FUNC_IMPL(__imp__sub_82F2B340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x8306ab18
	ctx.lr = 0x82F2B36C;
	sub_8306AB18(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82f2b390
	if (!cr6.eq) goto loc_82F2B390;
	// addi r11,r11,-23708
	ctx.r11.s64 = ctx.r11.s64 + -23708;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x82f2b398
	goto loc_82F2B398;
loc_82F2B390:
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,-23708
	ctx.r4.s64 = ctx.r11.s64 + -23708;
loc_82F2B398:
	// bl 0x8259cc28
	ctx.lr = 0x82F2B39C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2B3A8;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2b3c8
	if (cr6.lt) goto loc_82F2B3C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2B3C8;
	sub_825952B8(ctx, base);
loc_82F2B3C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B3E0"))) PPC_WEAK_FUNC(sub_82F2B3E0);
PPC_FUNC_IMPL(__imp__sub_82F2B3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23360
	ctx.r9.s64 = ctx.r11.s64 + -23360;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2B418;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2b430
	if (cr6.eq) goto loc_82F2B430;
	// bl 0x82416268
	ctx.lr = 0x82F2B42C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2B430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B448"))) PPC_WEAK_FUNC(sub_82F2B448);
PPC_FUNC_IMPL(__imp__sub_82F2B448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2B478;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2b4ac
	if (cr6.eq) goto loc_82F2B4AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2B48C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23360
	ctx.r9.s64 = ctx.r11.s64 + -23360;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2b4b0
	goto loc_82F2B4B0;
loc_82F2B4AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2B4B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B4C8"))) PPC_WEAK_FUNC(sub_82F2B4C8);
PPC_FUNC_IMPL(__imp__sub_82F2B4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2b4d8
	if (cr6.lt) goto loc_82F2B4D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2B4D8:
	// b 0x82f2b448
	sub_82F2B448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B4DC"))) PPC_WEAK_FUNC(sub_82F2B4DC);
PPC_FUNC_IMPL(__imp__sub_82F2B4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B4E0"))) PPC_WEAK_FUNC(sub_82F2B4E0);
PPC_FUNC_IMPL(__imp__sub_82F2B4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F2B50C;
	sub_831156E8(ctx, base);
	// lis r9,221
	ctx.r9.s64 = 14483456;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ori r7,r9,1604
	ctx.r7.u64 = ctx.r9.u64 | 1604;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f2b53c
	if (cr6.eq) goto loc_82F2B53C;
	// addi r11,r11,-23448
	ctx.r11.s64 = ctx.r11.s64 + -23448;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// b 0x82f2b544
	goto loc_82F2B544;
loc_82F2B53C:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-23448
	ctx.r4.s64 = ctx.r11.s64 + -23448;
loc_82F2B544:
	// bl 0x8259cc28
	ctx.lr = 0x82F2B548;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2B554;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2b574
	if (cr6.lt) goto loc_82F2B574;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2B574;
	sub_825952B8(ctx, base);
loc_82F2B574:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B58C"))) PPC_WEAK_FUNC(sub_82F2B58C);
PPC_FUNC_IMPL(__imp__sub_82F2B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B590"))) PPC_WEAK_FUNC(sub_82F2B590);
PPC_FUNC_IMPL(__imp__sub_82F2B590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23112
	ctx.r9.s64 = ctx.r11.s64 + -23112;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2B5C8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2b5e0
	if (cr6.eq) goto loc_82F2B5E0;
	// bl 0x82416268
	ctx.lr = 0x82F2B5DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2B5E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B5F8"))) PPC_WEAK_FUNC(sub_82F2B5F8);
PPC_FUNC_IMPL(__imp__sub_82F2B5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2B628;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2b65c
	if (cr6.eq) goto loc_82F2B65C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2B63C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23112
	ctx.r9.s64 = ctx.r11.s64 + -23112;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2b660
	goto loc_82F2B660;
loc_82F2B65C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2B660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B678"))) PPC_WEAK_FUNC(sub_82F2B678);
PPC_FUNC_IMPL(__imp__sub_82F2B678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2b688
	if (cr6.lt) goto loc_82F2B688;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2B688:
	// b 0x82f2b5f8
	sub_82F2B5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B68C"))) PPC_WEAK_FUNC(sub_82F2B68C);
PPC_FUNC_IMPL(__imp__sub_82F2B68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B690"))) PPC_WEAK_FUNC(sub_82F2B690);
PPC_FUNC_IMPL(__imp__sub_82F2B690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F2B6A8;
	sub_831156E8(ctx, base);
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,1604
	ctx.r8.u64 = ctx.r10.u64 | 1604;
	// li r7,15
	ctx.r7.s64 = 15;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r6,-23204
	ctx.r4.s64 = ctx.r6.s64 + -23204;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82F2B6E0;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2B6EC;
	sub_82E88020(ctx, base);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82f2b70c
	if (cr6.lt) goto loc_82F2B70C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2B70C;
	sub_825952B8(ctx, base);
loc_82F2B70C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B724"))) PPC_WEAK_FUNC(sub_82F2B724);
PPC_FUNC_IMPL(__imp__sub_82F2B724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B728"))) PPC_WEAK_FUNC(sub_82F2B728);
PPC_FUNC_IMPL(__imp__sub_82F2B728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22832
	ctx.r9.s64 = ctx.r11.s64 + -22832;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2B760;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2b778
	if (cr6.eq) goto loc_82F2B778;
	// bl 0x82416268
	ctx.lr = 0x82F2B774;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2B778:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B790"))) PPC_WEAK_FUNC(sub_82F2B790);
PPC_FUNC_IMPL(__imp__sub_82F2B790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2B7C0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2b7f4
	if (cr6.eq) goto loc_82F2B7F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2B7D4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22832
	ctx.r9.s64 = ctx.r11.s64 + -22832;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2b7f8
	goto loc_82F2B7F8;
loc_82F2B7F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2B7F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B810"))) PPC_WEAK_FUNC(sub_82F2B810);
PPC_FUNC_IMPL(__imp__sub_82F2B810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2b820
	if (cr6.lt) goto loc_82F2B820;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2B820:
	// b 0x82f2b790
	sub_82F2B790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B824"))) PPC_WEAK_FUNC(sub_82F2B824);
PPC_FUNC_IMPL(__imp__sub_82F2B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2B828"))) PPC_WEAK_FUNC(sub_82F2B828);
PPC_FUNC_IMPL(__imp__sub_82F2B828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F2B830;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F2B850;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2b8dc
	if (cr6.eq) goto loc_82F2B8DC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-22928
	ctx.r11.s64 = ctx.r11.s64 + -22928;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x82F2B87C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2B888;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f2b8a8
	if (cr6.lt) goto loc_82F2B8A8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82F2B8A8;
	sub_825952B8(ctx, base);
loc_82F2B8A8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// blt cr6,0x82f2ba04
	if (cr6.lt) goto loc_82F2BA04;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82F2B8D0;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F2B8DC:
	// bl 0x830ff290
	ctx.lr = 0x82F2B8E0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2B8E4;
	sub_830FFAA8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82F2B8E8;
	sub_831156E8(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r29,r11,-22928
	ctx.r29.s64 = ctx.r11.s64 + -22928;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r5,r29,-32
	ctx.r5.s64 = ctx.r29.s64 + -32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831178a0
	ctx.lr = 0x82F2B910;
	sub_831178A0(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8316fb10
	ctx.lr = 0x82F2B920;
	sub_8316FB10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F2B92C;
	sub_8311C338(ctx, base);
	// lhz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 84);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x82f2b954
	if (!cr6.eq) goto loc_82F2B954;
	// lhz r11,86(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 86);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82f2b954
	if (!cr6.eq) goto loc_82F2B954;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B950;
	sub_8259D6C0(ctx, base);
	// b 0x82f2b964
	goto loc_82F2B964;
loc_82F2B954:
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82F2B964;
	sub_8259CC28(ctx, base);
loc_82F2B964:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,52844
	ctx.r10.u64 = ctx.r11.u64 | 52844;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2b9d8
	if (cr6.eq) goto loc_82F2B9D8;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r10,r11,57080
	ctx.r10.u64 = ctx.r11.u64 | 57080;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x8316fb10
	ctx.lr = 0x82F2B998;
	sub_8316FB10(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F2B9A8;
	sub_8311C338(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x8316f790
	ctx.lr = 0x82F2B9C0;
	sub_8316F790(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82f2b9d8
	if (!cr6.eq) goto loc_82F2B9D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2B9D8;
	sub_8259D6C0(ctx, base);
loc_82F2B9D8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2B9E4;
	sub_82E88020(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2ba04
	if (cr6.lt) goto loc_82F2BA04;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2BA04;
	sub_825952B8(ctx, base);
loc_82F2BA04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BA10"))) PPC_WEAK_FUNC(sub_82F2BA10);
PPC_FUNC_IMPL(__imp__sub_82F2BA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830ff290
	ctx.lr = 0x82F2BA20;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82f2ba50
	if (cr6.eq) goto loc_82F2BA50;
	// bl 0x830ff290
	ctx.lr = 0x82F2BA30;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// beq cr6,0x82f2ba50
	if (cr6.eq) goto loc_82F2BA50;
loc_82F2BA3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82F2BA50:
	// bl 0x831156e8
	ctx.lr = 0x82F2BA54;
	sub_831156E8(ctx, base);
	// lis r11,194
	ctx.r11.s64 = 12713984;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52144
	ctx.r10.u64 = ctx.r11.u64 | 52144;
	// lhzx r9,r4,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,46
	cr6.compare<uint32_t>(ctx.r9.u32, 46, xer);
	// bne cr6,0x82f2ba3c
	if (!cr6.eq) goto loc_82F2BA3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r9,-22680
	ctx.r5.s64 = ctx.r9.s64 + -22680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x82F2BA90;
	sub_831178A0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x83156c10
	ctx.lr = 0x82F2BAA0;
	sub_83156C10(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BABC"))) PPC_WEAK_FUNC(sub_82F2BABC);
PPC_FUNC_IMPL(__imp__sub_82F2BABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2BAC0"))) PPC_WEAK_FUNC(sub_82F2BAC0);
PPC_FUNC_IMPL(__imp__sub_82F2BAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F2BAC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F2BAEC;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,46752
	ctx.r10.u64 = ctx.r11.u64 | 46752;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2bb44
	if (cr6.eq) goto loc_82F2BB44;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-22384
	ctx.r11.s64 = ctx.r11.s64 + -22384;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x837b0c10
	ctx.lr = 0x82F2BB18;
	sub_837B0C10(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f2c00c
	if (cr6.lt) goto loc_82F2C00C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2BB38;
	sub_825952B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F2BB44:
	// bl 0x830ff290
	ctx.lr = 0x82F2BB48;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2BB4C;
	sub_830FFAA8(ctx, base);
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2bb90
	if (!cr6.eq) goto loc_82F2BB90;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82f2bb68
	if (cr6.eq) goto loc_82F2BB68;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f2bb90
	if (!cr6.eq) goto loc_82F2BB90;
loc_82F2BB68:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-22384
	ctx.r11.s64 = ctx.r11.s64 + -22384;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x837b0c10
	ctx.lr = 0x82F2BB7C;
	sub_837B0C10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2BB84;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F2BB90:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f2bbd0
	if (!cr6.eq) goto loc_82F2BBD0;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82f2bbd0
	if (cr6.eq) goto loc_82F2BBD0;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82f2bbd0
	if (cr6.eq) goto loc_82F2BBD0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-22384
	ctx.r11.s64 = ctx.r11.s64 + -22384;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x837b0c10
	ctx.lr = 0x82F2BBBC;
	sub_837B0C10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2BBC4;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F2BBD0:
	// bl 0x830ff290
	ctx.lr = 0x82F2BBD4;
	sub_830FF290(ctx, base);
	// bl 0x82f00728
	ctx.lr = 0x82F2BBD8;
	sub_82F00728(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f2ba10
	ctx.lr = 0x82F2BBE4;
	sub_82F2BA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2bc00
	if (cr6.eq) goto loc_82F2BC00;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-22384
	ctx.r11.s64 = ctx.r11.s64 + -22384;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// b 0x82f2bfdc
	goto loc_82F2BFDC;
loc_82F2BC00:
	// bl 0x83152420
	ctx.lr = 0x82F2BC04;
	sub_83152420(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2bc20
	if (!cr6.eq) goto loc_82F2BC20;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-22384
	ctx.r11.s64 = ctx.r11.s64 + -22384;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// b 0x82f2bfdc
	goto loc_82F2BFDC;
loc_82F2BC20:
	// addis r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82F2BC2C;
	sub_83126788(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x82f2bc44
	if (!cr6.eq) goto loc_82F2BC44;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-22384
	ctx.r11.s64 = ctx.r11.s64 + -22384;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// b 0x82f2bfdc
	goto loc_82F2BFDC;
loc_82F2BC44:
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82F2BC50;
	sub_8311C3D8(ctx, base);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bne cr6,0x82f2bc6c
	if (!cr6.eq) goto loc_82F2BC6C;
	// li r11,48
	ctx.r11.s64 = 48;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_82F2BC6C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e340
	ctx.lr = 0x82F2BC74;
	sub_8314E340(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// bgt cr6,0x82f2be38
	if (cr6.gt) goto loc_82F2BE38;
	// beq cr6,0x82f2bdf0
	if (cr6.eq) goto loc_82F2BDF0;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x82f2bfd4
	if (cr6.gt) goto loc_82F2BFD4;
	// lis r12,-32013
	ctx.r12.s64 = -2098003968;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17240
	ctx.r12.s64 = ctx.r12.s64 + -17240;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82F2BCE0;
	case 1:
		goto loc_82F2BCF8;
	case 2:
		goto loc_82F2BD38;
	case 3:
		goto loc_82F2BD50;
	case 4:
		goto loc_82F2BDE8;
	case 5:
		goto loc_82F2BFD4;
	case 6:
		goto loc_82F2BFD4;
	case 7:
		goto loc_82F2BFD4;
	case 8:
		goto loc_82F2BFD4;
	case 9:
		goto loc_82F2BFD4;
	case 10:
		goto loc_82F2BFD4;
	case 11:
		goto loc_82F2BFD4;
	case 12:
		goto loc_82F2BD90;
	case 13:
		goto loc_82F2BDA8;
	default:
		return;
	}
	// lwz r23,-17184(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17184);
	// lwz r23,-17160(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17160);
	// lwz r23,-17096(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17096);
	// lwz r23,-17072(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17072);
	// lwz r23,-16920(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16920);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-17008(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17008);
	// lwz r23,-16984(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16984);
loc_82F2BCE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BCF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x82f2bd1c
	if (!cr6.eq) goto loc_82F2BD1C;
	// rlwinm r9,r11,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x82f2bd1c
	if (cr6.eq) goto loc_82F2BD1C;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BD1C:
	// cmplwi cr6,r10,53
	cr6.compare<uint32_t>(ctx.r10.u32, 53, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82f2bfd4
	if (cr6.eq) goto loc_82F2BFD4;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BD38:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BD50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x82f2bd74
	if (!cr6.eq) goto loc_82F2BD74;
	// rlwinm r9,r11,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x82f2bd74
	if (cr6.eq) goto loc_82F2BD74;
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BD74:
	// cmplwi cr6,r10,53
	cr6.compare<uint32_t>(ctx.r10.u32, 53, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82f2bfd4
	if (cr6.eq) goto loc_82F2BFD4;
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BD90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// li r31,11
	ctx.r31.s64 = 11;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BDA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x82f2bdcc
	if (!cr6.eq) goto loc_82F2BDCC;
	// rlwinm r9,r11,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x82f2bdcc
	if (cr6.eq) goto loc_82F2BDCC;
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BDCC:
	// cmplwi cr6,r10,53
	cr6.compare<uint32_t>(ctx.r10.u32, 53, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82f2bfd4
	if (cr6.eq) goto loc_82F2BFD4;
	// li r31,13
	ctx.r31.s64 = 13;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BDE8:
	// li r31,14
	ctx.r31.s64 = 14;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BDF0:
	// bl 0x830ff290
	ctx.lr = 0x82F2BDF4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2BDF8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82f2be20
	if (cr6.eq) goto loc_82F2BE20;
	// bl 0x830ff290
	ctx.lr = 0x82F2BE04;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2BE08;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82f2be20
	if (cr6.eq) goto loc_82F2BE20;
	// bl 0x830ff290
	ctx.lr = 0x82F2BE14;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2BE18;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
loc_82F2BE20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// li r31,17
	ctx.r31.s64 = 17;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BE38:
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x82f2bfd4
	if (cr6.gt) goto loc_82F2BFD4;
	// lis r12,-32013
	ctx.r12.s64 = -2098003968;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16804
	ctx.r12.s64 = ctx.r12.s64 + -16804;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82F2BE9C;
	case 1:
		goto loc_82F2BED4;
	case 2:
		goto loc_82F2BFD4;
	case 3:
		goto loc_82F2BF0C;
	case 4:
		goto loc_82F2BF44;
	case 5:
		goto loc_82F2BFD4;
	case 6:
		goto loc_82F2BFD4;
	case 7:
		goto loc_82F2BFD4;
	case 8:
		goto loc_82F2BFD4;
	case 9:
		goto loc_82F2BFD4;
	case 10:
		goto loc_82F2BFD4;
	case 11:
		goto loc_82F2BFD4;
	case 12:
		goto loc_82F2BFD4;
	case 13:
		goto loc_82F2BFD4;
	case 14:
		goto loc_82F2BFD4;
	case 15:
		goto loc_82F2BF7C;
	default:
		return;
	}
	// lwz r23,-16740(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16740);
	// lwz r23,-16684(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16684);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16628(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16628);
	// lwz r23,-16572(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16572);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16428(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16428);
	// lwz r23,-16516(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16516);
loc_82F2BE9C:
	// bl 0x830ff290
	ctx.lr = 0x82F2BEA0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82f2bebc
	if (cr6.eq) goto loc_82F2BEBC;
	// bl 0x830ff290
	ctx.lr = 0x82F2BEB0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
loc_82F2BEBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// li r31,22
	ctx.r31.s64 = 22;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BED4:
	// bl 0x830ff290
	ctx.lr = 0x82F2BED8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82f2bef4
	if (cr6.eq) goto loc_82F2BEF4;
	// bl 0x830ff290
	ctx.lr = 0x82F2BEE8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
loc_82F2BEF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// li r31,23
	ctx.r31.s64 = 23;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BF0C:
	// bl 0x830ff290
	ctx.lr = 0x82F2BF10;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82f2bf2c
	if (cr6.eq) goto loc_82F2BF2C;
	// bl 0x830ff290
	ctx.lr = 0x82F2BF20;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
loc_82F2BF2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// li r31,24
	ctx.r31.s64 = 24;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BF44:
	// bl 0x830ff290
	ctx.lr = 0x82F2BF48;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82f2bf64
	if (cr6.eq) goto loc_82F2BF64;
	// bl 0x830ff290
	ctx.lr = 0x82F2BF58;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
loc_82F2BF64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,736
	cr6.compare<uint32_t>(ctx.r10.u32, 736, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// li r31,24
	ctx.r31.s64 = 24;
	// b 0x82f2bfb0
	goto loc_82F2BFB0;
loc_82F2BF7C:
	// bl 0x830ff290
	ctx.lr = 0x82F2BF80;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82f2bf9c
	if (cr6.eq) goto loc_82F2BF9C;
	// bl 0x830ff290
	ctx.lr = 0x82F2BF90;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
loc_82F2BF9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,736
	cr6.compare<uint32_t>(ctx.r10.u32, 736, xer);
	// bne cr6,0x82f2bfd4
	if (!cr6.eq) goto loc_82F2BFD4;
	// li r31,25
	ctx.r31.s64 = 25;
loc_82F2BFB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82F2BFB8;
	sub_82D17AA0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// ori r9,r11,19004
	ctx.r9.u64 = ctx.r11.u64 | 19004;
	// addi r11,r10,-22384
	ctx.r11.s64 = ctx.r10.s64 + -22384;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// stwx r31,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r31.u32);
	// b 0x82f2bfdc
	goto loc_82F2BFDC;
loc_82F2BFD4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-22384
	ctx.r4.s64 = ctx.r11.s64 + -22384;
loc_82F2BFDC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2BFE4;
	sub_8259D6C0(ctx, base);
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r27,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r27.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82F2C004;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2C00C;
	sub_8387E8E0(ctx, base);
loc_82F2C00C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C018"))) PPC_WEAK_FUNC(sub_82F2C018);
PPC_FUNC_IMPL(__imp__sub_82F2C018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F2C020;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2C030;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22288
	ctx.r9.s64 = ctx.r11.s64 + -22288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lbz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stb r7,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r7.u8);
	// bl 0x82f2bac0
	ctx.lr = 0x82F2C070;
	sub_82F2BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82F2C084;
	sub_8259CB28(ctx, base);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82f2c0a4
	if (cr6.lt) goto loc_82F2C0A4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82F2C0A4;
	sub_825952B8(ctx, base);
loc_82F2C0A4:
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r30,r11,-22452
	ctx.r30.s64 = ctx.r11.s64 + -22452;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82F2C0D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f2c100
	if (cr6.eq) goto loc_82F2C100;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82F2C0F0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f2c100
	if (cr6.eq) goto loc_82F2C100;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
loc_82F2C100:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c11c
	if (cr6.lt) goto loc_82F2C11C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F2C11C;
	sub_825952B8(ctx, base);
loc_82F2C11C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C128"))) PPC_WEAK_FUNC(sub_82F2C128);
PPC_FUNC_IMPL(__imp__sub_82F2C128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22288
	ctx.r9.s64 = ctx.r11.s64 + -22288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2C160;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2c178
	if (cr6.eq) goto loc_82F2C178;
	// bl 0x82416268
	ctx.lr = 0x82F2C174;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2C178:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C190"))) PPC_WEAK_FUNC(sub_82F2C190);
PPC_FUNC_IMPL(__imp__sub_82F2C190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F2C198;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f2bac0
	ctx.lr = 0x82F2C1C0;
	sub_82F2BAC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82F2C1D4;
	sub_8259CB28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c1f4
	if (cr6.lt) goto loc_82F2C1F4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82F2C1F4;
	sub_825952B8(ctx, base);
loc_82F2C1F4:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82e88020
	ctx.lr = 0x82F2C20C;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c228
	if (cr6.lt) goto loc_82F2C228;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F2C228;
	sub_825952B8(ctx, base);
loc_82F2C228:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C234"))) PPC_WEAK_FUNC(sub_82F2C234);
PPC_FUNC_IMPL(__imp__sub_82F2C234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C238"))) PPC_WEAK_FUNC(sub_82F2C238);
PPC_FUNC_IMPL(__imp__sub_82F2C238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c264
	if (cr6.lt) goto loc_82F2C264;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f2c268
	goto loc_82F2C268;
loc_82F2C264:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F2C268:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82F2C280;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2c29c
	if (cr6.eq) goto loc_82F2C29C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f2c018
	ctx.lr = 0x82F2C294;
	sub_82F2C018(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f2c2a0
	if (!cr6.eq) goto loc_82F2C2A0;
loc_82F2C29C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2C2A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C2B4"))) PPC_WEAK_FUNC(sub_82F2C2B4);
PPC_FUNC_IMPL(__imp__sub_82F2C2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C2B8"))) PPC_WEAK_FUNC(sub_82F2C2B8);
PPC_FUNC_IMPL(__imp__sub_82F2C2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c2e4
	if (cr6.lt) goto loc_82F2C2E4;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f2c2e8
	goto loc_82F2C2E8;
loc_82F2C2E4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F2C2E8:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82F2C300;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2c31c
	if (cr6.eq) goto loc_82F2C31C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f2c018
	ctx.lr = 0x82F2C314;
	sub_82F2C018(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f2c320
	if (!cr6.eq) goto loc_82F2C320;
loc_82F2C31C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2C320:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C334"))) PPC_WEAK_FUNC(sub_82F2C334);
PPC_FUNC_IMPL(__imp__sub_82F2C334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C338"))) PPC_WEAK_FUNC(sub_82F2C338);
PPC_FUNC_IMPL(__imp__sub_82F2C338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22000
	ctx.r9.s64 = ctx.r11.s64 + -22000;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2C370;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2c388
	if (cr6.eq) goto loc_82F2C388;
	// bl 0x82416268
	ctx.lr = 0x82F2C384;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2C388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C3A0"))) PPC_WEAK_FUNC(sub_82F2C3A0);
PPC_FUNC_IMPL(__imp__sub_82F2C3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2C3D0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2c404
	if (cr6.eq) goto loc_82F2C404;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2C3E4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22000
	ctx.r9.s64 = ctx.r11.s64 + -22000;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2c408
	goto loc_82F2C408;
loc_82F2C404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2C408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C420"))) PPC_WEAK_FUNC(sub_82F2C420);
PPC_FUNC_IMPL(__imp__sub_82F2C420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c430
	if (cr6.lt) goto loc_82F2C430;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2C430:
	// b 0x82f2c3a0
	sub_82F2C3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C434"))) PPC_WEAK_FUNC(sub_82F2C434);
PPC_FUNC_IMPL(__imp__sub_82F2C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C438"))) PPC_WEAK_FUNC(sub_82F2C438);
PPC_FUNC_IMPL(__imp__sub_82F2C438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x82F2C468;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2C46C;
	sub_830FFAA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F2C474;
	sub_831156E8(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f2c4f8
	if (cr6.gt) goto loc_82F2C4F8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f2c4f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C4F8;
	// bdzf 4*cr6+eq,0x82f2c4f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C4F8;
	// bdzf 4*cr6+eq,0x82f2c4b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C4B4;
	// bdzf 4*cr6+eq,0x82f2c4cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C4CC;
	// bne cr6,0x82f2c4e4
	if (!cr6.eq) goto loc_82F2C4E4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-22096
	ctx.r11.s64 = ctx.r11.s64 + -22096;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C4B0;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c510
	goto loc_82F2C510;
loc_82F2C4B4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-22096
	ctx.r11.s64 = ctx.r11.s64 + -22096;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C4C8;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c510
	goto loc_82F2C510;
loc_82F2C4CC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-22096
	ctx.r11.s64 = ctx.r11.s64 + -22096;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C4E0;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c510
	goto loc_82F2C510;
loc_82F2C4E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22096
	ctx.r4.s64 = ctx.r11.s64 + -22096;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C4F4;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c510
	goto loc_82F2C510;
loc_82F2C4F8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r11,r11,-22096
	ctx.r11.s64 = ctx.r11.s64 + -22096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8259cc28
	ctx.lr = 0x82F2C510;
	sub_8259CC28(ctx, base);
loc_82F2C510:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2C51C;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c53c
	if (cr6.lt) goto loc_82F2C53C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2C53C;
	sub_825952B8(ctx, base);
loc_82F2C53C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C558"))) PPC_WEAK_FUNC(sub_82F2C558);
PPC_FUNC_IMPL(__imp__sub_82F2C558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21704
	ctx.r9.s64 = ctx.r11.s64 + -21704;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2C590;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2c5a8
	if (cr6.eq) goto loc_82F2C5A8;
	// bl 0x82416268
	ctx.lr = 0x82F2C5A4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2C5A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C5C0"))) PPC_WEAK_FUNC(sub_82F2C5C0);
PPC_FUNC_IMPL(__imp__sub_82F2C5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2C5F0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2c624
	if (cr6.eq) goto loc_82F2C624;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2C604;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21704
	ctx.r9.s64 = ctx.r11.s64 + -21704;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2c628
	goto loc_82F2C628;
loc_82F2C624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2C628:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C640"))) PPC_WEAK_FUNC(sub_82F2C640);
PPC_FUNC_IMPL(__imp__sub_82F2C640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c650
	if (cr6.lt) goto loc_82F2C650;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2C650:
	// b 0x82f2c5c0
	sub_82F2C5C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C654"))) PPC_WEAK_FUNC(sub_82F2C654);
PPC_FUNC_IMPL(__imp__sub_82F2C654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C658"))) PPC_WEAK_FUNC(sub_82F2C658);
PPC_FUNC_IMPL(__imp__sub_82F2C658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x82F2C688;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2C68C;
	sub_830FFAA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F2C694;
	sub_831156E8(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f2c718
	if (cr6.gt) goto loc_82F2C718;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f2c718
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C718;
	// bdzf 4*cr6+eq,0x82f2c718
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C718;
	// bdzf 4*cr6+eq,0x82f2c6d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C6D4;
	// bdzf 4*cr6+eq,0x82f2c6ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C6EC;
	// bne cr6,0x82f2c704
	if (!cr6.eq) goto loc_82F2C704;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21800
	ctx.r11.s64 = ctx.r11.s64 + -21800;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C6D0;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c730
	goto loc_82F2C730;
loc_82F2C6D4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21800
	ctx.r11.s64 = ctx.r11.s64 + -21800;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C6E8;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c730
	goto loc_82F2C730;
loc_82F2C6EC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21800
	ctx.r11.s64 = ctx.r11.s64 + -21800;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C700;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c730
	goto loc_82F2C730;
loc_82F2C704:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21800
	ctx.r4.s64 = ctx.r11.s64 + -21800;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C714;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c730
	goto loc_82F2C730;
loc_82F2C718:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r11,r11,-21800
	ctx.r11.s64 = ctx.r11.s64 + -21800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x8259cc28
	ctx.lr = 0x82F2C730;
	sub_8259CC28(ctx, base);
loc_82F2C730:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2C73C;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c75c
	if (cr6.lt) goto loc_82F2C75C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2C75C;
	sub_825952B8(ctx, base);
loc_82F2C75C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C778"))) PPC_WEAK_FUNC(sub_82F2C778);
PPC_FUNC_IMPL(__imp__sub_82F2C778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21408
	ctx.r9.s64 = ctx.r11.s64 + -21408;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2C7B0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2c7c8
	if (cr6.eq) goto loc_82F2C7C8;
	// bl 0x82416268
	ctx.lr = 0x82F2C7C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2C7C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C7E0"))) PPC_WEAK_FUNC(sub_82F2C7E0);
PPC_FUNC_IMPL(__imp__sub_82F2C7E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2C810;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2c844
	if (cr6.eq) goto loc_82F2C844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2C824;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21408
	ctx.r9.s64 = ctx.r11.s64 + -21408;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2c848
	goto loc_82F2C848;
loc_82F2C844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2C848:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C860"))) PPC_WEAK_FUNC(sub_82F2C860);
PPC_FUNC_IMPL(__imp__sub_82F2C860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c870
	if (cr6.lt) goto loc_82F2C870;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2C870:
	// b 0x82f2c7e0
	sub_82F2C7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C874"))) PPC_WEAK_FUNC(sub_82F2C874);
PPC_FUNC_IMPL(__imp__sub_82F2C874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C878"))) PPC_WEAK_FUNC(sub_82F2C878);
PPC_FUNC_IMPL(__imp__sub_82F2C878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F2C8A8;
	sub_831156E8(ctx, base);
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r8,r10,1608
	ctx.r8.u64 = ctx.r10.u64 | 1608;
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
	// bl 0x830ff290
	ctx.lr = 0x82F2C8BC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2C8C0;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f2c944
	if (cr6.gt) goto loc_82F2C944;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f2c944
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C944;
	// bdzf 4*cr6+eq,0x82f2c944
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C944;
	// bdzf 4*cr6+eq,0x82f2c900
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C900;
	// bdzf 4*cr6+eq,0x82f2c918
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2C918;
	// bne cr6,0x82f2c930
	if (!cr6.eq) goto loc_82F2C930;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21500
	ctx.r11.s64 = ctx.r11.s64 + -21500;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C8FC;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c95c
	goto loc_82F2C95C;
loc_82F2C900:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21500
	ctx.r11.s64 = ctx.r11.s64 + -21500;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C914;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c95c
	goto loc_82F2C95C;
loc_82F2C918:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21500
	ctx.r11.s64 = ctx.r11.s64 + -21500;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C92C;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c95c
	goto loc_82F2C95C;
loc_82F2C930:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21500
	ctx.r4.s64 = ctx.r11.s64 + -21500;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2C940;
	sub_8259D6C0(ctx, base);
	// b 0x82f2c95c
	goto loc_82F2C95C;
loc_82F2C944:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r11,r11,-21500
	ctx.r11.s64 = ctx.r11.s64 + -21500;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x8259cc28
	ctx.lr = 0x82F2C95C;
	sub_8259CC28(ctx, base);
loc_82F2C95C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2C968;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2c988
	if (cr6.lt) goto loc_82F2C988;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2C988;
	sub_825952B8(ctx, base);
loc_82F2C988:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C9A4"))) PPC_WEAK_FUNC(sub_82F2C9A4);
PPC_FUNC_IMPL(__imp__sub_82F2C9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C9A8"))) PPC_WEAK_FUNC(sub_82F2C9A8);
PPC_FUNC_IMPL(__imp__sub_82F2C9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21096
	ctx.r9.s64 = ctx.r11.s64 + -21096;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2C9E0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2c9f8
	if (cr6.eq) goto loc_82F2C9F8;
	// bl 0x82416268
	ctx.lr = 0x82F2C9F4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2C9F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CA10"))) PPC_WEAK_FUNC(sub_82F2CA10);
PPC_FUNC_IMPL(__imp__sub_82F2CA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2CA40;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2ca74
	if (cr6.eq) goto loc_82F2CA74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2CA54;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-21096
	ctx.r9.s64 = ctx.r11.s64 + -21096;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f2ca78
	goto loc_82F2CA78;
loc_82F2CA74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2CA78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CA90"))) PPC_WEAK_FUNC(sub_82F2CA90);
PPC_FUNC_IMPL(__imp__sub_82F2CA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2caa0
	if (cr6.lt) goto loc_82F2CAA0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2CAA0:
	// b 0x82f2ca10
	sub_82F2CA10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CAA4"))) PPC_WEAK_FUNC(sub_82F2CAA4);
PPC_FUNC_IMPL(__imp__sub_82F2CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CAA8"))) PPC_WEAK_FUNC(sub_82F2CAA8);
PPC_FUNC_IMPL(__imp__sub_82F2CAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F2CAB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x830ff290
	ctx.lr = 0x82F2CAD0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2CAD4;
	sub_830FFAA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F2CADC;
	sub_831156E8(ctx, base);
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// ori r8,r10,46604
	ctx.r8.u64 = ctx.r10.u64 | 46604;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// stbx r31,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u8);
	// bgt cr6,0x82f2cb70
	if (cr6.gt) goto loc_82F2CB70;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f2cb70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2CB70;
	// bdzf 4*cr6+eq,0x82f2cb70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2CB70;
	// bdzf 4*cr6+eq,0x82f2cb2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2CB2C;
	// bdzf 4*cr6+eq,0x82f2cb44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2CB44;
	// bne cr6,0x82f2cb5c
	if (!cr6.eq) goto loc_82F2CB5C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21192
	ctx.r11.s64 = ctx.r11.s64 + -21192;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2CB28;
	sub_8259D6C0(ctx, base);
	// b 0x82f2cb88
	goto loc_82F2CB88;
loc_82F2CB2C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21192
	ctx.r11.s64 = ctx.r11.s64 + -21192;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2CB40;
	sub_8259D6C0(ctx, base);
	// b 0x82f2cb88
	goto loc_82F2CB88;
loc_82F2CB44:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-21192
	ctx.r11.s64 = ctx.r11.s64 + -21192;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2CB58;
	sub_8259D6C0(ctx, base);
	// b 0x82f2cb88
	goto loc_82F2CB88;
loc_82F2CB5C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21192
	ctx.r4.s64 = ctx.r11.s64 + -21192;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2CB6C;
	sub_8259D6C0(ctx, base);
	// b 0x82f2cb88
	goto loc_82F2CB88;
loc_82F2CB70:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r11,r11,-21192
	ctx.r11.s64 = ctx.r11.s64 + -21192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x8259cc28
	ctx.lr = 0x82F2CB88;
	sub_8259CC28(ctx, base);
loc_82F2CB88:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2CB94;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2cbb4
	if (cr6.lt) goto loc_82F2CBB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2CBB4;
	sub_825952B8(ctx, base);
loc_82F2CBB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CBC0"))) PPC_WEAK_FUNC(sub_82F2CBC0);
PPC_FUNC_IMPL(__imp__sub_82F2CBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20576
	ctx.r9.s64 = ctx.r11.s64 + -20576;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2CBF8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2cc10
	if (cr6.eq) goto loc_82F2CC10;
	// bl 0x82416268
	ctx.lr = 0x82F2CC0C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2CC10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CC28"))) PPC_WEAK_FUNC(sub_82F2CC28);
PPC_FUNC_IMPL(__imp__sub_82F2CC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2CC58;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2cca0
	if (cr6.eq) goto loc_82F2CCA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2CC6C;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-20576
	ctx.r8.s64 = ctx.r10.s64 + -20576;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// b 0x82f2cca4
	goto loc_82F2CCA4;
loc_82F2CCA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2CCA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CCBC"))) PPC_WEAK_FUNC(sub_82F2CCBC);
PPC_FUNC_IMPL(__imp__sub_82F2CCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CCC0"))) PPC_WEAK_FUNC(sub_82F2CCC0);
PPC_FUNC_IMPL(__imp__sub_82F2CCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-20472
	ctx.r10.s64 = ctx.r11.s64 + -20472;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x82F2CCEC;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2cd0c
	if (cr6.eq) goto loc_82F2CD0C;
	// bl 0x82595188
	ctx.lr = 0x82F2CCFC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82F2CD0C;
	sub_825952B8(ctx, base);
loc_82F2CD0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CD28"))) PPC_WEAK_FUNC(sub_82F2CD28);
PPC_FUNC_IMPL(__imp__sub_82F2CD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f00728
	ctx.lr = 0x82F2CD44;
	sub_82F00728(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2cd60
	if (cr6.eq) goto loc_82F2CD60;
	// bl 0x82f00728
	ctx.lr = 0x82F2CD54;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22972
	ctx.r10.u64 = ctx.r11.u64 | 22972;
	// stbx r30,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r30.u8);
loc_82F2CD60:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2cdc0
	if (cr6.eq) goto loc_82F2CDC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x82F2CD74;
	sub_835242E8(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_82F2CD84:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f2cd84
	if (!cr0.eq) goto loc_82F2CD84;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2cdbc
	if (!cr6.eq) goto loc_82F2CDBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2CDBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2CDBC:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_82F2CDC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CDDC"))) PPC_WEAK_FUNC(sub_82F2CDDC);
PPC_FUNC_IMPL(__imp__sub_82F2CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CDE0"))) PPC_WEAK_FUNC(sub_82F2CDE0);
PPC_FUNC_IMPL(__imp__sub_82F2CDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2cdf0
	if (cr6.lt) goto loc_82F2CDF0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F2CDF0:
	// b 0x82f2cc28
	sub_82F2CC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CDF4"))) PPC_WEAK_FUNC(sub_82F2CDF4);
PPC_FUNC_IMPL(__imp__sub_82F2CDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CDF8"))) PPC_WEAK_FUNC(sub_82F2CDF8);
PPC_FUNC_IMPL(__imp__sub_82F2CDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F2CE00;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bgt cr6,0x82f2d2b4
	if (cr6.gt) goto loc_82F2D2B4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f2d010
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2D010;
	// bdzf 4*cr6+eq,0x82f2d2b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2D2B4;
	// bdzf 4*cr6+eq,0x82f2d064
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2D064;
	// bdzf 4*cr6+eq,0x82f2d0c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2D0C0;
	// bdzf 4*cr6+eq,0x82f2d1d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2D1D8;
	// bne cr6,0x82f2d210
	if (!cr6.eq) goto loc_82F2D210;
	// bl 0x82f00728
	ctx.lr = 0x82F2CE4C;
	sub_82F00728(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2ce68
	if (cr6.eq) goto loc_82F2CE68;
	// bl 0x82f00728
	ctx.lr = 0x82F2CE5C;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22972
	ctx.r10.u64 = ctx.r11.u64 | 22972;
	// stbx r27,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r27.u8);
loc_82F2CE68:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2ce88
	if (cr6.eq) goto loc_82F2CE88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2CE7C;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F2CE88:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82F2CE9C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2cec4
	if (cr6.eq) goto loc_82F2CEC4;
	// bl 0x835242a0
	ctx.lr = 0x82F2CEAC;
	sub_835242A0(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,-20472
	ctx.r9.s64 = ctx.r10.s64 + -20472;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x82f2cec8
	goto loc_82F2CEC8;
loc_82F2CEC4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F2CEC8:
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2cf30
	if (cr6.eq) goto loc_82F2CF30;
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r11,r11,-20668
	ctx.r11.s64 = ctx.r11.s64 + -20668;
	// std r31,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r31.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82F2CF10;
	sub_8259CC28(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x835249e8
	ctx.lr = 0x82F2CF28;
	sub_835249E8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2CF30;
	sub_8387E8E0(ctx, base);
loc_82F2CF30:
	// bl 0x831156e8
	ctx.lr = 0x82F2CF34;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82F2CF3C;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,52845
	ctx.r9.u64 = ctx.r11.u64 | 52845;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2cf70
	if (!cr6.eq) goto loc_82F2CF70;
	// bl 0x831156e8
	ctx.lr = 0x82F2CF58;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r31,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82F2CF70:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r31,r10,52996
	ctx.r31.u64 = ctx.r10.u64 | 52996;
	// beq cr6,0x82f2cfe8
	if (cr6.eq) goto loc_82F2CFE8;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2cfe8
	if (!cr6.eq) goto loc_82F2CFE8;
	// bl 0x82d4de68
	ctx.lr = 0x82F2CFA0;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2cfe8
	if (!cr6.eq) goto loc_82F2CFE8;
	// bl 0x830ff290
	ctx.lr = 0x82F2CFB0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2CFB4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f2cfc4
	if (!cr6.eq) goto loc_82F2CFC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82f2cfdc
	goto loc_82F2CFDC;
loc_82F2CFC4:
	// bl 0x830ff290
	ctx.lr = 0x82F2CFC8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2CFCC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// beq cr6,0x82f2cfdc
	if (cr6.eq) goto loc_82F2CFDC;
	// li r5,3
	ctx.r5.s64 = 3;
loc_82F2CFDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4f040
	ctx.lr = 0x82F2CFE8;
	sub_82D4F040(ctx, base);
loc_82F2CFE8:
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2d008
	if (!cr6.eq) goto loc_82F2D008;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82F2D008;
	sub_82D17AA0(ctx, base);
loc_82F2D008:
	// stw r27,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r27.u32);
	// b 0x82f2d038
	goto loc_82F2D038;
loc_82F2D010:
	// lbz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2d058
	if (cr6.eq) goto loc_82F2D058;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2d030
	if (cr6.eq) goto loc_82F2D030;
	// bl 0x83b4b558
	ctx.lr = 0x82F2D02C;
	sub_83B4B558(ctx, base);
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
loc_82F2D030:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F2D034:
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
loc_82F2D038:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2d058
	if (cr6.lt) goto loc_82F2D058;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2D058;
	sub_825952B8(ctx, base);
loc_82F2D058:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F2D064:
	// bl 0x82d4de68
	ctx.lr = 0x82F2D068;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2d0b8
	if (cr6.eq) goto loc_82F2D0B8;
	// bl 0x831156e8
	ctx.lr = 0x82F2D078;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,52845
	ctx.r9.u64 = ctx.r11.u64 | 52845;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2d0b8
	if (!cr6.eq) goto loc_82F2D0B8;
	// bl 0x831156e8
	ctx.lr = 0x82F2D094;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2d0b8
	if (!cr6.eq) goto loc_82F2D0B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4de98
	ctx.lr = 0x82F2D0B8;
	sub_82D4DE98(ctx, base);
loc_82F2D0B8:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82f2d034
	goto loc_82F2D034;
loc_82F2D0C0:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,8712
	ctx.r3.s64 = ctx.r11.s64 + 8712;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x8316d690
	ctx.lr = 0x82F2D0DC;
	sub_8316D690(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82f2d0f4
	if (!cr6.eq) goto loc_82F2D0F4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-20668
	ctx.r11.s64 = ctx.r11.s64 + -20668;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x82f2d1b0
	goto loc_82F2D1B0;
loc_82F2D0F4:
	// bl 0x831156e8
	ctx.lr = 0x82F2D0F8;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82F2D100;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2D104;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f2d1a4
	if (!cr6.eq) goto loc_82F2D1A4;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F2D11C;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319df40
	ctx.lr = 0x82F2D128;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r29,5
	ctx.r29.s64 = 5;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82f2d15c
	if (cr6.eq) goto loc_82F2D15C;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8319dc20
	ctx.lr = 0x82F2D144;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319df40
	ctx.lr = 0x82F2D150;
	sub_8319DF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f2d1a4
	if (!cr6.eq) goto loc_82F2D1A4;
loc_82F2D15C:
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// ori r10,r11,58996
	ctx.r10.u64 = ctx.r11.u64 | 58996;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2d17c
	if (cr6.eq) goto loc_82F2D17C;
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// b 0x82f2d038
	goto loc_82F2D038;
loc_82F2D17C:
	// addis r11,r31,222
	ctx.r11.s64 = ctx.r31.s64 + 14548992;
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// addi r11,r11,-8464
	ctx.r11.s64 = ctx.r11.s64 + -8464;
	// ori r8,r10,52996
	ctx.r8.u64 = ctx.r10.u64 | 52996;
	// addis r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 458752;
	// addi r9,r9,1924
	ctx.r9.s64 = ctx.r9.s64 + 1924;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ori r6,r7,64
	ctx.r6.u64 = ctx.r7.u64 | 64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stwx r28,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r28.u32);
loc_82F2D1A4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-20668
	ctx.r11.s64 = ctx.r11.s64 + -20668;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
loc_82F2D1B0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82F2D1B8;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2D1C4;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2D1CC;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F2D1D8:
	// bl 0x82f00728
	ctx.lr = 0x82F2D1DC;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,22976
	ctx.r9.u64 = ctx.r11.u64 | 22976;
	// ori r8,r10,22975
	ctx.r8.u64 = ctx.r10.u64 | 22975;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,6
	ctx.r6.s64 = 6;
	// stbx r31,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r31.u8);
	// stbx r7,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r7.u8);
	// stw r6,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r6.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82F2D204;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82F2D208;
	sub_83524138(ctx, base);
	// std r3,104(r30)
	PPC_STORE_U64(ctx.r30.u32 + 104, ctx.r3.u64);
	// b 0x82f2d038
	goto loc_82F2D038;
loc_82F2D210:
	// bl 0x83a7d958
	ctx.lr = 0x82F2D214;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82F2D218;
	sub_83524138(ctx, base);
	// ld r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// subf r31,r11,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x82f00728
	ctx.lr = 0x82F2D224;
	sub_82F00728(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22976
	ctx.r9.u64 = ctx.r10.u64 | 22976;
	// lbzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2d274
	if (cr6.eq) goto loc_82F2D274;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-20668
	ctx.r11.s64 = ctx.r11.s64 + -20668;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82F2D24C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2D258;
	sub_82E88020(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2D260;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2D268;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F2D274:
	// cmpldi cr6,r31,35000
	cr6.compare<uint64_t>(ctx.r31.u64, 35000, xer);
	// blt cr6,0x82f2d038
	if (cr6.lt) goto loc_82F2D038;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-20668
	ctx.r4.s64 = ctx.r11.s64 + -20668;
	// bl 0x837b0c10
	ctx.lr = 0x82F2D28C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2D298;
	sub_82E88020(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2D2A0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2D2A8;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F2D2B4:
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D2C4"))) PPC_WEAK_FUNC(sub_82F2D2C4);
PPC_FUNC_IMPL(__imp__sub_82F2D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D2C8"))) PPC_WEAK_FUNC(sub_82F2D2C8);
PPC_FUNC_IMPL(__imp__sub_82F2D2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82F2D2D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x82F2D2D8;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F2D2E4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x830ff290
	ctx.lr = 0x82F2D2F0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2D2F4;
	sub_830FFAA8(ctx, base);
	// addis r11,r24,195
	ctx.r11.s64 = ctx.r24.s64 + 12779520;
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// addi r11,r11,-13392
	ctx.r11.s64 = ctx.r11.s64 + -13392;
	// ori r9,r10,52845
	ctx.r9.u64 = ctx.r10.u64 | 52845;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lbzx r25,r24,r9
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r9.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F2D324;
	sub_8319DC20(ctx, base);
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8319df40
	ctx.lr = 0x82F2D338;
	sub_8319DF40(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r16,0
	ctx.r16.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f2d354
	if (cr6.eq) goto loc_82F2D354;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,52865
	ctx.r10.u64 = ctx.r11.u64 | 52865;
	// stbx r16,r24,r10
	PPC_STORE_U8(ctx.r24.u32 + ctx.r10.u32, ctx.r16.u8);
loc_82F2D354:
	// addis r31,r24,205
	ctx.r31.s64 = ctx.r24.s64 + 13434880;
	// addi r31,r31,-18420
	ctx.r31.s64 = ctx.r31.s64 + -18420;
	// bl 0x830ff290
	ctx.lr = 0x82F2D360;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2D364;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f2d3fc
	if (!cr6.eq) goto loc_82F2D3FC;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2d3fc
	if (!cr6.eq) goto loc_82F2D3FC;
	// addis r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 262144;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// addi r28,r28,-21460
	ctx.r28.s64 = ctx.r28.s64 + -21460;
	// lis r26,10240
	ctx.r26.s64 = 671088640;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r27,100
	ctx.r27.s64 = 100;
loc_82F2D390:
	// cmplwi cr6,r30,70
	cr6.compare<uint32_t>(ctx.r30.u32, 70, xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bge cr6,0x82f2d3a0
	if (!cr6.lt) goto loc_82F2D3A0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82F2D3A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d3ec
	if (cr6.eq) goto loc_82F2D3EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82f2d3ec
	if (cr6.eq) goto loc_82F2D3EC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82f2d3ec
	if (cr6.eq) goto loc_82F2D3EC;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,0,0,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8000000;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// beq cr6,0x82f2d3ec
	if (cr6.eq) goto loc_82F2D3EC;
	// stb r16,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r16.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8314d550
	ctx.lr = 0x82F2D3E4;
	sub_8314D550(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
loc_82F2D3EC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,476
	ctx.r29.s64 = ctx.r29.s64 + 476;
	// cmplwi cr6,r30,70
	cr6.compare<uint32_t>(ctx.r30.u32, 70, xer);
	// blt cr6,0x82f2d390
	if (cr6.lt) goto loc_82F2D390;
loc_82F2D3FC:
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8319df40
	ctx.lr = 0x82F2D410;
	sub_8319DF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2d528
	if (cr6.eq) goto loc_82F2D528;
	// cmplwi cr6,r14,13
	cr6.compare<uint32_t>(ctx.r14.u32, 13, xer);
	// bne cr6,0x82f2d4cc
	if (!cr6.eq) goto loc_82F2D4CC;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// ldx r4,r24,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + ctx.r10.u32);
	// bl 0x8311bd68
	ctx.lr = 0x82F2D438;
	sub_8311BD68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,20
	ctx.r30.s64 = 20;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2d474
	if (cr6.eq) goto loc_82F2D474;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x83120738
	ctx.lr = 0x82F2D458;
	sub_83120738(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// blt cr6,0x82f2d474
	if (cr6.lt) goto loc_82F2D474;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwimi r11,r26,26,4,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 26) & 0xC000000) | (ctx.r11.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_82F2D474:
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x831235b8
	ctx.lr = 0x82F2D488;
	sub_831235B8(ctx, base);
	// bl 0x8314c958
	ctx.lr = 0x82F2D48C;
	sub_8314C958(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82f2d4cc
	if (cr6.eq) goto loc_82F2D4CC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d4cc
	if (cr6.eq) goto loc_82F2D4CC;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x82F2D4B0;
	sub_83120738(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,36
	cr6.compare<uint32_t>(ctx.r10.u32, 36, xer);
	// blt cr6,0x82f2d4cc
	if (cr6.lt) goto loc_82F2D4CC;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwimi r11,r26,26,4,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 26) & 0xC000000) | (ctx.r11.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_82F2D4CC:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2D4D0;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f06c48
	ctx.lr = 0x82F2D4D8;
	sub_82F06C48(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d4e8
	if (cr6.eq) goto loc_82F2D4E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D4E8;
	sub_82416268(ctx, base);
loc_82F2D4E8:
	// cmplwi cr6,r14,12
	cr6.compare<uint32_t>(ctx.r14.u32, 12, xer);
	// bne cr6,0x82f2d518
	if (!cr6.eq) goto loc_82F2D518;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2d518
	if (!cr6.eq) goto loc_82F2D518;
	// bl 0x82fe0df0
	ctx.lr = 0x82F2D500;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2d518
	if (cr6.eq) goto loc_82F2D518;
	// bl 0x82f534a8
	ctx.lr = 0x82F2D510;
	sub_82F534A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D518;
	sub_82416268(ctx, base);
loc_82F2D518:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r9,r11,1536
	ctx.r9.u64 = ctx.r11.u64 | 1536;
	// sthx r10,r24,r9
	PPC_STORE_U16(ctx.r24.u32 + ctx.r9.u32, ctx.r10.u16);
loc_82F2D528:
	// clrlwi r28,r25,24
	ctx.r28.u64 = ctx.r25.u32 & 0xFF;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82f2d55c
	if (!cr6.eq) goto loc_82F2D55C;
	// cmplwi cr6,r14,12
	cr6.compare<uint32_t>(ctx.r14.u32, 12, xer);
	// bne cr6,0x82f2d55c
	if (!cr6.eq) goto loc_82F2D55C;
	// bl 0x82f5e128
	ctx.lr = 0x82F2D544;
	sub_82F5E128(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f5ea98
	ctx.lr = 0x82F2D54C;
	sub_82F5EA98(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d55c
	if (cr6.eq) goto loc_82F2D55C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D55C;
	sub_82416268(ctx, base);
loc_82F2D55C:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2D560;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f8afb8
	ctx.lr = 0x82F2D568;
	sub_82F8AFB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2d57c
	if (cr6.eq) goto loc_82F2D57C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8316bc30
	ctx.lr = 0x82F2D57C;
	sub_8316BC30(ctx, base);
loc_82F2D57C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d58c
	if (cr6.eq) goto loc_82F2D58C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D58C;
	sub_82416268(ctx, base);
loc_82F2D58C:
	// bl 0x82f00728
	ctx.lr = 0x82F2D590;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2d5c8
	if (cr6.eq) goto loc_82F2D5C8;
	// bl 0x82f00728
	ctx.lr = 0x82F2D59C;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22972
	ctx.r10.u64 = ctx.r11.u64 | 22972;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2d5c8
	if (!cr6.eq) goto loc_82F2D5C8;
	// bl 0x82f00728
	ctx.lr = 0x82F2D5B4;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22973
	ctx.r10.u64 = ctx.r11.u64 | 22973;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2dfb4
	if (cr6.eq) goto loc_82F2DFB4;
loc_82F2D5C8:
	// li r25,3
	ctx.r25.s64 = 3;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82f2d768
	if (!cr6.eq) goto loc_82F2D768;
	// cmplwi cr6,r14,12
	cr6.compare<uint32_t>(ctx.r14.u32, 12, xer);
	// bne cr6,0x82f2d5fc
	if (!cr6.eq) goto loc_82F2D5FC;
	// bl 0x82f86f18
	ctx.lr = 0x82F2D5E0;
	sub_82F86F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82F2D5E8;
	sub_83102DB0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d604
	if (cr6.eq) goto loc_82F2D604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D5F8;
	sub_82416268(ctx, base);
	// b 0x82f2d604
	goto loc_82F2D604;
loc_82F2D5FC:
	// cmplwi cr6,r14,13
	cr6.compare<uint32_t>(ctx.r14.u32, 13, xer);
	// bne cr6,0x82f2d74c
	if (!cr6.eq) goto loc_82F2D74C;
loc_82F2D604:
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8314d470
	ctx.lr = 0x82F2D614;
	sub_8314D470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2d640
	if (!cr6.eq) goto loc_82F2D640;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8314d470
	ctx.lr = 0x82F2D634;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2d64c
	if (cr6.eq) goto loc_82F2D64C;
loc_82F2D640:
	// addis r3,r24,236
	ctx.r3.s64 = ctx.r24.s64 + 15466496;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// bl 0x83127e90
	ctx.lr = 0x82F2D64C;
	sub_83127E90(ctx, base);
loc_82F2D64C:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2D650;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f7fca8
	ctx.lr = 0x82F2D658;
	sub_82F7FCA8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d668
	if (cr6.eq) goto loc_82F2D668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D668;
	sub_82416268(ctx, base);
loc_82F2D668:
	// cmplwi cr6,r14,12
	cr6.compare<uint32_t>(ctx.r14.u32, 12, xer);
	// bne cr6,0x82f2d694
	if (!cr6.eq) goto loc_82F2D694;
	// bl 0x82f73db8
	ctx.lr = 0x82F2D674;
	sub_82F73DB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f77988
	ctx.lr = 0x82F2D67C;
	sub_82F77988(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d6b0
	if (cr6.eq) goto loc_82F2D6B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f177b8
	ctx.lr = 0x82F2D690;
	sub_82F177B8(ctx, base);
	// b 0x82f2d6b0
	goto loc_82F2D6B0;
loc_82F2D694:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2D698;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fe3d48
	ctx.lr = 0x82F2D6A0;
	sub_82FE3D48(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d6b0
	if (cr6.eq) goto loc_82F2D6B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D6B0;
	sub_82416268(ctx, base);
loc_82F2D6B0:
	// bl 0x82f7c648
	ctx.lr = 0x82F2D6B4;
	sub_82F7C648(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f7d120
	ctx.lr = 0x82F2D6BC;
	sub_82F7D120(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d6d4
	if (cr6.eq) goto loc_82F2D6D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18fd0
	ctx.lr = 0x82F2D6CC;
	sub_82F18FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D6D4;
	sub_82416268(ctx, base);
loc_82F2D6D4:
	// bl 0x82fe2668
	ctx.lr = 0x82F2D6D8;
	sub_82FE2668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fe3a38
	ctx.lr = 0x82F2D6E0;
	sub_82FE3A38(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d6f0
	if (cr6.eq) goto loc_82F2D6F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D6F0;
	sub_82416268(ctx, base);
loc_82F2D6F0:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2D6F4;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fe16b8
	ctx.lr = 0x82F2D6FC;
	sub_82FE16B8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d70c
	if (cr6.eq) goto loc_82F2D70C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D70C;
	sub_82416268(ctx, base);
loc_82F2D70C:
	// bl 0x82f71678
	ctx.lr = 0x82F2D710;
	sub_82F71678(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f71cd8
	ctx.lr = 0x82F2D718;
	sub_82F71CD8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d730
	if (cr6.eq) goto loc_82F2D730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1ef70
	ctx.lr = 0x82F2D728;
	sub_82F1EF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D730;
	sub_82416268(ctx, base);
loc_82F2D730:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2D734;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f67cc0
	ctx.lr = 0x82F2D73C;
	sub_82F67CC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d74c
	if (cr6.eq) goto loc_82F2D74C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D74C;
	sub_82416268(ctx, base);
loc_82F2D74C:
	// bl 0x82f919e0
	ctx.lr = 0x82F2D750;
	sub_82F919E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f93820
	ctx.lr = 0x82F2D758;
	sub_82F93820(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d768
	if (cr6.eq) goto loc_82F2D768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D768;
	sub_82416268(ctx, base);
loc_82F2D768:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// addi r29,r11,-20942
	ctx.r29.s64 = ctx.r11.s64 + -20942;
	// ori r30,r10,57072
	ctx.r30.u64 = ctx.r10.u64 | 57072;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// bne cr6,0x82f2d8b4
	if (!cr6.eq) goto loc_82F2D8B4;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8314d470
	ctx.lr = 0x82F2D798;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82f2d7c0
	if (!cr6.eq) goto loc_82F2D7C0;
	// bl 0x82f8b3b8
	ctx.lr = 0x82F2D7A8;
	sub_82F8B3B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f8e768
	ctx.lr = 0x82F2D7B0;
	sub_82F8E768(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d7c0
	if (cr6.eq) goto loc_82F2D7C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D7C0;
	sub_82416268(ctx, base);
loc_82F2D7C0:
	// cmplwi cr6,r14,11
	cr6.compare<uint32_t>(ctx.r14.u32, 11, xer);
	// beq cr6,0x82f2d804
	if (cr6.eq) goto loc_82F2D804;
	// li r11,45
	ctx.r11.s64 = 45;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8314d470
	ctx.lr = 0x82F2D7DC;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82f2d804
	if (!cr6.eq) goto loc_82F2D804;
	// bl 0x82f8b3b8
	ctx.lr = 0x82F2D7EC;
	sub_82F8B3B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f8e768
	ctx.lr = 0x82F2D7F4;
	sub_82F8E768(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d804
	if (cr6.eq) goto loc_82F2D804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D804;
	sub_82416268(ctx, base);
loc_82F2D804:
	// cmplwi cr6,r14,12
	cr6.compare<uint32_t>(ctx.r14.u32, 12, xer);
	// bne cr6,0x82f2d844
	if (!cr6.eq) goto loc_82F2D844;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// add r31,r24,r30
	ctx.r31.u64 = ctx.r24.u64 + ctx.r30.u64;
	// bl 0x831178a0
	ctx.lr = 0x82F2D828;
	sub_831178A0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8316e6e0
	ctx.lr = 0x82F2D830;
	sub_8316E6E0(ctx, base);
	// lbz r11,6239(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6239);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,6236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6236, ctx.r9.u32);
	// b 0x82f2d84c
	goto loc_82F2D84C;
loc_82F2D844:
	// cmplwi cr6,r14,13
	cr6.compare<uint32_t>(ctx.r14.u32, 13, xer);
	// bne cr6,0x82f2d868
	if (!cr6.eq) goto loc_82F2D868;
loc_82F2D84C:
	// bl 0x82f450c0
	ctx.lr = 0x82F2D850;
	sub_82F450C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f47318
	ctx.lr = 0x82F2D858;
	sub_82F47318(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d868
	if (cr6.eq) goto loc_82F2D868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D868;
	sub_82416268(ctx, base);
loc_82F2D868:
	// cmplwi cr6,r14,12
	cr6.compare<uint32_t>(ctx.r14.u32, 12, xer);
	// bne cr6,0x82f2d890
	if (!cr6.eq) goto loc_82F2D890;
	// bl 0x82f68660
	ctx.lr = 0x82F2D874;
	sub_82F68660(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f6dab8
	ctx.lr = 0x82F2D87C;
	sub_82F6DAB8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d898
	if (cr6.eq) goto loc_82F2D898;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D88C;
	sub_82416268(ctx, base);
	// b 0x82f2d898
	goto loc_82F2D898;
loc_82F2D890:
	// cmplwi cr6,r14,13
	cr6.compare<uint32_t>(ctx.r14.u32, 13, xer);
	// bne cr6,0x82f2d8b4
	if (!cr6.eq) goto loc_82F2D8B4;
loc_82F2D898:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2D89C;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f52bd8
	ctx.lr = 0x82F2D8A4;
	sub_82F52BD8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d8b4
	if (cr6.eq) goto loc_82F2D8B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D8B4;
	sub_82416268(ctx, base);
loc_82F2D8B4:
	// bl 0x82fde940
	ctx.lr = 0x82F2D8B8;
	sub_82FDE940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fdec38
	ctx.lr = 0x82F2D8C0;
	sub_82FDEC38(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2d8d0
	if (cr6.eq) goto loc_82F2D8D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2D8D0;
	sub_82416268(ctx, base);
loc_82F2D8D0:
	// stb r16,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r16.u8);
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// stb r16,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r16.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,8712
	ctx.r3.s64 = ctx.r11.s64 + 8712;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x8316d690
	ctx.lr = 0x82F2D8EC;
	sub_8316D690(ctx, base);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// addi r27,r11,4816
	ctx.r27.s64 = ctx.r11.s64 + 4816;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// bne cr6,0x82f2dc20
	if (!cr6.eq) goto loc_82F2DC20;
	// li r20,25
	ctx.r20.s64 = 25;
	// stw r16,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r16.u32);
	// stw r16,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r16.u32);
	// add r21,r24,r30
	ctx.r21.u64 = ctx.r24.u64 + ctx.r30.u64;
	// stw r16,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82ae7270
	ctx.lr = 0x82F2D928;
	sub_82AE7270(ctx, base);
	// addis r11,r24,96
	ctx.r11.s64 = ctx.r24.s64 + 6291456;
	// addi r11,r11,-4888
	ctx.r11.s64 = ctx.r11.s64 + -4888;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r18,176(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82f2dc04
	if (!cr6.gt) goto loc_82F2DC04;
	// addis r15,r24,85
	ctx.r15.s64 = ctx.r24.s64 + 5570560;
	// lwz r19,180(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lis r9,111
	ctx.r9.s64 = 7274496;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r15,r15,11904
	ctx.r15.s64 = ctx.r15.s64 + 11904;
	// li r17,36
	ctx.r17.s64 = 36;
	// ori r24,r9,5452
	ctx.r24.u64 = ctx.r9.u64 | 5452;
	// li r25,30
	ctx.r25.s64 = 30;
	// addi r23,r11,4768
	ctx.r23.s64 = ctx.r11.s64 + 4768;
	// addi r22,r10,4832
	ctx.r22.s64 = ctx.r10.s64 + 4832;
loc_82F2D970:
	// cmplwi cr6,r16,300
	cr6.compare<uint32_t>(ctx.r16.u32, 300, xer);
	// blt cr6,0x82f2d988
	if (cr6.lt) goto loc_82F2D988;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addis r26,r11,96
	ctx.r26.s64 = ctx.r11.s64 + 6291456;
	// addi r26,r26,-6080
	ctx.r26.s64 = ctx.r26.s64 + -6080;
	// b 0x82f2d98c
	goto loc_82F2D98C;
loc_82F2D988:
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
loc_82F2D98C:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// beq cr6,0x82f2dbd0
	if (cr6.eq) goto loc_82F2DBD0;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82f2dbd0
	if (cr6.eq) goto loc_82F2DBD0;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82f2dbd0
	if (cr6.eq) goto loc_82F2DBD0;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// beq cr6,0x82f2dbd0
	if (cr6.eq) goto loc_82F2DBD0;
	// lhz r4,78(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 78);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82f2d9d8
	if (cr6.eq) goto loc_82F2D9D8;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8311c338
	ctx.lr = 0x82F2D9C8;
	sub_8311C338(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82f2d9d8
	if (!cr6.eq) goto loc_82F2D9D8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82F2D9D8:
	// lhz r11,78(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 78);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f2d9f0
	if (cr6.eq) goto loc_82F2D9F0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2dbd0
	if (cr6.eq) goto loc_82F2DBD0;
loc_82F2D9F0:
	// lhz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// bl 0x83197440
	ctx.lr = 0x82F2D9F8;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2dbd0
	if (cr6.eq) goto loc_82F2DBD0;
	// subf r11,r18,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r18.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// divw r9,r11,r17
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r17.s32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2da5c
	if (cr6.eq) goto loc_82F2DA5C;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82f2ddd8
	if (!cr6.gt) goto loc_82F2DDD8;
loc_82F2DA28:
	// lhz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// lhz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82f2da44
	if (!cr6.eq) goto loc_82F2DA44;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,25
	cr6.compare<int32_t>(ctx.r7.s32, 25, xer);
	// beq cr6,0x82f2da58
	if (cr6.eq) goto loc_82F2DA58;
loc_82F2DA44:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82f2da28
	if (cr6.gt) goto loc_82F2DA28;
	// b 0x82f2da5c
	goto loc_82F2DA5C;
loc_82F2DA58:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82F2DA5C:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2dbd0
	if (!cr6.eq) goto loc_82F2DBD0;
	// lwz r11,520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82f2db7c
	if (!cr6.eq) goto loc_82F2DB7C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82F2DA88:
	// cmplwi cr6,r30,9000
	cr6.compare<uint32_t>(ctx.r30.u32, 9000, xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bge cr6,0x82f2da98
	if (!cr6.lt) goto loc_82F2DA98;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82F2DA98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,848
	cr6.compare<uint32_t>(ctx.r10.u32, 848, xer);
	// bne cr6,0x82f2db60
	if (!cr6.eq) goto loc_82F2DB60;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// bl 0x8314e340
	ctx.lr = 0x82F2DAC0;
	sub_8314E340(ctx, base);
	// clrlwi r14,r3,16
	ctx.r14.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314e340
	ctx.lr = 0x82F2DACC;
	sub_8314E340(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r9,r14
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r14.u32, xer);
	// bne cr6,0x82f2db5c
	if (!cr6.eq) goto loc_82F2DB5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// sth r25,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r25.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82acef18
	ctx.lr = 0x82F2DAF0;
	sub_82ACEF18(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r8,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82f2db18
	if (cr6.eq) goto loc_82F2DB18;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82f2db4c
	goto loc_82F2DB4C;
loc_82F2DB18:
	// rlwinm r11,r8,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r9,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f2db38
	if (cr6.eq) goto loc_82F2DB38;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82f2db4c
	goto loc_82F2DB4C;
loc_82F2DB38:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82F2DB4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2db5c
	if (cr6.eq) goto loc_82F2DB5C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F2DB5C:
	// lwz r14,116(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82F2DB60:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,588
	ctx.r29.s64 = ctx.r29.s64 + 588;
	// cmplwi cr6,r30,9000
	cr6.compare<uint32_t>(ctx.r30.u32, 9000, xer);
	// blt cr6,0x82f2da88
	if (cr6.lt) goto loc_82F2DA88;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2dbd0
	if (cr6.eq) goto loc_82F2DBD0;
loc_82F2DB7C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F2DBA4;
	sub_8319DC20(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// bl 0x82aebe70
	ctx.lr = 0x82F2DBD0;
	sub_82AEBE70(ctx, base);
loc_82F2DBD0:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r15,r15,548
	ctx.r15.s64 = ctx.r15.s64 + 548;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r16,r10
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f2d970
	if (cr6.lt) goto loc_82F2D970;
	// lwz r24,108(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r25,3
	ctx.r25.s64 = 3;
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82F2DC04:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82f2dc20
	if (cr6.eq) goto loc_82F2DC20;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825952b8
	ctx.lr = 0x82F2DC20;
	sub_825952B8(ctx, base);
loc_82F2DC20:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82f2dc7c
	if (!cr6.eq) goto loc_82F2DC7C;
	// cmplwi cr6,r14,12
	cr6.compare<uint32_t>(ctx.r14.u32, 12, xer);
	// beq cr6,0x82f2dc38
	if (cr6.eq) goto loc_82F2DC38;
	// cmplwi cr6,r14,13
	cr6.compare<uint32_t>(ctx.r14.u32, 13, xer);
	// bne cr6,0x82f2dc7c
	if (!cr6.eq) goto loc_82F2DC7C;
loc_82F2DC38:
	// bl 0x82f58258
	ctx.lr = 0x82F2DC3C;
	sub_82F58258(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f5cec0
	ctx.lr = 0x82F2DC44;
	sub_82F5CEC0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2dc7c
	if (cr6.eq) goto loc_82F2DC7C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f2dc68
	if (cr6.eq) goto loc_82F2DC68;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2DC68;
	sub_825952B8(ctx, base);
loc_82F2DC68:
	// stw r16,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r16,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r16.u32);
	// stw r16,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r16.u32);
	// bl 0x82416268
	ctx.lr = 0x82F2DC7C;
	sub_82416268(ctx, base);
loc_82F2DC7C:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123768
	ctx.lr = 0x82F2DC90;
	sub_83123768(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82f2dcbc
	if (cr6.eq) goto loc_82F2DCBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123778
	ctx.lr = 0x82F2DCA4;
	sub_83123778(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f2dcbc
	if (cr6.eq) goto loc_82F2DCBC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F2DCBC;
	sub_8311C338(ctx, base);
loc_82F2DCBC:
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F2DCCC;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8319df40
	ctx.lr = 0x82F2DCD8;
	sub_8319DF40(ctx, base);
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x831178a0
	ctx.lr = 0x82F2DCF0;
	sub_831178A0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8311bdf0
	ctx.lr = 0x82F2DCFC;
	sub_8311BDF0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82f2dd2c
	if (!cr6.eq) goto loc_82F2DD2C;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r10,14
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2dd30
	if (cr6.eq) goto loc_82F2DD30;
loc_82F2DD2C:
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82F2DD30:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// li r31,255
	ctx.r31.s64 = 255;
	// lis r30,2816
	ctx.r30.s64 = 184549376;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2de60
	if (!cr6.eq) goto loc_82F2DE60;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2de60
	if (cr6.eq) goto loc_82F2DE60;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,504(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x82F2DD58;
	sub_8311BE78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2de5c
	if (cr6.eq) goto loc_82F2DE5C;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
loc_82F2DD6C:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82F2DD78:
	// subfc r11,r25,r6
	xer.ca = ctx.r6.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r25.s64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// subfe r4,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// bge cr6,0x82f2ddb0
	if (!cr6.lt) goto loc_82F2DDB0;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r31,249(r10)
	PPC_STORE_U8(ctx.r10.u32 + 249, ctx.r31.u8);
loc_82F2DDB0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x82f2dd78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2DD78;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x82f2dde4
	if (!cr6.lt) goto loc_82F2DDE4;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 + 104;
	// b 0x82f2dde8
	goto loc_82F2DDE8;
loc_82F2DDD8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82F2DDE4;
	sub_831CC188(ctx, base);
loc_82F2DDE4:
	// addi r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 + 104;
loc_82F2DDE8:
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2DDF8:
	// clrlwi r5,r5,8
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFFFF;
	// stb r16,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r16.u8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82f2de14
	if (!cr6.lt) goto loc_82F2DE14;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r9.u64);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_82F2DE14:
	// rlwinm r9,r5,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, xer);
	// bne cr6,0x82f2de3c
	if (!cr6.eq) goto loc_82F2DE3C;
	// clrlwi r5,r5,8
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFFFF;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// bge cr6,0x82f2de3c
	if (!cr6.lt) goto loc_82F2DE3C;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
loc_82F2DE3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82f2ddf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2DDF8;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// blt cr6,0x82f2dd6c
	if (cr6.lt) goto loc_82F2DD6C;
loc_82F2DE5C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82F2DE60:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r9,r10,57076
	ctx.r9.u64 = ctx.r10.u64 | 57076;
	// lwzx r4,r24,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// xor r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82f2de90
	if (!cr6.eq) goto loc_82F2DE90;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2de94
	if (cr6.eq) goto loc_82F2DE94;
loc_82F2DE90:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82F2DE94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2dfb4
	if (!cr6.eq) goto loc_82F2DFB4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x82F2DEA8;
	sub_8311BDF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2dfb4
	if (cr6.eq) goto loc_82F2DFB4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,504(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x82F2DEC0;
	sub_8311BE78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2dfb4
	if (cr6.eq) goto loc_82F2DFB4;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
loc_82F2DED4:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82F2DEE0:
	// subfc r11,r25,r6
	xer.ca = ctx.r6.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r25.s64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// subfe r4,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// bge cr6,0x82f2df18
	if (!cr6.lt) goto loc_82F2DF18;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r31,249(r10)
	PPC_STORE_U8(ctx.r10.u32 + 249, ctx.r31.u8);
loc_82F2DF18:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x82f2dee0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2DEE0;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x82f2df40
	if (!cr6.lt) goto loc_82F2DF40;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 + 104;
	// b 0x82f2df44
	goto loc_82F2DF44;
loc_82F2DF40:
	// addi r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 + 104;
loc_82F2DF44:
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2DF54:
	// clrlwi r5,r5,8
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFFFF;
	// stb r16,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r16.u8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// bge cr6,0x82f2df74
	if (!cr6.lt) goto loc_82F2DF74;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r9.u64);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_82F2DF74:
	// rlwinm r9,r5,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, xer);
	// bne cr6,0x82f2df94
	if (!cr6.eq) goto loc_82F2DF94;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// bge cr6,0x82f2df94
	if (!cr6.lt) goto loc_82F2DF94;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
loc_82F2DF94:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82f2df54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2DF54;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// blt cr6,0x82f2ded4
	if (cr6.lt) goto loc_82F2DED4;
loc_82F2DFB4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2DFBC"))) PPC_WEAK_FUNC(sub_82F2DFBC);
PPC_FUNC_IMPL(__imp__sub_82F2DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2DFC0"))) PPC_WEAK_FUNC(sub_82F2DFC0);
PPC_FUNC_IMPL(__imp__sub_82F2DFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2dff0
	if (cr6.eq) goto loc_82F2DFF0;
	// bl 0x82f2d2c8
	ctx.lr = 0x82F2DFE4;
	sub_82F2D2C8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,92(r10)
	PPC_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
loc_82F2DFF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E008"))) PPC_WEAK_FUNC(sub_82F2E008);
PPC_FUNC_IMPL(__imp__sub_82F2E008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F2E020;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-20064
	ctx.r8.s64 = ctx.r10.s64 + -20064;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stb r11,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r11.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E06C"))) PPC_WEAK_FUNC(sub_82F2E06C);
PPC_FUNC_IMPL(__imp__sub_82F2E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E070"))) PPC_WEAK_FUNC(sub_82F2E070);
PPC_FUNC_IMPL(__imp__sub_82F2E070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20064
	ctx.r9.s64 = ctx.r11.s64 + -20064;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F2E0A8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2e0c0
	if (cr6.eq) goto loc_82F2E0C0;
	// bl 0x82416268
	ctx.lr = 0x82F2E0BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2E0C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E0D8"))) PPC_WEAK_FUNC(sub_82F2E0D8);
PPC_FUNC_IMPL(__imp__sub_82F2E0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,400
	ctx.r11.s64 = ctx.r3.s64 + 400;
	// li r9,50
	ctx.r9.s64 = 50;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
loc_82F2E0EC:
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r8,9088(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9088);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 65535;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r8,9088(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9088);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// sth r9,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r9.u16);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ori r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 65535;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r8,9088(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9088);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// sth r9,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r9.u16);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lwz r8,9088(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9088);
	// stwu r8,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82f2e0ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2E0EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E154"))) PPC_WEAK_FUNC(sub_82F2E154);
PPC_FUNC_IMPL(__imp__sub_82F2E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E158"))) PPC_WEAK_FUNC(sub_82F2E158);
PPC_FUNC_IMPL(__imp__sub_82F2E158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// subfic r6,r3,-20
	xer.ca = ctx.r3.u32 <= 4294967276;
	ctx.r6.s64 = -20 - ctx.r3.s64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82F2E168:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r4,r11,0,12,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82F2E188:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stbx r7,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u8);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x82f2e188
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2E188;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r8,r8,484
	ctx.r8.s64 = ctx.r8.s64 + 484;
	// bne 0x82f2e168
	if (!cr0.eq) goto loc_82F2E168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E1A8"))) PPC_WEAK_FUNC(sub_82F2E1A8);
PPC_FUNC_IMPL(__imp__sub_82F2E1A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F2E1B0;
	__savegprlr_28(ctx, base);
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r10,4896(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,1612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1612, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1616, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// std r10,1596(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1596, ctx.r10.u64);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,1620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1620, ctx.r11.u32);
	// stw r11,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r11.u32);
	// stw r11,1628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1628, ctx.r11.u32);
	// stw r11,1632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1632, ctx.r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// ld r11,4896(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// std r11,1636(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1636, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,1644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1644, ctx.r7.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r4,1648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1648, ctx.r4.u32);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r29,1652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1652, ctx.r29.u32);
	// stw r28,1656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1656, ctx.r28.u32);
	// stw r11,1660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1660, ctx.r11.u32);
	// stw r11,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r11.u32);
	// stw r11,1668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1668, ctx.r11.u32);
	// stw r11,1672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1672, ctx.r11.u32);
	// ld r10,4896(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// std r10,1676(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1676, ctx.r10.u64);
	// stw r11,1684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1684, ctx.r11.u32);
	// stw r11,1688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1688, ctx.r11.u32);
	// stw r11,1692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1692, ctx.r11.u32);
	// stw r11,1696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1696, ctx.r11.u32);
	// stw r11,1700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1700, ctx.r11.u32);
	// stw r11,1704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1704, ctx.r11.u32);
	// stw r11,1708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1708, ctx.r11.u32);
	// stw r11,1712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1712, ctx.r11.u32);
	// ld r10,4896(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// std r10,1716(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1716, ctx.r10.u64);
	// stw r11,1724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1724, ctx.r11.u32);
	// stw r11,1728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1728, ctx.r11.u32);
	// stw r11,1732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1732, ctx.r11.u32);
	// stw r11,1736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1736, ctx.r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// stw r11,1740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1740, ctx.r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// stw r11,1744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1744, ctx.r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// stw r11,1748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1748, ctx.r11.u32);
	// stw r11,1752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1752, ctx.r11.u32);
	// ld r10,4896(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// std r10,1756(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1756, ctx.r10.u64);
	// stw r11,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r11.u32);
	// stw r11,1768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1768, ctx.r11.u32);
	// stw r11,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r11.u32);
	// stw r11,1776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1776, ctx.r11.u32);
	// stw r11,1780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1780, ctx.r11.u32);
	// stw r11,1784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1784, ctx.r11.u32);
	// stw r11,1788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1788, ctx.r11.u32);
	// stw r11,1792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1792, ctx.r11.u32);
	// ld r11,4896(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// std r11,1796(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1796, ctx.r11.u64);
	// stw r8,1804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1804, ctx.r8.u32);
	// stw r6,1808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1808, ctx.r6.u32);
	// stw r5,1812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1812, ctx.r5.u32);
	// stw r31,1816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1816, ctx.r31.u32);
	// stw r30,1820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1820, ctx.r30.u32);
	// stw r7,1824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1824, ctx.r7.u32);
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// stw r4,1828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1828, ctx.r4.u32);
	// stw r11,1832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1832, ctx.r11.u32);
	// ld r11,4896(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// std r11,1836(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1836, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1844, ctx.r11.u32);
	// stw r11,1848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1848, ctx.r11.u32);
	// stw r11,1852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1852, ctx.r11.u32);
	// stw r11,1856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1856, ctx.r11.u32);
	// stw r11,1860(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1860, ctx.r11.u32);
	// stw r11,1864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1864, ctx.r11.u32);
	// stw r11,1868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1868, ctx.r11.u32);
	// stw r11,1872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1872, ctx.r11.u32);
	// ld r10,4896(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// std r10,1876(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1876, ctx.r10.u64);
	// stw r11,1884(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1884, ctx.r11.u32);
	// stw r11,1888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1888, ctx.r11.u32);
	// stw r11,1892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1892, ctx.r11.u32);
	// stw r11,1896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1896, ctx.r11.u32);
	// stw r11,1900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1900, ctx.r11.u32);
	// stw r11,1904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1904, ctx.r11.u32);
	// stw r11,1908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1908, ctx.r11.u32);
	// stw r11,1912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1912, ctx.r11.u32);
	// ld r10,4896(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// std r10,1916(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1916, ctx.r10.u64);
	// stw r11,1924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1924, ctx.r11.u32);
	// stw r11,1928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1928, ctx.r11.u32);
	// stw r11,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r11.u32);
	// stw r11,1936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1936, ctx.r11.u32);
	// stw r11,1940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1940, ctx.r11.u32);
	// stw r11,1944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1944, ctx.r11.u32);
	// stw r11,1948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1948, ctx.r11.u32);
	// stw r11,1952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1952, ctx.r11.u32);
	// ld r10,4896(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4896);
	// std r10,1956(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1956, ctx.r10.u64);
	// stw r11,1964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1964, ctx.r11.u32);
	// stw r11,1968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1968, ctx.r11.u32);
	// stw r11,1972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1972, ctx.r11.u32);
	// stw r11,1976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1976, ctx.r11.u32);
	// stw r11,1980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1980, ctx.r11.u32);
	// stw r11,1984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1984, ctx.r11.u32);
	// stw r11,1988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1988, ctx.r11.u32);
	// stw r11,1992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1992, ctx.r11.u32);
	// stw r11,1996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1996, ctx.r11.u32);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E3A4"))) PPC_WEAK_FUNC(sub_82F2E3A4);
PPC_FUNC_IMPL(__imp__sub_82F2E3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E3A8"))) PPC_WEAK_FUNC(sub_82F2E3A8);
PPC_FUNC_IMPL(__imp__sub_82F2E3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F2E3B4:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82f2e404
	if (cr6.eq) goto loc_82F2E404;
	// mulli r10,r11,188
	ctx.r10.s64 = ctx.r11.s64 * 188;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82f2e3f4
	if (!cr6.eq) goto loc_82F2E3F4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r8,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r8.u8);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bne cr6,0x82f2e3f4
	if (!cr6.eq) goto loc_82F2E3F4;
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r7,r7,0,21,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// sth r7,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
loc_82F2E3F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// blt cr6,0x82f2e3b4
	if (cr6.lt) goto loc_82F2E3B4;
	// blr 
	return;
loc_82F2E404:
	// mulli r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 * 188;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E420"))) PPC_WEAK_FUNC(sub_82F2E420);
PPC_FUNC_IMPL(__imp__sub_82F2E420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F2E428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addis r31,r3,214
	ctx.r31.s64 = ctx.r3.s64 + 14024704;
	// addi r30,r11,4896
	ctx.r30.s64 = ctx.r11.s64 + 4896;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,72
	ctx.r29.s64 = 72;
	// addi r31,r31,10896
	ctx.r31.s64 = ctx.r31.s64 + 10896;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82F2E448:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82f2e468
	if (!cr6.eq) goto loc_82F2E468;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82f2e490
	goto loc_82F2E490;
loc_82F2E468:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f2e488
	if (!cr6.eq) goto loc_82F2E488;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f2e48c
	if (cr6.eq) goto loc_82F2E48C;
loc_82F2E488:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F2E48C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F2E490:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2e4bc
	if (!cr6.eq) goto loc_82F2E4BC;
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rlwinm r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r9,2048
	cr6.compare<uint32_t>(ctx.r9.u32, 2048, xer);
	// bne cr6,0x82f2e4bc
	if (!cr6.eq) goto loc_82F2E4BC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2e3a8
	ctx.lr = 0x82F2E4B8;
	sub_82F2E3A8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82F2E4BC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,5852
	ctx.r31.s64 = ctx.r31.s64 + 5852;
	// bne 0x82f2e448
	if (!cr0.eq) goto loc_82F2E448;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E4D0"))) PPC_WEAK_FUNC(sub_82F2E4D0);
PPC_FUNC_IMPL(__imp__sub_82F2E4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-19960
	ctx.r10.s64 = ctx.r11.s64 + -19960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x82F2E4FC;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2e51c
	if (cr6.eq) goto loc_82F2E51C;
	// bl 0x82595188
	ctx.lr = 0x82F2E50C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82F2E51C;
	sub_825952B8(ctx, base);
loc_82F2E51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E538"))) PPC_WEAK_FUNC(sub_82F2E538);
PPC_FUNC_IMPL(__imp__sub_82F2E538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2e56c
	if (cr6.eq) goto loc_82F2E56C;
	// lbz r11,93(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 93);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2e56c
	if (cr6.eq) goto loc_82F2E56C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f2e5f0
	goto loc_82F2E5F0;
loc_82F2E56C:
	// bl 0x831156e8
	ctx.lr = 0x82F2E570;
	sub_831156E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,9088
	ctx.r3.s64 = ctx.r10.s64 + 9088;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8316d690
	ctx.lr = 0x82F2E598;
	sub_8316D690(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82f2e5c4
	if (cr6.eq) goto loc_82F2E5C4;
	// bl 0x830ff290
	ctx.lr = 0x82F2E5A4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2E5A8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bne cr6,0x82f2e5c8
	if (!cr6.eq) goto loc_82F2E5C8;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,1613
	ctx.r10.u64 = ctx.r11.u64 | 1613;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2e5c8
	if (cr6.eq) goto loc_82F2E5C8;
loc_82F2E5C4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82F2E5C8:
	// bl 0x831156e8
	ctx.lr = 0x82F2E5CC;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2e5ec
	if (cr6.eq) goto loc_82F2E5EC;
	// bl 0x83170428
	ctx.lr = 0x82F2E5E8;
	sub_83170428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F2E5EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2E5F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E608"))) PPC_WEAK_FUNC(sub_82F2E608);
PPC_FUNC_IMPL(__imp__sub_82F2E608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// bl 0x82f00728
	ctx.lr = 0x82F2E62C;
	sub_82F00728(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2e648
	if (cr6.eq) goto loc_82F2E648;
	// bl 0x82f00728
	ctx.lr = 0x82F2E63C;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22973
	ctx.r10.u64 = ctx.r11.u64 | 22973;
	// stbx r30,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r30.u8);
loc_82F2E648:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2e6a8
	if (cr6.eq) goto loc_82F2E6A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x82F2E65C;
	sub_835242E8(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_82F2E66C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f2e66c
	if (!cr0.eq) goto loc_82F2E66C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2e6a4
	if (!cr6.eq) goto loc_82F2E6A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2E6A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2E6A4:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_82F2E6A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E6C4"))) PPC_WEAK_FUNC(sub_82F2E6C4);
PPC_FUNC_IMPL(__imp__sub_82F2E6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E6C8"))) PPC_WEAK_FUNC(sub_82F2E6C8);
PPC_FUNC_IMPL(__imp__sub_82F2E6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f2e6ec
	if (cr6.lt) goto loc_82F2E6EC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f2e6f0
	goto loc_82F2E6F0;
loc_82F2E6EC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F2E6F0:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F2E708;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2e720
	if (cr6.eq) goto loc_82F2E720;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f2e008
	ctx.lr = 0x82F2E718;
	sub_82F2E008(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f2e724
	if (!cr6.eq) goto loc_82F2E724;
loc_82F2E720:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2E724:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E738"))) PPC_WEAK_FUNC(sub_82F2E738);
PPC_FUNC_IMPL(__imp__sub_82F2E738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F2E740;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r4,404
	ctx.r31.s64 = ctx.r4.s64 + 404;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82F2E760:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x82f2e780
	if (cr6.eq) goto loc_82F2E780;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2e780
	if (cr6.eq) goto loc_82F2E780;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82F2E780;
	sub_83546FD8(ctx, base);
loc_82F2E780:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82f2e760
	if (!cr0.eq) goto loc_82F2E760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E798"))) PPC_WEAK_FUNC(sub_82F2E798);
PPC_FUNC_IMPL(__imp__sub_82F2E798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F2E7A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82f2ec00
	if (cr6.gt) goto loc_82F2EC00;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f2ea14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2EA14;
	// bdzf 4*cr6+eq,0x82f2ea44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2EA44;
	// bdzf 4*cr6+eq,0x82f2eb30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2EB30;
	// bne cr6,0x82f2eb68
	if (!cr6.eq) goto loc_82F2EB68;
	// bl 0x82fe0df0
	ctx.lr = 0x82F2E7D0;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2e7e8
	if (cr6.eq) goto loc_82F2E7E8;
	// bl 0x82fe4bf8
	ctx.lr = 0x82F2E7E0;
	sub_82FE4BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2E7E8;
	sub_82416268(ctx, base);
loc_82F2E7E8:
	// bl 0x831156e8
	ctx.lr = 0x82F2E7EC;
	sub_831156E8(ctx, base);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82F2E7F4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addis r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 12582912;
	// ori r9,r10,63108
	ctx.r9.u64 = ctx.r10.u64 | 63108;
	// addi r11,r11,-10964
	ctx.r11.s64 = ctx.r11.s64 + -10964;
	// lhzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,365
	cr6.compare<uint32_t>(ctx.r10.u32, 365, xer);
	// blt cr6,0x82f2e81c
	if (cr6.lt) goto loc_82F2E81C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82f2e824
	goto loc_82F2E824;
loc_82F2E81C:
	// mulli r10,r10,532
	ctx.r10.s64 = ctx.r10.s64 * 532;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82F2E824:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82f2e8fc
	if (cr6.eq) goto loc_82F2E8FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f2e738
	ctx.lr = 0x82F2E83C;
	sub_82F2E738(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f2e0d8
	ctx.lr = 0x82F2E844;
	sub_82F2E0D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8315bc58
	ctx.lr = 0x82F2E84C;
	sub_8315BC58(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// beq cr6,0x82f2e88c
	if (cr6.eq) goto loc_82F2E88C;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,65515
	cr6.compare<uint32_t>(ctx.r9.u32, 65515, xer);
	// blt cr6,0x82f2e88c
	if (cr6.lt) goto loc_82F2E88C;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bge cr6,0x82f2e88c
	if (!cr6.lt) goto loc_82F2E88C;
	// li r11,-31
	ctx.r11.s64 = -31;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82F2E88C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f2e8f4
	if (cr0.eq) goto loc_82F2E8F4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82F2E8A4:
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82f06560
	ctx.lr = 0x82F2E8D4;
	sub_82F06560(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// blt cr6,0x82f2e8a4
	if (cr6.lt) goto loc_82F2E8A4;
loc_82F2E8F4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82F2E8FC;
	sub_82F73D60(ctx, base);
loc_82F2E8FC:
	// bl 0x831156e8
	ctx.lr = 0x82F2E900;
	sub_831156E8(ctx, base);
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,221
	ctx.r9.s64 = 14483456;
	// ori r8,r10,52845
	ctx.r8.u64 = ctx.r10.u64 | 52845;
	// ori r31,r9,52996
	ctx.r31.u64 = ctx.r9.u64 | 52996;
	// li r30,1
	ctx.r30.s64 = 1;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f2e92c
	if (cr6.eq) goto loc_82F2E92C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82f2e96c
	goto loc_82F2E96C;
loc_82F2E92C:
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2e94c
	if (cr6.eq) goto loc_82F2E94C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82f2e96c
	goto loc_82F2E96C;
loc_82F2E94C:
	// bl 0x830ff290
	ctx.lr = 0x82F2E950;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2E954;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bne cr6,0x82f2e964
	if (!cr6.eq) goto loc_82F2E964;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82f2e96c
	goto loc_82F2E96C;
loc_82F2E964:
	// bl 0x831156e8
	ctx.lr = 0x82F2E968;
	sub_831156E8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F2E96C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2e9dc
	if (cr6.eq) goto loc_82F2E9DC;
	// bl 0x82d4de68
	ctx.lr = 0x82F2E97C;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2e9d4
	if (!cr6.eq) goto loc_82F2E9D4;
	// bl 0x830ff290
	ctx.lr = 0x82F2E98C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2E990;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f2e9b0
	if (!cr6.eq) goto loc_82F2E9B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4f040
	ctx.lr = 0x82F2E9A8;
	sub_82D4F040(ctx, base);
	// stw r30,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r30.u32);
	// b 0x82f2e9e4
	goto loc_82F2E9E4;
loc_82F2E9B0:
	// bl 0x830ff290
	ctx.lr = 0x82F2E9B4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2E9B8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// beq cr6,0x82f2e9c8
	if (cr6.eq) goto loc_82F2E9C8;
	// li r5,3
	ctx.r5.s64 = 3;
loc_82F2E9C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4f040
	ctx.lr = 0x82F2E9D4;
	sub_82D4F040(ctx, base);
loc_82F2E9D4:
	// stw r30,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r30.u32);
	// b 0x82f2e9e4
	goto loc_82F2E9E4;
loc_82F2E9DC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
loc_82F2E9E4:
	// lwzx r11,r26,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2ec08
	if (!cr6.eq) goto loc_82F2EC08;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82F2EA04;
	sub_82D17AA0(ctx, base);
	// stb r30,112(r27)
	PPC_STORE_U8(ctx.r27.u32 + 112, ctx.r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F2EA14:
	// bl 0x82d4de68
	ctx.lr = 0x82F2EA18;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2ec08
	if (cr6.eq) goto loc_82F2EC08;
	// bl 0x83a7d958
	ctx.lr = 0x82F2EA28;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82F2EA2C;
	sub_83524138(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// std r3,104(r27)
	PPC_STORE_U64(ctx.r27.u32 + 104, ctx.r3.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F2EA44:
	// bl 0x82f00728
	ctx.lr = 0x82F2EA48;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2ea64
	if (cr6.eq) goto loc_82F2EA64;
	// bl 0x82f00728
	ctx.lr = 0x82F2EA54;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,22973
	ctx.r9.u64 = ctx.r11.u64 | 22973;
	// stbx r10,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u8);
loc_82F2EA64:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2ec08
	if (!cr6.eq) goto loc_82F2EC08;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82F2EA88;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2eab0
	if (cr6.eq) goto loc_82F2EAB0;
	// bl 0x835242a0
	ctx.lr = 0x82F2EA98;
	sub_835242A0(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,-19960
	ctx.r9.s64 = ctx.r10.s64 + -19960;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82f2eab4
	goto loc_82F2EAB4;
loc_82F2EAB0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F2EAB4:
	// stw r11,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2eb20
	if (cr6.eq) goto loc_82F2EB20;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// addi r11,r9,-20160
	ctx.r11.s64 = ctx.r9.s64 + -20160;
	// std r28,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r28.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82F2EB00;
	sub_8259CC28(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// bl 0x835249e8
	ctx.lr = 0x82F2EB18;
	sub_835249E8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2EB20;
	sub_8387E8E0(ctx, base);
loc_82F2EB20:
	// stw r31,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F2EB30:
	// lbz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2ec08
	if (cr6.eq) goto loc_82F2EC08;
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2eb54
	if (cr6.eq) goto loc_82F2EB54;
	// bl 0x83b4b558
	ctx.lr = 0x82F2EB4C;
	sub_83B4B558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r11.u32);
loc_82F2EB54:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F2EB68:
	// bl 0x831156e8
	ctx.lr = 0x82F2EB6C;
	sub_831156E8(ctx, base);
	// bl 0x82d4de68
	ctx.lr = 0x82F2EB70;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2eba0
	if (cr6.eq) goto loc_82F2EBA0;
	// bl 0x83a7d958
	ctx.lr = 0x82F2EB80;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82F2EB84;
	sub_83524138(ctx, base);
	// ld r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 104);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,2500
	cr6.compare<uint64_t>(ctx.r10.u64, 2500, xer);
	// blt cr6,0x82f2ec08
	if (cr6.lt) goto loc_82F2EC08;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4de98
	ctx.lr = 0x82F2EBA0;
	sub_82D4DE98(ctx, base);
loc_82F2EBA0:
	// lbz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2ebb4
	if (cr6.eq) goto loc_82F2EBB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82F2EBB4;
	sub_82D17AA0(ctx, base);
loc_82F2EBB4:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2EBB8;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2ebd0
	if (cr6.eq) goto loc_82F2EBD0;
	// bl 0x82fe4e78
	ctx.lr = 0x82F2EBC8;
	sub_82FE4E78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2EBD0;
	sub_82416268(ctx, base);
loc_82F2EBD0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-20160
	ctx.r4.s64 = ctx.r11.s64 + -20160;
	// bl 0x837b0c10
	ctx.lr = 0x82F2EBE0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F2EBEC;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F2EBF4;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F2EC00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r11.u32);
loc_82F2EC08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EC14"))) PPC_WEAK_FUNC(sub_82F2EC14);
PPC_FUNC_IMPL(__imp__sub_82F2EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EC18"))) PPC_WEAK_FUNC(sub_82F2EC18);
PPC_FUNC_IMPL(__imp__sub_82F2EC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f2ec48
	if (cr6.eq) goto loc_82F2EC48;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F2EC48;
	sub_825952B8(ctx, base);
loc_82F2EC48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EC6C"))) PPC_WEAK_FUNC(sub_82F2EC6C);
PPC_FUNC_IMPL(__imp__sub_82F2EC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EC70"))) PPC_WEAK_FUNC(sub_82F2EC70);
PPC_FUNC_IMPL(__imp__sub_82F2EC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F2EC78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f2ecc8
	if (cr6.eq) goto loc_82F2ECC8;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F2EC94:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f2ecac
	if (cr6.eq) goto loc_82F2ECAC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82F2ECAC;
	sub_825952B8(ctx, base);
loc_82F2ECAC:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82f2ec94
	if (!cr6.eq) goto loc_82F2EC94;
loc_82F2ECC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ECD0"))) PPC_WEAK_FUNC(sub_82F2ECD0);
PPC_FUNC_IMPL(__imp__sub_82F2ECD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F2ECD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2ed14
	if (cr6.eq) goto loc_82F2ED14;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f2ec70
	ctx.lr = 0x82F2ED04;
	sub_82F2EC70(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F2ED14;
	sub_825952B8(ctx, base);
loc_82F2ED14:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2ed50
	if (cr6.eq) goto loc_82F2ED50;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f2ec70
	ctx.lr = 0x82F2ED40;
	sub_82F2EC70(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F2ED50;
	sub_825952B8(ctx, base);
loc_82F2ED50:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ED64"))) PPC_WEAK_FUNC(sub_82F2ED64);
PPC_FUNC_IMPL(__imp__sub_82F2ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ED68"))) PPC_WEAK_FUNC(sub_82F2ED68);
PPC_FUNC_IMPL(__imp__sub_82F2ED68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82F2ED70;
	__savegprlr_14(ctx, base);
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F2ED84;
	sub_831156E8(ctx, base);
	// lwz r16,48(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82F2ED8C;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F2ED90;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2ED94;
	sub_830FFAA8(ctx, base);
	// addis r11,r16,192
	ctx.r11.s64 = ctx.r16.s64 + 12582912;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-10964
	ctx.r11.s64 = ctx.r11.s64 + -10964;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r26.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-2428
	ctx.r11.s64 = ctx.r11.s64 + -2428;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F2EDC4;
	sub_8319DC20(ctx, base);
	// addis r11,r16,221
	ctx.r11.s64 = ctx.r16.s64 + 14483456;
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// addi r11,r11,1621
	ctx.r11.s64 = ctx.r11.s64 + 1621;
	// lis r8,221
	ctx.r8.s64 = 14483456;
	// addis r10,r16,222
	ctx.r10.s64 = ctx.r16.s64 + 14548992;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// ori r7,r9,49620
	ctx.r7.u64 = ctx.r9.u64 | 49620;
	// addi r10,r10,-12691
	ctx.r10.s64 = ctx.r10.s64 + -12691;
	// ori r6,r8,1614
	ctx.r6.u64 = ctx.r8.u64 | 1614;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lis r5,204
	ctx.r5.s64 = 13369344;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r14,r5,47116
	ctx.r14.u64 = ctx.r5.u64 | 47116;
	// stwx r22,r16,r7
	PPC_STORE_U32(ctx.r16.u32 + ctx.r7.u32, ctx.r22.u32);
	// stbx r22,r16,r6
	PPC_STORE_U8(ctx.r16.u32 + ctx.r6.u32, ctx.r22.u8);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// beq cr6,0x82f2ee84
	if (cr6.eq) goto loc_82F2EE84;
	// li r9,200
	ctx.r9.s64 = 200;
	// addis r10,r16,222
	ctx.r10.s64 = ctx.r16.s64 + 14548992;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r10,-12536
	ctx.r10.s64 = ctx.r10.s64 + -12536;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F2EE20:
	// stbx r22,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r22.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82f2ee20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2EE20;
	// li r10,70
	ctx.r10.s64 = 70;
	// addis r11,r16,222
	ctx.r11.s64 = ctx.r16.s64 + 14548992;
	// addi r11,r11,-1970
	ctx.r11.s64 = ctx.r11.s64 + -1970;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82F2EE3C:
	// stbu r22,404(r11)
	ea = 404 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r22.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82f2ee3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2EE3C;
	// li r10,70
	ctx.r10.s64 = 70;
	// add r11,r16,r14
	ctx.r11.u64 = ctx.r16.u64 + ctx.r14.u64;
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r11,r11,-21464
	ctx.r11.s64 = ctx.r11.s64 + -21464;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82F2EE58:
	// lwz r10,476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// rlwinm r9,r10,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r9.u32);
	// rlwinm r7,r8,0,7,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stwu r7,476(r11)
	ea = 476 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82f2ee58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2EE58;
	// addis r3,r16,209
	ctx.r3.s64 = ctx.r16.s64 + 13697024;
	// addic. r3,r3,-3756
	xer.ca = ctx.r3.u32 > 3755;
	ctx.r3.s64 = ctx.r3.s64 + -3756;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82f2ee84
	if (cr0.eq) goto loc_82F2EE84;
	// bl 0x82f2e158
	ctx.lr = 0x82F2EE84;
	sub_82F2E158(ctx, base);
loc_82F2EE84:
	// bl 0x830ff290
	ctx.lr = 0x82F2EE88;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2EE8C;
	sub_830FFAA8(ctx, base);
	// li r29,8
	ctx.r29.s64 = 8;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f2ef1c
	if (!cr6.eq) goto loc_82F2EF1C;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8319dc20
	ctx.lr = 0x82F2EEA4;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8319df40
	ctx.lr = 0x82F2EEB0;
	sub_8319DF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82f2eee4
	if (cr6.eq) goto loc_82F2EEE4;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F2EECC;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8319df40
	ctx.lr = 0x82F2EED8;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82f2ef1c
	if (!cr6.eq) goto loc_82F2EF1C;
loc_82F2EEE4:
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// ori r10,r11,58996
	ctx.r10.u64 = ctx.r11.u64 | 58996;
	// lwzx r9,r16,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2ef1c
	if (!cr6.eq) goto loc_82F2EF1C;
	// bl 0x82f00728
	ctx.lr = 0x82F2EF00;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,22976
	ctx.r9.u64 = ctx.r11.u64 | 22976;
	// ori r8,r10,22975
	ctx.r8.u64 = ctx.r10.u64 | 22975;
	// li r7,1
	ctx.r7.s64 = 1;
	// stbx r22,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r22.u8);
	// stbx r7,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r7.u8);
loc_82F2EF1C:
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8319df40
	ctx.lr = 0x82F2EF30;
	sub_8319DF40(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,221
	ctx.r9.s64 = 14483456;
	// addi r20,r11,-20434
	ctx.r20.s64 = ctx.r11.s64 + -20434;
	// li r15,3
	ctx.r15.s64 = 3;
	// ori r17,r9,57072
	ctx.r17.u64 = ctx.r9.u64 | 57072;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2ef68
	if (cr6.eq) goto loc_82F2EF68;
	// stw r15,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r15.u32);
	// addi r5,r20,-2
	ctx.r5.s64 = ctx.r20.s64 + -2;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r3,r16,r17
	ctx.r3.u64 = ctx.r16.u64 + ctx.r17.u64;
	// bl 0x82f1fc80
	ctx.lr = 0x82F2EF68;
	sub_82F1FC80(ctx, base);
loc_82F2EF68:
	// addis r27,r16,222
	ctx.r27.s64 = ctx.r16.s64 + 14548992;
	// addi r27,r27,-12540
	ctx.r27.s64 = ctx.r27.s64 + -12540;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2efc4
	if (!cr6.eq) goto loc_82F2EFC4;
	// bl 0x82fe0df0
	ctx.lr = 0x82F2EF90;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ff74d0
	ctx.lr = 0x82F2EF98;
	sub_82FF74D0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2efa8
	if (cr6.eq) goto loc_82F2EFA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2EFA8;
	sub_82416268(ctx, base);
loc_82F2EFA8:
	// bl 0x82f919e0
	ctx.lr = 0x82F2EFAC;
	sub_82F919E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ffc750
	ctx.lr = 0x82F2EFB4;
	sub_82FFC750(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2efc4
	if (cr6.eq) goto loc_82F2EFC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2EFC4;
	sub_82416268(ctx, base);
loc_82F2EFC4:
	// cmplwi cr6,r26,12
	cr6.compare<uint32_t>(ctx.r26.u32, 12, xer);
	// beq cr6,0x82f2efd4
	if (cr6.eq) goto loc_82F2EFD4;
	// cmplwi cr6,r26,13
	cr6.compare<uint32_t>(ctx.r26.u32, 13, xer);
	// bne cr6,0x82f2f018
	if (!cr6.eq) goto loc_82F2F018;
loc_82F2EFD4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f018
	if (!cr6.eq) goto loc_82F2F018;
	// bl 0x82f81c18
	ctx.lr = 0x82F2EFF0;
	sub_82F81C18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f845e8
	ctx.lr = 0x82F2EFF8;
	sub_82F845E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f018
	if (cr6.eq) goto loc_82F2F018;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F2F018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F2F018:
	// cmplwi cr6,r26,12
	cr6.compare<uint32_t>(ctx.r26.u32, 12, xer);
	// bne cr6,0x82f2f05c
	if (!cr6.eq) goto loc_82F2F05C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f05c
	if (!cr6.eq) goto loc_82F2F05C;
	// bl 0x82f4c5f8
	ctx.lr = 0x82F2F03C;
	sub_82F4C5F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f4f380
	ctx.lr = 0x82F2F044;
	sub_82F4F380(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f05c
	if (cr6.eq) goto loc_82F2F05C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f11518
	ctx.lr = 0x82F2F054;
	sub_82F11518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F05C;
	sub_82416268(ctx, base);
loc_82F2F05C:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// clrlwi r28,r30,24
	ctx.r28.u64 = ctx.r30.u32 & 0xFF;
	// addi r21,r11,4896
	ctx.r21.s64 = ctx.r11.s64 + 4896;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// bne cr6,0x82f2f324
	if (!cr6.eq) goto loc_82F2F324;
	// cmplwi cr6,r26,12
	cr6.compare<uint32_t>(ctx.r26.u32, 12, xer);
	// beq cr6,0x82f2f088
	if (cr6.eq) goto loc_82F2F088;
	// cmplwi cr6,r26,13
	cr6.compare<uint32_t>(ctx.r26.u32, 13, xer);
	// bne cr6,0x82f2f214
	if (!cr6.eq) goto loc_82F2F214;
loc_82F2F088:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2F08C;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f7ff60
	ctx.lr = 0x82F2F094;
	sub_82F7FF60(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f0a4
	if (cr6.eq) goto loc_82F2F0A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F0A4;
	sub_82416268(ctx, base);
loc_82F2F0A4:
	// bl 0x82f71678
	ctx.lr = 0x82F2F0A8;
	sub_82F71678(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f717a8
	ctx.lr = 0x82F2F0B0;
	sub_82F717A8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f0c8
	if (cr6.eq) goto loc_82F2F0C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1ef70
	ctx.lr = 0x82F2F0C0;
	sub_82F1EF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F0C8;
	sub_82416268(ctx, base);
loc_82F2F0C8:
	// cmplwi cr6,r26,12
	cr6.compare<uint32_t>(ctx.r26.u32, 12, xer);
	// bne cr6,0x82f2f0f4
	if (!cr6.eq) goto loc_82F2F0F4;
	// bl 0x82f73db8
	ctx.lr = 0x82F2F0D4;
	sub_82F73DB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f77c48
	ctx.lr = 0x82F2F0DC;
	sub_82F77C48(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f110
	if (cr6.eq) goto loc_82F2F110;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f177b8
	ctx.lr = 0x82F2F0F0;
	sub_82F177B8(ctx, base);
	// b 0x82f2f110
	goto loc_82F2F110;
loc_82F2F0F4:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2F0F8;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fe48d0
	ctx.lr = 0x82F2F100;
	sub_82FE48D0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f110
	if (cr6.eq) goto loc_82F2F110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F110;
	sub_82416268(ctx, base);
loc_82F2F110:
	// bl 0x82f7c648
	ctx.lr = 0x82F2F114;
	sub_82F7C648(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f79298
	ctx.lr = 0x82F2F11C;
	sub_82F79298(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f134
	if (cr6.eq) goto loc_82F2F134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18fd0
	ctx.lr = 0x82F2F12C;
	sub_82F18FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F134;
	sub_82416268(ctx, base);
loc_82F2F134:
	// bl 0x82fe2668
	ctx.lr = 0x82F2F138;
	sub_82FE2668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fe2ed0
	ctx.lr = 0x82F2F140;
	sub_82FE2ED0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f150
	if (cr6.eq) goto loc_82F2F150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F150;
	sub_82416268(ctx, base);
loc_82F2F150:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2F154;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fe1e60
	ctx.lr = 0x82F2F15C;
	sub_82FE1E60(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f16c
	if (cr6.eq) goto loc_82F2F16C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F16C;
	sub_82416268(ctx, base);
loc_82F2F16C:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2F170;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f682d0
	ctx.lr = 0x82F2F178;
	sub_82F682D0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f188
	if (cr6.eq) goto loc_82F2F188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F188;
	sub_82416268(ctx, base);
loc_82F2F188:
	// bl 0x830ff290
	ctx.lr = 0x82F2F18C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F2F190;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82f2f1f8
	if (!cr6.eq) goto loc_82F2F1F8;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,52844
	ctx.r10.u64 = ctx.r11.u64 | 52844;
	// lbzx r9,r16,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r16.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82f2f1f8
	if (!cr6.eq) goto loc_82F2F1F8;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// add r10,r16,r17
	ctx.r10.u64 = ctx.r16.u64 + ctx.r17.u64;
	// ori r9,r11,50744
	ctx.r9.u64 = ctx.r11.u64 | 50744;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ldx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// bl 0x825a2298
	ctx.lr = 0x82F2F1CC;
	sub_825A2298(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f2f1f8
	if (cr6.eq) goto loc_82F2F1F8;
	// bl 0x82fe0df0
	ctx.lr = 0x82F2F1DC;
	sub_82FE0DF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ff7238
	ctx.lr = 0x82F2F1E8;
	sub_82FF7238(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f1f8
	if (cr6.eq) goto loc_82F2F1F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F1F8;
	sub_82416268(ctx, base);
loc_82F2F1F8:
	// bl 0x82f87828
	ctx.lr = 0x82F2F1FC;
	sub_82F87828(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f890a8
	ctx.lr = 0x82F2F204;
	sub_82F890A8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f214
	if (cr6.eq) goto loc_82F2F214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F214;
	sub_82416268(ctx, base);
loc_82F2F214:
	// cmplwi cr6,r26,12
	cr6.compare<uint32_t>(ctx.r26.u32, 12, xer);
	// bne cr6,0x82f2f300
	if (!cr6.eq) goto loc_82F2F300;
	// bl 0x82f86f18
	ctx.lr = 0x82F2F220;
	sub_82F86F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f872f0
	ctx.lr = 0x82F2F228;
	sub_82F872F0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f238
	if (cr6.eq) goto loc_82F2F238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F238;
	sub_82416268(ctx, base);
loc_82F2F238:
	// bl 0x82f5e128
	ctx.lr = 0x82F2F23C;
	sub_82F5E128(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f5e520
	ctx.lr = 0x82F2F244;
	sub_82F5E520(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f254
	if (cr6.eq) goto loc_82F2F254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F254;
	sub_82416268(ctx, base);
loc_82F2F254:
	// bl 0x82f68660
	ctx.lr = 0x82F2F258;
	sub_82F68660(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f6d7c0
	ctx.lr = 0x82F2F260;
	sub_82F6D7C0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f270
	if (cr6.eq) goto loc_82F2F270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F270;
	sub_82416268(ctx, base);
loc_82F2F270:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319df40
	ctx.lr = 0x82F2F280;
	sub_8319DF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2f2b0
	if (cr6.eq) goto loc_82F2F2B0;
	// li r11,4971
	ctx.r11.s64 = 4971;
	// stb r22,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r22.u8);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83157548
	ctx.lr = 0x82F2F2A8;
	sub_83157548(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831893b8
	ctx.lr = 0x82F2F2B0;
	sub_831893B8(ctx, base);
loc_82F2F2B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f324
	if (!cr6.eq) goto loc_82F2F324;
	// bl 0x82f58258
	ctx.lr = 0x82F2F2CC;
	sub_82F58258(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f5b038
	ctx.lr = 0x82F2F2D4;
	sub_82F5B038(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f2e8
	if (cr6.eq) goto loc_82F2F2E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83984058
	ctx.lr = 0x82F2F2E8;
	sub_83984058(ctx, base);
loc_82F2F2E8:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2F2EC;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2f324
	if (cr6.eq) goto loc_82F2F324;
	// bl 0x82f54500
	ctx.lr = 0x82F2F2FC;
	sub_82F54500(ctx, base);
	// b 0x82f2f31c
	goto loc_82F2F31C;
loc_82F2F300:
	// cmplwi cr6,r26,13
	cr6.compare<uint32_t>(ctx.r26.u32, 13, xer);
	// bne cr6,0x82f2f324
	if (!cr6.eq) goto loc_82F2F324;
	// bl 0x82fe0df0
	ctx.lr = 0x82F2F30C;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f53468
	ctx.lr = 0x82F2F314;
	sub_82F53468(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f324
	if (cr6.eq) goto loc_82F2F324;
loc_82F2F31C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F324;
	sub_82416268(ctx, base);
loc_82F2F324:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2F328;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ff5558
	ctx.lr = 0x82F2F330;
	sub_82FF5558(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f340
	if (cr6.eq) goto loc_82F2F340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F340;
	sub_82416268(ctx, base);
loc_82F2F340:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82f2f3e8
	if (!cr6.eq) goto loc_82F2F3E8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f39c
	if (!cr6.eq) goto loc_82F2F39C;
	// cmplwi cr6,r26,11
	cr6.compare<uint32_t>(ctx.r26.u32, 11, xer);
	// beq cr6,0x82f2f378
	if (cr6.eq) goto loc_82F2F378;
	// cmplwi cr6,r26,12
	cr6.compare<uint32_t>(ctx.r26.u32, 12, xer);
	// beq cr6,0x82f2f378
	if (cr6.eq) goto loc_82F2F378;
	// cmplwi cr6,r26,13
	cr6.compare<uint32_t>(ctx.r26.u32, 13, xer);
	// bne cr6,0x82f2f39c
	if (!cr6.eq) goto loc_82F2F39C;
loc_82F2F378:
	// bl 0x82fec098
	ctx.lr = 0x82F2F37C;
	sub_82FEC098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ff2b10
	ctx.lr = 0x82F2F384;
	sub_82FF2B10(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f39c
	if (cr6.eq) goto loc_82F2F39C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2ecd0
	ctx.lr = 0x82F2F394;
	sub_82F2ECD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F39C;
	sub_82416268(ctx, base);
loc_82F2F39C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82f2f3e8
	if (!cr6.eq) goto loc_82F2F3E8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f3e8
	if (!cr6.eq) goto loc_82F2F3E8;
	// cmplwi cr6,r26,12
	cr6.compare<uint32_t>(ctx.r26.u32, 12, xer);
	// beq cr6,0x82f2f3cc
	if (cr6.eq) goto loc_82F2F3CC;
	// cmplwi cr6,r26,13
	cr6.compare<uint32_t>(ctx.r26.u32, 13, xer);
	// bne cr6,0x82f2f3e8
	if (!cr6.eq) goto loc_82F2F3E8;
loc_82F2F3CC:
	// bl 0x82f450c0
	ctx.lr = 0x82F2F3D0;
	sub_82F450C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f43a48
	ctx.lr = 0x82F2F3D8;
	sub_82F43A48(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2f3e8
	if (cr6.eq) goto loc_82F2F3E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2F3E8;
	sub_82416268(ctx, base);
loc_82F2F3E8:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// li r18,23
	ctx.r18.s64 = 23;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// addi r19,r11,4944
	ctx.r19.s64 = ctx.r11.s64 + 4944;
	// bne cr6,0x82f2f754
	if (!cr6.eq) goto loc_82F2F754;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f754
	if (!cr6.eq) goto loc_82F2F754;
	// cmplwi cr6,r26,12
	cr6.compare<uint32_t>(ctx.r26.u32, 12, xer);
	// beq cr6,0x82f2f424
	if (cr6.eq) goto loc_82F2F424;
	// cmplwi cr6,r26,13
	cr6.compare<uint32_t>(ctx.r26.u32, 13, xer);
	// bne cr6,0x82f2f754
	if (!cr6.eq) goto loc_82F2F754;
loc_82F2F424:
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// add r27,r16,r17
	ctx.r27.u64 = ctx.r16.u64 + ctx.r17.u64;
	// bl 0x8317c510
	ctx.lr = 0x82F2F430;
	sub_8317C510(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r26,r11,4960
	ctx.r26.s64 = ctx.r11.s64 + 4960;
	// beq cr6,0x82f2f484
	if (cr6.eq) goto loc_82F2F484;
	// li r9,54
	ctx.r9.s64 = 54;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r8,r20,-2
	ctx.r8.s64 = ctx.r20.s64 + -2;
	// addi r7,r11,9088
	ctx.r7.s64 = ctx.r11.s64 + 9088;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aebe70
	ctx.lr = 0x82F2F484;
	sub_82AEBE70(ctx, base);
loc_82F2F484:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_82F2F490:
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,365
	cr6.compare<uint32_t>(ctx.r10.u32, 365, xer);
	// blt cr6,0x82f2f4a4
	if (cr6.lt) goto loc_82F2F4A4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82f2f4b0
	goto loc_82F2F4B0;
loc_82F2F4A4:
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mulli r11,r10,532
	ctx.r11.s64 = ctx.r10.s64 * 532;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82F2F4B0:
	// lhz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 400);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bge cr6,0x82f2f754
	if (!cr6.lt) goto loc_82F2F754;
	// cmplwi cr6,r10,365
	cr6.compare<uint32_t>(ctx.r10.u32, 365, xer);
	// blt cr6,0x82f2f4cc
	if (cr6.lt) goto loc_82F2F4CC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82f2f4d4
	goto loc_82F2F4D4;
loc_82F2F4CC:
	// mulli r11,r10,532
	ctx.r11.s64 = ctx.r10.s64 * 532;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82F2F4D4:
	// cmplwi cr6,r25,200
	cr6.compare<uint32_t>(ctx.r25.u32, 200, xer);
	// blt cr6,0x82f2f4e4
	if (cr6.lt) goto loc_82F2F4E4;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x82f2f4e8
	goto loc_82F2F4E8;
loc_82F2F4E4:
	// lhzx r4,r11,r24
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
loc_82F2F4E8:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f2f748
	if (cr6.eq) goto loc_82F2F748;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82F2F4FC;
	sub_8311C3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r5,588
	ctx.r5.s64 = 588;
	// bl 0x831ce980
	ctx.lr = 0x82F2F50C;
	sub_831CE980(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,296(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82f2f52c
	if (cr6.eq) goto loc_82F2F52C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82f2f554
	goto loc_82F2F554;
loc_82F2F52C:
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82f2f544
	if (cr6.eq) goto loc_82F2F544;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82f2f554
	goto loc_82F2F554;
loc_82F2F544:
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_82F2F554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2f744
	if (cr6.eq) goto loc_82F2F744;
	// lwz r31,292(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r4,r31,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// sth r4,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r4.u16);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82f2f744
	if (cr6.eq) goto loc_82F2F744;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F2F57C;
	sub_8311C338(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82f2f744
	if (!cr6.eq) goto loc_82F2F744;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lhz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// bl 0x8311c338
	ctx.lr = 0x82F2F594;
	sub_8311C338(ctx, base);
	// lhz r11,78(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82f2f744
	if (!cr6.eq) goto loc_82F2F744;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lhz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// bl 0x8311c338
	ctx.lr = 0x82F2F5AC;
	sub_8311C338(ctx, base);
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// rlwinm r10,r11,0,19,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F80;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// beq cr6,0x82f2f744
	if (cr6.eq) goto loc_82F2F744;
	// rlwinm r11,r31,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFF;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// bne cr6,0x82f2f5d0
	if (!cr6.eq) goto loc_82F2F5D0;
	// li r28,22
	ctx.r28.s64 = 22;
	// b 0x82f2f5ec
	goto loc_82F2F5EC;
loc_82F2F5D0:
	// cmplwi cr6,r11,52
	cr6.compare<uint32_t>(ctx.r11.u32, 52, xer);
	// bne cr6,0x82f2f5e0
	if (!cr6.eq) goto loc_82F2F5E0;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// b 0x82f2f5ec
	goto loc_82F2F5EC;
loc_82F2F5E0:
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// bne cr6,0x82f2f744
	if (!cr6.eq) goto loc_82F2F744;
	// li r28,24
	ctx.r28.s64 = 24;
loc_82F2F5EC:
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// bl 0x831178a0
	ctx.lr = 0x82F2F60C;
	sub_831178A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83156c10
	ctx.lr = 0x82F2F61C;
	sub_83156C10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2f668
	if (!cr6.eq) goto loc_82F2F668;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r23,r23,2
	ctx.r23.u64 = ctx.r23.u64 | 2;
	// bl 0x831178a0
	ctx.lr = 0x82F2F648;
	sub_831178A0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x83156c10
	ctx.lr = 0x82F2F658;
	sub_83156C10(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2f66c
	if (cr6.eq) goto loc_82F2F66C;
loc_82F2F668:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2F66C:
	// rlwinm r10,r23,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f2f680
	if (cr6.eq) goto loc_82F2F680;
	// rlwinm r23,r23,0,31,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82F2F680:
	// clrlwi r10,r23,31
	ctx.r10.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f2f690
	if (cr6.eq) goto loc_82F2F690;
	// rlwinm r23,r23,0,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
loc_82F2F690:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2f744
	if (!cr6.eq) goto loc_82F2F744;
	// lhz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
loc_82F2F6AC:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82c0b048
	ctx.lr = 0x82F2F6BC;
	sub_82C0B048(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82f2f6e8
	if (!cr6.eq) goto loc_82F2F6E8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82c0b048
	ctx.lr = 0x82F2F6D8;
	sub_82C0B048(ctx, base);
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f2f6fc
	if (cr6.eq) goto loc_82F2F6FC;
loc_82F2F6E8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r31,200
	cr6.compare<uint32_t>(ctx.r31.u32, 200, xer);
	// blt cr6,0x82f2f6ac
	if (cr6.lt) goto loc_82F2F6AC;
	// b 0x82f2f700
	goto loc_82F2F700;
loc_82F2F6FC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F2F700:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2f744
	if (!cr6.eq) goto loc_82F2F744;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F2F718;
	sub_8319DC20(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// bl 0x82aebe70
	ctx.lr = 0x82F2F744;
	sub_82AEBE70(ctx, base);
loc_82F2F744:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_82F2F748:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// b 0x82f2f490
	goto loc_82F2F490;
loc_82F2F754:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r20,25
	ctx.r20.s64 = 25;
	// li r21,26
	ctx.r21.s64 = 26;
	// li r24,28
	ctx.r24.s64 = 28;
	// li r25,29
	ctx.r25.s64 = 29;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82f2f838
	if (!cr6.eq) goto loc_82F2F838;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831178a0
	ctx.lr = 0x82F2F790;
	sub_831178A0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8316fb10
	ctx.lr = 0x82F2F798;
	sub_8316FB10(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f2fb3c
	if (cr6.eq) goto loc_82F2FB3C;
	// bl 0x83197440
	ctx.lr = 0x82F2F7AC;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2fb3c
	if (cr6.eq) goto loc_82F2FB3C;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x831178a0
	ctx.lr = 0x82F2F7D0;
	sub_831178A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8315c1b0
	ctx.lr = 0x82F2F7E0;
	sub_8315C1B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2f80c
	if (!cr6.eq) goto loc_82F2F80C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2f810
	if (cr6.eq) goto loc_82F2F810;
loc_82F2F80C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2F810:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2fb3c
	if (cr6.eq) goto loc_82F2FB3C;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314cbe8
	ctx.lr = 0x82F2F834;
	sub_8314CBE8(ctx, base);
	// b 0x82f2fb3c
	goto loc_82F2FB3C;
loc_82F2F838:
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x82f2fd84
	if (!cr6.eq) goto loc_82F2FD84;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8315c470
	ctx.lr = 0x82F2F84C;
	sub_8315C470(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// xor r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f878
	if (!cr6.eq) goto loc_82F2F878;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2f87c
	if (cr6.eq) goto loc_82F2F87C;
loc_82F2F878:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2F87C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2f8b8
	if (!cr6.eq) goto loc_82F2F8B8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8311c148
	ctx.lr = 0x82F2F890;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82f2f8b8
	if (cr6.eq) goto loc_82F2F8B8;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314cbe8
	ctx.lr = 0x82F2F8B8;
	sub_8314CBE8(ctx, base);
loc_82F2F8B8:
	// li r4,43
	ctx.r4.s64 = 43;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8315c470
	ctx.lr = 0x82F2F8C4;
	sub_8315C470(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// xor r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f8f0
	if (!cr6.eq) goto loc_82F2F8F0;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2f8f4
	if (cr6.eq) goto loc_82F2F8F4;
loc_82F2F8F0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2F8F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2f92c
	if (!cr6.eq) goto loc_82F2F92C;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8311c148
	ctx.lr = 0x82F2F908;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82f2f92c
	if (cr6.eq) goto loc_82F2F92C;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314cbe8
	ctx.lr = 0x82F2F92C;
	sub_8314CBE8(ctx, base);
loc_82F2F92C:
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8315c470
	ctx.lr = 0x82F2F938;
	sub_8315C470(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// xor r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f964
	if (!cr6.eq) goto loc_82F2F964;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2f968
	if (cr6.eq) goto loc_82F2F968;
loc_82F2F964:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2F968:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2f9a4
	if (!cr6.eq) goto loc_82F2F9A4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8311c148
	ctx.lr = 0x82F2F97C;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82f2f9a4
	if (cr6.eq) goto loc_82F2F9A4;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314cbe8
	ctx.lr = 0x82F2F9A4;
	sub_8314CBE8(ctx, base);
loc_82F2F9A4:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8315c470
	ctx.lr = 0x82F2F9B0;
	sub_8315C470(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// xor r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2f9dc
	if (!cr6.eq) goto loc_82F2F9DC;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2f9e0
	if (cr6.eq) goto loc_82F2F9E0;
loc_82F2F9DC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2F9E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2fa18
	if (!cr6.eq) goto loc_82F2FA18;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8311c148
	ctx.lr = 0x82F2F9F4;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82f2fa18
	if (cr6.eq) goto loc_82F2FA18;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314cbe8
	ctx.lr = 0x82F2FA18;
	sub_8314CBE8(ctx, base);
loc_82F2FA18:
	// li r4,35
	ctx.r4.s64 = 35;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8315c470
	ctx.lr = 0x82F2FA24;
	sub_8315C470(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// xor r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2fa50
	if (!cr6.eq) goto loc_82F2FA50;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2fa54
	if (cr6.eq) goto loc_82F2FA54;
loc_82F2FA50:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2FA54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2fab0
	if (!cr6.eq) goto loc_82F2FAB0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8311c148
	ctx.lr = 0x82F2FA68;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82f2fab0
	if (cr6.eq) goto loc_82F2FAB0;
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82f2fab0
	if (cr6.gt) goto loc_82F2FAB0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f2fd6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2FD6C;
	// bdzf 4*cr6+eq,0x82f2fd58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2FD58;
	// bdzf 4*cr6+eq,0x82f2fd2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F2FD2C;
	// bne cr6,0x82f2fd44
	if (!cr6.eq) goto loc_82F2FD44;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82F2FAAC:
	// bl 0x8314cbe8
	ctx.lr = 0x82F2FAB0;
	sub_8314CBE8(ctx, base);
loc_82F2FAB0:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2fb20
	if (!cr6.eq) goto loc_82F2FB20;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2fb20
	if (!cr6.eq) goto loc_82F2FB20;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,39024
	ctx.r9.u64 = ctx.r11.u64 | 39024;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwzx r8,r16,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r9.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x8314cbe8
	ctx.lr = 0x82F2FAFC;
	sub_8314CBE8(ctx, base);
	// lis r7,220
	ctx.r7.s64 = 14417920;
	// li r6,13
	ctx.r6.s64 = 13;
	// ori r5,r7,46600
	ctx.r5.u64 = ctx.r7.u64 | 46600;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwzx r11,r16,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r5.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x8314cbe8
	ctx.lr = 0x82F2FB20;
	sub_8314CBE8(ctx, base);
loc_82F2FB20:
	// bl 0x82fe0df0
	ctx.lr = 0x82F2FB24;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f068d8
	ctx.lr = 0x82F2FB2C;
	sub_82F068D8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f2fb3c
	if (cr6.eq) goto loc_82F2FB3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2FB3C;
	sub_82416268(ctx, base);
loc_82F2FB3C:
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8314d470
	ctx.lr = 0x82F2FB4C;
	sub_8314D470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// lis r9,220
	ctx.r9.s64 = 14417920;
	// ori r29,r10,46752
	ctx.r29.u64 = ctx.r10.u64 | 46752;
	// li r28,2
	ctx.r28.s64 = 2;
	// ori r30,r9,46732
	ctx.r30.u64 = ctx.r9.u64 | 46732;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f303fc
	if (!cr6.eq) goto loc_82F303FC;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f303fc
	if (!cr6.eq) goto loc_82F303FC;
	// addis r31,r16,221
	ctx.r31.s64 = ctx.r16.s64 + 14483456;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r31,r31,1613
	ctx.r31.s64 = ctx.r31.s64 + 1613;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F2FB8C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2fba0
	if (cr6.eq) goto loc_82F2FBA0;
	// stb r22,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r22.u8);
loc_82F2FBA0:
	// lwz r23,200(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2fbd0
	if (cr6.eq) goto loc_82F2FBD0;
	// li r11,44
	ctx.r11.s64 = 44;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82F2FBD0;
	sub_835977D8(ctx, base);
loc_82F2FBD0:
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82F2FBE0;
	sub_835977D8(ctx, base);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82F2FBF0;
	sub_835977D8(ctx, base);
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82F2FC04;
	sub_835977D8(ctx, base);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82F2FC14;
	sub_835977D8(ctx, base);
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82F2FC24;
	sub_835977D8(ctx, base);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82F2FC34;
	sub_835977D8(ctx, base);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82F2FC44;
	sub_835977D8(ctx, base);
	// li r10,55
	ctx.r10.s64 = 55;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x835977d8
	ctx.lr = 0x82F2FC58;
	sub_835977D8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// add r3,r16,r17
	ctx.r3.u64 = ctx.r16.u64 + ctx.r17.u64;
	// bl 0x83133488
	ctx.lr = 0x82F2FC64;
	sub_83133488(ctx, base);
	// li r10,100
	ctx.r10.s64 = 100;
	// addis r11,r16,222
	ctx.r11.s64 = ctx.r16.s64 + 14548992;
	// lwz r27,136(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,-6244
	ctx.r11.s64 = ctx.r11.s64 + -6244;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82F2FC78:
	// ld r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// stw r22,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r22.u32);
	// stw r22,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r22.u32);
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// stw r22,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r22.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stw r22,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r22.u32);
	// stw r22,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r22.u32);
	// stw r22,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r22.u32);
	// stwu r22,40(r11)
	ea = 40 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82f2fc78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F2FC78;
	// addis r3,r16,222
	ctx.r3.s64 = ctx.r16.s64 + 14548992;
	// addi r3,r3,-8252
	ctx.r3.s64 = ctx.r3.s64 + -8252;
	// bl 0x82f2e1a8
	ctx.lr = 0x82F2FCB0;
	sub_82F2E1A8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,57340
	ctx.r10.u64 = ctx.r11.u64 | 57340;
	// stwx r22,r16,r10
	PPC_STORE_U32(ctx.r16.u32 + ctx.r10.u32, ctx.r22.u32);
	// bl 0x82fe0df0
	ctx.lr = 0x82F2FCC0;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f2fcd8
	if (cr6.eq) goto loc_82F2FCD8;
	// bl 0x82fe6178
	ctx.lr = 0x82F2FCD0;
	sub_82FE6178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F2FCD8;
	sub_82416268(ctx, base);
loc_82F2FCD8:
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r25,12
	cr6.compare<uint32_t>(ctx.r25.u32, 12, xer);
	// bne cr6,0x82f3035c
	if (!cr6.eq) goto loc_82F3035C;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r31,3
	ctx.r31.s64 = 196608;
	// lis r24,3
	ctx.r24.s64 = 196608;
	// ori r3,r6,44552
	ctx.r3.u64 = ctx.r6.u64 | 44552;
	// ori r4,r5,45028
	ctx.r4.u64 = ctx.r5.u64 | 45028;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// add r10,r16,r14
	ctx.r10.u64 = ctx.r16.u64 + ctx.r14.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// ori r9,r11,44076
	ctx.r9.u64 = ctx.r11.u64 | 44076;
	// ori r5,r31,45504
	ctx.r5.u64 = ctx.r31.u64 | 45504;
	// ori r6,r24,45980
	ctx.r6.u64 = ctx.r24.u64 | 45980;
loc_82F2FD18:
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// blt cr6,0x82f30038
	if (cr6.lt) goto loc_82F30038;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82f30040
	goto loc_82F30040;
loc_82F2FD2C:
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// b 0x82f2faac
	goto loc_82F2FAAC;
loc_82F2FD44:
	// stw r22,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r22.u32);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// stw r24,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// b 0x82f2faac
	goto loc_82F2FAAC;
loc_82F2FD58:
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x82f2faac
	goto loc_82F2FAAC;
loc_82F2FD6C:
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x82f2faac
	goto loc_82F2FAAC;
loc_82F2FD84:
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bne cr6,0x82f2fb3c
	if (!cr6.eq) goto loc_82F2FB3C;
	// bl 0x831156e8
	ctx.lr = 0x82F2FD90;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r31,r11,222
	ctx.r31.s64 = ctx.r11.s64 + 14548992;
	// addi r31,r31,26340
	ctx.r31.s64 = ctx.r31.s64 + 26340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ae2db8
	ctx.lr = 0x82F2FDA4;
	sub_82AE2DB8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-19944
	ctx.r29.s64 = ctx.r11.s64 + -19944;
	// addi r27,r31,3716
	ctx.r27.s64 = ctx.r31.s64 + 3716;
	// li r26,57
	ctx.r26.s64 = 57;
loc_82F2FDB8:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r30,r23,4
	ctx.r30.u64 = ctx.r23.u64 | 4;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// xor r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2fdec
	if (!cr6.eq) goto loc_82F2FDEC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// xor r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2fdf0
	if (cr6.eq) goto loc_82F2FDF0;
loc_82F2FDEC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2FDF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2fe68
	if (!cr6.eq) goto loc_82F2FE68;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r10,r30,8
	ctx.r10.u64 = ctx.r30.u64 | 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r30,r10,16
	ctx.r30.u64 = ctx.r10.u64 | 16;
	// bl 0x8315c1b0
	ctx.lr = 0x82F2FE14;
	sub_8315C1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2fe3c
	if (!cr6.eq) goto loc_82F2FE3C;
	// xor r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2fe40
	if (cr6.eq) goto loc_82F2FE40;
loc_82F2FE3C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2FE40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2fe68
	if (cr6.eq) goto loc_82F2FE68;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83197440
	ctx.lr = 0x82F2FE58;
	sub_83197440(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2fe6c
	if (!cr6.eq) goto loc_82F2FE6C;
loc_82F2FE68:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2FE6C:
	// rlwinm r10,r30,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f2fe80
	if (cr6.eq) goto loc_82F2FE80;
	// rlwinm r30,r30,0,28,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82F2FE80:
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f2fe90
	if (cr6.eq) goto loc_82F2FE90;
	// rlwinm r30,r30,0,29,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_82F2FE90:
	// rlwinm r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f2fea0
	if (cr6.eq) goto loc_82F2FEA0;
	// rlwinm r30,r30,0,30,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82F2FEA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2fef0
	if (cr6.eq) goto loc_82F2FEF0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
loc_82F2FEBC:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82f2fef0
	if (cr6.eq) goto loc_82F2FEF0;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x82f2fee4
	if (cr6.eq) goto loc_82F2FEE4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x82f2febc
	if (cr6.lt) goto loc_82F2FEBC;
	// b 0x82f2fef0
	goto loc_82F2FEF0;
loc_82F2FEE4:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r10,r28
	PPC_STORE_U16(ctx.r10.u32 + ctx.r28.u32, ctx.r8.u16);
loc_82F2FEF0:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r23,r30,32
	ctx.r23.u64 = ctx.r30.u64 | 32;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// xor r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f2ff24
	if (!cr6.eq) goto loc_82F2FF24;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// xor r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f2ff28
	if (cr6.eq) goto loc_82F2FF28;
loc_82F2FF24:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2FF28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f2ffa0
	if (!cr6.eq) goto loc_82F2FFA0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r10,r23,64
	ctx.r10.u64 = ctx.r23.u64 | 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r23,r10,128
	ctx.r23.u64 = ctx.r10.u64 | 128;
	// bl 0x8315c1b0
	ctx.lr = 0x82F2FF4C;
	sub_8315C1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f2ff74
	if (!cr6.eq) goto loc_82F2FF74;
	// xor r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f2ff78
	if (cr6.eq) goto loc_82F2FF78;
loc_82F2FF74:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2FF78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f2ffa0
	if (cr6.eq) goto loc_82F2FFA0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83197440
	ctx.lr = 0x82F2FF90;
	sub_83197440(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f2ffa4
	if (!cr6.eq) goto loc_82F2FFA4;
loc_82F2FFA0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F2FFA4:
	// rlwinm r10,r23,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x80;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f2ffb8
	if (cr6.eq) goto loc_82F2FFB8;
	// rlwinm r23,r23,0,25,23
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_82F2FFB8:
	// rlwinm r10,r23,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f2ffc8
	if (cr6.eq) goto loc_82F2FFC8;
	// rlwinm r23,r23,0,26,24
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
loc_82F2FFC8:
	// rlwinm r10,r23,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f2ffd8
	if (cr6.eq) goto loc_82F2FFD8;
	// rlwinm r23,r23,0,27,25
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_82F2FFD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f30028
	if (cr6.eq) goto loc_82F30028;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
loc_82F2FFF4:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82f30028
	if (cr6.eq) goto loc_82F30028;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x82f3001c
	if (cr6.eq) goto loc_82F3001C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x82f2fff4
	if (cr6.lt) goto loc_82F2FFF4;
	// b 0x82f30028
	goto loc_82F30028;
loc_82F3001C:
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r10,r27
	PPC_STORE_U16(ctx.r10.u32 + ctx.r27.u32, ctx.r8.u16);
loc_82F30028:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82f2fdb8
	if (!cr0.eq) goto loc_82F2FDB8;
	// b 0x82f2fb20
	goto loc_82F2FB20;
loc_82F30038:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82F30040:
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// lwz r31,168(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r21,176(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r24,70
	cr6.compare<uint32_t>(ctx.r24.u32, 70, xer);
	// lwz r20,200(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r24,208(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r19,184(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r18,192(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r31,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r31.u32);
	// stw r21,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r21.u32);
	// stw r20,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r20.u32);
	// stw r24,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r24.u32);
	// stw r19,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r19.u32);
	// stw r18,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r18.u32);
	// stw r22,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r22.u32);
	// stw r22,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r22.u32);
	// stw r22,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r22.u32);
	// stw r22,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r22.u32);
	// stw r22,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r22.u32);
	// stw r22,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r22.u32);
	// blt cr6,0x82f3009c
	if (cr6.lt) goto loc_82F3009C;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82f300a4
	goto loc_82F300A4;
loc_82F3009C:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82F300A4:
	// lwz r31,168(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r7,70
	cr6.compare<uint32_t>(ctx.r7.u32, 70, xer);
	// stw r31,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r31.u32);
	// lwz r31,176(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// stw r31,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r31.u32);
	// lwz r31,200(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
	// lwz r31,208(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r31,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r31.u32);
	// lwz r31,184(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r31,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r31.u32);
	// lwz r31,192(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r31,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r31.u32);
	// stw r22,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r22.u32);
	// stw r22,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r22.u32);
	// stw r22,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r22.u32);
	// stw r22,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r22.u32);
	// stw r22,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r22.u32);
	// stw r22,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r22.u32);
	// blt cr6,0x82f300fc
	if (cr6.lt) goto loc_82F300FC;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82f30104
	goto loc_82F30104;
loc_82F300FC:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82F30104:
	// lwz r31,168(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r24,r7,1
	ctx.r24.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r24,70
	cr6.compare<uint32_t>(ctx.r24.u32, 70, xer);
	// stw r31,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r31.u32);
	// lwz r31,176(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// stw r31,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r31.u32);
	// lwz r31,200(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
	// lwz r31,208(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r31,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r31.u32);
	// lwz r31,184(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r31,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r31.u32);
	// lwz r31,192(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r31,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r31.u32);
	// stw r22,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r22.u32);
	// stw r22,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r22.u32);
	// stw r22,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r22.u32);
	// stw r22,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r22.u32);
	// stw r22,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r22.u32);
	// stw r22,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r22.u32);
	// blt cr6,0x82f30160
	if (cr6.lt) goto loc_82F30160;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82f30168
	goto loc_82F30168;
loc_82F30160:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82F30168:
	// lwz r31,168(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r24,r7,2
	ctx.r24.s64 = ctx.r7.s64 + 2;
	// cmplwi cr6,r24,70
	cr6.compare<uint32_t>(ctx.r24.u32, 70, xer);
	// stw r31,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r31.u32);
	// lwz r31,176(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// stw r31,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r31.u32);
	// lwz r31,200(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
	// lwz r31,208(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r31,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r31.u32);
	// lwz r31,184(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r31,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r31.u32);
	// lwz r31,192(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r31,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r31.u32);
	// stw r22,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r22.u32);
	// stw r22,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r22.u32);
	// stw r22,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r22.u32);
	// stw r22,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r22.u32);
	// stw r22,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r22.u32);
	// stw r22,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r22.u32);
	// blt cr6,0x82f301c4
	if (cr6.lt) goto loc_82F301C4;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82f301cc
	goto loc_82F301CC;
loc_82F301C4:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_82F301CC:
	// lwz r31,168(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// addi r8,r8,2380
	ctx.r8.s64 = ctx.r8.s64 + 2380;
	// addi r24,r7,-2
	ctx.r24.s64 = ctx.r7.s64 + -2;
	// cmplwi cr6,r24,70
	cr6.compare<uint32_t>(ctx.r24.u32, 70, xer);
	// stw r31,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r31.u32);
	// lwz r31,176(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// stw r31,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r31.u32);
	// lwz r31,200(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
	// lwz r31,208(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r31,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r31.u32);
	// lwz r31,184(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r31,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r31.u32);
	// lwz r31,192(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r31,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r31.u32);
	// stw r22,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r22.u32);
	// stw r22,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r22.u32);
	// stw r22,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r22.u32);
	// stw r22,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r22.u32);
	// stw r22,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r22.u32);
	// stw r22,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r22.u32);
	// blt cr6,0x82f2fd18
	if (cr6.lt) goto loc_82F2FD18;
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// lis r10,222
	ctx.r10.s64 = 14548992;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ori r9,r11,31068
	ctx.r9.u64 = ctx.r11.u64 | 31068;
	// ori r8,r10,31064
	ctx.r8.u64 = ctx.r10.u64 | 31064;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stwx r22,r16,r9
	PPC_STORE_U32(ctx.r16.u32 + ctx.r9.u32, ctx.r22.u32);
	// stwx r22,r16,r8
	PPC_STORE_U32(ctx.r16.u32 + ctx.r8.u32, ctx.r22.u32);
	// bl 0x831178a0
	ctx.lr = 0x82F30258;
	sub_831178A0(ctx, base);
	// bl 0x8314c958
	ctx.lr = 0x82F3025C;
	sub_8314C958(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82f2e420
	ctx.lr = 0x82F3026C;
	sub_82F2E420(ctx, base);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// sth r26,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r26.u16);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// bl 0x82acef18
	ctx.lr = 0x82F30284;
	sub_82ACEF18(ctx, base);
	// addis r6,r16,214
	ctx.r6.s64 = ctx.r16.s64 + 14024704;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r6,r6,10896
	ctx.r6.s64 = ctx.r6.s64 + 10896;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_82F3029C:
	// cmplwi cr6,r8,72
	cr6.compare<uint32_t>(ctx.r8.u32, 72, xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// bge cr6,0x82f302ac
	if (!cr6.lt) goto loc_82F302AC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82F302AC:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// bne cr6,0x82f302cc
	if (!cr6.eq) goto loc_82F302CC;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// b 0x82f302f4
	goto loc_82F302F4;
loc_82F302CC:
	// lhz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f302ec
	if (!cr6.eq) goto loc_82F302EC;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82f302f0
	if (cr6.eq) goto loc_82F302F0;
loc_82F302EC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82F302F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F302F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3034c
	if (!cr6.eq) goto loc_82F3034C;
	// lhz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82f3034c
	if (!cr6.eq) goto loc_82F3034C;
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(ctx.r11.u32, 2048, xer);
	// bne cr6,0x82f3034c
	if (!cr6.eq) goto loc_82F3034C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 + 28;
loc_82F30324:
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x82f30398
	if (cr6.eq) goto loc_82F30398;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,188
	ctx.r10.s64 = ctx.r10.s64 + 188;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// blt cr6,0x82f30324
	if (cr6.lt) goto loc_82F30324;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
loc_82F30344:
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82F3034C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,5852
	ctx.r7.s64 = ctx.r7.s64 + 5852;
	// cmplwi cr6,r8,72
	cr6.compare<uint32_t>(ctx.r8.u32, 72, xer);
	// blt cr6,0x82f3029c
	if (cr6.lt) goto loc_82F3029C;
loc_82F3035C:
	// lwzx r11,r16,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r30.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82acf018
	ctx.lr = 0x82F30370;
	sub_82ACF018(ctx, base);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f30388
	if (cr6.eq) goto loc_82F30388;
	// li r11,365
	ctx.r11.s64 = 365;
	// divwu r10,r3,r11
	ctx.r10.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82F30388:
	// cmplwi cr6,r25,11
	cr6.compare<uint32_t>(ctx.r25.u32, 11, xer);
	// bne cr6,0x82f303a8
	if (!cr6.eq) goto loc_82F303A8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82f303c4
	goto loc_82F303C4;
loc_82F30398:
	// mulli r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 * 188;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x82f30344
	goto loc_82F30344;
loc_82F303A8:
	// cmplwi cr6,r25,12
	cr6.compare<uint32_t>(ctx.r25.u32, 12, xer);
	// bne cr6,0x82f303b8
	if (!cr6.eq) goto loc_82F303B8;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82f303c4
	goto loc_82F303C4;
loc_82F303B8:
	// cmplwi cr6,r25,13
	cr6.compare<uint32_t>(ctx.r25.u32, 13, xer);
	// bne cr6,0x82f303d4
	if (!cr6.eq) goto loc_82F303D4;
	// li r11,76
	ctx.r11.s64 = 76;
loc_82F303C4:
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8314cbe8
	ctx.lr = 0x82F303D4;
	sub_8314CBE8(ctx, base);
loc_82F303D4:
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f303ec
	if (cr6.eq) goto loc_82F303EC;
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825952b8
	ctx.lr = 0x82F303EC;
	sub_825952B8(ctx, base);
loc_82F303EC:
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// b 0x82f30404
	goto loc_82F30404;
loc_82F303FC:
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r23,200(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_82F30404:
	// stb r22,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r22.u8);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stb r22,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r22.u8);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8316f298
	ctx.lr = 0x82F30418;
	sub_8316F298(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82bb08f0
	ctx.lr = 0x82F30424;
	sub_82BB08F0(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82f208e8
	ctx.lr = 0x82F3042C;
	sub_82F208E8(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x831bcb00
	ctx.lr = 0x82F30434;
	sub_831BCB00(ctx, base);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// ori r10,r11,1616
	ctx.r10.u64 = ctx.r11.u64 | 1616;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r11,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stwx r11,r16,r10
	PPC_STORE_U32(ctx.r16.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F30470;
	sub_8319DC20(ctx, base);
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,365
	cr6.compare<uint32_t>(ctx.r10.u32, 365, xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x82f30530
	if (cr6.lt) goto loc_82F30530;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-365
	ctx.r10.s64 = ctx.r10.s64 + -365;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,365
	cr6.compare<uint32_t>(ctx.r11.u32, 365, xer);
	// bge cr6,0x82f304a8
	if (!cr6.lt) goto loc_82F304A8;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_82F304A8:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r10,r10,-2426
	ctx.r10.s64 = ctx.r10.s64 + -2426;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// bl 0x82fe0df0
	ctx.lr = 0x82F304C4;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f06c48
	ctx.lr = 0x82F304CC;
	sub_82F06C48(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f304dc
	if (cr6.eq) goto loc_82F304DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F304DC;
	sub_82416268(ctx, base);
loc_82F304DC:
	// cmplwi cr6,r25,11
	cr6.compare<uint32_t>(ctx.r25.u32, 11, xer);
	// beq cr6,0x82f30500
	if (cr6.eq) goto loc_82F30500;
	// bl 0x82f450c0
	ctx.lr = 0x82F304E8;
	sub_82F450C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f453c0
	ctx.lr = 0x82F304F0;
	sub_82F453C0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f30500
	if (cr6.eq) goto loc_82F30500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F30500;
	sub_82416268(ctx, base);
loc_82F30500:
	// cmplwi cr6,r25,12
	cr6.compare<uint32_t>(ctx.r25.u32, 12, xer);
	// bne cr6,0x82f30544
	if (!cr6.eq) goto loc_82F30544;
	// bl 0x82f4c5f8
	ctx.lr = 0x82F3050C;
	sub_82F4C5F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82F30514;
	sub_83102DB0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f30544
	if (cr6.eq) goto loc_82F30544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f11518
	ctx.lr = 0x82F30524;
	sub_82F11518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F3052C;
	sub_82416268(ctx, base);
	// b 0x82f30544
	goto loc_82F30544;
loc_82F30530:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// cmplwi cr6,r10,365
	cr6.compare<uint32_t>(ctx.r10.u32, 365, xer);
	// blt cr6,0x82f30544
	if (cr6.lt) goto loc_82F30544;
	// sth r22,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r22.u16);
loc_82F30544:
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f3057c
	if (!cr6.eq) goto loc_82F3057C;
	// lwzx r11,r16,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r30.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82F30564;
	sub_8319DC20(ctx, base);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x82bb07d8
	ctx.lr = 0x82F3056C;
	sub_82BB07D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f3057c
	if (cr6.eq) goto loc_82F3057C;
	// stb r22,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r22.u8);
loc_82F3057C:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f305ec
	if (!cr6.eq) goto loc_82F305EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f305ec
	if (!cr6.eq) goto loc_82F305EC;
	// bl 0x82f58258
	ctx.lr = 0x82F305A4;
	sub_82F58258(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82F305B0;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f55da0
	ctx.lr = 0x82F305B8;
	sub_82F55DA0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f305ec
	if (cr6.eq) goto loc_82F305EC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f305d8
	if (cr6.eq) goto loc_82F305D8;
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x825952b8
	ctx.lr = 0x82F305D8;
	sub_825952B8(ctx, base);
loc_82F305D8:
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// bl 0x82416268
	ctx.lr = 0x82F305EC;
	sub_82416268(ctx, base);
loc_82F305EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8316bc30
	ctx.lr = 0x82F305F4;
	sub_8316BC30(ctx, base);
	// stb r22,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r22.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F305FC;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f30610
	if (cr6.eq) goto loc_82F30610;
	// bl 0x83170428
	ctx.lr = 0x82F30610;
	sub_83170428(ctx, base);
loc_82F30610:
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30618"))) PPC_WEAK_FUNC(sub_82F30618);
PPC_FUNC_IMPL(__imp__sub_82F30618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f30680
	if (cr6.eq) goto loc_82F30680;
	// bl 0x82f2ed68
	ctx.lr = 0x82F3063C;
	sub_82F2ED68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2e538
	ctx.lr = 0x82F30644;
	sub_82F2E538(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f30674
	if (!cr6.eq) goto loc_82F30674;
loc_82F30650:
	// bl 0x82f2d2c8
	ctx.lr = 0x82F30654;
	sub_82F2D2C8(ctx, base);
	// bl 0x82f33c58
	ctx.lr = 0x82F30658;
	sub_82F33C58(ctx, base);
	// bl 0x82f32968
	ctx.lr = 0x82F3065C;
	sub_82F32968(ctx, base);
	// bl 0x82f2ed68
	ctx.lr = 0x82F30660;
	sub_82F2ED68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2e538
	ctx.lr = 0x82F30668;
	sub_82F2E538(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f30650
	if (cr6.eq) goto loc_82F30650;
loc_82F30674:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,92(r11)
	PPC_STORE_U8(ctx.r11.u32 + 92, ctx.r10.u8);
loc_82F30680:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30698"))) PPC_WEAK_FUNC(sub_82F30698);
PPC_FUNC_IMPL(__imp__sub_82F30698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19528
	ctx.r9.s64 = ctx.r11.s64 + -19528;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F306D0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f306e8
	if (cr6.eq) goto loc_82F306E8;
	// bl 0x82416268
	ctx.lr = 0x82F306E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F306E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30700"))) PPC_WEAK_FUNC(sub_82F30700);
PPC_FUNC_IMPL(__imp__sub_82F30700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F30730;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f30764
	if (cr6.eq) goto loc_82F30764;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F30744;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19528
	ctx.r9.s64 = ctx.r11.s64 + -19528;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f30768
	goto loc_82F30768;
loc_82F30764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F30768:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30780"))) PPC_WEAK_FUNC(sub_82F30780);
PPC_FUNC_IMPL(__imp__sub_82F30780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f30790
	if (cr6.lt) goto loc_82F30790;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F30790:
	// b 0x82f30700
	sub_82F30700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30794"))) PPC_WEAK_FUNC(sub_82F30794);
PPC_FUNC_IMPL(__imp__sub_82F30794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30798"))) PPC_WEAK_FUNC(sub_82F30798);
PPC_FUNC_IMPL(__imp__sub_82F30798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F307A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r31,r11,-19620
	ctx.r31.s64 = ctx.r11.s64 + -19620;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x8259cc28
	ctx.lr = 0x82F307D4;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82F307D8;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f3085c
	if (cr6.eq) goto loc_82F3085C;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82F307FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30808;
	sub_82E88020(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f30828
	if (cr6.lt) goto loc_82F30828;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82F30828;
	sub_825952B8(ctx, base);
loc_82F30828:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x82f30938
	if (cr6.lt) goto loc_82F30938;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F30850;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F3085C:
	// bl 0x831156e8
	ctx.lr = 0x82F30860;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52845
	ctx.r10.u64 = ctx.r11.u64 | 52845;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f308ac
	if (cr6.eq) goto loc_82F308AC;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82F30884;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30890;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82F30898;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F308A0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F308AC:
	// bl 0x831156e8
	ctx.lr = 0x82F308B0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123768
	ctx.lr = 0x82F308C0;
	sub_83123768(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82f30918
	if (cr6.eq) goto loc_82F30918;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,40124
	ctx.r10.u64 = ctx.r11.u64 | 40124;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x82f308f8
	if (!cr6.gt) goto loc_82F308F8;
	// addis r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82F308EC;
	sub_83126788(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x82f308f8
	if (cr6.eq) goto loc_82F308F8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F308F8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f30910
	if (cr6.eq) goto loc_82F30910;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// b 0x82f30920
	goto loc_82F30920;
loc_82F30910:
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// b 0x82f30920
	goto loc_82F30920;
loc_82F30918:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82F30920:
	// bl 0x8259d6c0
	ctx.lr = 0x82F30924;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30930;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F30938;
	sub_8387E8E0(ctx, base);
loc_82F30938:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30944"))) PPC_WEAK_FUNC(sub_82F30944);
PPC_FUNC_IMPL(__imp__sub_82F30944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30948"))) PPC_WEAK_FUNC(sub_82F30948);
PPC_FUNC_IMPL(__imp__sub_82F30948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19264
	ctx.r9.s64 = ctx.r11.s64 + -19264;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F30980;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f30998
	if (cr6.eq) goto loc_82F30998;
	// bl 0x82416268
	ctx.lr = 0x82F30994;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F30998:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F309B0"))) PPC_WEAK_FUNC(sub_82F309B0);
PPC_FUNC_IMPL(__imp__sub_82F309B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F309E0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f30a14
	if (cr6.eq) goto loc_82F30A14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F309F4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19264
	ctx.r9.s64 = ctx.r11.s64 + -19264;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f30a18
	goto loc_82F30A18;
loc_82F30A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F30A18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30A30"))) PPC_WEAK_FUNC(sub_82F30A30);
PPC_FUNC_IMPL(__imp__sub_82F30A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f30a40
	if (cr6.lt) goto loc_82F30A40;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F30A40:
	// b 0x82f309b0
	sub_82F309B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30A44"))) PPC_WEAK_FUNC(sub_82F30A44);
PPC_FUNC_IMPL(__imp__sub_82F30A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30A48"))) PPC_WEAK_FUNC(sub_82F30A48);
PPC_FUNC_IMPL(__imp__sub_82F30A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F30A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F30A70;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f30afc
	if (cr6.eq) goto loc_82F30AFC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-19356
	ctx.r11.s64 = ctx.r11.s64 + -19356;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x82F30A9C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30AA8;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f30ac8
	if (cr6.lt) goto loc_82F30AC8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82F30AC8;
	sub_825952B8(ctx, base);
loc_82F30AC8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x82f30b88
	if (cr6.lt) goto loc_82F30B88;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F30AF0;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F30AFC:
	// bl 0x831156e8
	ctx.lr = 0x82F30B00;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,52845
	ctx.r9.u64 = ctx.r11.u64 | 52845;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f30b58
	if (!cr6.eq) goto loc_82F30B58;
	// bl 0x830ff290
	ctx.lr = 0x82F30B1C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F30B20;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f30b58
	if (!cr6.eq) goto loc_82F30B58;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19356
	ctx.r4.s64 = ctx.r11.s64 + -19356;
	// bl 0x8259d6c0
	ctx.lr = 0x82F30B38;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30B44;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F30B4C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F30B58:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-19356
	ctx.r11.s64 = ctx.r11.s64 + -19356;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82F30B6C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30B78;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82F30B80;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F30B88;
	sub_8387E8E0(ctx, base);
loc_82F30B88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30B94"))) PPC_WEAK_FUNC(sub_82F30B94);
PPC_FUNC_IMPL(__imp__sub_82F30B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30B98"))) PPC_WEAK_FUNC(sub_82F30B98);
PPC_FUNC_IMPL(__imp__sub_82F30B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18976
	ctx.r9.s64 = ctx.r11.s64 + -18976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F30BD0;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f30be8
	if (cr6.eq) goto loc_82F30BE8;
	// bl 0x82416268
	ctx.lr = 0x82F30BE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F30BE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30C00"))) PPC_WEAK_FUNC(sub_82F30C00);
PPC_FUNC_IMPL(__imp__sub_82F30C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F30C30;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f30c64
	if (cr6.eq) goto loc_82F30C64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F30C44;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18976
	ctx.r9.s64 = ctx.r11.s64 + -18976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f30c68
	goto loc_82F30C68;
loc_82F30C64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F30C68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30C80"))) PPC_WEAK_FUNC(sub_82F30C80);
PPC_FUNC_IMPL(__imp__sub_82F30C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f30c90
	if (cr6.lt) goto loc_82F30C90;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F30C90:
	// b 0x82f30c00
	sub_82F30C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30C94"))) PPC_WEAK_FUNC(sub_82F30C94);
PPC_FUNC_IMPL(__imp__sub_82F30C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30C98"))) PPC_WEAK_FUNC(sub_82F30C98);
PPC_FUNC_IMPL(__imp__sub_82F30C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F30CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F30CC0;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f30d4c
	if (cr6.eq) goto loc_82F30D4C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-19068
	ctx.r11.s64 = ctx.r11.s64 + -19068;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x82F30CEC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30CF8;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f30d18
	if (cr6.lt) goto loc_82F30D18;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82F30D18;
	sub_825952B8(ctx, base);
loc_82F30D18:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// blt cr6,0x82f30ee8
	if (cr6.lt) goto loc_82F30EE8;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82F30D40;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F30D4C:
	// bl 0x831156e8
	ctx.lr = 0x82F30D50;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52845
	ctx.r10.u64 = ctx.r11.u64 | 52845;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f30eb8
	if (!cr6.eq) goto loc_82F30EB8;
	// bl 0x830ff290
	ctx.lr = 0x82F30D6C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F30D70;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f30eb8
	if (!cr6.eq) goto loc_82F30EB8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319dc20
	ctx.lr = 0x82F30D80;
	sub_8319DC20(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r11,46732
	ctx.r9.u64 = ctx.r11.u64 | 46732;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82f30da8
	if (cr6.eq) goto loc_82F30DA8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82f30dd0
	goto loc_82F30DD0;
loc_82F30DA8:
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82f30dc0
	if (cr6.eq) goto loc_82F30DC0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82f30dd0
	goto loc_82F30DD0;
loc_82F30DC0:
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82F30DD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f30dec
	if (cr6.eq) goto loc_82F30DEC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-19068
	ctx.r11.s64 = ctx.r11.s64 + -19068;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x82f30e90
	goto loc_82F30E90;
loc_82F30DEC:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// ori r9,r11,46740
	ctx.r9.u64 = ctx.r11.u64 | 46740;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x82f30e88
	if (cr6.eq) goto loc_82F30E88;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x82fe0df0
	ctx.lr = 0x82F30E18;
	sub_82FE0DF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f07868
	ctx.lr = 0x82F30E28;
	sub_82F07868(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-19068
	ctx.r11.s64 = ctx.r11.s64 + -19068;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f30e4c
	if (!cr6.eq) goto loc_82F30E4C;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82F30E4C:
	// bl 0x8259d6c0
	ctx.lr = 0x82F30E50;
	sub_8259D6C0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f30e60
	if (cr6.eq) goto loc_82F30E60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F30E60;
	sub_82416268(ctx, base);
loc_82F30E60:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b10a10
	ctx.lr = 0x82F30E68;
	sub_82B10A10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30E74;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F30E7C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F30E88:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
loc_82F30E90:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82F30E98;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30EA4;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F30EAC;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F30EB8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-19068
	ctx.r11.s64 = ctx.r11.s64 + -19068;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x82F30ECC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F30ED8;
	sub_82E88020(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82F30EE0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F30EE8;
	sub_8387E8E0(ctx, base);
loc_82F30EE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30EF4"))) PPC_WEAK_FUNC(sub_82F30EF4);
PPC_FUNC_IMPL(__imp__sub_82F30EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30EF8"))) PPC_WEAK_FUNC(sub_82F30EF8);
PPC_FUNC_IMPL(__imp__sub_82F30EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18664
	ctx.r9.s64 = ctx.r11.s64 + -18664;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F30F30;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f30f48
	if (cr6.eq) goto loc_82F30F48;
	// bl 0x82416268
	ctx.lr = 0x82F30F44;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F30F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30F60"))) PPC_WEAK_FUNC(sub_82F30F60);
PPC_FUNC_IMPL(__imp__sub_82F30F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F30F90;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f30fc4
	if (cr6.eq) goto loc_82F30FC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F30FA4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18664
	ctx.r9.s64 = ctx.r11.s64 + -18664;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f30fc8
	goto loc_82F30FC8;
loc_82F30FC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F30FC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30FE0"))) PPC_WEAK_FUNC(sub_82F30FE0);
PPC_FUNC_IMPL(__imp__sub_82F30FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f30ff0
	if (cr6.lt) goto loc_82F30FF0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F30FF0:
	// b 0x82f30f60
	sub_82F30F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30FF4"))) PPC_WEAK_FUNC(sub_82F30FF4);
PPC_FUNC_IMPL(__imp__sub_82F30FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30FF8"))) PPC_WEAK_FUNC(sub_82F30FF8);
PPC_FUNC_IMPL(__imp__sub_82F30FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F31000;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F3100C;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f31070
	if (cr6.eq) goto loc_82F31070;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-18756
	ctx.r11.s64 = ctx.r11.s64 + -18756;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x837b0c10
	ctx.lr = 0x82F31038;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F31044;
	sub_82E88020(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f31240
	if (cr6.lt) goto loc_82F31240;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F31064;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F31070:
	// bl 0x831156e8
	ctx.lr = 0x82F31074;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52845
	ctx.r10.u64 = ctx.r11.u64 | 52845;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f3109c
	if (cr6.eq) goto loc_82F3109C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-18756
	ctx.r11.s64 = ctx.r11.s64 + -18756;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// b 0x82f31224
	goto loc_82F31224;
loc_82F3109C:
	// bl 0x830ff290
	ctx.lr = 0x82F310A0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F310A4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82f310cc
	if (cr6.eq) goto loc_82F310CC;
	// bl 0x830ff290
	ctx.lr = 0x82F310B0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F310B4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82f310cc
	if (cr6.eq) goto loc_82F310CC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-18756
	ctx.r11.s64 = ctx.r11.s64 + -18756;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// b 0x82f31224
	goto loc_82F31224;
loc_82F310CC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319dc20
	ctx.lr = 0x82F310D4;
	sub_8319DC20(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r10,r11,46740
	ctx.r10.u64 = ctx.r11.u64 | 46740;
	// rlwinm r6,r7,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f31104
	if (!cr6.eq) goto loc_82F31104;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-18756
	ctx.r11.s64 = ctx.r11.s64 + -18756;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// b 0x82f31224
	goto loc_82F31224;
loc_82F31104:
	// addis r11,r29,236
	ctx.r11.s64 = ctx.r29.s64 + 15466496;
	// addic. r11,r11,48
	xer.ca = ctx.r11.u32 > 4294967247;
	ctx.r11.s64 = ctx.r11.s64 + 48;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82f31120
	if (!cr0.eq) goto loc_82F31120;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-18756
	ctx.r11.s64 = ctx.r11.s64 + -18756;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// b 0x82f31224
	goto loc_82F31224;
loc_82F31120:
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// lhz r7,1856(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1856);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,10560
	ctx.r10.s64 = ctx.r10.s64 + 10560;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82f31144
	if (cr6.eq) goto loc_82F31144;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82f31170
	goto loc_82F31170;
loc_82F31144:
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,1858(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1858);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82f3115c
	if (cr6.eq) goto loc_82F3115C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82f31170
	goto loc_82F31170;
loc_82F3115C:
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r9,1859(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1859);
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_82F31170:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f3118c
	if (cr6.eq) goto loc_82F3118C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-18756
	ctx.r11.s64 = ctx.r11.s64 + -18756;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x82f31224
	goto loc_82F31224;
loc_82F3118C:
	// lbz r10,1858(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1858);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x82f311a8
	if (cr6.eq) goto loc_82F311A8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-18756
	ctx.r11.s64 = ctx.r11.s64 + -18756;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f31224
	goto loc_82F31224;
loc_82F311A8:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x8314e340
	ctx.lr = 0x82F311B8;
	sub_8314E340(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-18756
	ctx.r31.s64 = ctx.r11.s64 + -18756;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r31,-68
	ctx.r5.s64 = ctx.r31.s64 + -68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831178a0
	ctx.lr = 0x82F311DC;
	sub_831178A0(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8316fb10
	ctx.lr = 0x82F311EC;
	sub_8316FB10(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82f31204
	if (cr6.eq) goto loc_82F31204;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// b 0x82f31224
	goto loc_82F31224;
loc_82F31204:
	// addis r11,r29,222
	ctx.r11.s64 = ctx.r29.s64 + 14548992;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-8464
	ctx.r11.s64 = ctx.r11.s64 + -8464;
	// addis r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 458752;
	// addi r10,r10,1924
	ctx.r10.s64 = ctx.r10.s64 + 1924;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82F31224:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82F3122C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F31238;
	sub_82E88020(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82F31240;
	sub_8387E8E0(ctx, base);
loc_82F31240:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3124C"))) PPC_WEAK_FUNC(sub_82F3124C);
PPC_FUNC_IMPL(__imp__sub_82F3124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31250"))) PPC_WEAK_FUNC(sub_82F31250);
PPC_FUNC_IMPL(__imp__sub_82F31250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18384
	ctx.r9.s64 = ctx.r11.s64 + -18384;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F31288;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f312a0
	if (cr6.eq) goto loc_82F312A0;
	// bl 0x82416268
	ctx.lr = 0x82F3129C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F312A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F312B8"))) PPC_WEAK_FUNC(sub_82F312B8);
PPC_FUNC_IMPL(__imp__sub_82F312B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F312E8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3131c
	if (cr6.eq) goto loc_82F3131C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F312FC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18384
	ctx.r9.s64 = ctx.r11.s64 + -18384;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f31320
	goto loc_82F31320;
loc_82F3131C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F31320:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31338"))) PPC_WEAK_FUNC(sub_82F31338);
PPC_FUNC_IMPL(__imp__sub_82F31338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f31348
	if (cr6.lt) goto loc_82F31348;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F31348:
	// b 0x82f312b8
	sub_82F312B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3134C"))) PPC_WEAK_FUNC(sub_82F3134C);
PPC_FUNC_IMPL(__imp__sub_82F3134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31350"))) PPC_WEAK_FUNC(sub_82F31350);
PPC_FUNC_IMPL(__imp__sub_82F31350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F31358;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F31378;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f31404
	if (cr6.eq) goto loc_82F31404;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-18476
	ctx.r11.s64 = ctx.r11.s64 + -18476;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x82F313A4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F313B0;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f313d0
	if (cr6.lt) goto loc_82F313D0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82F313D0;
	sub_825952B8(ctx, base);
loc_82F313D0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82f314ec
	if (cr6.lt) goto loc_82F314EC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F313F8;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F31404:
	// bl 0x831156e8
	ctx.lr = 0x82F31408;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52845
	ctx.r10.u64 = ctx.r11.u64 | 52845;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f314bc
	if (!cr6.eq) goto loc_82F314BC;
	// bl 0x830ff290
	ctx.lr = 0x82F31424;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F31428;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f314bc
	if (!cr6.eq) goto loc_82F314BC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-18476
	ctx.r31.s64 = ctx.r11.s64 + -18476;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x8259d6c0
	ctx.lr = 0x82F31444;
	sub_8259D6C0(ctx, base);
	// bl 0x831ca058
	ctx.lr = 0x82F31448;
	sub_831CA058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3147c
	if (cr6.eq) goto loc_82F3147C;
	// addis r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 15728640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-3492
	ctx.r3.s64 = ctx.r3.s64 + -3492;
	// bl 0x83129fd8
	ctx.lr = 0x82F31464;
	sub_83129FD8(ctx, base);
	// bl 0x8312dce0
	ctx.lr = 0x82F31468;
	sub_8312DCE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82f3149c
	if (!cr6.gt) goto loc_82F3149C;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// b 0x82f31494
	goto loc_82F31494;
loc_82F3147C:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,1613
	ctx.r10.u64 = ctx.r11.u64 | 1613;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f3149c
	if (cr6.eq) goto loc_82F3149C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82F31494:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82F3149C;
	sub_8259D6C0(ctx, base);
loc_82F3149C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F314A8;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F314B0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F314BC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-18476
	ctx.r11.s64 = ctx.r11.s64 + -18476;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x82F314D0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F314DC;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82F314E4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F314EC;
	sub_8387E8E0(ctx, base);
loc_82F314EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F314F8"))) PPC_WEAK_FUNC(sub_82F314F8);
PPC_FUNC_IMPL(__imp__sub_82F314F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18128
	ctx.r9.s64 = ctx.r11.s64 + -18128;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F31530;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f31548
	if (cr6.eq) goto loc_82F31548;
	// bl 0x82416268
	ctx.lr = 0x82F31544;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F31548:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31560"))) PPC_WEAK_FUNC(sub_82F31560);
PPC_FUNC_IMPL(__imp__sub_82F31560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F31590;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f315c4
	if (cr6.eq) goto loc_82F315C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F315A4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18128
	ctx.r9.s64 = ctx.r11.s64 + -18128;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f315c8
	goto loc_82F315C8;
loc_82F315C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F315C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F315E0"))) PPC_WEAK_FUNC(sub_82F315E0);
PPC_FUNC_IMPL(__imp__sub_82F315E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f315f0
	if (cr6.lt) goto loc_82F315F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F315F0:
	// b 0x82f31560
	sub_82F31560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F315F4"))) PPC_WEAK_FUNC(sub_82F315F4);
PPC_FUNC_IMPL(__imp__sub_82F315F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F315F8"))) PPC_WEAK_FUNC(sub_82F315F8);
PPC_FUNC_IMPL(__imp__sub_82F315F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F31600;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F31620;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52845
	ctx.r10.u64 = ctx.r11.u64 | 52845;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f31694
	if (!cr6.eq) goto loc_82F31694;
	// bl 0x830ff290
	ctx.lr = 0x82F3163C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F31640;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f31694
	if (!cr6.eq) goto loc_82F31694;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-18220
	ctx.r4.s64 = ctx.r11.s64 + -18220;
	// bl 0x8259d6c0
	ctx.lr = 0x82F31658;
	sub_8259D6C0(ctx, base);
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ori r9,r10,52996
	ctx.r9.u64 = ctx.r10.u64 | 52996;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bl 0x82e88020
	ctx.lr = 0x82F31680;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82F31688;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F31694:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r11,r11,-18220
	ctx.r11.s64 = ctx.r11.s64 + -18220;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x82F316B8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F316C4;
	sub_82E88020(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f316e4
	if (cr6.lt) goto loc_82F316E4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F316E4;
	sub_825952B8(ctx, base);
loc_82F316E4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82f3170c
	if (cr6.lt) goto loc_82F3170C;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82F3170C;
	sub_825952B8(ctx, base);
loc_82F3170C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31718"))) PPC_WEAK_FUNC(sub_82F31718);
PPC_FUNC_IMPL(__imp__sub_82F31718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17864
	ctx.r9.s64 = ctx.r11.s64 + -17864;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F31750;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f31768
	if (cr6.eq) goto loc_82F31768;
	// bl 0x82416268
	ctx.lr = 0x82F31764;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F31768:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31780"))) PPC_WEAK_FUNC(sub_82F31780);
PPC_FUNC_IMPL(__imp__sub_82F31780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F317B0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f317e4
	if (cr6.eq) goto loc_82F317E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F317C4;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17864
	ctx.r9.s64 = ctx.r11.s64 + -17864;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f317e8
	goto loc_82F317E8;
loc_82F317E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F317E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31800"))) PPC_WEAK_FUNC(sub_82F31800);
PPC_FUNC_IMPL(__imp__sub_82F31800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f31810
	if (cr6.lt) goto loc_82F31810;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F31810:
	// b 0x82f31780
	sub_82F31780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31814"))) PPC_WEAK_FUNC(sub_82F31814);
PPC_FUNC_IMPL(__imp__sub_82F31814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31818"))) PPC_WEAK_FUNC(sub_82F31818);
PPC_FUNC_IMPL(__imp__sub_82F31818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82F31820;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F31840;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f318cc
	if (cr6.eq) goto loc_82F318CC;
	// addi r11,r11,-17956
	ctx.r11.s64 = ctx.r11.s64 + -17956;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x837b0c10
	ctx.lr = 0x82F3186C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F31878;
	sub_82E88020(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f31898
	if (cr6.lt) goto loc_82F31898;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82F31898;
	sub_825952B8(ctx, base);
loc_82F31898:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// blt cr6,0x82f31bd8
	if (cr6.lt) goto loc_82F31BD8;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82F318C0;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82F318CC:
	// addi r26,r11,-17956
	ctx.r26.s64 = ctx.r11.s64 + -17956;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x82F318E0;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82F318E4;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52996
	ctx.r10.u64 = ctx.r11.u64 | 52996;
	// lwzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82f319bc
	if (!cr6.eq) goto loc_82F319BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319dc20
	ctx.lr = 0x82F31910;
	sub_8319DC20(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r11,46740
	ctx.r9.u64 = ctx.r11.u64 | 46740;
	// rlwinm r10,r8,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// lwzx r11,r27,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82f31944
	if (cr6.eq) goto loc_82F31944;
	// subfc r11,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82f31978
	goto loc_82F31978;
loc_82F31944:
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r8,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f31964
	if (cr6.eq) goto loc_82F31964;
	// subfc r11,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82f31978
	goto loc_82F31978;
loc_82F31964:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82F31978:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f319dc
	if (cr6.eq) goto loc_82F319DC;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82acf018
	ctx.lr = 0x82F31990;
	sub_82ACF018(ctx, base);
	// cmplwi cr6,r3,60
	cr6.compare<uint32_t>(ctx.r3.u32, 60, xer);
	// ble cr6,0x82f319dc
	if (!cr6.gt) goto loc_82F319DC;
	// bl 0x831156e8
	ctx.lr = 0x82F3199C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r11,r11,209
	ctx.r11.s64 = ctx.r11.s64 + 13697024;
	// addic. r11,r11,320
	xer.ca = ctx.r11.u32 > 4294966975;
	ctx.r11.s64 = ctx.r11.s64 + 320;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82f319bc
	if (cr0.eq) goto loc_82F319BC;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addic. r3,r3,-1868
	xer.ca = ctx.r3.u32 > 1867;
	ctx.r3.s64 = ctx.r3.s64 + -1868;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82f319bc
	if (cr0.eq) goto loc_82F319BC;
	// bl 0x82b141a8
	ctx.lr = 0x82F319BC;
	sub_82B141A8(ctx, base);
loc_82F319BC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F319C8;
	sub_82E88020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F319D0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82F319DC:
	// bl 0x831156e8
	ctx.lr = 0x82F319E0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r11,r11,209
	ctx.r11.s64 = ctx.r11.s64 + 13697024;
	// addic. r11,r11,320
	xer.ca = ctx.r11.u32 > 4294966975;
	ctx.r11.s64 = ctx.r11.s64 + 320;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82f31bac
	if (cr0.eq) goto loc_82F31BAC;
	// addis r28,r11,5
	ctx.r28.s64 = ctx.r11.s64 + 327680;
	// addic. r28,r28,-1868
	xer.ca = ctx.r28.u32 > 1867;
	ctx.r28.s64 = ctx.r28.s64 + -1868;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x82f31bac
	if (cr0.eq) goto loc_82F31BAC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82f31bac
	if (!cr6.gt) goto loc_82F31BAC;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82F31A10:
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31a20
	if (!cr6.lt) goto loc_82F31A20;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31A20:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31a3c
	if (!cr6.lt) goto loc_82F31A3C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31A3C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31a58
	if (!cr6.lt) goto loc_82F31A58;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31A58:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31a74
	if (!cr6.lt) goto loc_82F31A74;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31A74:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31a90
	if (!cr6.lt) goto loc_82F31A90;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31A90:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31aac
	if (!cr6.lt) goto loc_82F31AAC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31AAC:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31ac8
	if (!cr6.lt) goto loc_82F31AC8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31AC8:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31ae4
	if (!cr6.lt) goto loc_82F31AE4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31AE4:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31b00
	if (!cr6.lt) goto loc_82F31B00;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31B00:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31b1c
	if (!cr6.lt) goto loc_82F31B1C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31B1C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x82f31b44
	if (cr6.eq) goto loc_82F31B44;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31b38
	if (!cr6.lt) goto loc_82F31B38;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31B38:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82f31b88
	if (!cr6.eq) goto loc_82F31B88;
loc_82F31B44:
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31b54
	if (!cr6.lt) goto loc_82F31B54;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31B54:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82f31ba0
	if (!cr6.eq) goto loc_82F31BA0;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82f31b70
	if (!cr6.lt) goto loc_82F31B70;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F31B70:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82F31B7C;
	sub_8311BF98(ctx, base);
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f31ba0
	if (!cr6.eq) goto loc_82F31BA0;
loc_82F31B88:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82f31a10
	if (cr6.lt) goto loc_82F31A10;
	// b 0x82f31bac
	goto loc_82F31BAC;
loc_82F31BA0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82F31BAC;
	sub_8259D6C0(ctx, base);
loc_82F31BAC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F31BB8;
	sub_82E88020(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f31bd8
	if (cr6.lt) goto loc_82F31BD8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F31BD8;
	sub_825952B8(ctx, base);
loc_82F31BD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31BE4"))) PPC_WEAK_FUNC(sub_82F31BE4);
PPC_FUNC_IMPL(__imp__sub_82F31BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31BE8"))) PPC_WEAK_FUNC(sub_82F31BE8);
PPC_FUNC_IMPL(__imp__sub_82F31BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17568
	ctx.r9.s64 = ctx.r11.s64 + -17568;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F31C20;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f31c38
	if (cr6.eq) goto loc_82F31C38;
	// bl 0x82416268
	ctx.lr = 0x82F31C34;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F31C38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31C50"))) PPC_WEAK_FUNC(sub_82F31C50);
PPC_FUNC_IMPL(__imp__sub_82F31C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F31C80;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f31cb4
	if (cr6.eq) goto loc_82F31CB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F31C94;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17568
	ctx.r9.s64 = ctx.r11.s64 + -17568;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f31cb8
	goto loc_82F31CB8;
loc_82F31CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F31CB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31CD0"))) PPC_WEAK_FUNC(sub_82F31CD0);
PPC_FUNC_IMPL(__imp__sub_82F31CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f31ce0
	if (cr6.lt) goto loc_82F31CE0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F31CE0:
	// b 0x82f31c50
	sub_82F31C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31CE4"))) PPC_WEAK_FUNC(sub_82F31CE4);
PPC_FUNC_IMPL(__imp__sub_82F31CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31CE8"))) PPC_WEAK_FUNC(sub_82F31CE8);
PPC_FUNC_IMPL(__imp__sub_82F31CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F31CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F31D10;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f31d9c
	if (cr6.eq) goto loc_82F31D9C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-17660
	ctx.r11.s64 = ctx.r11.s64 + -17660;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x82F31D3C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F31D48;
	sub_82E88020(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f31d68
	if (cr6.lt) goto loc_82F31D68;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82F31D68;
	sub_825952B8(ctx, base);
loc_82F31D68:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82f31f34
	if (cr6.lt) goto loc_82F31F34;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F31D90;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F31D9C:
	// bl 0x831156e8
	ctx.lr = 0x82F31DA0;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52845
	ctx.r10.u64 = ctx.r11.u64 | 52845;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f31df4
	if (cr6.eq) goto loc_82F31DF4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-17660
	ctx.r11.s64 = ctx.r11.s64 + -17660;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x82F31DCC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F31DD8;
	sub_82E88020(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82F31DE0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F31DE8;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F31DF4:
	// bl 0x831156e8
	ctx.lr = 0x82F31DF8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123768
	ctx.lr = 0x82F31E0C;
	sub_83123768(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82f31f10
	if (cr6.eq) goto loc_82F31F10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123778
	ctx.lr = 0x82F31E20;
	sub_83123778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F31E2C;
	sub_8311C338(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bgt cr6,0x82f31e70
	if (cr6.gt) goto loc_82F31E70;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bge cr6,0x82f31ef8
	if (!cr6.lt) goto loc_82F31EF8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82f31ee8
	if (cr6.gt) goto loc_82F31EE8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82f31e98
	if (cr6.eq) goto loc_82F31E98;
	// bdz 0x82f31e98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F31E98;
	// bdz 0x82f31ef8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F31EF8;
	// bdz 0x82f31e98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F31E98;
	// bdz 0x82f31e98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F31E98;
	// bdz 0x82f31ef8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F31EF8;
	// b 0x82f31e98
	goto loc_82F31E98;
loc_82F31E70:
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, xer);
	// bgt cr6,0x82f31ed8
	if (cr6.gt) goto loc_82F31ED8;
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, xer);
	// bge cr6,0x82f31ef8
	if (!cr6.lt) goto loc_82F31EF8;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bgt cr6,0x82f31eb8
	if (cr6.gt) goto loc_82F31EB8;
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bge cr6,0x82f31ef8
	if (!cr6.lt) goto loc_82F31EF8;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82f31ee8
	if (!cr6.eq) goto loc_82F31EE8;
loc_82F31E98:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-17660
	ctx.r11.s64 = ctx.r11.s64 + -17660;
	// bne cr6,0x82f31f08
	if (!cr6.eq) goto loc_82F31F08;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x82f31f1c
	goto loc_82F31F1C;
loc_82F31EB8:
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// blt cr6,0x82f31ee8
	if (cr6.lt) goto loc_82F31EE8;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// ble cr6,0x82f31e98
	if (!cr6.gt) goto loc_82F31E98;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-17660
	ctx.r11.s64 = ctx.r11.s64 + -17660;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// b 0x82f31f18
	goto loc_82F31F18;
loc_82F31ED8:
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82f31e98
	if (cr6.eq) goto loc_82F31E98;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// beq cr6,0x82f31ef8
	if (cr6.eq) goto loc_82F31EF8;
loc_82F31EE8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-17660
	ctx.r11.s64 = ctx.r11.s64 + -17660;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// b 0x82f31f18
	goto loc_82F31F18;
loc_82F31EF8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-17660
	ctx.r11.s64 = ctx.r11.s64 + -17660;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82f31f18
	goto loc_82F31F18;
loc_82F31F08:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f31f1c
	goto loc_82F31F1C;
loc_82F31F10:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-17660
	ctx.r4.s64 = ctx.r11.s64 + -17660;
loc_82F31F18:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82F31F1C:
	// bl 0x8259d6c0
	ctx.lr = 0x82F31F20;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F31F2C;
	sub_82E88020(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F31F34;
	sub_8387E8E0(ctx, base);
loc_82F31F34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31F40"))) PPC_WEAK_FUNC(sub_82F31F40);
PPC_FUNC_IMPL(__imp__sub_82F31F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17296
	ctx.r9.s64 = ctx.r11.s64 + -17296;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F31F78;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f31f90
	if (cr6.eq) goto loc_82F31F90;
	// bl 0x82416268
	ctx.lr = 0x82F31F8C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F31F90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31FA8"))) PPC_WEAK_FUNC(sub_82F31FA8);
PPC_FUNC_IMPL(__imp__sub_82F31FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F31FD8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3200c
	if (cr6.eq) goto loc_82F3200C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F31FEC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17296
	ctx.r9.s64 = ctx.r11.s64 + -17296;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f32010
	goto loc_82F32010;
loc_82F3200C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F32010:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32028"))) PPC_WEAK_FUNC(sub_82F32028);
PPC_FUNC_IMPL(__imp__sub_82F32028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f32038
	if (cr6.lt) goto loc_82F32038;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F32038:
	// b 0x82f31fa8
	sub_82F31FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3203C"))) PPC_WEAK_FUNC(sub_82F3203C);
PPC_FUNC_IMPL(__imp__sub_82F3203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32040"))) PPC_WEAK_FUNC(sub_82F32040);
PPC_FUNC_IMPL(__imp__sub_82F32040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F32048;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F32054;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82F3205C;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x82F32078;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F3207C;
	sub_830FFAA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r28,5
	ctx.r3.s64 = ctx.r28.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x82F3208C;
	sub_83123778(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r9,58
	cr6.compare<uint32_t>(ctx.r9.u32, 58, xer);
	// bne cr6,0x82f320b8
	if (!cr6.eq) goto loc_82F320B8;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// bne cr6,0x82f320b8
	if (!cr6.eq) goto loc_82F320B8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-17396
	ctx.r11.s64 = ctx.r11.s64 + -17396;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8259d6c0
	ctx.lr = 0x82F320B4;
	sub_8259D6C0(ctx, base);
	// b 0x82f320fc
	goto loc_82F320FC;
loc_82F320B8:
	// addis r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82F320C4;
	sub_83126788(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82f320f0
	if (cr6.eq) goto loc_82F320F0;
	// addi r11,r11,-17396
	ctx.r11.s64 = ctx.r11.s64 + -17396;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x82F320E4;
	sub_8259CC28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8316bc30
	ctx.lr = 0x82F320EC;
	sub_8316BC30(ctx, base);
	// b 0x82f320fc
	goto loc_82F320FC;
loc_82F320F0:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-17396
	ctx.r4.s64 = ctx.r11.s64 + -17396;
	// bl 0x8259cc28
	ctx.lr = 0x82F320FC;
	sub_8259CC28(ctx, base);
loc_82F320FC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F32108;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f32128
	if (cr6.lt) goto loc_82F32128;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F32128;
	sub_825952B8(ctx, base);
loc_82F32128:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F32134"))) PPC_WEAK_FUNC(sub_82F32134);
PPC_FUNC_IMPL(__imp__sub_82F32134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32138"))) PPC_WEAK_FUNC(sub_82F32138);
PPC_FUNC_IMPL(__imp__sub_82F32138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16800
	ctx.r9.s64 = ctx.r11.s64 + -16800;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F32170;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f32188
	if (cr6.eq) goto loc_82F32188;
	// bl 0x82416268
	ctx.lr = 0x82F32184;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F32188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F321A0"))) PPC_WEAK_FUNC(sub_82F321A0);
PPC_FUNC_IMPL(__imp__sub_82F321A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,60
	ctx.r4.s64 = 60;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r3,884
	ctx.r9.s64 = ctx.r3.s64 + 884;
loc_82F321B4:
	// lwz r11,-48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -48);
	// rlwinm r10,r7,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// rlwinm r31,r11,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f321dc
	if (!cr6.eq) goto loc_82F321DC;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f321e0
	if (cr6.eq) goto loc_82F321E0;
loc_82F321DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F321E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f321f0
	if (cr6.eq) goto loc_82F321F0;
	// addi r4,r8,-2
	ctx.r4.s64 = ctx.r8.s64 + -2;
loc_82F321F0:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r31,r11,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f32214
	if (!cr6.eq) goto loc_82F32214;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f32218
	if (cr6.eq) goto loc_82F32218;
loc_82F32214:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F32218:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f32228
	if (cr6.eq) goto loc_82F32228;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
loc_82F32228:
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm r31,r11,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f3224c
	if (!cr6.eq) goto loc_82F3224C;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f32250
	if (cr6.eq) goto loc_82F32250;
loc_82F3224C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F32250:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f32260
	if (cr6.eq) goto loc_82F32260;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82F32260:
	// lwz r11,96(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// rlwinm r31,r11,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f32284
	if (!cr6.eq) goto loc_82F32284;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f32288
	if (cr6.eq) goto loc_82F32288;
loc_82F32284:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F32288:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f32298
	if (cr6.eq) goto loc_82F32298;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
loc_82F32298:
	// lwz r11,144(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// rlwinm r31,r11,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f322bc
	if (!cr6.eq) goto loc_82F322BC;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f322c0
	if (cr6.eq) goto loc_82F322C0;
loc_82F322BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F322C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f322d0
	if (cr6.eq) goto loc_82F322D0;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
loc_82F322D0:
	// lwz r11,192(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// rlwinm r31,r11,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f322f4
	if (!cr6.eq) goto loc_82F322F4;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f322f8
	if (cr6.eq) goto loc_82F322F8;
loc_82F322F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F322F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f32308
	if (cr6.eq) goto loc_82F32308;
	// addi r4,r8,3
	ctx.r4.s64 = ctx.r8.s64 + 3;
loc_82F32308:
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// addi r9,r9,288
	ctx.r9.s64 = ctx.r9.s64 + 288;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// blt cr6,0x82f321b4
	if (cr6.lt) goto loc_82F321B4;
	// cmplwi cr6,r4,60
	cr6.compare<uint32_t>(ctx.r4.u32, 60, xer);
	// beq cr6,0x82f3234c
	if (cr6.eq) goto loc_82F3234C;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,856(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// rlwimi r8,r10,10,11,21
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x1FFC00) | (ctx.r8.u64 & 0xFFFFFFFFFFE003FF);
	// stw r8,856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 856, ctx.r8.u32);
	// lbz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// stb r7,881(r11)
	PPC_STORE_U8(ctx.r11.u32 + 881, ctx.r7.u8);
loc_82F3234C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32354"))) PPC_WEAK_FUNC(sub_82F32354);
PPC_FUNC_IMPL(__imp__sub_82F32354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32358"))) PPC_WEAK_FUNC(sub_82F32358);
PPC_FUNC_IMPL(__imp__sub_82F32358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F32388;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f323cc
	if (cr6.eq) goto loc_82F323CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3239C;
	sub_82F42220(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-16800
	ctx.r8.s64 = ctx.r10.s64 + -16800;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x82f323d0
	goto loc_82F323D0;
loc_82F323CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F323D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F323E8"))) PPC_WEAK_FUNC(sub_82F323E8);
PPC_FUNC_IMPL(__imp__sub_82F323E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F323F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x82F323F8;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82F32400;
	sub_831156E8(ctx, base);
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8399f8b8
	ctx.lr = 0x82F32408;
	sub_8399F8B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f32424
	if (!cr6.eq) goto loc_82F32424;
	// bl 0x839a1610
	ctx.lr = 0x82F32418;
	sub_839A1610(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f32580
	if (cr6.eq) goto loc_82F32580;
loc_82F32424:
	// addis r3,r30,5
	ctx.r3.s64 = ctx.r30.s64 + 327680;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x83123778
	ctx.lr = 0x82F32438;
	sub_83123778(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f32460
	if (cr6.eq) goto loc_82F32460;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F32450;
	sub_8311C338(ctx, base);
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82f32460
	if (!cr6.eq) goto loc_82F32460;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82F32460:
	// lis r30,-31774
	ctx.r30.s64 = -2082340864;
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,6224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6224);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82f32498
	if (cr6.eq) goto loc_82F32498;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,-17142
	ctx.r5.s64 = ctx.r10.s64 + -17142;
	// b 0x82f324a4
	goto loc_82F324A4;
loc_82F32498:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r11,-17142
	ctx.r5.s64 = ctx.r11.s64 + -17142;
loc_82F324A4:
	// bl 0x831178a0
	ctx.lr = 0x82F324A8;
	sub_831178A0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r10,6224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6224);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f324ec
	if (!cr6.eq) goto loc_82F324EC;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f324f0
	if (cr6.eq) goto loc_82F324F0;
loc_82F324EC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F324F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f32580
	if (!cr6.eq) goto loc_82F32580;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x839a1aa8
	ctx.lr = 0x82F32514;
	sub_839A1AA8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x839a3228
	ctx.lr = 0x82F32520;
	sub_839A3228(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8315ed60
	ctx.lr = 0x82F32540;
	sub_8315ED60(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// beq cr6,0x82f3256c
	if (cr6.eq) goto loc_82F3256C;
	// ori r9,r11,49627
	ctx.r9.u64 = ctx.r11.u64 | 49627;
	// ori r8,r10,49629
	ctx.r8.u64 = ctx.r10.u64 | 49629;
	// stbx r31,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r31.u8);
	// stbx r3,r29,r8
	PPC_STORE_U8(ctx.r29.u32 + ctx.r8.u32, ctx.r3.u8);
	// bl 0x839a04b8
	ctx.lr = 0x82F32564;
	sub_839A04B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F3256C:
	// ori r9,r11,49626
	ctx.r9.u64 = ctx.r11.u64 | 49626;
	// ori r8,r10,49628
	ctx.r8.u64 = ctx.r10.u64 | 49628;
	// stbx r31,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r31.u8);
	// stbx r3,r29,r8
	PPC_STORE_U8(ctx.r29.u32 + ctx.r8.u32, ctx.r3.u8);
	// bl 0x839a04b8
	ctx.lr = 0x82F32580;
	sub_839A04B8(ctx, base);
loc_82F32580:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F32588"))) PPC_WEAK_FUNC(sub_82F32588);
PPC_FUNC_IMPL(__imp__sub_82F32588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-16696
	ctx.r10.s64 = ctx.r11.s64 + -16696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x82F325B4;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f325d4
	if (cr6.eq) goto loc_82F325D4;
	// bl 0x82595188
	ctx.lr = 0x82F325C4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82F325D4;
	sub_825952B8(ctx, base);
loc_82F325D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F325F0"))) PPC_WEAK_FUNC(sub_82F325F0);
PPC_FUNC_IMPL(__imp__sub_82F325F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f32668
	if (cr6.eq) goto loc_82F32668;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x82F32618;
	sub_835242E8(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_82F32628:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f32628
	if (!cr0.eq) goto loc_82F32628;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f32660
	if (!cr6.eq) goto loc_82F32660;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F32660;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F32660:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82F32668:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F32680"))) PPC_WEAK_FUNC(sub_82F32680);
PPC_FUNC_IMPL(__imp__sub_82F32680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f32690
	if (cr6.lt) goto loc_82F32690;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F32690:
	// b 0x82f32358
	sub_82F32358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F32694"))) PPC_WEAK_FUNC(sub_82F32694);
PPC_FUNC_IMPL(__imp__sub_82F32694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F32698"))) PPC_WEAK_FUNC(sub_82F32698);
PPC_FUNC_IMPL(__imp__sub_82F32698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F326A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bgt cr6,0x82f32958
	if (cr6.gt) goto loc_82F32958;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f3285c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F3285C;
	// bdzf 4*cr6+eq,0x82f32958
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F32958;
	// bdzf 4*cr6+eq,0x82f32890
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F32890;
	// bne cr6,0x82f328f0
	if (!cr6.eq) goto loc_82F328F0;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f32700
	if (cr6.eq) goto loc_82F32700;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F326F4;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F32700:
	// bl 0x831156e8
	ctx.lr = 0x82F32704;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r9,r11,1536
	ctx.r9.u64 = ctx.r11.u64 | 1536;
	// sthx r10,r27,r9
	PPC_STORE_U16(ctx.r27.u32 + ctx.r9.u32, ctx.r10.u16);
	// bl 0x82f06520
	ctx.lr = 0x82F3271C;
	sub_82F06520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f32728
	if (cr6.eq) goto loc_82F32728;
	// stw r31,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r31.u32);
loc_82F32728:
	// bl 0x830ff290
	ctx.lr = 0x82F3272C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F32730;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82f32750
	if (!cr6.eq) goto loc_82F32750;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,52845
	ctx.r10.u64 = ctx.r11.u64 | 52845;
	// lbzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f32750
	if (!cr6.eq) goto loc_82F32750;
	// bl 0x82f323e8
	ctx.lr = 0x82F32750;
	sub_82F323E8(ctx, base);
loc_82F32750:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46620
	ctx.r10.u64 = ctx.r11.u64 | 46620;
	// lbzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f32778
	if (!cr6.eq) goto loc_82F32778;
	// bl 0x82d16ed0
	ctx.lr = 0x82F32768;
	sub_82D16ED0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f32778
	if (cr6.eq) goto loc_82F32778;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d15488
	ctx.lr = 0x82F32778;
	sub_82D15488(ctx, base);
loc_82F32778:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F3278C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f327b4
	if (cr6.eq) goto loc_82F327B4;
	// bl 0x835242a0
	ctx.lr = 0x82F3279C;
	sub_835242A0(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,-16696
	ctx.r9.s64 = ctx.r10.s64 + -16696;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82f327b8
	goto loc_82F327B8;
loc_82F327B4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F327B8:
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f32820
	if (cr6.eq) goto loc_82F32820;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r11,r11,-16896
	ctx.r11.s64 = ctx.r11.s64 + -16896;
	// std r31,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r31.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82F32800;
	sub_8259CC28(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// bl 0x835249e8
	ctx.lr = 0x82F32818;
	sub_835249E8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82F32820;
	sub_8387E8E0(ctx, base);
loc_82F32820:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,52996
	ctx.r10.u64 = ctx.r11.u64 | 52996;
	// lwzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82f32848
	if (!cr6.eq) goto loc_82F32848;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x82F32848;
	sub_82D17AA0(ctx, base);
loc_82F32848:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F3285C:
	// lbz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3295c
	if (cr6.eq) goto loc_82F3295C;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3287c
	if (cr6.eq) goto loc_82F3287C;
	// bl 0x83b4b558
	ctx.lr = 0x82F32878;
	sub_83B4B558(ctx, base);
	// stw r31,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r31.u32);
loc_82F3287C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F32890:
	// bl 0x831156e8
	ctx.lr = 0x82F32894;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f328dc
	if (!cr6.eq) goto loc_82F328DC;
	// bl 0x831156e8
	ctx.lr = 0x82F328B0;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,52996
	ctx.r9.u64 = ctx.r11.u64 | 52996;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82f328dc
	if (!cr6.eq) goto loc_82F328DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82F328DC;
	sub_82D17AA0(ctx, base);
loc_82F328DC:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F328F0:
	// bl 0x82fe0df0
	ctx.lr = 0x82F328F4;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3290c
	if (cr6.eq) goto loc_82F3290C;
	// bl 0x82fe5030
	ctx.lr = 0x82F32904;
	sub_82FE5030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F3290C;
	sub_82416268(ctx, base);
loc_82F3290C:
	// bl 0x839837e8
	ctx.lr = 0x82F32910;
	sub_839837E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f32920
	if (cr6.eq) goto loc_82F32920;
	// bl 0x839837e8
	ctx.lr = 0x82F3291C;
	sub_839837E8(ctx, base);
	// bl 0x83983aa0
	ctx.lr = 0x82F32920;
	sub_83983AA0(ctx, base);
loc_82F32920:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-16896
	ctx.r4.s64 = ctx.r11.s64 + -16896;
	// bl 0x837b0c10
	ctx.lr = 0x82F32930;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F3293C;
	sub_82E88020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82F32944;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82F3294C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F32958:
	// stw r31,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r31.u32);
loc_82F3295C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F32968"))) PPC_WEAK_FUNC(sub_82F32968);
PPC_FUNC_IMPL(__imp__sub_82F32968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x82F32970;
	__savegprlr_15(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82f00728
	ctx.lr = 0x82F32978;
	sub_82F00728(ctx, base);
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addi r29,r29,22920
	ctx.r29.s64 = ctx.r29.s64 + 22920;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f329b0
	if (cr6.eq) goto loc_82F329B0;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82F329A8;
	sub_831CE420(ctx, base);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82F329B0:
	// bl 0x831156e8
	ctx.lr = 0x82F329B4;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82F329BC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8319dc20
	ctx.lr = 0x82F329CC;
	sub_8319DC20(ctx, base);
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r9,r10,52996
	ctx.r9.u64 = ctx.r10.u64 | 52996;
	// lwzx r8,r24,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82f3389c
	if (!cr6.eq) goto loc_82F3389C;
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// li r21,0
	ctx.r21.s64 = 0;
	// ori r10,r11,30272
	ctx.r10.u64 = ctx.r11.u64 | 30272;
	// addis r3,r24,221
	ctx.r3.s64 = ctx.r24.s64 + 14483456;
	// addi r3,r3,-18780
	ctx.r3.s64 = ctx.r3.s64 + -18780;
	// stwx r21,r24,r10
	PPC_STORE_U32(ctx.r24.u32 + ctx.r10.u32, ctx.r21.u32);
	// bl 0x83124548
	ctx.lr = 0x82F32A08;
	sub_83124548(ctx, base);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r25,r11,-17142
	ctx.r25.s64 = ctx.r11.s64 + -17142;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831178a0
	ctx.lr = 0x82F32A28;
	sub_831178A0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8311c148
	ctx.lr = 0x82F32A34;
	sub_8311C148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82F32A3C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F32A40;
	sub_830FFAA8(ctx, base);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// li r15,1
	ctx.r15.s64 = 1;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// addi r23,r11,6176
	ctx.r23.s64 = ctx.r11.s64 + 6176;
	// bne cr6,0x82f32b0c
	if (!cr6.eq) goto loc_82F32B0C;
	// lhz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 808);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f32b0c
	if (cr6.eq) goto loc_82F32B0C;
	// addi r30,r29,248
	ctx.r30.s64 = ctx.r29.s64 + 248;
loc_82F32A6C:
	// ld r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// bge cr6,0x82f32a84
	if (!cr6.lt) goto loc_82F32A84;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
loc_82F32A84:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f32aa0
	if (!cr6.eq) goto loc_82F32AA0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82f32acc
	goto loc_82F32ACC;
loc_82F32AA0:
	// lhz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lhz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f32ac4
	if (!cr6.eq) goto loc_82F32AC4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq cr6,0x82f32ac8
	if (cr6.eq) goto loc_82F32AC8;
loc_82F32AC4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F32AC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F32ACC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f32af4
	if (!cr6.eq) goto loc_82F32AF4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bd68
	ctx.lr = 0x82F32AE0;
	sub_8311BD68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f32af4
	if (cr6.eq) goto loc_82F32AF4;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
loc_82F32AF4:
	// lhz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82f32a6c
	if (cr6.lt) goto loc_82F32A6C;
loc_82F32B0C:
	// bl 0x830ff290
	ctx.lr = 0x82F32B10;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F32B14;
	sub_830FFAA8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F32B20;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f32b3c
	if (cr6.eq) goto loc_82F32B3C;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_82F32B3C:
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// ori r9,r11,5128
	ctx.r9.u64 = ctx.r11.u64 | 5128;
	// ori r8,r10,37447
	ctx.r8.u64 = ctx.r10.u64 | 37447;
	// li r26,2
	ctx.r26.s64 = 2;
	// addis r22,r28,5
	ctx.r22.s64 = ctx.r28.s64 + 327680;
	// stwx r26,r24,r9
	PPC_STORE_U32(ctx.r24.u32 + ctx.r9.u32, ctx.r26.u32);
	// addi r22,r22,14904
	ctx.r22.s64 = ctx.r22.s64 + 14904;
	// stbx r15,r28,r8
	PPC_STORE_U8(ctx.r28.u32 + ctx.r8.u32, ctx.r15.u8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123768
	ctx.lr = 0x82F32B68;
	sub_83123768(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r16,13
	cr6.compare<uint32_t>(ctx.r16.u32, 13, xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bne cr6,0x82f32bec
	if (!cr6.eq) goto loc_82F32BEC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123778
	ctx.lr = 0x82F32B80;
	sub_83123778(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82f32bec
	if (!cr6.eq) goto loc_82F32BEC;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r10,r11,1612
	ctx.r10.u64 = ctx.r11.u64 | 1612;
	// stbx r15,r24,r10
	PPC_STORE_U8(ctx.r24.u32 + ctx.r10.u32, ctx.r15.u8);
	// bl 0x8319dc20
	ctx.lr = 0x82F32BA0;
	sub_8319DC20(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x8319dc20
	ctx.lr = 0x82F32BB4;
	sub_8319DC20(ctx, base);
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x831178a0
	ctx.lr = 0x82F32BD4;
	sub_831178A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r24,222
	ctx.r3.s64 = ctx.r24.s64 + 14548992;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r3,r3,26340
	ctx.r3.s64 = ctx.r3.s64 + 26340;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82f321a0
	ctx.lr = 0x82F32BEC;
	sub_82F321A0(ctx, base);
loc_82F32BEC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f32c3c
	if (cr6.eq) goto loc_82F32C3C;
	// lis r11,110
	ctx.r11.s64 = 7208960;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// ori r30,r11,33536
	ctx.r30.u64 = ctx.r11.u64 | 33536;
loc_82F32C04:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83124150
	ctx.lr = 0x82F32C14;
	sub_83124150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82f32c30
	if (cr6.eq) goto loc_82F32C30;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r24
	PPC_STORE_U16(ctx.r9.u32 + ctx.r24.u32, ctx.r10.u16);
loc_82F32C30:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82f32c04
	if (cr6.lt) goto loc_82F32C04;
loc_82F32C3C:
	// cmplwi cr6,r16,12
	cr6.compare<uint32_t>(ctx.r16.u32, 12, xer);
	// beq cr6,0x82f32c4c
	if (cr6.eq) goto loc_82F32C4C;
	// cmplwi cr6,r16,13
	cr6.compare<uint32_t>(ctx.r16.u32, 13, xer);
	// bne cr6,0x82f32cb8
	if (!cr6.eq) goto loc_82F32CB8;
loc_82F32C4C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f32cb8
	if (cr6.eq) goto loc_82F32CB8;
	// addis r31,r24,222
	ctx.r31.s64 = ctx.r24.s64 + 14548992;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r31,r31,-8464
	ctx.r31.s64 = ctx.r31.s64 + -8464;
	// bl 0x83123968
	ctx.lr = 0x82F32C6C;
	sub_83123968(ctx, base);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// addis r30,r31,7
	ctx.r30.s64 = ctx.r31.s64 + 458752;
	// ori r10,r11,57956
	ctx.r10.u64 = ctx.r11.u64 | 57956;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r30,-7578
	ctx.r30.s64 = ctx.r30.s64 + -7578;
	// stbx r3,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123988
	ctx.lr = 0x82F32C8C;
	sub_83123988(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123968
	ctx.lr = 0x82F32C9C;
	sub_83123968(ctx, base);
	// lis r9,6
	ctx.r9.s64 = 393216;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r8,r9,57957
	ctx.r8.u64 = ctx.r9.u64 | 57957;
	// stbx r3,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123988
	ctx.lr = 0x82F32CB4;
	sub_83123988(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
loc_82F32CB8:
	// bl 0x831156e8
	ctx.lr = 0x82F32CBC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r30,r31,221
	ctx.r30.s64 = ctx.r31.s64 + 14483456;
	// addi r30,r30,-26512
	ctx.r30.s64 = ctx.r30.s64 + -26512;
	// bl 0x83123778
	ctx.lr = 0x82F32CD4;
	sub_83123778(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82f32d10
	if (cr6.eq) goto loc_82F32D10;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123778
	ctx.lr = 0x82F32CE8;
	sub_83123778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F32CF4;
	sub_8311C338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123778
	ctx.lr = 0x82F32D00;
	sub_83123778(ctx, base);
	// bl 0x83195988
	ctx.lr = 0x82F32D04;
	sub_83195988(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,1296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1296, ctx.r3.u32);
	// stw r11,1292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1292, ctx.r11.u32);
loc_82F32D10:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f32d40
	if (cr6.eq) goto loc_82F32D40;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82F32D2C;
	sub_8311C3D8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f32d40
	if (cr6.eq) goto loc_82F32D40;
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
loc_82F32D40:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r9,r11,46620
	ctx.r9.u64 = ctx.r11.u64 | 46620;
	// clrlwi r19,r29,24
	ctx.r19.u64 = ctx.r29.u32 & 0xFF;
	// ori r20,r10,52845
	ctx.r20.u64 = ctx.r10.u64 | 52845;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// lbzx r18,r24,r9
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r9.u32);
	// bne cr6,0x82f32f9c
	if (!cr6.eq) goto loc_82F32F9C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f3303c
	if (cr6.eq) goto loc_82F3303C;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f32f9c
	if (!cr6.eq) goto loc_82F32F9C;
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f32f9c
	if (!cr6.eq) goto loc_82F32F9C;
	// bl 0x82fe0df0
	ctx.lr = 0x82F32D88;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fffae8
	ctx.lr = 0x82F32D90;
	sub_82FFFAE8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f32da0
	if (cr6.eq) goto loc_82F32DA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F32DA0;
	sub_82416268(ctx, base);
loc_82F32DA0:
	// bl 0x831156e8
	ctx.lr = 0x82F32DA4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// addis r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 393216;
	// addi r30,r30,-30316
	ctx.r30.s64 = ctx.r30.s64 + -30316;
loc_82F32DB4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x831239e0
	ctx.lr = 0x82F32DC4;
	sub_831239E0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8311c148
	ctx.lr = 0x82F32DD0;
	sub_8311C148(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b64ac0
	ctx.lr = 0x82F32DDC;
	sub_82B64AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82f32df4
	if (!cr6.lt) goto loc_82F32DF4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82f32db4
	if (cr6.lt) goto loc_82F32DB4;
loc_82F32DF4:
	// addis r28,r24,222
	ctx.r28.s64 = ctx.r24.s64 + 14548992;
	// addi r28,r28,30348
	ctx.r28.s64 = ctx.r28.s64 + 30348;
	// addis r27,r28,6
	ctx.r27.s64 = ctx.r28.s64 + 393216;
	// addi r27,r27,11928
	ctx.r27.s64 = ctx.r27.s64 + 11928;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bge cr6,0x82f32e18
	if (!cr6.lt) goto loc_82F32E18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
loc_82F32E18:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311bf90
	ctx.lr = 0x82F32E28;
	sub_8311BF90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f32f5c
	if (cr6.eq) goto loc_82F32F5C;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// bl 0x83131a88
	ctx.lr = 0x82F32E48;
	sub_83131A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f32e5c
	if (!cr6.eq) goto loc_82F32E5C;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82F32E5C:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r10,25(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// lbz r8,22(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// lbz r9,21(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// lbz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f32eb4
	if (!cr6.eq) goto loc_82F32EB4;
	// addis r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 393216;
	// addi r11,r11,11930
	ctx.r11.s64 = ctx.r11.s64 + 11930;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bge cr6,0x82f32f5c
	if (!cr6.lt) goto loc_82F32F5C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82f32f5c
	goto loc_82F32F5C;
loc_82F32EB4:
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r8,r30,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 7;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,22(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 22);
	// lbz r7,22(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 22);
	// lbzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// lbz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x82f32f3c
	if (!cr6.gt) goto loc_82F32F3C;
	// addis r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 393216;
	// addi r11,r11,11929
	ctx.r11.s64 = ctx.r11.s64 + 11929;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bge cr6,0x82f32f5c
	if (!cr6.lt) goto loc_82F32F5C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82f32f5c
	goto loc_82F32F5C;
loc_82F32F3C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bge cr6,0x82f32f5c
	if (!cr6.lt) goto loc_82F32F5C;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// ori r8,r10,11931
	ctx.r8.u64 = ctx.r10.u64 | 11931;
	// stbx r9,r28,r8
	PPC_STORE_U8(ctx.r28.u32 + ctx.r8.u32, ctx.r9.u8);
loc_82F32F5C:
	// cmplwi cr6,r16,11
	cr6.compare<uint32_t>(ctx.r16.u32, 11, xer);
	// beq cr6,0x82f32f84
	if (cr6.eq) goto loc_82F32F84;
	// cmplwi cr6,r16,13
	cr6.compare<uint32_t>(ctx.r16.u32, 13, xer);
	// bne cr6,0x82f32f9c
	if (!cr6.eq) goto loc_82F32F9C;
	// li r11,78
	ctx.r11.s64 = 78;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// b 0x82f32f98
	goto loc_82F32F98;
loc_82F32F84:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
loc_82F32F98:
	// bl 0x8314cbe8
	ctx.lr = 0x82F32F9C;
	sub_8314CBE8(ctx, base);
loc_82F32F9C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f3303c
	if (cr6.eq) goto loc_82F3303C;
	// cmplwi cr6,r16,12
	cr6.compare<uint32_t>(ctx.r16.u32, 12, xer);
	// beq cr6,0x82f32fd4
	if (cr6.eq) goto loc_82F32FD4;
	// cmplwi cr6,r16,13
	cr6.compare<uint32_t>(ctx.r16.u32, 13, xer);
	// bne cr6,0x82f3303c
	if (!cr6.eq) goto loc_82F3303C;
	// li r11,77
	ctx.r11.s64 = 77;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8314cbe8
	ctx.lr = 0x82F32FD0;
	sub_8314CBE8(ctx, base);
	// b 0x82f33484
	goto loc_82F33484;
loc_82F32FD4:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f32ff8
	if (cr6.eq) goto loc_82F32FF8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8314cbe8
	ctx.lr = 0x82F32FF8;
	sub_8314CBE8(ctx, base);
loc_82F32FF8:
	// bl 0x831bc900
	ctx.lr = 0x82F32FFC;
	sub_831BC900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f33020
	if (cr6.eq) goto loc_82F33020;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8314cbe8
	ctx.lr = 0x82F33020;
	sub_8314CBE8(ctx, base);
loc_82F33020:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8314cbe8
	ctx.lr = 0x82F33038;
	sub_8314CBE8(ctx, base);
	// b 0x82f33044
	goto loc_82F33044;
loc_82F3303C:
	// cmplwi cr6,r16,12
	cr6.compare<uint32_t>(ctx.r16.u32, 12, xer);
	// bne cr6,0x82f33484
	if (!cr6.eq) goto loc_82F33484;
loc_82F33044:
	// lbzx r11,r24,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r20.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f33484
	if (!cr6.eq) goto loc_82F33484;
	// bl 0x82fe0df0
	ctx.lr = 0x82F33054;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f569f0
	ctx.lr = 0x82F3305C;
	sub_82F569F0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f3306c
	if (cr6.eq) goto loc_82F3306C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F3306C;
	sub_82416268(ctx, base);
loc_82F3306C:
	// bl 0x82f58258
	ctx.lr = 0x82F33070;
	sub_82F58258(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f5b528
	ctx.lr = 0x82F33078;
	sub_82F5B528(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f330ac
	if (cr6.eq) goto loc_82F330AC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f33098
	if (cr6.eq) goto loc_82F33098;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825952b8
	ctx.lr = 0x82F33098;
	sub_825952B8(ctx, base);
loc_82F33098:
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// bl 0x82416268
	ctx.lr = 0x82F330AC;
	sub_82416268(ctx, base);
loc_82F330AC:
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x82F330C4;
	sub_831178A0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x82F330D4;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x82F330E8;
	sub_8311C148(ctx, base);
	// lwz r9,796(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r8,r9,0,16,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f33224
	if (!cr6.eq) goto loc_82F33224;
	// bl 0x8311c3d8
	ctx.lr = 0x82F33108;
	sub_8311C3D8(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f33134
	if (!cr6.eq) goto loc_82F33134;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f33138
	if (cr6.eq) goto loc_82F33138;
loc_82F33134:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F33138:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f33158
	if (cr6.eq) goto loc_82F33158;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x82F33154;
	sub_8311C3D8(ctx, base);
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82F33158:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311c148
	ctx.lr = 0x82F33164;
	sub_8311C148(ctx, base);
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f33484
	if (cr6.eq) goto loc_82F33484;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r30,r3,248
	ctx.r30.s64 = ctx.r3.s64 + 248;
loc_82F33184:
	// ld r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// bge cr6,0x82f3319c
	if (!cr6.lt) goto loc_82F3319C;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
loc_82F3319C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f331b4
	if (!cr6.eq) goto loc_82F331B4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82f331dc
	goto loc_82F331DC;
loc_82F331B4:
	// lhz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lhz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82f331d4
	if (!cr6.eq) goto loc_82F331D4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq cr6,0x82f331d8
	if (cr6.eq) goto loc_82F331D8;
loc_82F331D4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F331D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F331DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f33208
	if (!cr6.eq) goto loc_82F33208;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bd68
	ctx.lr = 0x82F331F0;
	sub_8311BD68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f33204
	if (cr6.eq) goto loc_82F33204;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,95
	ctx.r4.s64 = 95;
	// bl 0x83121088
	ctx.lr = 0x82F33204;
	sub_83121088(ctx, base);
loc_82F33204:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_82F33208:
	// lhz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82f33184
	if (cr6.lt) goto loc_82F33184;
	// b 0x82f33484
	goto loc_82F33484;
loc_82F33224:
	// bl 0x8311c3d8
	ctx.lr = 0x82F33228;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8311c3d8
	ctx.lr = 0x82F33240;
	sub_8311C3D8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,16(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// bl 0x8311c148
	ctx.lr = 0x82F33254;
	sub_8311C148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311c148
	ctx.lr = 0x82F33264;
	sub_8311C148(ctx, base);
	// lhz r7,808(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 808);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r11,r7,25
	ctx.r11.u64 = ctx.r7.u32 & 0x7F;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f33378
	if (cr6.eq) goto loc_82F33378;
	// addi r29,r28,248
	ctx.r29.s64 = ctx.r28.s64 + 248;
loc_82F33284:
	// ld r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// bge cr6,0x82f3329c
	if (!cr6.lt) goto loc_82F3329C;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
loc_82F3329C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f332b4
	if (!cr6.eq) goto loc_82F332B4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82f332dc
	goto loc_82F332DC;
loc_82F332B4:
	// lhz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lhz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82f332d4
	if (!cr6.eq) goto loc_82F332D4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq cr6,0x82f332d8
	if (cr6.eq) goto loc_82F332D8;
loc_82F332D4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F332D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F332DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f33360
	if (!cr6.eq) goto loc_82F33360;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bd68
	ctx.lr = 0x82F332F0;
	sub_8311BD68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3335c
	if (cr6.eq) goto loc_82F3335C;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x831235b8
	ctx.lr = 0x82F33310;
	sub_831235B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f3333c
	if (!cr6.eq) goto loc_82F3333C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f33340
	if (cr6.eq) goto loc_82F33340;
loc_82F3333C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F33340:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3335c
	if (!cr6.eq) goto loc_82F3335C;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x82F3335C;
	sub_83121088(ctx, base);
loc_82F3335C:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_82F33360:
	// lhz r11,808(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 808);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82f33284
	if (cr6.lt) goto loc_82F33284;
loc_82F33378:
	// lhz r11,808(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 808);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f33484
	if (cr6.eq) goto loc_82F33484;
	// addi r29,r27,248
	ctx.r29.s64 = ctx.r27.s64 + 248;
loc_82F33390:
	// ld r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// bge cr6,0x82f333a8
	if (!cr6.lt) goto loc_82F333A8;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
loc_82F333A8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f333c0
	if (!cr6.eq) goto loc_82F333C0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82f333e8
	goto loc_82F333E8;
loc_82F333C0:
	// lhz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lhz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82f333e0
	if (!cr6.eq) goto loc_82F333E0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq cr6,0x82f333e4
	if (cr6.eq) goto loc_82F333E4;
loc_82F333E0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F333E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F333E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f3346c
	if (!cr6.eq) goto loc_82F3346C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bd68
	ctx.lr = 0x82F333FC;
	sub_8311BD68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f33468
	if (cr6.eq) goto loc_82F33468;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x831235b8
	ctx.lr = 0x82F3341C;
	sub_831235B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f33448
	if (!cr6.eq) goto loc_82F33448;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f3344c
	if (cr6.eq) goto loc_82F3344C;
loc_82F33448:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F3344C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f33468
	if (!cr6.eq) goto loc_82F33468;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x82F33468;
	sub_83121088(ctx, base);
loc_82F33468:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_82F3346C:
	// lhz r11,808(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 808);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82f33390
	if (cr6.lt) goto loc_82F33390;
loc_82F33484:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f334ac
	if (cr6.eq) goto loc_82F334AC;
	// bl 0x82fe0df0
	ctx.lr = 0x82F33494;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f334ac
	if (cr6.eq) goto loc_82F334AC;
	// bl 0x82fe5ac8
	ctx.lr = 0x82F334A4;
	sub_82FE5AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F334AC;
	sub_82416268(ctx, base);
loc_82F334AC:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// bne cr6,0x82f33544
	if (!cr6.eq) goto loc_82F33544;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f334f8
	if (cr6.eq) goto loc_82F334F8;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f334f8
	if (!cr6.eq) goto loc_82F334F8;
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f334f8
	if (!cr6.eq) goto loc_82F334F8;
	// bl 0x82fe0df0
	ctx.lr = 0x82F334DC;
	sub_82FE0DF0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ffe348
	ctx.lr = 0x82F334E8;
	sub_82FFE348(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f334f8
	if (cr6.eq) goto loc_82F334F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F334F8;
	sub_82416268(ctx, base);
loc_82F334F8:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// bne cr6,0x82f33544
	if (!cr6.eq) goto loc_82F33544;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f33544
	if (cr6.eq) goto loc_82F33544;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f33544
	if (!cr6.eq) goto loc_82F33544;
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f33544
	if (!cr6.eq) goto loc_82F33544;
	// bl 0x82fe0df0
	ctx.lr = 0x82F33528;
	sub_82FE0DF0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ff32f0
	ctx.lr = 0x82F33534;
	sub_82FF32F0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f33544
	if (cr6.eq) goto loc_82F33544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F33544;
	sub_82416268(ctx, base);
loc_82F33544:
	// bl 0x82f8fd50
	ctx.lr = 0x82F33548;
	sub_82F8FD50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f91630
	ctx.lr = 0x82F33550;
	sub_82F91630(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f33560
	if (cr6.eq) goto loc_82F33560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F33560;
	sub_82416268(ctx, base);
loc_82F33560:
	// bl 0x82fde940
	ctx.lr = 0x82F33564;
	sub_82FDE940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fe0d30
	ctx.lr = 0x82F3356C;
	sub_82FE0D30(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f3357c
	if (cr6.eq) goto loc_82F3357C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F3357C;
	sub_82416268(ctx, base);
loc_82F3357C:
	// cmplwi cr6,r16,12
	cr6.compare<uint32_t>(ctx.r16.u32, 12, xer);
	// beq cr6,0x82f3358c
	if (cr6.eq) goto loc_82F3358C;
	// cmplwi cr6,r16,13
	cr6.compare<uint32_t>(ctx.r16.u32, 13, xer);
	// bne cr6,0x82f335b4
	if (!cr6.eq) goto loc_82F335B4;
loc_82F3358C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f335b4
	if (cr6.eq) goto loc_82F335B4;
	// bl 0x82f919e0
	ctx.lr = 0x82F3359C;
	sub_82F919E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ffd638
	ctx.lr = 0x82F335A4;
	sub_82FFD638(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f335b4
	if (cr6.eq) goto loc_82F335B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F335B4;
	sub_82416268(ctx, base);
loc_82F335B4:
	// cmplwi cr6,r16,12
	cr6.compare<uint32_t>(ctx.r16.u32, 12, xer);
	// bne cr6,0x82f337c4
	if (!cr6.eq) goto loc_82F337C4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f33644
	if (cr6.eq) goto loc_82F33644;
	// bl 0x82f5e128
	ctx.lr = 0x82F335CC;
	sub_82F5E128(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f61c38
	ctx.lr = 0x82F335D8;
	sub_82F61C38(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f335e8
	if (cr6.eq) goto loc_82F335E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F335E8;
	sub_82416268(ctx, base);
loc_82F335E8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f33644
	if (cr6.eq) goto loc_82F33644;
	// bl 0x82f4c5f8
	ctx.lr = 0x82F335F8;
	sub_82F4C5F8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f4c648
	ctx.lr = 0x82F33604;
	sub_82F4C648(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f3361c
	if (cr6.eq) goto loc_82F3361C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f11518
	ctx.lr = 0x82F33614;
	sub_82F11518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F3361C;
	sub_82416268(ctx, base);
loc_82F3361C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f33644
	if (cr6.eq) goto loc_82F33644;
	// bl 0x82fe0df0
	ctx.lr = 0x82F3362C;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f33644
	if (cr6.eq) goto loc_82F33644;
	// bl 0x82f53fa8
	ctx.lr = 0x82F3363C;
	sub_82F53FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F33644;
	sub_82416268(ctx, base);
loc_82F33644:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123778
	ctx.lr = 0x82F3364C;
	sub_83123778(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bne cr6,0x82f336bc
	if (!cr6.eq) goto loc_82F336BC;
	// stw r15,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r15.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123a08
	ctx.lr = 0x82F33668;
	sub_83123A08(ctx, base);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,6224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6224);
	// xor r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f33698
	if (!cr6.eq) goto loc_82F33698;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f3369c
	if (cr6.eq) goto loc_82F3369C;
loc_82F33698:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F3369C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f336bc
	if (!cr6.eq) goto loc_82F336BC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x82F336B0;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f336bc
	if (cr6.eq) goto loc_82F336BC;
	// bl 0x82f160b8
	ctx.lr = 0x82F336BC;
	sub_82F160B8(ctx, base);
loc_82F336BC:
	// lbzx r11,r24,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r20.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f336f4
	if (!cr6.eq) goto loc_82F336F4;
	// cmplwi cr6,r16,12
	cr6.compare<uint32_t>(ctx.r16.u32, 12, xer);
	// beq cr6,0x82f336d8
	if (cr6.eq) goto loc_82F336D8;
	// cmplwi cr6,r16,13
	cr6.compare<uint32_t>(ctx.r16.u32, 13, xer);
	// bne cr6,0x82f336f4
	if (!cr6.eq) goto loc_82F336F4;
loc_82F336D8:
	// bl 0x82f450c0
	ctx.lr = 0x82F336DC;
	sub_82F450C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f336f4
	if (cr6.eq) goto loc_82F336F4;
	// bl 0x82f49480
	ctx.lr = 0x82F336EC;
	sub_82F49480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F336F4;
	sub_82416268(ctx, base);
loc_82F336F4:
	// bl 0x8310cc00
	ctx.lr = 0x82F336F8;
	sub_8310CC00(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82f33718
	if (cr6.lt) goto loc_82F33718;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// ble cr6,0x82f3371c
	if (!cr6.gt) goto loc_82F3371C;
loc_82F33718:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F3371C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3389c
	if (cr6.eq) goto loc_82F3389C;
	// bl 0x83105358
	ctx.lr = 0x82F3372C;
	sub_83105358(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b1b708
	ctx.lr = 0x82F3373C;
	sub_82B1B708(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f3389c
	if (!cr6.eq) goto loc_82F3389C;
	// cmplwi cr6,r16,13
	cr6.compare<uint32_t>(ctx.r16.u32, 13, xer);
	// bne cr6,0x82f3389c
	if (!cr6.eq) goto loc_82F3389C;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// bne cr6,0x82f3389c
	if (!cr6.eq) goto loc_82F3389C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f3389c
	if (cr6.eq) goto loc_82F3389C;
	// clrlwi r10,r18,24
	ctx.r10.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f3389c
	if (!cr6.eq) goto loc_82F3389C;
	// clrlwi r10,r17,24
	ctx.r10.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f3389c
	if (!cr6.eq) goto loc_82F3389C;
	// addis r29,r24,229
	ctx.r29.s64 = ctx.r24.s64 + 15007744;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r29,r29,-23256
	ctx.r29.s64 = ctx.r29.s64 + -23256;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x83150008
	ctx.lr = 0x82F33794;
	sub_83150008(ctx, base);
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bne cr6,0x82f337f8
	if (!cr6.eq) goto loc_82F337F8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82f33820
	goto loc_82F33820;
loc_82F337C4:
	// cmplwi cr6,r16,13
	cr6.compare<uint32_t>(ctx.r16.u32, 13, xer);
	// bne cr6,0x82f336bc
	if (!cr6.eq) goto loc_82F336BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f336bc
	if (cr6.eq) goto loc_82F336BC;
	// bl 0x82fe0df0
	ctx.lr = 0x82F337DC;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f52060
	ctx.lr = 0x82F337E4;
	sub_82F52060(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f336bc
	if (cr6.eq) goto loc_82F336BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F337F4;
	sub_82416268(ctx, base);
	// b 0x82f336bc
	goto loc_82F336BC;
loc_82F337F8:
	// lhz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lhz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f33818
	if (!cr6.eq) goto loc_82F33818;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq cr6,0x82f3381c
	if (cr6.eq) goto loc_82F3381C;
loc_82F33818:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F3381C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F33820:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3389c
	if (cr6.eq) goto loc_82F3389C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83150050
	ctx.lr = 0x82F33838;
	sub_83150050(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3389c
	if (cr6.eq) goto loc_82F3389C;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f3389c
	if (cr6.eq) goto loc_82F3389C;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x82f3389c
	if (cr6.eq) goto loc_82F3389C;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x82f3389c
	if (cr6.eq) goto loc_82F3389C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F33868;
	sub_8311C338(ctx, base);
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82f3389c
	if (!cr6.eq) goto loc_82F3389C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3389c
	if (cr6.eq) goto loc_82F3389C;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f3389c
	if (cr6.eq) goto loc_82F3389C;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b1b640
	ctx.lr = 0x82F3389C;
	sub_82B1B640(ctx, base);
loc_82F3389C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F338A4"))) PPC_WEAK_FUNC(sub_82F338A4);
PPC_FUNC_IMPL(__imp__sub_82F338A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F338A8"))) PPC_WEAK_FUNC(sub_82F338A8);
PPC_FUNC_IMPL(__imp__sub_82F338A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f338d8
	if (cr6.eq) goto loc_82F338D8;
	// bl 0x82f32968
	ctx.lr = 0x82F338CC;
	sub_82F32968(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,92(r10)
	PPC_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
loc_82F338D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F338F0"))) PPC_WEAK_FUNC(sub_82F338F0);
PPC_FUNC_IMPL(__imp__sub_82F338F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r10,40
	ctx.r10.s64 = 40;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 458752;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// addi r11,r11,-14728
	ctx.r11.s64 = ctx.r11.s64 + -14728;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r6,-31756
	ctx.r6.s64 = -2081161216;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r10,r10,6376
	ctx.r10.s64 = ctx.r10.s64 + 6376;
loc_82F3392C:
	// lwz r3,-56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82f33998
	if (cr6.eq) goto loc_82F33998;
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// beq cr6,0x82f33998
	if (cr6.eq) goto loc_82F33998;
	// cmpwi cr6,r3,53
	cr6.compare<int32_t>(ctx.r3.s32, 53, xer);
	// beq cr6,0x82f33998
	if (cr6.eq) goto loc_82F33998;
	// stw r4,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r4.u32);
	// ld r3,6312(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6312);
	// std r3,-52(r11)
	PPC_STORE_U64(ctx.r11.u32 + -52, ctx.r3.u64);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// lwz r31,-44(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	// rlwimi r31,r3,0,0,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r31.u64 & 0xFFFFFFFF0003FFFF);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r31.u32);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// rlwimi r30,r3,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r30.u32);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r3,-40(r11)
	PPC_STORE_U16(ctx.r11.u32 + -40, ctx.r3.u16);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,-36(r11)
	PPC_STORE_U32(ctx.r11.u32 + -36, ctx.r3.u32);
	// sth r7,-32(r11)
	PPC_STORE_U16(ctx.r11.u32 + -32, ctx.r7.u16);
	// sth r7,-30(r11)
	PPC_STORE_U16(ctx.r11.u32 + -30, ctx.r7.u16);
	// sth r8,-24(r11)
	PPC_STORE_U16(ctx.r11.u32 + -24, ctx.r8.u16);
	// lwz r3,13136(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13136);
	// stw r3,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r3.u32);
loc_82F33998:
	// lwz r3,-20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82f33a04
	if (cr6.eq) goto loc_82F33A04;
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// beq cr6,0x82f33a04
	if (cr6.eq) goto loc_82F33A04;
	// cmpwi cr6,r3,53
	cr6.compare<int32_t>(ctx.r3.s32, 53, xer);
	// beq cr6,0x82f33a04
	if (cr6.eq) goto loc_82F33A04;
	// stw r4,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r4.u32);
	// ld r3,6312(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6312);
	// std r3,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.r3.u64);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// lwz r31,-8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwimi r31,r3,0,0,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r31.u64 & 0xFFFFFFFF0003FFFF);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// rlwimi r30,r3,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r3,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r3.u16);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// sth r8,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r8.u16);
	// lwz r3,13136(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13136);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_82F33A04:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82f33a6c
	if (cr6.eq) goto loc_82F33A6C;
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// beq cr6,0x82f33a6c
	if (cr6.eq) goto loc_82F33A6C;
	// cmpwi cr6,r3,53
	cr6.compare<int32_t>(ctx.r3.s32, 53, xer);
	// beq cr6,0x82f33a6c
	if (cr6.eq) goto loc_82F33A6C;
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// ld r3,6312(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6312);
	// std r3,20(r11)
	PPC_STORE_U64(ctx.r11.u32 + 20, ctx.r3.u64);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r31,r3,0,0,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r31.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// rlwimi r31,r3,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r3,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r3.u16);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// sth r7,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r7.u16);
	// sth r7,42(r11)
	PPC_STORE_U16(ctx.r11.u32 + 42, ctx.r7.u16);
	// sth r8,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r8.u16);
	// lwz r3,13136(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13136);
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
loc_82F33A6C:
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82f33ad4
	if (cr6.eq) goto loc_82F33AD4;
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// beq cr6,0x82f33ad4
	if (cr6.eq) goto loc_82F33AD4;
	// cmpwi cr6,r3,53
	cr6.compare<int32_t>(ctx.r3.s32, 53, xer);
	// beq cr6,0x82f33ad4
	if (cr6.eq) goto loc_82F33AD4;
	// stw r4,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// ld r3,6312(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6312);
	// std r3,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r3.u64);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r31,r3,0,0,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r31.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// rlwimi r31,r3,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r3,68(r11)
	PPC_STORE_U16(ctx.r11.u32 + 68, ctx.r3.u16);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r3.u32);
	// sth r7,76(r11)
	PPC_STORE_U16(ctx.r11.u32 + 76, ctx.r7.u16);
	// sth r7,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r7.u16);
	// sth r8,84(r11)
	PPC_STORE_U16(ctx.r11.u32 + 84, ctx.r8.u16);
	// lwz r3,13136(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13136);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
loc_82F33AD4:
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82f33b3c
	if (cr6.eq) goto loc_82F33B3C;
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// beq cr6,0x82f33b3c
	if (cr6.eq) goto loc_82F33B3C;
	// cmpwi cr6,r3,53
	cr6.compare<int32_t>(ctx.r3.s32, 53, xer);
	// beq cr6,0x82f33b3c
	if (cr6.eq) goto loc_82F33B3C;
	// stw r4,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r4.u32);
	// ld r3,6312(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6312);
	// std r3,92(r11)
	PPC_STORE_U64(ctx.r11.u32 + 92, ctx.r3.u64);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// lwz r31,100(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwimi r31,r3,0,0,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r31.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
	// lwz r3,6360(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6360);
	// rlwimi r31,r3,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r3,104(r11)
	PPC_STORE_U16(ctx.r11.u32 + 104, ctx.r3.u16);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r3.u32);
	// sth r7,112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 112, ctx.r7.u16);
	// sth r7,114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 114, ctx.r7.u16);
	// sth r8,120(r11)
	PPC_STORE_U16(ctx.r11.u32 + 120, ctx.r8.u16);
	// lwz r3,13136(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13136);
	// stw r3,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r3.u32);
loc_82F33B3C:
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// bdnz 0x82f3392c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F3392C;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F33B50"))) PPC_WEAK_FUNC(sub_82F33B50);
PPC_FUNC_IMPL(__imp__sub_82F33B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16272
	ctx.r9.s64 = ctx.r11.s64 + -16272;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F33B88;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f33ba0
	if (cr6.eq) goto loc_82F33BA0;
	// bl 0x82416268
	ctx.lr = 0x82F33B9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F33BA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F33BB8"))) PPC_WEAK_FUNC(sub_82F33BB8);
PPC_FUNC_IMPL(__imp__sub_82F33BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F33BE8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f33c24
	if (cr6.eq) goto loc_82F33C24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F33BFC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16272
	ctx.r9.s64 = ctx.r11.s64 + -16272;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r7.u8);
	// b 0x82f33c28
	goto loc_82F33C28;
loc_82F33C24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F33C28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F33C40"))) PPC_WEAK_FUNC(sub_82F33C40);
PPC_FUNC_IMPL(__imp__sub_82F33C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f33c50
	if (cr6.lt) goto loc_82F33C50;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F33C50:
	// b 0x82f33bb8
	sub_82F33BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F33C54"))) PPC_WEAK_FUNC(sub_82F33C54);
PPC_FUNC_IMPL(__imp__sub_82F33C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F33C58"))) PPC_WEAK_FUNC(sub_82F33C58);
PPC_FUNC_IMPL(__imp__sub_82F33C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82F33C60;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x82F33C68;
	sub_831156E8(ctx, base);
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82F33C70;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F33C74;
	sub_830FFAA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319dc20
	ctx.lr = 0x82F33C80;
	sub_8319DC20(ctx, base);
	// bl 0x82fe0df0
	ctx.lr = 0x82F33C84;
	sub_82FE0DF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83002e10
	ctx.lr = 0x82F33C8C;
	sub_83002E10(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f33c9c
	if (cr6.eq) goto loc_82F33C9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82F33C9C;
	sub_82416268(ctx, base);
loc_82F33C9C:
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// li r21,2
	ctx.r21.s64 = 2;
	// ori r29,r11,1621
	ctx.r29.u64 = ctx.r11.u64 | 1621;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// bne cr6,0x82f33e9c
	if (!cr6.eq) goto loc_82F33E9C;
	// addis r8,r25,205
	ctx.r8.s64 = ctx.r25.s64 + 13434880;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r8,r8,-18420
	ctx.r8.s64 = ctx.r8.s64 + -18420;
	// add r5,r25,r29
	ctx.r5.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addis r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 262144;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r7,r7,-20984
	ctx.r7.s64 = ctx.r7.s64 + -20984;
	// ori r9,r11,44076
	ctx.r9.u64 = ctx.r11.u64 | 44076;
loc_82F33CD4:
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bge cr6,0x82f33ce8
	if (!cr6.lt) goto loc_82F33CE8;
	// addi r11,r7,-476
	ctx.r11.s64 = ctx.r7.s64 + -476;
loc_82F33CE8:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f33d2c
	if (cr6.eq) goto loc_82F33D2C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82f33d10
	if (cr6.eq) goto loc_82F33D10;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x82f33d10
	if (cr6.eq) goto loc_82F33D10;
	// stb r31,462(r11)
	PPC_STORE_U8(ctx.r11.u32 + 462, ctx.r31.u8);
loc_82F33D10:
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// rlwinm r10,r10,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82f33d2c
	if (cr6.eq) goto loc_82F33D2C;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x82f33d2c
	if (cr6.eq) goto loc_82F33D2C;
	// stb r31,463(r11)
	PPC_STORE_U8(ctx.r11.u32 + 463, ctx.r31.u8);
loc_82F33D2C:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bge cr6,0x82f33d40
	if (!cr6.lt) goto loc_82F33D40;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82F33D40:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f33d84
	if (cr6.eq) goto loc_82F33D84;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82f33d68
	if (cr6.eq) goto loc_82F33D68;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x82f33d68
	if (cr6.eq) goto loc_82F33D68;
	// stb r31,462(r11)
	PPC_STORE_U8(ctx.r11.u32 + 462, ctx.r31.u8);
loc_82F33D68:
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// rlwinm r10,r10,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82f33d84
	if (cr6.eq) goto loc_82F33D84;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x82f33d84
	if (cr6.eq) goto loc_82F33D84;
	// stb r31,463(r11)
	PPC_STORE_U8(ctx.r11.u32 + 463, ctx.r31.u8);
loc_82F33D84:
	// cmplwi cr6,r6,70
	cr6.compare<uint32_t>(ctx.r6.u32, 70, xer);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bge cr6,0x82f33d94
	if (!cr6.lt) goto loc_82F33D94;
	// addi r11,r7,476
	ctx.r11.s64 = ctx.r7.s64 + 476;
loc_82F33D94:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f33dd8
	if (cr6.eq) goto loc_82F33DD8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82f33dbc
	if (cr6.eq) goto loc_82F33DBC;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x82f33dbc
	if (cr6.eq) goto loc_82F33DBC;
	// stb r31,462(r11)
	PPC_STORE_U8(ctx.r11.u32 + 462, ctx.r31.u8);
loc_82F33DBC:
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// rlwinm r10,r10,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82f33dd8
	if (cr6.eq) goto loc_82F33DD8;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x82f33dd8
	if (cr6.eq) goto loc_82F33DD8;
	// stb r31,463(r11)
	PPC_STORE_U8(ctx.r11.u32 + 463, ctx.r31.u8);
loc_82F33DD8:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bge cr6,0x82f33dec
	if (!cr6.lt) goto loc_82F33DEC;
	// addi r11,r7,952
	ctx.r11.s64 = ctx.r7.s64 + 952;
loc_82F33DEC:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f33e30
	if (cr6.eq) goto loc_82F33E30;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82f33e14
	if (cr6.eq) goto loc_82F33E14;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x82f33e14
	if (cr6.eq) goto loc_82F33E14;
	// stb r31,462(r11)
	PPC_STORE_U8(ctx.r11.u32 + 462, ctx.r31.u8);
loc_82F33E14:
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// rlwinm r10,r10,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82f33e30
	if (cr6.eq) goto loc_82F33E30;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x82f33e30
	if (cr6.eq) goto loc_82F33E30;
	// stb r31,463(r11)
	PPC_STORE_U8(ctx.r11.u32 + 463, ctx.r31.u8);
loc_82F33E30:
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bge cr6,0x82f33e44
	if (!cr6.lt) goto loc_82F33E44;
	// addi r11,r7,1428
	ctx.r11.s64 = ctx.r7.s64 + 1428;
loc_82F33E44:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f33e88
	if (cr6.eq) goto loc_82F33E88;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82f33e6c
	if (cr6.eq) goto loc_82F33E6C;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x82f33e6c
	if (cr6.eq) goto loc_82F33E6C;
	// stb r31,462(r11)
	PPC_STORE_U8(ctx.r11.u32 + 462, ctx.r31.u8);
loc_82F33E6C:
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// rlwinm r10,r10,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82f33e88
	if (cr6.eq) goto loc_82F33E88;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x82f33e88
	if (cr6.eq) goto loc_82F33E88;
	// stb r31,463(r11)
	PPC_STORE_U8(ctx.r11.u32 + 463, ctx.r31.u8);
loc_82F33E88:
	// addi r6,r6,5
	ctx.r6.s64 = ctx.r6.s64 + 5;
	// addi r7,r7,2380
	ctx.r7.s64 = ctx.r7.s64 + 2380;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// blt cr6,0x82f33cd4
	if (cr6.lt) goto loc_82F33CD4;
loc_82F33E9C:
	// bl 0x82eff1a8
	ctx.lr = 0x82F33EA0;
	sub_82EFF1A8(ctx, base);
	// addi r30,r3,140
	ctx.r30.s64 = ctx.r3.s64 + 140;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f33ed8
	if (cr6.eq) goto loc_82F33ED8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b1c7b8
	ctx.lr = 0x82F33EC0;
	sub_82B1C7B8(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82b1c488
	ctx.lr = 0x82F33ED4;
	sub_82B1C488(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82F33ED8:
	// bl 0x82f06520
	ctx.lr = 0x82F33EDC;
	sub_82F06520(ctx, base);
	// bl 0x82f05ed0
	ctx.lr = 0x82F33EE0;
	sub_82F05ED0(ctx, base);
	// lbzx r10,r25,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r29.u32);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ori r27,r11,57072
	ctx.r27.u64 = ctx.r11.u64 | 57072;
	// beq cr6,0x82f33f14
	if (cr6.eq) goto loc_82F33F14;
	// add r3,r25,r27
	ctx.r3.u64 = ctx.r25.u64 + ctx.r27.u64;
	// bl 0x82f338f0
	ctx.lr = 0x82F33EFC;
	sub_82F338F0(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addis r3,r25,229
	ctx.r3.s64 = ctx.r25.s64 + 15007744;
	// ori r10,r11,63300
	ctx.r10.u64 = ctx.r11.u64 | 63300;
	// addi r3,r3,-15264
	ctx.r3.s64 = ctx.r3.s64 + -15264;
	// stbx r31,r25,r10
	PPC_STORE_U8(ctx.r25.u32 + ctx.r10.u32, ctx.r31.u8);
	// bl 0x82f21358
	ctx.lr = 0x82F33F14;
	sub_82F21358(ctx, base);
loc_82F33F14:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addis r11,r25,192
	ctx.r11.s64 = ctx.r25.s64 + 12582912;
	// ori r9,r10,63108
	ctx.r9.u64 = ctx.r10.u64 | 63108;
	// addi r11,r11,-10964
	ctx.r11.s64 = ctx.r11.s64 + -10964;
	// lhzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,365
	cr6.compare<uint32_t>(ctx.r10.u32, 365, xer);
	// blt cr6,0x82f33f38
	if (cr6.lt) goto loc_82F33F38;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82f33f40
	goto loc_82F33F40;
loc_82F33F38:
	// mulli r10,r10,532
	ctx.r10.s64 = ctx.r10.s64 * 532;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82F33F40:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// beq cr6,0x82f34160
	if (cr6.eq) goto loc_82F34160;
	// lhz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 400);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f34014
	if (cr6.eq) goto loc_82F34014;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82F33F70:
	// cmplwi cr6,r29,200
	cr6.compare<uint32_t>(ctx.r29.u32, 200, xer);
	// blt cr6,0x82f33f80
	if (cr6.lt) goto loc_82F33F80;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// b 0x82f33f84
	goto loc_82F33F84;
loc_82F33F80:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
loc_82F33F84:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f34000
	if (cr6.eq) goto loc_82F34000;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8311bf90
	ctx.lr = 0x82F33F9C;
	sub_8311BF90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f34000
	if (cr6.eq) goto loc_82F34000;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x8314e340
	ctx.lr = 0x82F33FB4;
	sub_8314E340(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmplw cr6,r22,r26
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r26.u32, xer);
	// beq cr6,0x82f33fec
	if (cr6.eq) goto loc_82F33FEC;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
loc_82F33FC8:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f33fe4
	if (cr6.eq) goto loc_82F33FE4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82f33fc8
	if (!cr6.eq) goto loc_82F33FC8;
	// b 0x82f33fec
	goto loc_82F33FEC;
loc_82F33FE4:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82f34000
	if (!cr6.eq) goto loc_82F34000;
loc_82F33FEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82badd90
	ctx.lr = 0x82F33FF8;
	sub_82BADD90(ctx, base);
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r22,112(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82F34000:
	// lhz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 400);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82f33f70
	if (cr6.lt) goto loc_82F33F70;
loc_82F34014:
	// li r24,25
	ctx.r24.s64 = 25;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// add r25,r25,r27
	ctx.r25.u64 = ctx.r25.u64 + ctx.r27.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ae7270
	ctx.lr = 0x82F3403C;
	sub_82AE7270(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r9,r23,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r23.s64;
	// divw r27,r9,r11
	ctx.r27.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82f340d4
	if (cr6.eq) goto loc_82F340D4;
	// addi r29,r23,32
	ctx.r29.s64 = ctx.r23.s64 + 32;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// ble cr6,0x82f34168
	if (!cr6.gt) goto loc_82F34168;
loc_82F34078:
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplw cr6,r22,r26
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r26.u32, xer);
	// beq cr6,0x82f340c0
	if (cr6.eq) goto loc_82F340C0;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
loc_82F3408C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f340a8
	if (cr6.eq) goto loc_82F340A8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82f3408c
	if (!cr6.eq) goto loc_82F3408C;
	// b 0x82f340c0
	goto loc_82F340C0;
loc_82F340A8:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x82f340c0
	if (cr6.eq) goto loc_82F340C0;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82badd90
	ctx.lr = 0x82F340C0;
	sub_82BADD90(ctx, base);
loc_82F340C0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82f34078
	if (cr6.gt) goto loc_82F34078;
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82F340D4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi r29,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82f34118
	if (cr6.eq) goto loc_82F34118;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// ble cr6,0x82f34174
	if (!cr6.gt) goto loc_82F34174;
loc_82F340F8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f1fc80
	ctx.lr = 0x82F34108;
	sub_82F1FC80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82f340f8
	if (cr6.gt) goto loc_82F340F8;
loc_82F34118:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82f34130
	if (cr6.eq) goto loc_82F34130;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82F34130;
	sub_825952B8(ctx, base);
loc_82F34130:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82f34148
	if (cr6.eq) goto loc_82F34148;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82F34148;
	sub_825952B8(ctx, base);
loc_82F34148:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82f34160
	if (cr6.eq) goto loc_82F34160;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82F34160;
	sub_825952B8(ctx, base);
loc_82F34160:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82F34168:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82F34174;
	sub_831CC188(ctx, base);
loc_82F34174:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82F34180;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82F34180"))) PPC_WEAK_FUNC(sub_82F34180);
PPC_FUNC_IMPL(__imp__sub_82F34180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F34188;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d14ce8
	ctx.lr = 0x82F34198;
	sub_82D14CE8(ctx, base);
	// bl 0x82d12db0
	ctx.lr = 0x82F3419C;
	sub_82D12DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f341b0
	if (cr6.eq) goto loc_82F341B0;
	// bl 0x82d14ce8
	ctx.lr = 0x82F341AC;
	sub_82D14CE8(ctx, base);
	// bl 0x82d130b8
	ctx.lr = 0x82F341B0;
	sub_82D130B8(ctx, base);
loc_82F341B0:
	// bl 0x831156e8
	ctx.lr = 0x82F341B4;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82F341BC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123768
	ctx.lr = 0x82F341D0;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82f34244
	if (cr6.eq) goto loc_82F34244;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831239e0
	ctx.lr = 0x82F341F4;
	sub_831239E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83155800
	ctx.lr = 0x82F341FC;
	sub_83155800(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f34230
	if (!cr6.eq) goto loc_82F34230;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x831239e0
	ctx.lr = 0x82F34218;
	sub_831239E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83155800
	ctx.lr = 0x82F34220;
	sub_83155800(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x82f34234
	if (cr6.eq) goto loc_82F34234;
loc_82F34230:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F34234:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f34244
	if (cr6.eq) goto loc_82F34244;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F34244:
	// bl 0x82f33c58
	ctx.lr = 0x82F34248;
	sub_82F33C58(ctx, base);
	// bl 0x82f06520
	ctx.lr = 0x82F3424C;
	sub_82F06520(ctx, base);
	// bl 0x82f057a8
	ctx.lr = 0x82F34250;
	sub_82F057A8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bne cr6,0x82f34288
	if (!cr6.eq) goto loc_82F34288;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x8259cc28
	ctx.lr = 0x82F34284;
	sub_8259CC28(ctx, base);
	// b 0x82f3430c
	goto loc_82F3430C;
loc_82F34288:
	// bl 0x831156e8
	ctx.lr = 0x82F3428C;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f342b4
	if (cr6.eq) goto loc_82F342B4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x82f34304
	goto loc_82F34304;
loc_82F342B4:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46620
	ctx.r10.u64 = ctx.r11.u64 | 46620;
	// lbzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f342d8
	if (cr6.eq) goto loc_82F342D8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f34304
	goto loc_82F34304;
loc_82F342D8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f342f4
	if (cr6.eq) goto loc_82F342F4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82f34304
	goto loc_82F34304;
loc_82F342F4:
	// bl 0x83983a00
	ctx.lr = 0x82F342F8;
	sub_83983A00(ctx, base);
	// bl 0x831caf40
	ctx.lr = 0x82F342FC;
	sub_831CAF40(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-16368
	ctx.r4.s64 = ctx.r11.s64 + -16368;
loc_82F34304:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82F3430C;
	sub_8259D6C0(ctx, base);
loc_82F3430C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F34318;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f34338
	if (cr6.lt) goto loc_82F34338;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F34338;
	sub_825952B8(ctx, base);
loc_82F34338:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34344"))) PPC_WEAK_FUNC(sub_82F34344);
PPC_FUNC_IMPL(__imp__sub_82F34344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34348"))) PPC_WEAK_FUNC(sub_82F34348);
PPC_FUNC_IMPL(__imp__sub_82F34348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15912
	ctx.r9.s64 = ctx.r11.s64 + -15912;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F34380;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f34398
	if (cr6.eq) goto loc_82F34398;
	// bl 0x82416268
	ctx.lr = 0x82F34394;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F34398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F343B0"))) PPC_WEAK_FUNC(sub_82F343B0);
PPC_FUNC_IMPL(__imp__sub_82F343B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15808
	ctx.r9.s64 = ctx.r11.s64 + -15808;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F343E8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f34400
	if (cr6.eq) goto loc_82F34400;
	// bl 0x82416268
	ctx.lr = 0x82F343FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F34400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34418"))) PPC_WEAK_FUNC(sub_82F34418);
PPC_FUNC_IMPL(__imp__sub_82F34418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F34448;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3447c
	if (cr6.eq) goto loc_82F3447C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3445C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15912
	ctx.r9.s64 = ctx.r11.s64 + -15912;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f34480
	goto loc_82F34480;
loc_82F3447C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F34480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34498"))) PPC_WEAK_FUNC(sub_82F34498);
PPC_FUNC_IMPL(__imp__sub_82F34498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F344C8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f344fc
	if (cr6.eq) goto loc_82F344FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F344DC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15808
	ctx.r9.s64 = ctx.r11.s64 + -15808;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f34500
	goto loc_82F34500;
loc_82F344FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F34500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34518"))) PPC_WEAK_FUNC(sub_82F34518);
PPC_FUNC_IMPL(__imp__sub_82F34518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f34528
	if (cr6.lt) goto loc_82F34528;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F34528:
	// b 0x82f34418
	sub_82F34418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3452C"))) PPC_WEAK_FUNC(sub_82F3452C);
PPC_FUNC_IMPL(__imp__sub_82F3452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34530"))) PPC_WEAK_FUNC(sub_82F34530);
PPC_FUNC_IMPL(__imp__sub_82F34530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f34540
	if (cr6.lt) goto loc_82F34540;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F34540:
	// b 0x82f34498
	sub_82F34498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34544"))) PPC_WEAK_FUNC(sub_82F34544);
PPC_FUNC_IMPL(__imp__sub_82F34544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34548"))) PPC_WEAK_FUNC(sub_82F34548);
PPC_FUNC_IMPL(__imp__sub_82F34548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x82F34574;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F34578;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f34624
	if (cr6.gt) goto loc_82F34624;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82f345b8
	if (cr6.eq) goto loc_82F345B8;
	// bdz 0x82f34624
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F34624;
	// bdz 0x82f34624
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F34624;
	// bdz 0x82f345d0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F345D0;
	// bdz 0x82f345a0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F345A0;
loc_82F345A0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-16068
	ctx.r11.s64 = ctx.r11.s64 + -16068;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8259d6c0
	ctx.lr = 0x82F345B4;
	sub_8259D6C0(ctx, base);
	// b 0x82f3463c
	goto loc_82F3463C;
loc_82F345B8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-16068
	ctx.r11.s64 = ctx.r11.s64 + -16068;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8259d6c0
	ctx.lr = 0x82F345CC;
	sub_8259D6C0(ctx, base);
	// b 0x82f3463c
	goto loc_82F3463C;
loc_82F345D0:
	// bl 0x831156e8
	ctx.lr = 0x82F345D4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r11,r11,221
	ctx.r11.s64 = ctx.r11.s64 + 14483456;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// lwz r10,1288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// cmplwi cr6,r10,86
	cr6.compare<uint32_t>(ctx.r10.u32, 86, xer);
	// beq cr6,0x82f3460c
	if (cr6.eq) goto loc_82F3460C;
	// lbz r11,1100(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1100);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82f3460c
	if (!cr6.lt) goto loc_82F3460C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-16068
	ctx.r4.s64 = ctx.r11.s64 + -16068;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34608;
	sub_8259D6C0(ctx, base);
	// b 0x82f3463c
	goto loc_82F3463C;
loc_82F3460C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-16068
	ctx.r11.s64 = ctx.r11.s64 + -16068;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34620;
	sub_8259D6C0(ctx, base);
	// b 0x82f3463c
	goto loc_82F3463C;
loc_82F34624:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r11,r11,-16068
	ctx.r11.s64 = ctx.r11.s64 + -16068;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x8259cc28
	ctx.lr = 0x82F3463C;
	sub_8259CC28(ctx, base);
loc_82F3463C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F34648;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f34668
	if (cr6.lt) goto loc_82F34668;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F34668;
	sub_825952B8(ctx, base);
loc_82F34668:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34680"))) PPC_WEAK_FUNC(sub_82F34680);
PPC_FUNC_IMPL(__imp__sub_82F34680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F346B0;
	sub_831156E8(ctx, base);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r31,r9,221
	ctx.r31.s64 = ctx.r9.s64 + 14483456;
	// addi r31,r31,-26512
	ctx.r31.s64 = ctx.r31.s64 + -26512;
	// bl 0x830ff290
	ctx.lr = 0x82F346C0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F346C4;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f34760
	if (cr6.gt) goto loc_82F34760;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82f34704
	if (cr6.eq) goto loc_82F34704;
	// bdz 0x82f34760
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F34760;
	// bdz 0x82f34760
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F34760;
	// bdz 0x82f3471c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F3471C;
	// bdz 0x82f346ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F346EC;
loc_82F346EC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-16008
	ctx.r11.s64 = ctx.r11.s64 + -16008;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34700;
	sub_8259D6C0(ctx, base);
	// b 0x82f34778
	goto loc_82F34778;
loc_82F34704:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-16008
	ctx.r11.s64 = ctx.r11.s64 + -16008;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34718;
	sub_8259D6C0(ctx, base);
	// b 0x82f34778
	goto loc_82F34778;
loc_82F3471C:
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// beq cr6,0x82f34748
	if (cr6.eq) goto loc_82F34748;
	// lbz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1100);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82f34748
	if (!cr6.lt) goto loc_82F34748;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-16008
	ctx.r4.s64 = ctx.r11.s64 + -16008;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34744;
	sub_8259D6C0(ctx, base);
	// b 0x82f34778
	goto loc_82F34778;
loc_82F34748:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-16008
	ctx.r11.s64 = ctx.r11.s64 + -16008;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x8259d6c0
	ctx.lr = 0x82F3475C;
	sub_8259D6C0(ctx, base);
	// b 0x82f34778
	goto loc_82F34778;
loc_82F34760:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r11,r11,-16008
	ctx.r11.s64 = ctx.r11.s64 + -16008;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x8259cc28
	ctx.lr = 0x82F34778;
	sub_8259CC28(ctx, base);
loc_82F34778:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F34784;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f347a4
	if (cr6.lt) goto loc_82F347A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F347A4;
	sub_825952B8(ctx, base);
loc_82F347A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F347C0"))) PPC_WEAK_FUNC(sub_82F347C0);
PPC_FUNC_IMPL(__imp__sub_82F347C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15336
	ctx.r9.s64 = ctx.r11.s64 + -15336;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F347F8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f34810
	if (cr6.eq) goto loc_82F34810;
	// bl 0x82416268
	ctx.lr = 0x82F3480C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F34810:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34828"))) PPC_WEAK_FUNC(sub_82F34828);
PPC_FUNC_IMPL(__imp__sub_82F34828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F34858;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f3488c
	if (cr6.eq) goto loc_82F3488C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F3486C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-15336
	ctx.r9.s64 = ctx.r11.s64 + -15336;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f34890
	goto loc_82F34890;
loc_82F3488C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F34890:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F348A8"))) PPC_WEAK_FUNC(sub_82F348A8);
PPC_FUNC_IMPL(__imp__sub_82F348A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f348b8
	if (cr6.lt) goto loc_82F348B8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F348B8:
	// b 0x82f34828
	sub_82F34828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F348BC"))) PPC_WEAK_FUNC(sub_82F348BC);
PPC_FUNC_IMPL(__imp__sub_82F348BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F348C0"))) PPC_WEAK_FUNC(sub_82F348C0);
PPC_FUNC_IMPL(__imp__sub_82F348C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F348C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F348E8;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82F348F0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// addis r31,r30,221
	ctx.r31.s64 = ctx.r30.s64 + 14483456;
	// li r27,2
	ctx.r27.s64 = 2;
	// ori r29,r10,40312
	ctx.r29.u64 = ctx.r10.u64 | 40312;
	// addi r31,r31,-26512
	ctx.r31.s64 = ctx.r31.s64 + -26512;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// bgt cr6,0x82f34b68
	if (cr6.gt) goto loc_82F34B68;
	// lis r12,-32013
	ctx.r12.s64 = -2098003968;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18732
	ctx.r12.s64 = ctx.r12.s64 + 18732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82F349A4;
	case 1:
		goto loc_82F34B68;
	case 2:
		goto loc_82F34B68;
	case 3:
		goto loc_82F34B68;
	case 4:
		goto loc_82F34B68;
	case 5:
		goto loc_82F34A64;
	case 6:
		goto loc_82F34AB8;
	case 7:
		goto loc_82F34A80;
	case 8:
		goto loc_82F34B0C;
	case 9:
		goto loc_82F34B68;
	case 10:
		goto loc_82F34B68;
	case 11:
		goto loc_82F34B68;
	case 12:
		goto loc_82F34B68;
	case 13:
		goto loc_82F34B68;
	case 14:
		goto loc_82F34B68;
	case 15:
		goto loc_82F34B68;
	case 16:
		goto loc_82F34B68;
	case 17:
		goto loc_82F34AD4;
	case 18:
		goto loc_82F34AD4;
	case 19:
		goto loc_82F34AF0;
	case 20:
		goto loc_82F34AF0;
	case 21:
		goto loc_82F34B68;
	case 22:
		goto loc_82F34B68;
	case 23:
		goto loc_82F34B68;
	case 24:
		goto loc_82F34B68;
	case 25:
		goto loc_82F34B68;
	case 26:
		goto loc_82F34A9C;
	case 27:
		goto loc_82F34B68;
	case 28:
		goto loc_82F34B68;
	case 29:
		goto loc_82F34B4C;
	default:
		return;
	}
	// lwz r23,18852(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 18852);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19044(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19044);
	// lwz r23,19128(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19128);
	// lwz r23,19072(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19072);
	// lwz r23,19212(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19212);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19156(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19156);
	// lwz r23,19156(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19156);
	// lwz r23,19184(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19184);
	// lwz r23,19184(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19184);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19100(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19100);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19304(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19304);
	// lwz r23,19276(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19276);
loc_82F349A4:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r11,r11,-27
	ctx.r11.s64 = ctx.r11.s64 + -27;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x82f34a4c
	if (cr6.gt) goto loc_82F34A4C;
	// lis r12,-32013
	ctx.r12.s64 = -2098003968;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18892
	ctx.r12.s64 = ctx.r12.s64 + 18892;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82F34A10;
	case 1:
		goto loc_82F34A4C;
	case 2:
		goto loc_82F34A4C;
	case 3:
		goto loc_82F34A4C;
	case 4:
		goto loc_82F34A4C;
	case 5:
		goto loc_82F34A4C;
	case 6:
		goto loc_82F34A10;
	case 7:
		goto loc_82F34A2C;
	case 8:
		goto loc_82F34A10;
	case 9:
		goto loc_82F34A2C;
	case 10:
		goto loc_82F349F8;
	default:
		return;
	}
	// lwz r23,18960(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 18960);
	// lwz r23,19020(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19020);
	// lwz r23,19020(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19020);
	// lwz r23,19020(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19020);
	// lwz r23,19020(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19020);
	// lwz r23,19020(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19020);
	// lwz r23,18960(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 18960);
	// lwz r23,18988(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 18988);
	// lwz r23,18960(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 18960);
	// lwz r23,18988(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 18988);
	// lwz r23,18936(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 18936);
loc_82F349F8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34A0C;
	sub_8259D6C0(ctx, base);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34A10:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-164
	ctx.r4.s64 = ctx.r11.s64 + -164;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34A24;
	sub_8259D6C0(ctx, base);
	// stw r27,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r27.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34A2C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34A40;
	sub_8259D6C0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r10.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34A4C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34A60;
	sub_8259D6C0(ctx, base);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34A64:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34A78;
	sub_8259D6C0(ctx, base);
	// stw r27,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r27.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34A80:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34A94;
	sub_8259D6C0(ctx, base);
	// stw r27,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r27.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34A9C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34AB0;
	sub_8259D6C0(ctx, base);
	// stw r27,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r27.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34AB8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34ACC;
	sub_8259D6C0(ctx, base);
	// stw r27,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r27.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34AD4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34AE8;
	sub_8259D6C0(ctx, base);
	// stw r27,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r27.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34AF0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34B04;
	sub_8259D6C0(ctx, base);
	// stw r27,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r27.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34B0C:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// bne cr6,0x82f34b38
	if (!cr6.eq) goto loc_82F34B38;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34B2C;
	sub_8259D6C0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r10.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34B38:
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34B40;
	sub_8259D6C0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r10.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34B4C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15440
	ctx.r4.s64 = ctx.r11.s64 + -15440;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34B5C;
	sub_8259D6C0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r10.u32);
	// b 0x82f34b80
	goto loc_82F34B80;
loc_82F34B68:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-212
	ctx.r4.s64 = ctx.r11.s64 + -212;
	// bl 0x8259cc28
	ctx.lr = 0x82F34B80;
	sub_8259CC28(ctx, base);
loc_82F34B80:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8316ef18
	ctx.lr = 0x82F34B90;
	sub_8316EF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82F34B9C;
	sub_8311C338(ctx, base);
	// stb r28,1116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1116, ctx.r28.u8);
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x82f34bb8
	if (!cr6.eq) goto loc_82F34BB8;
	// li r11,32
	ctx.r11.s64 = 32;
	// stb r11,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r11.u8);
	// b 0x82f34c3c
	goto loc_82F34C3C;
loc_82F34BB8:
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bne cr6,0x82f34bcc
	if (!cr6.eq) goto loc_82F34BCC;
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r11,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r11.u8);
	// b 0x82f34c3c
	goto loc_82F34C3C;
loc_82F34BCC:
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// bne cr6,0x82f34be0
	if (!cr6.eq) goto loc_82F34BE0;
	// li r11,32
	ctx.r11.s64 = 32;
	// stb r11,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r11.u8);
	// b 0x82f34c3c
	goto loc_82F34C3C;
loc_82F34BE0:
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// bne cr6,0x82f34bf4
	if (!cr6.eq) goto loc_82F34BF4;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r11,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r11.u8);
	// b 0x82f34c3c
	goto loc_82F34C3C;
loc_82F34BF4:
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// bne cr6,0x82f34c08
	if (!cr6.eq) goto loc_82F34C08;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r11,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r11.u8);
	// b 0x82f34c3c
	goto loc_82F34C3C;
loc_82F34C08:
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// bne cr6,0x82f34c1c
	if (!cr6.eq) goto loc_82F34C1C;
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r11,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r11.u8);
	// b 0x82f34c3c
	goto loc_82F34C3C;
loc_82F34C1C:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82f34c30
	if (!cr6.eq) goto loc_82F34C30;
	// li r11,48
	ctx.r11.s64 = 48;
	// stb r11,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r11.u8);
	// b 0x82f34c3c
	goto loc_82F34C3C;
loc_82F34C30:
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// rlwinm r10,r11,23,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// stb r10,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r10.u8);
loc_82F34C3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F34C48;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f34c64
	if (cr6.lt) goto loc_82F34C64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F34C64;
	sub_825952B8(ctx, base);
loc_82F34C64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34C70"))) PPC_WEAK_FUNC(sub_82F34C70);
PPC_FUNC_IMPL(__imp__sub_82F34C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14824
	ctx.r9.s64 = ctx.r11.s64 + -14824;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F34CA8;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f34cc0
	if (cr6.eq) goto loc_82F34CC0;
	// bl 0x82416268
	ctx.lr = 0x82F34CBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F34CC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34CD8"))) PPC_WEAK_FUNC(sub_82F34CD8);
PPC_FUNC_IMPL(__imp__sub_82F34CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F34D08;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f34d3c
	if (cr6.eq) goto loc_82F34D3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F34D1C;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14824
	ctx.r9.s64 = ctx.r11.s64 + -14824;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f34d40
	goto loc_82F34D40;
loc_82F34D3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F34D40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34D58"))) PPC_WEAK_FUNC(sub_82F34D58);
PPC_FUNC_IMPL(__imp__sub_82F34D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f34d68
	if (cr6.lt) goto loc_82F34D68;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F34D68:
	// b 0x82f34cd8
	sub_82F34CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34D6C"))) PPC_WEAK_FUNC(sub_82F34D6C);
PPC_FUNC_IMPL(__imp__sub_82F34D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34D70"))) PPC_WEAK_FUNC(sub_82F34D70);
PPC_FUNC_IMPL(__imp__sub_82F34D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F34D9C;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F34DA0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// beq cr6,0x82f34df4
	if (cr6.eq) goto loc_82F34DF4;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// beq cr6,0x82f34de0
	if (cr6.eq) goto loc_82F34DE0;
	// cmplwi cr6,r11,52
	cr6.compare<uint32_t>(ctx.r11.u32, 52, xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// beq cr6,0x82f34dd4
	if (cr6.eq) goto loc_82F34DD4;
	// addi r11,r11,-14928
	ctx.r11.s64 = ctx.r11.s64 + -14928;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34DD0;
	sub_8259D6C0(ctx, base);
	// b 0x82f34e08
	goto loc_82F34E08;
loc_82F34DD4:
	// addi r4,r11,-14928
	ctx.r4.s64 = ctx.r11.s64 + -14928;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34DDC;
	sub_8259D6C0(ctx, base);
	// b 0x82f34e08
	goto loc_82F34E08;
loc_82F34DE0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-14928
	ctx.r11.s64 = ctx.r11.s64 + -14928;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x8259d6c0
	ctx.lr = 0x82F34DF0;
	sub_8259D6C0(ctx, base);
	// b 0x82f34e08
	goto loc_82F34E08;
loc_82F34DF4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r11,r11,-14928
	ctx.r11.s64 = ctx.r11.s64 + -14928;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8259cc28
	ctx.lr = 0x82F34E08;
	sub_8259CC28(ctx, base);
loc_82F34E08:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F34E14;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f34e34
	if (cr6.lt) goto loc_82F34E34;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F34E34;
	sub_825952B8(ctx, base);
loc_82F34E34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34E4C"))) PPC_WEAK_FUNC(sub_82F34E4C);
PPC_FUNC_IMPL(__imp__sub_82F34E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34E50"))) PPC_WEAK_FUNC(sub_82F34E50);
PPC_FUNC_IMPL(__imp__sub_82F34E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14224
	ctx.r9.s64 = ctx.r11.s64 + -14224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f42278
	ctx.lr = 0x82F34E88;
	sub_82F42278(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f34ea0
	if (cr6.eq) goto loc_82F34EA0;
	// bl 0x82416268
	ctx.lr = 0x82F34E9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F34EA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34EB8"))) PPC_WEAK_FUNC(sub_82F34EB8);
PPC_FUNC_IMPL(__imp__sub_82F34EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F34EE8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f34f1c
	if (cr6.eq) goto loc_82F34F1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F34EFC;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-14224
	ctx.r9.s64 = ctx.r11.s64 + -14224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82f34f20
	goto loc_82F34F20;
loc_82F34F1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F34F20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34F38"))) PPC_WEAK_FUNC(sub_82F34F38);
PPC_FUNC_IMPL(__imp__sub_82F34F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f34f48
	if (cr6.lt) goto loc_82F34F48;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82F34F48:
	// b 0x82f34eb8
	sub_82F34EB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34F4C"))) PPC_WEAK_FUNC(sub_82F34F4C);
PPC_FUNC_IMPL(__imp__sub_82F34F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34F50"))) PPC_WEAK_FUNC(sub_82F34F50);
PPC_FUNC_IMPL(__imp__sub_82F34F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F34F58;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// bl 0x831156e8
	ctx.lr = 0x82F34F78;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r31,r10,221
	ctx.r31.s64 = ctx.r10.s64 + 14483456;
	// addi r31,r31,-26512
	ctx.r31.s64 = ctx.r31.s64 + -26512;
	// bl 0x82f00728
	ctx.lr = 0x82F34F88;
	sub_82F00728(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82F34F90;
	sub_830FF290(ctx, base);
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r30,27
	cr6.compare<uint32_t>(ctx.r30.u32, 27, xer);
	// beq cr6,0x82f34fbc
	if (cr6.eq) goto loc_82F34FBC;
	// cmplwi cr6,r30,28
	cr6.compare<uint32_t>(ctx.r30.u32, 28, xer);
	// beq cr6,0x82f34fbc
	if (cr6.eq) goto loc_82F34FBC;
	// cmplwi cr6,r30,29
	cr6.compare<uint32_t>(ctx.r30.u32, 29, xer);
	// beq cr6,0x82f34fbc
	if (cr6.eq) goto loc_82F34FBC;
	// cmplwi cr6,r30,30
	cr6.compare<uint32_t>(ctx.r30.u32, 30, xer);
	// beq cr6,0x82f34fbc
	if (cr6.eq) goto loc_82F34FBC;
	// cmplwi cr6,r30,17
	cr6.compare<uint32_t>(ctx.r30.u32, 17, xer);
	// bne cr6,0x82f34fc8
	if (!cr6.eq) goto loc_82F34FC8;
loc_82F34FBC:
	// bl 0x830ff290
	ctx.lr = 0x82F34FC0;
	sub_830FF290(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_82F34FC8:
	// bl 0x83129510
	ctx.lr = 0x82F34FCC;
	sub_83129510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f34fd8
	if (cr6.eq) goto loc_82F34FD8;
	// stw r29,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r29.u32);
loc_82F34FD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f21060
	ctx.lr = 0x82F34FE0;
	sub_82F21060(ctx, base);
	// addi r11,r30,-10
	ctx.r11.s64 = ctx.r30.s64 + -10;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bgt cr6,0x82f35298
	if (cr6.gt) goto loc_82F35298;
	// lis r12,-32013
	ctx.r12.s64 = -2098003968;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20492
	ctx.r12.s64 = ctx.r12.s64 + 20492;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82F3508C;
	case 1:
		goto loc_82F35298;
	case 2:
		goto loc_82F35298;
	case 3:
		goto loc_82F35298;
	case 4:
		goto loc_82F35298;
	case 5:
		goto loc_82F350B4;
	case 6:
		goto loc_82F35148;
	case 7:
		goto loc_82F35298;
	case 8:
		goto loc_82F35194;
	case 9:
		goto loc_82F351EC;
	case 10:
		goto loc_82F35244;
	case 11:
		goto loc_82F35298;
	case 12:
		goto loc_82F35298;
	case 13:
		goto loc_82F35298;
	case 14:
		goto loc_82F35298;
	case 15:
		goto loc_82F35298;
	case 16:
		goto loc_82F35298;
	case 17:
		goto loc_82F35298;
	case 18:
		goto loc_82F35298;
	case 19:
		goto loc_82F35298;
	case 20:
		goto loc_82F35298;
	case 21:
		goto loc_82F35298;
	case 22:
		goto loc_82F35298;
	case 23:
		goto loc_82F35298;
	case 24:
		goto loc_82F35298;
	case 25:
		goto loc_82F35298;
	case 26:
		goto loc_82F350FC;
	case 27:
		goto loc_82F35298;
	case 28:
		goto loc_82F35298;
	case 29:
		goto loc_82F351C0;
	case 30:
		goto loc_82F35220;
	case 31:
		goto loc_82F35278;
	default:
		return;
	}
	// lwz r23,20620(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20620);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,20660(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20660);
	// lwz r23,20808(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20808);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,20884(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20884);
	// lwz r23,20972(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20972);
	// lwz r23,21060(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21060);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,20732(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20732);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,21144(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21144);
	// lwz r23,20928(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20928);
	// lwz r23,21024(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21024);
	// lwz r23,21112(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21112);
loc_82F3508C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x8259d6c0
	ctx.lr = 0x82F350A0;
	sub_8259D6C0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// stb r10,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r10.u8);
	// stb r29,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r29.u8);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F350B4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x8259d6c0
	ctx.lr = 0x82F350C8;
	sub_8259D6C0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// stb r10,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r10.u8);
	// stw r28,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r28.u32);
	// stw r28,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r28.u32);
	// stw r28,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r28.u32);
	// stw r29,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r29.u32);
	// stb r29,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r29.u8);
	// stw r30,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r30.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x82F350F0;
	sub_82D26ED8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82d26900
	ctx.lr = 0x82F350F8;
	sub_82D26900(ctx, base);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F350FC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35110;
	sub_8259D6C0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// stw r28,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r28.u32);
	// stb r10,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r10.u8);
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
	// stw r29,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r29.u32);
	// stb r29,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r29.u8);
	// stw r30,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r30.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x82F3513C;
	sub_82D26ED8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82d26900
	ctx.lr = 0x82F35144;
	sub_82D26900(ctx, base);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F35148:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x8259d6c0
	ctx.lr = 0x82F3515C;
	sub_8259D6C0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// stw r28,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r28.u32);
	// stb r10,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r10.u8);
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
	// stw r29,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r29.u32);
	// stb r29,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r29.u8);
	// stw r30,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r30.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x82F35188;
	sub_82D26ED8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82d26900
	ctx.lr = 0x82F35190;
	sub_82D26900(ctx, base);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F35194:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x8259d6c0
	ctx.lr = 0x82F351A8;
	sub_8259D6C0(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// stb r10,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r10.u8);
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// stw r28,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r28.u32);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F351C0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8259d6c0
	ctx.lr = 0x82F351D4;
	sub_8259D6C0(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// stb r10,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r10.u8);
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// stw r28,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r28.u32);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F351EC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35200;
	sub_8259D6C0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,19
	ctx.r9.s64 = 19;
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// ori r8,r10,19004
	ctx.r8.u64 = ctx.r10.u64 | 19004;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
	// stwx r9,r27,r8
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F35220:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35234;
	sub_8259D6C0(ctx, base);
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F35244:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35258;
	sub_8259D6C0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,20
	ctx.r9.s64 = 20;
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// ori r8,r10,19004
	ctx.r8.u64 = ctx.r10.u64 | 19004;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
	// stwx r9,r27,r8
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F35278:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-14324
	ctx.r4.s64 = ctx.r11.s64 + -14324;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35288;
	sub_8259D6C0(ctx, base);
	// stb r30,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r30.u8);
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
	// b 0x82f352b0
	goto loc_82F352B0;
loc_82F35298:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r11,r11,-14324
	ctx.r11.s64 = ctx.r11.s64 + -14324;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bl 0x8259cc28
	ctx.lr = 0x82F352B0;
	sub_8259CC28(ctx, base);
loc_82F352B0:
	// bl 0x831156e8
	ctx.lr = 0x82F352B4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,24160
	ctx.r10.s64 = ctx.r10.s64 + 24160;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f352e4
	if (cr6.eq) goto loc_82F352E4;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// b 0x82f352e8
	goto loc_82F352E8;
loc_82F352E4:
	// stb r29,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r29.u8);
loc_82F352E8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F352F4;
	sub_82E88020(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f35310
	if (cr6.lt) goto loc_82F35310;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F35310;
	sub_825952B8(ctx, base);
loc_82F35310:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3531C"))) PPC_WEAK_FUNC(sub_82F3531C);
PPC_FUNC_IMPL(__imp__sub_82F3531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35320"))) PPC_WEAK_FUNC(sub_82F35320);
PPC_FUNC_IMPL(__imp__sub_82F35320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f42220
	ctx.lr = 0x82F35338;
	sub_82F42220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13704
	ctx.r9.s64 = ctx.r11.s64 + -13704;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,-14069
	ctx.r4.s64 = ctx.r6.s64 + -14069;
	// bl 0x8259cc28
	ctx.lr = 0x82F35378;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F35390"))) PPC_WEAK_FUNC(sub_82F35390);
PPC_FUNC_IMPL(__imp__sub_82F35390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-13704
	ctx.r9.s64 = ctx.r11.s64 + -13704;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// lwz r7,108(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82f353e4
	if (cr6.lt) goto loc_82F353E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F353E4;
	sub_825952B8(ctx, base);
loc_82F353E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82f42278
	ctx.lr = 0x82F35400;
	sub_82F42278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F35418"))) PPC_WEAK_FUNC(sub_82F35418);
PPC_FUNC_IMPL(__imp__sub_82F35418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f35390
	ctx.lr = 0x82F35438;
	sub_82F35390(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f35450
	if (cr6.eq) goto loc_82F35450;
	// bl 0x82416268
	ctx.lr = 0x82F3544C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F35450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F35468"))) PPC_WEAK_FUNC(sub_82F35468);
PPC_FUNC_IMPL(__imp__sub_82F35468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F35484;
	sub_831156E8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F35488;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F3548C;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f35520
	if (cr6.gt) goto loc_82F35520;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f35520
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F35520;
	// bdzf 4*cr6+eq,0x82f35520
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F35520;
	// bdzf 4*cr6+eq,0x82f354d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F354D0;
	// bdzf 4*cr6+eq,0x82f354ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F354EC;
	// bne cr6,0x82f35508
	if (!cr6.eq) goto loc_82F35508;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// addi r11,r11,-13800
	ctx.r11.s64 = ctx.r11.s64 + -13800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x8259d6c0
	ctx.lr = 0x82F354CC;
	sub_8259D6C0(ctx, base);
	// b 0x82f3553c
	goto loc_82F3553C;
loc_82F354D0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// addi r11,r11,-13800
	ctx.r11.s64 = ctx.r11.s64 + -13800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8259d6c0
	ctx.lr = 0x82F354E8;
	sub_8259D6C0(ctx, base);
	// b 0x82f3553c
	goto loc_82F3553C;
loc_82F354EC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// addi r11,r11,-13800
	ctx.r11.s64 = ctx.r11.s64 + -13800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259d6c0
	ctx.lr = 0x82F35504;
	sub_8259D6C0(ctx, base);
	// b 0x82f3553c
	goto loc_82F3553C;
loc_82F35508:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// addi r4,r11,-13800
	ctx.r4.s64 = ctx.r11.s64 + -13800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82F3551C;
	sub_8259D6C0(ctx, base);
	// b 0x82f3553c
	goto loc_82F3553C;
loc_82F35520:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// addi r11,r11,-13800
	ctx.r11.s64 = ctx.r11.s64 + -13800;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82F3553C;
	sub_8259CC28(ctx, base);
loc_82F3553C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88020
	ctx.lr = 0x82F35548;
	sub_82E88020(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

