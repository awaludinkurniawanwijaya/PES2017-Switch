#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_836D7468"))) PPC_WEAK_FUNC(sub_836D7468);
PPC_FUNC_IMPL(__imp__sub_836D7468) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836d7518
	sub_836D7518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D7470"))) PPC_WEAK_FUNC(sub_836D7470);
PPC_FUNC_IMPL(__imp__sub_836D7470) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836d7518
	sub_836D7518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D7478"))) PPC_WEAK_FUNC(sub_836D7478);
PPC_FUNC_IMPL(__imp__sub_836D7478) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836d7518
	sub_836D7518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D7480"))) PPC_WEAK_FUNC(sub_836D7480);
PPC_FUNC_IMPL(__imp__sub_836D7480) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r11,16776
	ctx.r7.s64 = ctx.r11.s64 + 16776;
	// addi r6,r10,16764
	ctx.r6.s64 = ctx.r10.s64 + 16764;
	// addi r5,r9,16760
	ctx.r5.s64 = ctx.r9.s64 + 16760;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,16756
	ctx.r4.s64 = ctx.r8.s64 + 16756;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r30,r3,348
	ctx.r30.s64 = ctx.r3.s64 + 348;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x836d74e0
	if (cr6.lt) goto loc_836D74E0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D74E0;
	sub_8386D088(ctx, base);
loc_836D74E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82eaf978
	ctx.lr = 0x836D74FC;
	sub_82EAF978(ctx, base);
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

__attribute__((alias("__imp__sub_836D7514"))) PPC_WEAK_FUNC(sub_836D7514);
PPC_FUNC_IMPL(__imp__sub_836D7514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D7518"))) PPC_WEAK_FUNC(sub_836D7518);
PPC_FUNC_IMPL(__imp__sub_836D7518) {
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
	// bl 0x836d7480
	ctx.lr = 0x836D7538;
	sub_836D7480(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836d7558
	if (cr6.eq) goto loc_836D7558;
	// bl 0x82595188
	ctx.lr = 0x836D7548;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836D7558;
	sub_825952B8(ctx, base);
loc_836D7558:
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

__attribute__((alias("__imp__sub_836D7574"))) PPC_WEAK_FUNC(sub_836D7574);
PPC_FUNC_IMPL(__imp__sub_836D7574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D7578"))) PPC_WEAK_FUNC(sub_836D7578);
PPC_FUNC_IMPL(__imp__sub_836D7578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836D7580;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836d75c0
	if (!cr6.lt) goto loc_836D75C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836D75C0;
	sub_82E745E0(ctx, base);
loc_836D75C0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,16924
	ctx.r27.s64 = ctx.r11.s64 + 16924;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D7608;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D7614;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836d7628
	if (cr6.lt) goto loc_836D7628;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836D7628;
	sub_82416268(ctx, base);
loc_836D7628:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836d7648
	if (cr6.lt) goto loc_836D7648;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D7648:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836D7658:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d7658
	if (!cr6.eq) goto loc_836D7658;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D767C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D7688;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d769c
	if (cr6.lt) goto loc_836D769C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836D769C;
	sub_82416268(ctx, base);
loc_836D769C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D76C4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D76D0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d76e4
	if (cr6.lt) goto loc_836D76E4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836D76E4;
	sub_82416268(ctx, base);
loc_836D76E4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836D76FC;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836D7718;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D7724;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d7738
	if (cr6.lt) goto loc_836D7738;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836D7738;
	sub_82416268(ctx, base);
loc_836D7738:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836d7758
	if (cr6.lt) goto loc_836D7758;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D7758:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836D7768:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d7768
	if (!cr6.eq) goto loc_836D7768;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D778C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D7798;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d77ac
	if (cr6.lt) goto loc_836D77AC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836D77AC;
	sub_82416268(ctx, base);
loc_836D77AC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D77D4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D77E0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d77f4
	if (cr6.lt) goto loc_836D77F4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836D77F4;
	sub_82416268(ctx, base);
loc_836D77F4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836d7814
	if (cr6.lt) goto loc_836D7814;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D7814:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836D7824:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d7824
	if (!cr6.eq) goto loc_836D7824;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D7848;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D7854;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d7868
	if (cr6.lt) goto loc_836D7868;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836D7868;
	sub_82416268(ctx, base);
loc_836D7868:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D7890;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D789C;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d78b0
	if (cr6.lt) goto loc_836D78B0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836D78B0;
	sub_82416268(ctx, base);
loc_836D78B0:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e97d90
	ctx.lr = 0x836D78C8;
	sub_82E97D90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D78D4"))) PPC_WEAK_FUNC(sub_836D78D4);
PPC_FUNC_IMPL(__imp__sub_836D78D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D78D8"))) PPC_WEAK_FUNC(sub_836D78D8);
PPC_FUNC_IMPL(__imp__sub_836D78D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836D78E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83691bb8
	ctx.lr = 0x836D7908;
	sub_83691BB8(ctx, base);
	// lwz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836d7dfc
	if (!cr6.lt) goto loc_836D7DFC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r27,r11,17060
	ctx.r27.s64 = ctx.r11.s64 + 17060;
loc_836D7940:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// ld r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,424(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r4,428(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// bl 0x82472fc0
	ctx.lr = 0x836D7974;
	sub_82472FC0(ctx, base);
	// addi r6,r27,-60
	ctx.r6.s64 = ctx.r27.s64 + -60;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D798C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d7a20
	if (!cr6.eq) goto loc_836D7A20;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,456(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82472fc0
	ctx.lr = 0x836D79C4;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d79d8
	if (!cr6.lt) goto loc_836D79D8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836D79D8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D79DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d79dc
	if (!cr6.eq) goto loc_836D79DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D7A00;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d7a14
	if (cr6.lt) goto loc_836D7A14;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836D7A14;
	sub_82416268(ctx, base);
loc_836D7A14:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_836D7A20:
	// addi r6,r27,-52
	ctx.r6.s64 = ctx.r27.s64 + -52;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D7A38;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d7a74
	if (!cr6.eq) goto loc_836D7A74;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,368(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836d7a6c
	if (!cr6.eq) goto loc_836D7A6C;
	// ld r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836d7a70
	goto loc_836D7A70;
loc_836D7A6C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836D7A70:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836D7A74:
	// addi r6,r27,-44
	ctx.r6.s64 = ctx.r27.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D7A8C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d7b20
	if (!cr6.eq) goto loc_836D7B20;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,440(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r4,444(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// bl 0x82472fc0
	ctx.lr = 0x836D7AC4;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d7ad8
	if (!cr6.lt) goto loc_836D7AD8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836D7AD8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D7ADC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d7adc
	if (!cr6.eq) goto loc_836D7ADC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D7B00;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d7b14
	if (cr6.lt) goto loc_836D7B14;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836D7B14;
	sub_82416268(ctx, base);
loc_836D7B14:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_836D7B20:
	// addi r6,r27,-36
	ctx.r6.s64 = ctx.r27.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D7B38;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d7bcc
	if (!cr6.eq) goto loc_836D7BCC;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r4,412(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// bl 0x82472fc0
	ctx.lr = 0x836D7B70;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d7b84
	if (!cr6.lt) goto loc_836D7B84;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_836D7B84:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D7B88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d7b88
	if (!cr6.eq) goto loc_836D7B88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,148
	ctx.r3.s64 = ctx.r28.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D7BAC;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d7bc0
	if (cr6.lt) goto loc_836D7BC0;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x836D7BC0;
	sub_82416268(ctx, base);
loc_836D7BC0:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_836D7BCC:
	// addi r6,r27,-24
	ctx.r6.s64 = ctx.r27.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D7BE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d7c78
	if (!cr6.eq) goto loc_836D7C78;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// bl 0x82472fc0
	ctx.lr = 0x836D7C1C;
	sub_82472FC0(ctx, base);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d7c30
	if (!cr6.lt) goto loc_836D7C30;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_836D7C30:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D7C34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d7c34
	if (!cr6.eq) goto loc_836D7C34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,176
	ctx.r3.s64 = ctx.r28.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D7C58;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d7c6c
	if (cr6.lt) goto loc_836D7C6C;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x836D7C6C;
	sub_82416268(ctx, base);
loc_836D7C6C:
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
loc_836D7C78:
	// addi r6,r27,-16
	ctx.r6.s64 = ctx.r27.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D7C90;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d7d24
	if (!cr6.eq) goto loc_836D7D24;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,392(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// bl 0x82472fc0
	ctx.lr = 0x836D7CC8;
	sub_82472FC0(ctx, base);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d7cdc
	if (!cr6.lt) goto loc_836D7CDC;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_836D7CDC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D7CE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d7ce0
	if (!cr6.eq) goto loc_836D7CE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,204
	ctx.r3.s64 = ctx.r28.s64 + 204;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D7D04;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d7d18
	if (cr6.lt) goto loc_836D7D18;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x836D7D18;
	sub_82416268(ctx, base);
loc_836D7D18:
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_836D7D24:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D7D3C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d7dd0
	if (!cr6.eq) goto loc_836D7DD0;
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82472fc0
	ctx.lr = 0x836D7D74;
	sub_82472FC0(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d7d88
	if (!cr6.lt) goto loc_836D7D88;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_836D7D88:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D7D8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d7d8c
	if (!cr6.eq) goto loc_836D7D8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,232
	ctx.r3.s64 = ctx.r28.s64 + 232;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D7DB0;
	sub_824208C8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d7dc4
	if (cr6.lt) goto loc_836D7DC4;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836D7DC4;
	sub_82416268(ctx, base);
loc_836D7DC4:
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
loc_836D7DD0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d7de4
	if (cr6.lt) goto loc_836D7DE4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836D7DE4;
	sub_82416268(ctx, base);
loc_836D7DE4:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne 0x836d7940
	if (!cr0.eq) goto loc_836D7940;
loc_836D7DFC:
	// lwz r31,320(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836d7e18
	if (cr6.eq) goto loc_836D7E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836D7E10;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836D7E18;
	sub_82416268(ctx, base);
loc_836D7E18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D7E24"))) PPC_WEAK_FUNC(sub_836D7E24);
PPC_FUNC_IMPL(__imp__sub_836D7E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D7E28"))) PPC_WEAK_FUNC(sub_836D7E28);
PPC_FUNC_IMPL(__imp__sub_836D7E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836D7E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836D7E3C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,16840
	ctx.r29.s64 = ctx.r11.s64 + 16840;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836D7E54;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,17176
	ctx.r7.s64 = ctx.r10.s64 + 17176;
	// addi r5,r8,17160
	ctx.r5.s64 = ctx.r8.s64 + 17160;
	// addi r6,r9,17164
	ctx.r6.s64 = ctx.r9.s64 + 17164;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D7E9C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D7EB8;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D7EC8"))) PPC_WEAK_FUNC(sub_836D7EC8);
PPC_FUNC_IMPL(__imp__sub_836D7EC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836d7f70
	sub_836D7F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D7ED0"))) PPC_WEAK_FUNC(sub_836D7ED0);
PPC_FUNC_IMPL(__imp__sub_836D7ED0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836d7f70
	sub_836D7F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D7ED8"))) PPC_WEAK_FUNC(sub_836D7ED8);
PPC_FUNC_IMPL(__imp__sub_836D7ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836D7EE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,17176
	ctx.r8.s64 = ctx.r11.s64 + 17176;
	// addi r7,r10,17164
	ctx.r7.s64 = ctx.r10.s64 + 17164;
	// addi r6,r9,17160
	ctx.r6.s64 = ctx.r9.s64 + 17160;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836d7f24
	if (cr6.lt) goto loc_836D7F24;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D7F24;
	sub_8386D088(ctx, base);
loc_836D7F24:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d7f50
	if (cr6.lt) goto loc_836D7F50;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D7F50;
	sub_8386D088(ctx, base);
loc_836D7F50:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836D7F64;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D7F6C"))) PPC_WEAK_FUNC(sub_836D7F6C);
PPC_FUNC_IMPL(__imp__sub_836D7F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D7F70"))) PPC_WEAK_FUNC(sub_836D7F70);
PPC_FUNC_IMPL(__imp__sub_836D7F70) {
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
	// bl 0x836d7ed8
	ctx.lr = 0x836D7F90;
	sub_836D7ED8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836d7fb0
	if (cr6.eq) goto loc_836D7FB0;
	// bl 0x82595188
	ctx.lr = 0x836D7FA0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836D7FB0;
	sub_825952B8(ctx, base);
loc_836D7FB0:
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

__attribute__((alias("__imp__sub_836D7FCC"))) PPC_WEAK_FUNC(sub_836D7FCC);
PPC_FUNC_IMPL(__imp__sub_836D7FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D7FD0"))) PPC_WEAK_FUNC(sub_836D7FD0);
PPC_FUNC_IMPL(__imp__sub_836D7FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836D7FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x836D7FE4;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,16840
	ctx.r29.s64 = ctx.r11.s64 + 16840;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836D7FFC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r5,r9,17200
	ctx.r5.s64 = ctx.r9.s64 + 17200;
	// addi r4,r8,17196
	ctx.r4.s64 = ctx.r8.s64 + 17196;
	// addi r3,r7,17192
	ctx.r3.s64 = ctx.r7.s64 + 17192;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,17212
	ctx.r6.s64 = ctx.r10.s64 + 17212;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D8050;
	sub_824208C8(ctx, base);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D806C;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D8088;
	sub_824208C8(ctx, base);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stb r30,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r30.u8);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D80A4;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D80B0"))) PPC_WEAK_FUNC(sub_836D80B0);
PPC_FUNC_IMPL(__imp__sub_836D80B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836d81b0
	sub_836D81B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D80B8"))) PPC_WEAK_FUNC(sub_836D80B8);
PPC_FUNC_IMPL(__imp__sub_836D80B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836d81b0
	sub_836D81B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D80C0"))) PPC_WEAK_FUNC(sub_836D80C0);
PPC_FUNC_IMPL(__imp__sub_836D80C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836d81b0
	sub_836D81B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D80C8"))) PPC_WEAK_FUNC(sub_836D80C8);
PPC_FUNC_IMPL(__imp__sub_836D80C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836D80D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r11,17212
	ctx.r7.s64 = ctx.r11.s64 + 17212;
	// addi r6,r10,17200
	ctx.r6.s64 = ctx.r10.s64 + 17200;
	// addi r5,r9,17196
	ctx.r5.s64 = ctx.r9.s64 + 17196;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,17192
	ctx.r4.s64 = ctx.r8.s64 + 17192;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r29,r3,432
	ctx.r29.s64 = ctx.r3.s64 + 432;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,452(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x836d8120
	if (cr6.lt) goto loc_836D8120;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D8120;
	sub_8386D088(ctx, base);
loc_836D8120:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r28,r30,404
	ctx.r28.s64 = ctx.r30.s64 + 404;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d814c
	if (cr6.lt) goto loc_836D814C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D814C;
	sub_8386D088(ctx, base);
loc_836D814C:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,376
	ctx.r29.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d8170
	if (cr6.lt) goto loc_836D8170;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D8170;
	sub_8386D088(ctx, base);
loc_836D8170:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,348
	ctx.r28.s64 = ctx.r30.s64 + 348;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d8194
	if (cr6.lt) goto loc_836D8194;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D8194;
	sub_8386D088(ctx, base);
loc_836D8194:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82eaf978
	ctx.lr = 0x836D81A8;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D81B0"))) PPC_WEAK_FUNC(sub_836D81B0);
PPC_FUNC_IMPL(__imp__sub_836D81B0) {
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
	// bl 0x836d80c8
	ctx.lr = 0x836D81D0;
	sub_836D80C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836d81f0
	if (cr6.eq) goto loc_836D81F0;
	// bl 0x82595188
	ctx.lr = 0x836D81E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836D81F0;
	sub_825952B8(ctx, base);
loc_836D81F0:
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

__attribute__((alias("__imp__sub_836D820C"))) PPC_WEAK_FUNC(sub_836D820C);
PPC_FUNC_IMPL(__imp__sub_836D820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D8210"))) PPC_WEAK_FUNC(sub_836D8210);
PPC_FUNC_IMPL(__imp__sub_836D8210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836d827c
	if (!cr6.gt) goto loc_836D827C;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,17536
	ctx.r8.s64 = ctx.r10.s64 + 17536;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x836D826C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_836D827C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836D8290"))) PPC_WEAK_FUNC(sub_836D8290);
PPC_FUNC_IMPL(__imp__sub_836D8290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836D8298;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,17536
	ctx.r10.s64 = ctx.r11.s64 + 17536;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x836D82DC;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836d8304
	if (cr6.eq) goto loc_836D8304;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836D82FC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836D8304:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D830C"))) PPC_WEAK_FUNC(sub_836D830C);
PPC_FUNC_IMPL(__imp__sub_836D830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D8310"))) PPC_WEAK_FUNC(sub_836D8310);
PPC_FUNC_IMPL(__imp__sub_836D8310) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x836D834C;
	sub_82420558(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_836D8380"))) PPC_WEAK_FUNC(sub_836D8380);
PPC_FUNC_IMPL(__imp__sub_836D8380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x836d8394
	if (cr6.eq) goto loc_836D8394;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x836d8310
	sub_836D8310(ctx, base);
	return;
loc_836D8394:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836D839C"))) PPC_WEAK_FUNC(sub_836D839C);
PPC_FUNC_IMPL(__imp__sub_836D839C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D83A0"))) PPC_WEAK_FUNC(sub_836D83A0);
PPC_FUNC_IMPL(__imp__sub_836D83A0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420558
	ctx.lr = 0x836D83D0;
	sub_82420558(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_836D8400"))) PPC_WEAK_FUNC(sub_836D8400);
PPC_FUNC_IMPL(__imp__sub_836D8400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836D8408;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,132
	ctx.r11.s64 = 132;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x836d8448
	if (!cr6.lt) goto loc_836D8448;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836D8448;
	sub_82E745E0(ctx, base);
loc_836D8448:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,17356
	ctx.r27.s64 = ctx.r11.s64 + 17356;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D8490;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836D849C;
	sub_82E74C08(ctx, base);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836d84b0
	if (cr6.lt) goto loc_836D84B0;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836D84B0;
	sub_82416268(ctx, base);
loc_836D84B0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836d84d0
	if (cr6.lt) goto loc_836D84D0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D84D0:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836D84E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d84e0
	if (!cr6.eq) goto loc_836D84E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D8504;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836D8510;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d8524
	if (cr6.lt) goto loc_836D8524;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836D8524;
	sub_82416268(ctx, base);
loc_836D8524:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D854C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836D8558;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d856c
	if (cr6.lt) goto loc_836D856C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836D856C;
	sub_82416268(ctx, base);
loc_836D856C:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836D8584;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x836D85A0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836D85AC;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d85c0
	if (cr6.lt) goto loc_836D85C0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836D85C0;
	sub_82416268(ctx, base);
loc_836D85C0:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x836d85e0
	if (cr6.lt) goto loc_836D85E0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D85E0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836D85F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d85f0
	if (!cr6.eq) goto loc_836D85F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D8614;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836D8620;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d8634
	if (cr6.lt) goto loc_836D8634;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836D8634;
	sub_82416268(ctx, base);
loc_836D8634:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D865C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836D8668;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d867c
	if (cr6.lt) goto loc_836D867C;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836D867C;
	sub_82416268(ctx, base);
loc_836D867C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836d869c
	if (cr6.lt) goto loc_836D869C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D869C:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_836D86AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d86ac
	if (!cr6.eq) goto loc_836D86AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D86D0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x836D86DC;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d86f0
	if (cr6.lt) goto loc_836D86F0;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836D86F0;
	sub_82416268(ctx, base);
loc_836D86F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D86FC"))) PPC_WEAK_FUNC(sub_836D86FC);
PPC_FUNC_IMPL(__imp__sub_836D86FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D8700"))) PPC_WEAK_FUNC(sub_836D8700);
PPC_FUNC_IMPL(__imp__sub_836D8700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836D8708;
	__savegprlr_14(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r30.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x83691bb8
	ctx.lr = 0x836D8730;
	sub_83691BB8(ctx, base);
	// lwz r10,472(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836d8e68
	if (!cr6.lt) goto loc_836D8E68;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r21,r11,16
	ctx.r21.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r7,11
	ctx.r7.s64 = 720896;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r18,8
	ctx.r18.s64 = 8;
	// li r19,40
	ctx.r19.s64 = 40;
	// ori r16,r7,1
	ctx.r16.u64 = ctx.r7.u64 | 1;
	// addi r22,r11,17440
	ctx.r22.s64 = ctx.r11.s64 + 17440;
	// addi r14,r10,27936
	ctx.r14.s64 = ctx.r10.s64 + 27936;
	// addi r17,r9,8980
	ctx.r17.s64 = ctx.r9.s64 + 8980;
	// addi r20,r8,17536
	ctx.r20.s64 = ctx.r8.s64 + 17536;
loc_836D8794:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r10,r21,-16
	ctx.r10.s64 = ctx.r21.s64 + -16;
	// ld r9,-8(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + -8);
	// ld r8,-16(r21)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r21.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,552(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r4,556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// bl 0x82472fc0
	ctx.lr = 0x836D87C8;
	sub_82472FC0(ctx, base);
	// addi r6,r22,-76
	ctx.r6.s64 = ctx.r22.s64 + -76;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836D87E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d8874
	if (!cr6.eq) goto loc_836D8874;
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// ld r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// ld r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r4,540(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x82472fc0
	ctx.lr = 0x836D8818;
	sub_82472FC0(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d882c
	if (!cr6.lt) goto loc_836D882C;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_836D882C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D8830:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d8830
	if (!cr6.eq) goto loc_836D8830;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,20
	ctx.r3.s64 = ctx.r15.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D8854;
	sub_824208C8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d8868
	if (cr6.lt) goto loc_836D8868;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836D8868;
	sub_82416268(ctx, base);
loc_836D8868:
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
loc_836D8874:
	// addi r6,r22,-68
	ctx.r6.s64 = ctx.r22.s64 + -68;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836D888C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d88c8
	if (!cr6.eq) goto loc_836D88C8;
	// ld r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// addi r10,r1,560
	ctx.r10.s64 = ctx.r1.s64 + 560;
	// ld r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,560(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836d88c0
	if (!cr6.eq) goto loc_836D88C0;
	// ld r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 568);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836d88c4
	goto loc_836D88C4;
loc_836D88C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836D88C4:
	// stw r11,48(r15)
	PPC_STORE_U32(ctx.r15.u32 + 48, ctx.r11.u32);
loc_836D88C8:
	// addi r6,r22,-60
	ctx.r6.s64 = ctx.r22.s64 + -60;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836D88E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d8974
	if (!cr6.eq) goto loc_836D8974;
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r30,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r30.u8);
	// ld r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// ld r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82472fc0
	ctx.lr = 0x836D8918;
	sub_82472FC0(ctx, base);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d892c
	if (!cr6.lt) goto loc_836D892C;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_836D892C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D8930:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d8930
	if (!cr6.eq) goto loc_836D8930;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,116
	ctx.r3.s64 = ctx.r15.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D8954;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d8968
	if (cr6.lt) goto loc_836D8968;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x836D8968;
	sub_82416268(ctx, base);
loc_836D8968:
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// stb r30,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r30.u8);
loc_836D8974:
	// addi r6,r22,-52
	ctx.r6.s64 = ctx.r22.s64 + -52;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836D898C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d89dc
	if (!cr6.eq) goto loc_836D89DC;
	// ld r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// ld r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836d89c0
	if (!cr6.eq) goto loc_836D89C0;
	// ld r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836d89d8
	goto loc_836D89D8;
loc_836D89C0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836d89d4
	if (!cr6.eq) goto loc_836D89D4;
	// ld r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836d89d8
	goto loc_836D89D8;
loc_836D89D4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836D89D8:
	// stw r11,148(r15)
	PPC_STORE_U32(ctx.r15.u32 + 148, ctx.r11.u32);
loc_836D89DC:
	// addi r6,r22,-44
	ctx.r6.s64 = ctx.r22.s64 + -44;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836D89F4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d8e34
	if (!cr6.eq) goto loc_836D8E34;
	// addi r28,r15,152
	ctx.r28.s64 = ctx.r15.s64 + 152;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// stw r18,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r18.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r26,r28,8
	ctx.r26.s64 = ctx.r28.s64 + 8;
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// addi r24,r28,4
	ctx.r24.s64 = ctx.r28.s64 + 4;
	// stw r19,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r19.u32);
	// stw r26,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r24,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r24.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836D8A2C;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 160);
	// stw r30,152(r15)
	PPC_STORE_U32(ctx.r15.u32 + 152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836d8a4c
	if (cr6.eq) goto loc_836D8A4C;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x836D8A44;
	sub_8247B268(ctx, base);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
loc_836D8A4C:
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836d8e34
	if (!cr6.lt) goto loc_836D8E34;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r25,r11,12
	ctx.r25.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
loc_836D8A7C:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824208c8
	ctx.lr = 0x836D8A98;
	sub_824208C8(ctx, base);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r5,-4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// bl 0x83691bb8
	ctx.lr = 0x836D8AC0;
	sub_83691BB8(ctx, base);
	// lwz r10,440(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836d8d30
	if (!cr6.lt) goto loc_836D8D30;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_836D8AEC:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82472fc0
	ctx.lr = 0x836D8B20;
	sub_82472FC0(ctx, base);
	// addi r6,r22,-36
	ctx.r6.s64 = ctx.r22.s64 + -36;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x836D8B38;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d8bcc
	if (!cr6.eq) goto loc_836D8BCC;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,584(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lwz r4,588(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// bl 0x82472fc0
	ctx.lr = 0x836D8B70;
	sub_82472FC0(ctx, base);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d8b84
	if (!cr6.lt) goto loc_836D8B84;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_836D8B84:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D8B88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d8b88
	if (!cr6.eq) goto loc_836D8B88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D8BAC;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d8bc0
	if (cr6.lt) goto loc_836D8BC0;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x836D8BC0;
	sub_82416268(ctx, base);
loc_836D8BC0:
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
loc_836D8BCC:
	// addi r6,r22,-28
	ctx.r6.s64 = ctx.r22.s64 + -28;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x836D8BE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d8c34
	if (!cr6.eq) goto loc_836D8C34;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836d8c18
	if (!cr6.eq) goto loc_836D8C18;
	// ld r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836d8c30
	goto loc_836D8C30;
loc_836D8C18:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836d8c2c
	if (!cr6.eq) goto loc_836D8C2C;
	// ld r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836d8c30
	goto loc_836D8C30;
loc_836D8C2C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836D8C30:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
loc_836D8C34:
	// addi r6,r22,-16
	ctx.r6.s64 = ctx.r22.s64 + -16;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x836D8C4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d8c9c
	if (!cr6.eq) goto loc_836D8C9C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836d8c80
	if (!cr6.eq) goto loc_836D8C80;
	// ld r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836d8c98
	goto loc_836D8C98;
loc_836D8C80:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836d8c94
	if (!cr6.eq) goto loc_836D8C94;
	// ld r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836d8c98
	goto loc_836D8C98;
loc_836D8C94:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836D8C98:
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
loc_836D8C9C:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x836D8CB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d8d04
	if (!cr6.eq) goto loc_836D8D04;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836d8ce8
	if (!cr6.eq) goto loc_836D8CE8;
	// ld r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836d8d00
	goto loc_836D8D00;
loc_836D8CE8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836d8cfc
	if (!cr6.eq) goto loc_836D8CFC;
	// ld r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836d8d00
	goto loc_836D8D00;
loc_836D8CFC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836D8D00:
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
loc_836D8D04:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d8d18
	if (cr6.lt) goto loc_836D8D18;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836D8D18;
	sub_82416268(ctx, base);
loc_836D8D18:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// bne 0x836d8aec
	if (!cr0.eq) goto loc_836D8AEC;
loc_836D8D30:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836d8d8c
	if (cr6.lt) goto loc_836D8D8C;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836d8d7c
	if (!cr6.gt) goto loc_836D8D7C;
	// stw r26,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r26.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r24,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r24.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r18,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r18.u32);
	// stw r19,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r19.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x8247b270
	ctx.lr = 0x836D8D74;
	sub_8247B270(ctx, base);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// b 0x836d8d80
	goto loc_836D8D80;
loc_836D8D7C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836D8D80:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836d8dec
	if (cr6.eq) goto loc_836D8DEC;
loc_836D8D8C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x836d8de0
	if (cr0.eq) goto loc_836D8DE0;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420558
	ctx.lr = 0x836D8DC8;
	sub_82420558(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_836D8DE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_836D8DEC:
	// lwz r31,448(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836d8e08
	if (cr6.eq) goto loc_836D8E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836D8E00;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836D8E08;
	sub_82416268(ctx, base);
loc_836D8E08:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d8e1c
	if (cr6.lt) goto loc_836D8E1C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8386d088
	ctx.lr = 0x836D8E1C;
	sub_8386D088(ctx, base);
loc_836D8E1C:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// bne 0x836d8a7c
	if (!cr0.eq) goto loc_836D8A7C;
loc_836D8E34:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d8e48
	if (cr6.lt) goto loc_836D8E48;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836D8E48;
	sub_82416268(ctx, base);
loc_836D8E48:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r21,r21,32
	ctx.r21.s64 = ctx.r21.s64 + 32;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x836d8794
	if (!cr0.eq) goto loc_836D8794;
loc_836D8E68:
	// lwz r31,480(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836d8e84
	if (cr6.eq) goto loc_836D8E84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836D8E7C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836D8E84;
	sub_82416268(ctx, base);
loc_836D8E84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D8E90"))) PPC_WEAK_FUNC(sub_836D8E90);
PPC_FUNC_IMPL(__imp__sub_836D8E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836D8E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836D8EA4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,17280
	ctx.r30.s64 = ctx.r11.s64 + 17280;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x836D8EBC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,17568
	ctx.r7.s64 = ctx.r10.s64 + 17568;
	// addi r5,r8,17552
	ctx.r5.s64 = ctx.r8.s64 + 17552;
	// addi r6,r9,17556
	ctx.r6.s64 = ctx.r9.s64 + 17556;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// stb r29,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D8F04;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r29,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r29.u8);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D8F20;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D8F2C"))) PPC_WEAK_FUNC(sub_836D8F2C);
PPC_FUNC_IMPL(__imp__sub_836D8F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D8F30"))) PPC_WEAK_FUNC(sub_836D8F30);
PPC_FUNC_IMPL(__imp__sub_836D8F30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836d8fd8
	sub_836D8FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D8F38"))) PPC_WEAK_FUNC(sub_836D8F38);
PPC_FUNC_IMPL(__imp__sub_836D8F38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836d8fd8
	sub_836D8FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D8F40"))) PPC_WEAK_FUNC(sub_836D8F40);
PPC_FUNC_IMPL(__imp__sub_836D8F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836D8F48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,17568
	ctx.r8.s64 = ctx.r11.s64 + 17568;
	// addi r7,r10,17556
	ctx.r7.s64 = ctx.r10.s64 + 17556;
	// addi r6,r9,17552
	ctx.r6.s64 = ctx.r9.s64 + 17552;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836d8f8c
	if (cr6.lt) goto loc_836D8F8C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D8F8C;
	sub_8386D088(ctx, base);
loc_836D8F8C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d8fb8
	if (cr6.lt) goto loc_836D8FB8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D8FB8;
	sub_8386D088(ctx, base);
loc_836D8FB8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836D8FCC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D8FD4"))) PPC_WEAK_FUNC(sub_836D8FD4);
PPC_FUNC_IMPL(__imp__sub_836D8FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D8FD8"))) PPC_WEAK_FUNC(sub_836D8FD8);
PPC_FUNC_IMPL(__imp__sub_836D8FD8) {
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
	// bl 0x836d8f40
	ctx.lr = 0x836D8FF8;
	sub_836D8F40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836d9018
	if (cr6.eq) goto loc_836D9018;
	// bl 0x82595188
	ctx.lr = 0x836D9008;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836D9018;
	sub_825952B8(ctx, base);
loc_836D9018:
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

__attribute__((alias("__imp__sub_836D9034"))) PPC_WEAK_FUNC(sub_836D9034);
PPC_FUNC_IMPL(__imp__sub_836D9034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D9038"))) PPC_WEAK_FUNC(sub_836D9038);
PPC_FUNC_IMPL(__imp__sub_836D9038) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836D9050;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,17280
	ctx.r4.s64 = ctx.r11.s64 + 17280;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x824208c8
	ctx.lr = 0x836D9064;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r6,r10,17604
	ctx.r6.s64 = ctx.r10.s64 + 17604;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,17588
	ctx.r4.s64 = ctx.r8.s64 + 17588;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r5,r9,17592
	ctx.r5.s64 = ctx.r9.s64 + 17592;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r10,r7,17584
	ctx.r10.s64 = ctx.r7.s64 + 17584;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x836d8210
	ctx.lr = 0x836D90B4;
	sub_836D8210(ctx, base);
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

__attribute__((alias("__imp__sub_836D90CC"))) PPC_WEAK_FUNC(sub_836D90CC);
PPC_FUNC_IMPL(__imp__sub_836D90CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D90D0"))) PPC_WEAK_FUNC(sub_836D90D0);
PPC_FUNC_IMPL(__imp__sub_836D90D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836d90e8
	sub_836D90E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D90D8"))) PPC_WEAK_FUNC(sub_836D90D8);
PPC_FUNC_IMPL(__imp__sub_836D90D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836d90e8
	sub_836D90E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D90E0"))) PPC_WEAK_FUNC(sub_836D90E0);
PPC_FUNC_IMPL(__imp__sub_836D90E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836d90e8
	sub_836D90E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D90E8"))) PPC_WEAK_FUNC(sub_836D90E8);
PPC_FUNC_IMPL(__imp__sub_836D90E8) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,17604
	ctx.r7.s64 = ctx.r11.s64 + 17604;
	// addi r6,r10,17592
	ctx.r6.s64 = ctx.r10.s64 + 17592;
	// addi r5,r9,17588
	ctx.r5.s64 = ctx.r9.s64 + 17588;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,17584
	ctx.r4.s64 = ctx.r8.s64 + 17584;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836d8290
	ctx.lr = 0x836D913C;
	sub_836D8290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836D9144;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836d9164
	if (cr6.eq) goto loc_836D9164;
	// bl 0x82595188
	ctx.lr = 0x836D9154;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836D9164;
	sub_825952B8(ctx, base);
loc_836D9164:
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

__attribute__((alias("__imp__sub_836D9180"))) PPC_WEAK_FUNC(sub_836D9180);
PPC_FUNC_IMPL(__imp__sub_836D9180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836D9188;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836d91c8
	if (!cr6.lt) goto loc_836D91C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836D91C8;
	sub_82E745E0(ctx, base);
loc_836D91C8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,17752
	ctx.r27.s64 = ctx.r11.s64 + 17752;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D9210;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D921C;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836d9230
	if (cr6.lt) goto loc_836D9230;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836D9230;
	sub_82416268(ctx, base);
loc_836D9230:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836d9250
	if (cr6.lt) goto loc_836D9250;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D9250:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836D9260:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d9260
	if (!cr6.eq) goto loc_836D9260;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D9284;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D9290;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d92a4
	if (cr6.lt) goto loc_836D92A4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836D92A4;
	sub_82416268(ctx, base);
loc_836D92A4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D92CC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D92D8;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d92ec
	if (cr6.lt) goto loc_836D92EC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836D92EC;
	sub_82416268(ctx, base);
loc_836D92EC:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836D9304;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836D9320;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D932C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d9340
	if (cr6.lt) goto loc_836D9340;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836D9340;
	sub_82416268(ctx, base);
loc_836D9340:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836d9360
	if (cr6.lt) goto loc_836D9360;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D9360:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836D9370:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d9370
	if (!cr6.eq) goto loc_836D9370;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D9394;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D93A0;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d93b4
	if (cr6.lt) goto loc_836D93B4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836D93B4;
	sub_82416268(ctx, base);
loc_836D93B4:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D93DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D93E8;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d93fc
	if (cr6.lt) goto loc_836D93FC;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836D93FC;
	sub_82416268(ctx, base);
loc_836D93FC:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836d941c
	if (cr6.lt) goto loc_836D941C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D941C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836D942C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d942c
	if (!cr6.eq) goto loc_836D942C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D9450;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D945C;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d9470
	if (cr6.lt) goto loc_836D9470;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836D9470;
	sub_82416268(ctx, base);
loc_836D9470:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D9498;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D94A4;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d94b8
	if (cr6.lt) goto loc_836D94B8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836D94B8;
	sub_82416268(ctx, base);
loc_836D94B8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e97d90
	ctx.lr = 0x836D94D0;
	sub_82E97D90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D94DC"))) PPC_WEAK_FUNC(sub_836D94DC);
PPC_FUNC_IMPL(__imp__sub_836D94DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D94E0"))) PPC_WEAK_FUNC(sub_836D94E0);
PPC_FUNC_IMPL(__imp__sub_836D94E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836D94E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836D9510;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836d9754
	if (!cr6.lt) goto loc_836D9754;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,17780
	ctx.r26.s64 = ctx.r11.s64 + 17780;
loc_836D9548:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836D957C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D9594;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d9628
	if (!cr6.eq) goto loc_836D9628;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836D95CC;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d95e0
	if (!cr6.lt) goto loc_836D95E0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836D95E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D95E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d95e4
	if (!cr6.eq) goto loc_836D95E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D9608;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d961c
	if (cr6.lt) goto loc_836D961C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836D961C;
	sub_82416268(ctx, base);
loc_836D961C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836D9628:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D9640;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d967c
	if (!cr6.eq) goto loc_836D967C;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836d9674
	if (!cr6.eq) goto loc_836D9674;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836d9678
	goto loc_836D9678;
loc_836D9674:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836D9678:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836D967C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D9694;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d9728
	if (!cr6.eq) goto loc_836D9728;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836D96CC;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d96e0
	if (!cr6.lt) goto loc_836D96E0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836D96E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D96E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d96e4
	if (!cr6.eq) goto loc_836D96E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D9708;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d971c
	if (cr6.lt) goto loc_836D971C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836D971C;
	sub_82416268(ctx, base);
loc_836D971C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836D9728:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d973c
	if (cr6.lt) goto loc_836D973C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836D973C;
	sub_82416268(ctx, base);
loc_836D973C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836d9548
	if (!cr0.eq) goto loc_836D9548;
loc_836D9754:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836d9770
	if (cr6.eq) goto loc_836D9770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836D9768;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836D9770;
	sub_82416268(ctx, base);
loc_836D9770:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D977C"))) PPC_WEAK_FUNC(sub_836D977C);
PPC_FUNC_IMPL(__imp__sub_836D977C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D9780"))) PPC_WEAK_FUNC(sub_836D9780);
PPC_FUNC_IMPL(__imp__sub_836D9780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836D9788;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836D9794;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,17672
	ctx.r29.s64 = ctx.r11.s64 + 17672;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836D97AC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,17888
	ctx.r7.s64 = ctx.r10.s64 + 17888;
	// addi r5,r8,17872
	ctx.r5.s64 = ctx.r8.s64 + 17872;
	// addi r6,r9,17876
	ctx.r6.s64 = ctx.r9.s64 + 17876;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D97F4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836D9810;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D9820"))) PPC_WEAK_FUNC(sub_836D9820);
PPC_FUNC_IMPL(__imp__sub_836D9820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836d98c8
	sub_836D98C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D9828"))) PPC_WEAK_FUNC(sub_836D9828);
PPC_FUNC_IMPL(__imp__sub_836D9828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836d98c8
	sub_836D98C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D9830"))) PPC_WEAK_FUNC(sub_836D9830);
PPC_FUNC_IMPL(__imp__sub_836D9830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836D9838;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,17888
	ctx.r8.s64 = ctx.r11.s64 + 17888;
	// addi r7,r10,17876
	ctx.r7.s64 = ctx.r10.s64 + 17876;
	// addi r6,r9,17872
	ctx.r6.s64 = ctx.r9.s64 + 17872;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836d987c
	if (cr6.lt) goto loc_836D987C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D987C;
	sub_8386D088(ctx, base);
loc_836D987C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d98a8
	if (cr6.lt) goto loc_836D98A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836D98A8;
	sub_8386D088(ctx, base);
loc_836D98A8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836D98BC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D98C4"))) PPC_WEAK_FUNC(sub_836D98C4);
PPC_FUNC_IMPL(__imp__sub_836D98C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D98C8"))) PPC_WEAK_FUNC(sub_836D98C8);
PPC_FUNC_IMPL(__imp__sub_836D98C8) {
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
	// bl 0x836d9830
	ctx.lr = 0x836D98E8;
	sub_836D9830(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836d9908
	if (cr6.eq) goto loc_836D9908;
	// bl 0x82595188
	ctx.lr = 0x836D98F8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836D9908;
	sub_825952B8(ctx, base);
loc_836D9908:
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

__attribute__((alias("__imp__sub_836D9924"))) PPC_WEAK_FUNC(sub_836D9924);
PPC_FUNC_IMPL(__imp__sub_836D9924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D9928"))) PPC_WEAK_FUNC(sub_836D9928);
PPC_FUNC_IMPL(__imp__sub_836D9928) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836D9940;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,17672
	ctx.r4.s64 = ctx.r11.s64 + 17672;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x824208c8
	ctx.lr = 0x836D9954;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,17936
	ctx.r3.s64 = ctx.r7.s64 + 17936;
	// addi r6,r10,17920
	ctx.r6.s64 = ctx.r10.s64 + 17920;
	// addi r5,r9,17908
	ctx.r5.s64 = ctx.r9.s64 + 17908;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,17904
	ctx.r4.s64 = ctx.r8.s64 + 17904;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836D999C"))) PPC_WEAK_FUNC(sub_836D999C);
PPC_FUNC_IMPL(__imp__sub_836D999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D99A0"))) PPC_WEAK_FUNC(sub_836D99A0);
PPC_FUNC_IMPL(__imp__sub_836D99A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836d99b8
	sub_836D99B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D99A8"))) PPC_WEAK_FUNC(sub_836D99A8);
PPC_FUNC_IMPL(__imp__sub_836D99A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836d99b8
	sub_836D99B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D99B0"))) PPC_WEAK_FUNC(sub_836D99B0);
PPC_FUNC_IMPL(__imp__sub_836D99B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836d99b8
	sub_836D99B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D99B8"))) PPC_WEAK_FUNC(sub_836D99B8);
PPC_FUNC_IMPL(__imp__sub_836D99B8) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,17920
	ctx.r7.s64 = ctx.r11.s64 + 17920;
	// addi r6,r10,17908
	ctx.r6.s64 = ctx.r10.s64 + 17908;
	// addi r5,r9,17904
	ctx.r5.s64 = ctx.r9.s64 + 17904;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,17936
	ctx.r4.s64 = ctx.r8.s64 + 17936;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836D9A08;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836d9a28
	if (cr6.eq) goto loc_836D9A28;
	// bl 0x82595188
	ctx.lr = 0x836D9A18;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836D9A28;
	sub_825952B8(ctx, base);
loc_836D9A28:
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

__attribute__((alias("__imp__sub_836D9A44"))) PPC_WEAK_FUNC(sub_836D9A44);
PPC_FUNC_IMPL(__imp__sub_836D9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D9A48"))) PPC_WEAK_FUNC(sub_836D9A48);
PPC_FUNC_IMPL(__imp__sub_836D9A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836D9A50;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836d9a90
	if (!cr6.lt) goto loc_836D9A90;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836D9A90;
	sub_82E745E0(ctx, base);
loc_836D9A90:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,18072
	ctx.r27.s64 = ctx.r11.s64 + 18072;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D9AD8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D9AE4;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836d9af8
	if (cr6.lt) goto loc_836D9AF8;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836D9AF8;
	sub_82416268(ctx, base);
loc_836D9AF8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836d9b18
	if (cr6.lt) goto loc_836D9B18;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D9B18:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836D9B28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d9b28
	if (!cr6.eq) goto loc_836D9B28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D9B4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D9B58;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d9b6c
	if (cr6.lt) goto loc_836D9B6C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836D9B6C;
	sub_82416268(ctx, base);
loc_836D9B6C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D9B94;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D9BA0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d9bb4
	if (cr6.lt) goto loc_836D9BB4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836D9BB4;
	sub_82416268(ctx, base);
loc_836D9BB4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836D9BCC;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836D9BE8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D9BF4;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d9c08
	if (cr6.lt) goto loc_836D9C08;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836D9C08;
	sub_82416268(ctx, base);
loc_836D9C08:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836d9c28
	if (cr6.lt) goto loc_836D9C28;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D9C28:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836D9C38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d9c38
	if (!cr6.eq) goto loc_836D9C38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D9C5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D9C68;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d9c7c
	if (cr6.lt) goto loc_836D9C7C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836D9C7C;
	sub_82416268(ctx, base);
loc_836D9C7C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D9CA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D9CB0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d9cc4
	if (cr6.lt) goto loc_836D9CC4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836D9CC4;
	sub_82416268(ctx, base);
loc_836D9CC4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836d9ce4
	if (cr6.lt) goto loc_836D9CE4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836D9CE4:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836D9CF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d9cf4
	if (!cr6.eq) goto loc_836D9CF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836D9D18;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D9D24;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d9d38
	if (cr6.lt) goto loc_836D9D38;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836D9D38;
	sub_82416268(ctx, base);
loc_836D9D38:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836D9D60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836D9D6C;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836d9d80
	if (cr6.lt) goto loc_836D9D80;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836D9D80;
	sub_82416268(ctx, base);
loc_836D9D80:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836D9D98;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836D9DA4"))) PPC_WEAK_FUNC(sub_836D9DA4);
PPC_FUNC_IMPL(__imp__sub_836D9DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836D9DA8"))) PPC_WEAK_FUNC(sub_836D9DA8);
PPC_FUNC_IMPL(__imp__sub_836D9DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836D9DB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836D9DD8;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836da01c
	if (!cr6.lt) goto loc_836DA01C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,18092
	ctx.r26.s64 = ctx.r11.s64 + 18092;
loc_836D9E10:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836D9E44;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D9E5C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d9ef0
	if (!cr6.eq) goto loc_836D9EF0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836D9E94;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d9ea8
	if (!cr6.lt) goto loc_836D9EA8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836D9EA8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D9EAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d9eac
	if (!cr6.eq) goto loc_836D9EAC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D9ED0;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d9ee4
	if (cr6.lt) goto loc_836D9EE4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836D9EE4;
	sub_82416268(ctx, base);
loc_836D9EE4:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836D9EF0:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D9F08;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d9f44
	if (!cr6.eq) goto loc_836D9F44;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836d9f3c
	if (!cr6.eq) goto loc_836D9F3C;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836d9f40
	goto loc_836D9F40;
loc_836D9F3C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836D9F40:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836D9F44:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836D9F5C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836d9ff0
	if (!cr6.eq) goto loc_836D9FF0;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836D9F94;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836d9fa8
	if (!cr6.lt) goto loc_836D9FA8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836D9FA8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836D9FAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836d9fac
	if (!cr6.eq) goto loc_836D9FAC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836D9FD0;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836d9fe4
	if (cr6.lt) goto loc_836D9FE4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836D9FE4;
	sub_82416268(ctx, base);
loc_836D9FE4:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836D9FF0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da004
	if (cr6.lt) goto loc_836DA004;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836DA004;
	sub_82416268(ctx, base);
loc_836DA004:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836d9e10
	if (!cr0.eq) goto loc_836D9E10;
loc_836DA01C:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836da038
	if (cr6.eq) goto loc_836DA038;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DA030;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DA038;
	sub_82416268(ctx, base);
loc_836DA038:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DA044"))) PPC_WEAK_FUNC(sub_836DA044);
PPC_FUNC_IMPL(__imp__sub_836DA044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DA048"))) PPC_WEAK_FUNC(sub_836DA048);
PPC_FUNC_IMPL(__imp__sub_836DA048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836DA050;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836DA05C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,17992
	ctx.r29.s64 = ctx.r11.s64 + 17992;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836DA074;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,18200
	ctx.r7.s64 = ctx.r10.s64 + 18200;
	// addi r5,r8,18184
	ctx.r5.s64 = ctx.r8.s64 + 18184;
	// addi r6,r9,18188
	ctx.r6.s64 = ctx.r9.s64 + 18188;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DA0BC;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DA0D8;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DA0E8"))) PPC_WEAK_FUNC(sub_836DA0E8);
PPC_FUNC_IMPL(__imp__sub_836DA0E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836da190
	sub_836DA190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DA0F0"))) PPC_WEAK_FUNC(sub_836DA0F0);
PPC_FUNC_IMPL(__imp__sub_836DA0F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836da190
	sub_836DA190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DA0F8"))) PPC_WEAK_FUNC(sub_836DA0F8);
PPC_FUNC_IMPL(__imp__sub_836DA0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DA100;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,18200
	ctx.r8.s64 = ctx.r11.s64 + 18200;
	// addi r7,r10,18188
	ctx.r7.s64 = ctx.r10.s64 + 18188;
	// addi r6,r9,18184
	ctx.r6.s64 = ctx.r9.s64 + 18184;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836da144
	if (cr6.lt) goto loc_836DA144;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DA144;
	sub_8386D088(ctx, base);
loc_836DA144:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da170
	if (cr6.lt) goto loc_836DA170;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DA170;
	sub_8386D088(ctx, base);
loc_836DA170:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836DA184;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DA18C"))) PPC_WEAK_FUNC(sub_836DA18C);
PPC_FUNC_IMPL(__imp__sub_836DA18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DA190"))) PPC_WEAK_FUNC(sub_836DA190);
PPC_FUNC_IMPL(__imp__sub_836DA190) {
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
	// bl 0x836da0f8
	ctx.lr = 0x836DA1B0;
	sub_836DA0F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836da1d0
	if (cr6.eq) goto loc_836DA1D0;
	// bl 0x82595188
	ctx.lr = 0x836DA1C0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DA1D0;
	sub_825952B8(ctx, base);
loc_836DA1D0:
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

__attribute__((alias("__imp__sub_836DA1EC"))) PPC_WEAK_FUNC(sub_836DA1EC);
PPC_FUNC_IMPL(__imp__sub_836DA1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DA1F0"))) PPC_WEAK_FUNC(sub_836DA1F0);
PPC_FUNC_IMPL(__imp__sub_836DA1F0) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836DA208;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,17992
	ctx.r4.s64 = ctx.r11.s64 + 17992;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x824208c8
	ctx.lr = 0x836DA21C;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,18248
	ctx.r3.s64 = ctx.r7.s64 + 18248;
	// addi r6,r10,18232
	ctx.r6.s64 = ctx.r10.s64 + 18232;
	// addi r5,r9,18220
	ctx.r5.s64 = ctx.r9.s64 + 18220;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,18216
	ctx.r4.s64 = ctx.r8.s64 + 18216;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836DA264"))) PPC_WEAK_FUNC(sub_836DA264);
PPC_FUNC_IMPL(__imp__sub_836DA264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DA268"))) PPC_WEAK_FUNC(sub_836DA268);
PPC_FUNC_IMPL(__imp__sub_836DA268) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836da280
	sub_836DA280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DA270"))) PPC_WEAK_FUNC(sub_836DA270);
PPC_FUNC_IMPL(__imp__sub_836DA270) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836da280
	sub_836DA280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DA278"))) PPC_WEAK_FUNC(sub_836DA278);
PPC_FUNC_IMPL(__imp__sub_836DA278) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836da280
	sub_836DA280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DA280"))) PPC_WEAK_FUNC(sub_836DA280);
PPC_FUNC_IMPL(__imp__sub_836DA280) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,18232
	ctx.r7.s64 = ctx.r11.s64 + 18232;
	// addi r6,r10,18220
	ctx.r6.s64 = ctx.r10.s64 + 18220;
	// addi r5,r9,18216
	ctx.r5.s64 = ctx.r9.s64 + 18216;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,18248
	ctx.r4.s64 = ctx.r8.s64 + 18248;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836DA2D0;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836da2f0
	if (cr6.eq) goto loc_836DA2F0;
	// bl 0x82595188
	ctx.lr = 0x836DA2E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DA2F0;
	sub_825952B8(ctx, base);
loc_836DA2F0:
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

__attribute__((alias("__imp__sub_836DA30C"))) PPC_WEAK_FUNC(sub_836DA30C);
PPC_FUNC_IMPL(__imp__sub_836DA30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DA310"))) PPC_WEAK_FUNC(sub_836DA310);
PPC_FUNC_IMPL(__imp__sub_836DA310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DA318;
	__savegprlr_27(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,222
	ctx.r11.s64 = 222;
	// li r10,17
	ctx.r10.s64 = 17;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// sth r10,85(r1)
	PPC_STORE_U16(ctx.r1.u32 + 85, ctx.r10.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82e74660
	ctx.lr = 0x836DA350;
	sub_82E74660(ctx, base);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// addi r28,r11,18648
	ctx.r28.s64 = ctx.r11.s64 + 18648;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r28,-192
	ctx.r4.s64 = ctx.r28.s64 + -192;
	// bl 0x82472fc0
	ctx.lr = 0x836DA378;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA384;
	sub_82E74C08(ctx, base);
	// lwz r9,596(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x836da398
	if (cr6.lt) goto loc_836DA398;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x836DA398;
	sub_82416268(ctx, base);
loc_836DA398:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// blt cr6,0x836da3b8
	if (cr6.lt) goto loc_836DA3B8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DA3B8:
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
loc_836DA3C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836da3c8
	if (!cr6.eq) goto loc_836DA3C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DA3EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA3F8;
	sub_82E74C08(ctx, base);
	// lwz r10,852(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836da40c
	if (cr6.lt) goto loc_836DA40C;
	// lwz r3,832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82416268
	ctx.lr = 0x836DA40C;
	sub_82416268(ctx, base);
loc_836DA40C:
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// addi r4,r28,-184
	ctx.r4.s64 = ctx.r28.s64 + -184;
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DA434;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA440;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da454
	if (cr6.lt) goto loc_836DA454;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836DA454;
	sub_82416268(ctx, base);
loc_836DA454:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836DA46C;
	sub_82E746C0(ctx, base);
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// addi r4,r28,-176
	ctx.r4.s64 = ctx.r28.s64 + -176;
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82472fc0
	ctx.lr = 0x836DA488;
	sub_82472FC0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA494;
	sub_82E74C08(ctx, base);
	// lwz r11,660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da4a8
	if (cr6.lt) goto loc_836DA4A8;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x836DA4A8;
	sub_82416268(ctx, base);
loc_836DA4A8:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// blt cr6,0x836da4c8
	if (cr6.lt) goto loc_836DA4C8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DA4C8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836DA4D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836da4d8
	if (!cr6.eq) goto loc_836DA4D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DA4FC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA508;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836da51c
	if (cr6.lt) goto loc_836DA51C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836DA51C;
	sub_82416268(ctx, base);
loc_836DA51C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r28,-168
	ctx.r4.s64 = ctx.r28.s64 + -168;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DA544;
	sub_82472FC0(ctx, base);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA550;
	sub_82E74C08(ctx, base);
	// lwz r11,980(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da564
	if (cr6.lt) goto loc_836DA564;
	// lwz r3,960(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// bl 0x82416268
	ctx.lr = 0x836DA564;
	sub_82416268(ctx, base);
loc_836DA564:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// blt cr6,0x836da584
	if (cr6.lt) goto loc_836DA584;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DA584:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_836DA594:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836da594
	if (!cr6.eq) goto loc_836DA594;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DA5B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA5C4;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836da5d8
	if (cr6.lt) goto loc_836DA5D8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836DA5D8;
	sub_82416268(ctx, base);
loc_836DA5D8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r28,-160
	ctx.r4.s64 = ctx.r28.s64 + -160;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DA600;
	sub_82472FC0(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA60C;
	sub_82E74C08(ctx, base);
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da620
	if (cr6.lt) goto loc_836DA620;
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// bl 0x82416268
	ctx.lr = 0x836DA620;
	sub_82416268(ctx, base);
loc_836DA620:
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// addi r4,r29,172
	ctx.r4.s64 = ctx.r29.s64 + 172;
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// blt cr6,0x836da640
	if (cr6.lt) goto loc_836DA640;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DA640:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_836DA650:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836da650
	if (!cr6.eq) goto loc_836DA650;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DA674;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA680;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836da694
	if (cr6.lt) goto loc_836DA694;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836DA694;
	sub_82416268(ctx, base);
loc_836DA694:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// addi r4,r28,-152
	ctx.r4.s64 = ctx.r28.s64 + -152;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DA6BC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA6C8;
	sub_82E74C08(ctx, base);
	// lwz r11,916(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da6dc
	if (cr6.lt) goto loc_836DA6DC;
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x82416268
	ctx.lr = 0x836DA6DC;
	sub_82416268(ctx, base);
loc_836DA6DC:
	// lwz r11,220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// addi r4,r29,200
	ctx.r4.s64 = ctx.r29.s64 + 200;
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
	// blt cr6,0x836da6fc
	if (cr6.lt) goto loc_836DA6FC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DA6FC:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_836DA70C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836da70c
	if (!cr6.eq) goto loc_836DA70C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DA730;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA73C;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836da750
	if (cr6.lt) goto loc_836DA750;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836DA750;
	sub_82416268(ctx, base);
loc_836DA750:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// addi r4,r28,-140
	ctx.r4.s64 = ctx.r28.s64 + -140;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DA778;
	sub_82472FC0(ctx, base);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA784;
	sub_82E74C08(ctx, base);
	// lwz r11,788(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da798
	if (cr6.lt) goto loc_836DA798;
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x82416268
	ctx.lr = 0x836DA798;
	sub_82416268(ctx, base);
loc_836DA798:
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// addi r4,r29,228
	ctx.r4.s64 = ctx.r29.s64 + 228;
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// blt cr6,0x836da7b8
	if (cr6.lt) goto loc_836DA7B8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DA7B8:
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
loc_836DA7C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836da7c8
	if (!cr6.eq) goto loc_836DA7C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DA7EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA7F8;
	sub_82E74C08(ctx, base);
	// lwz r10,532(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836da80c
	if (cr6.lt) goto loc_836DA80C;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x836DA80C;
	sub_82416268(ctx, base);
loc_836DA80C:
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// addi r4,r28,-132
	ctx.r4.s64 = ctx.r28.s64 + -132;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// stw r30,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r30.u32);
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// stb r31,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DA834;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA840;
	sub_82E74C08(ctx, base);
	// lwz r11,1044(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da854
	if (cr6.lt) goto loc_836DA854;
	// lwz r3,1024(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// bl 0x82416268
	ctx.lr = 0x836DA854;
	sub_82416268(ctx, base);
loc_836DA854:
	// stw r30,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// stb r31,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r31.u8);
	// lwz r4,256(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// bl 0x82e97d90
	ctx.lr = 0x836DA86C;
	sub_82E97D90(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r28,-120
	ctx.r4.s64 = ctx.r28.s64 + -120;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x836DA888;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA894;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da8a8
	if (cr6.lt) goto loc_836DA8A8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836DA8A8;
	sub_82416268(ctx, base);
loc_836DA8A8:
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// addi r4,r29,260
	ctx.r4.s64 = ctx.r29.s64 + 260;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x836da8c8
	if (cr6.lt) goto loc_836DA8C8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DA8C8:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836DA8D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836da8d8
	if (!cr6.eq) goto loc_836DA8D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DA8FC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA908;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836da91c
	if (cr6.lt) goto loc_836DA91C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836DA91C;
	sub_82416268(ctx, base);
loc_836DA91C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r28,-104
	ctx.r4.s64 = ctx.r28.s64 + -104;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DA944;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA950;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836da964
	if (cr6.lt) goto loc_836DA964;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836DA964;
	sub_82416268(ctx, base);
loc_836DA964:
	// lwz r11,308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	// addi r4,r29,288
	ctx.r4.s64 = ctx.r29.s64 + 288;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x836da984
	if (cr6.lt) goto loc_836DA984;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DA984:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_836DA994:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836da994
	if (!cr6.eq) goto loc_836DA994;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DA9B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DA9C4;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836da9d8
	if (cr6.lt) goto loc_836DA9D8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836DA9D8;
	sub_82416268(ctx, base);
loc_836DA9D8:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r4,r28,-92
	ctx.r4.s64 = ctx.r28.s64 + -92;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DAA00;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DAA0C;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836daa20
	if (cr6.lt) goto loc_836DAA20;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836DAA20;
	sub_82416268(ctx, base);
loc_836DAA20:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// addi r4,r29,316
	ctx.r4.s64 = ctx.r29.s64 + 316;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836daa40
	if (cr6.lt) goto loc_836DAA40;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DAA40:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_836DAA50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836daa50
	if (!cr6.eq) goto loc_836DAA50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DAA74;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DAA80;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836daa94
	if (cr6.lt) goto loc_836DAA94;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836DAA94;
	sub_82416268(ctx, base);
loc_836DAA94:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r28,-76
	ctx.r4.s64 = ctx.r28.s64 + -76;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DAABC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DAAC8;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836daadc
	if (cr6.lt) goto loc_836DAADC;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836DAADC;
	sub_82416268(ctx, base);
loc_836DAADC:
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// addi r4,r29,344
	ctx.r4.s64 = ctx.r29.s64 + 344;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// blt cr6,0x836daafc
	if (cr6.lt) goto loc_836DAAFC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DAAFC:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_836DAB0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dab0c
	if (!cr6.eq) goto loc_836DAB0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DAB30;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DAB3C;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dab50
	if (cr6.lt) goto loc_836DAB50;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x836DAB50;
	sub_82416268(ctx, base);
loc_836DAB50:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// addi r4,r28,-68
	ctx.r4.s64 = ctx.r28.s64 + -68;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DAB78;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DAB84;
	sub_82E74C08(ctx, base);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dab98
	if (cr6.lt) goto loc_836DAB98;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x836DAB98;
	sub_82416268(ctx, base);
loc_836DAB98:
	// lwz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// addi r4,r29,372
	ctx.r4.s64 = ctx.r29.s64 + 372;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// blt cr6,0x836dabb8
	if (cr6.lt) goto loc_836DABB8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DABB8:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
loc_836DABC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dabc8
	if (!cr6.eq) goto loc_836DABC8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DABEC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DABF8;
	sub_82E74C08(ctx, base);
	// lwz r10,628(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dac0c
	if (cr6.lt) goto loc_836DAC0C;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x836DAC0C;
	sub_82416268(ctx, base);
loc_836DAC0C:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DAC34;
	sub_82472FC0(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DAC40;
	sub_82E74C08(ctx, base);
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dac54
	if (cr6.lt) goto loc_836DAC54;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x836DAC54;
	sub_82416268(ctx, base);
loc_836DAC54:
	// lwz r11,420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// addi r4,r29,400
	ctx.r4.s64 = ctx.r29.s64 + 400;
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// blt cr6,0x836dac74
	if (cr6.lt) goto loc_836DAC74;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DAC74:
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
loc_836DAC84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dac84
	if (!cr6.eq) goto loc_836DAC84;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DACA8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DACB4;
	sub_82E74C08(ctx, base);
	// lwz r10,756(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dacc8
	if (cr6.lt) goto loc_836DACC8;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82416268
	ctx.lr = 0x836DACC8;
	sub_82416268(ctx, base);
loc_836DACC8:
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DACF0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DACFC;
	sub_82E74C08(ctx, base);
	// lwz r11,820(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dad10
	if (cr6.lt) goto loc_836DAD10;
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x82416268
	ctx.lr = 0x836DAD10;
	sub_82416268(ctx, base);
loc_836DAD10:
	// lwz r11,448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// addi r4,r29,428
	ctx.r4.s64 = ctx.r29.s64 + 428;
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// blt cr6,0x836dad30
	if (cr6.lt) goto loc_836DAD30;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DAD30:
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
loc_836DAD40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dad40
	if (!cr6.eq) goto loc_836DAD40;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DAD64;
	sub_82472FC0(ctx, base);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DAD70;
	sub_82E74C08(ctx, base);
	// lwz r10,884(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dad84
	if (cr6.lt) goto loc_836DAD84;
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x82416268
	ctx.lr = 0x836DAD84;
	sub_82416268(ctx, base);
loc_836DAD84:
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DADAC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DADB8;
	sub_82E74C08(ctx, base);
	// lwz r11,948(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dadcc
	if (cr6.lt) goto loc_836DADCC;
	// lwz r3,928(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// bl 0x82416268
	ctx.lr = 0x836DADCC;
	sub_82416268(ctx, base);
loc_836DADCC:
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// lwz r4,456(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 456);
	// bl 0x82e746c0
	ctx.lr = 0x836DADE4;
	sub_82E746C0(ctx, base);
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82472fc0
	ctx.lr = 0x836DAE00;
	sub_82472FC0(ctx, base);
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DAE0C;
	sub_82E74C08(ctx, base);
	// lwz r11,1012(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dae20
	if (cr6.lt) goto loc_836DAE20;
	// lwz r3,992(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// bl 0x82416268
	ctx.lr = 0x836DAE20;
	sub_82416268(ctx, base);
loc_836DAE20:
	// lwz r11,480(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 480);
	// addi r4,r29,460
	ctx.r4.s64 = ctx.r29.s64 + 460;
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// blt cr6,0x836dae40
	if (cr6.lt) goto loc_836DAE40;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DAE40:
	// stw r30,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r31.u32);
	// stb r31,1056(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1056, ctx.r31.u8);
loc_836DAE50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dae50
	if (!cr6.eq) goto loc_836DAE50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DAE74;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DAE80;
	sub_82E74C08(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x824707c8
	ctx.lr = 0x836DAE88;
	sub_824707C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DAE94"))) PPC_WEAK_FUNC(sub_836DAE94);
PPC_FUNC_IMPL(__imp__sub_836DAE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DAE98"))) PPC_WEAK_FUNC(sub_836DAE98);
PPC_FUNC_IMPL(__imp__sub_836DAE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836DAEA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836DAEC8;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836db160
	if (!cr6.lt) goto loc_836DB160;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,18692
	ctx.r26.s64 = ctx.r11.s64 + 18692;
loc_836DAF00:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x836DAF34;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-24
	ctx.r6.s64 = ctx.r26.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DAF4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dafe0
	if (!cr6.eq) goto loc_836DAFE0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836DAF84;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836daf98
	if (!cr6.lt) goto loc_836DAF98;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836DAF98:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DAF9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836daf9c
	if (!cr6.eq) goto loc_836DAF9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DAFC0;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dafd4
	if (cr6.lt) goto loc_836DAFD4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836DAFD4;
	sub_82416268(ctx, base);
loc_836DAFD4:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836DAFE0:
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DAFF8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836db034
	if (!cr6.eq) goto loc_836DB034;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836db02c
	if (!cr6.eq) goto loc_836DB02C;
	// ld r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836db030
	goto loc_836DB030;
loc_836DB02C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836DB030:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836DB034:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DB04C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836db0e0
	if (!cr6.eq) goto loc_836DB0E0;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82472fc0
	ctx.lr = 0x836DB084;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836db098
	if (!cr6.lt) goto loc_836DB098;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836DB098:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DB09C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836db09c
	if (!cr6.eq) goto loc_836DB09C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DB0C0;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836db0d4
	if (cr6.lt) goto loc_836DB0D4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836DB0D4;
	sub_82416268(ctx, base);
loc_836DB0D4:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836DB0E0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DB0F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836db134
	if (!cr6.eq) goto loc_836DB134;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836db12c
	if (!cr6.eq) goto loc_836DB12C;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836db130
	goto loc_836DB130;
loc_836DB12C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836DB130:
	// stw r11,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r11.u32);
loc_836DB134:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db148
	if (cr6.lt) goto loc_836DB148;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836DB148;
	sub_82416268(ctx, base);
loc_836DB148:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836daf00
	if (!cr0.eq) goto loc_836DAF00;
loc_836DB160:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836db17c
	if (cr6.eq) goto loc_836DB17C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DB174;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DB17C;
	sub_82416268(ctx, base);
loc_836DB17C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DB188"))) PPC_WEAK_FUNC(sub_836DB188);
PPC_FUNC_IMPL(__imp__sub_836DB188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836DB190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836DB19C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r29,r11,18304
	ctx.r29.s64 = ctx.r11.s64 + 18304;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836DB1B4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,18800
	ctx.r7.s64 = ctx.r10.s64 + 18800;
	// addi r5,r8,18784
	ctx.r5.s64 = ctx.r8.s64 + 18784;
	// addi r6,r9,18788
	ctx.r6.s64 = ctx.r9.s64 + 18788;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DB1FC;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DB218;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DB234;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DB250;
	sub_824208C8(ctx, base);
	// stw r28,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// stb r30,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r30.u8);
	// addi r4,r29,84
	ctx.r4.s64 = ctx.r29.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DB26C;
	sub_824208C8(ctx, base);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r28,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// stb r30,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r30.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x824208c8
	ctx.lr = 0x836DB28C;
	sub_824208C8(ctx, base);
	// stw r28,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r28.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// stb r30,488(r31)
	PPC_STORE_U8(ctx.r31.u32 + 488, ctx.r30.u8);
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// stw r28,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r28.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stb r30,516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 516, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836DB2B4;
	sub_824208C8(ctx, base);
	// stw r28,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r28.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// stb r30,544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 544, ctx.r30.u8);
	// addi r4,r29,120
	ctx.r4.s64 = ctx.r29.s64 + 120;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x824208c8
	ctx.lr = 0x836DB2D0;
	sub_824208C8(ctx, base);
	// stw r28,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r28.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stb r30,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r30.u8);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// addi r4,r29,132
	ctx.r4.s64 = ctx.r29.s64 + 132;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x824208c8
	ctx.lr = 0x836DB2EC;
	sub_824208C8(ctx, base);
	// stw r28,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r28.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// stb r30,600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 600, ctx.r30.u8);
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x824208c8
	ctx.lr = 0x836DB308;
	sub_824208C8(ctx, base);
	// stw r28,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r28.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// stb r30,628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 628, ctx.r30.u8);
	// addi r4,r29,140
	ctx.r4.s64 = ctx.r29.s64 + 140;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x824208c8
	ctx.lr = 0x836DB324;
	sub_824208C8(ctx, base);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stw r28,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r28.u32);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stb r30,660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 660, ctx.r30.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x824208c8
	ctx.lr = 0x836DB344;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DB350"))) PPC_WEAK_FUNC(sub_836DB350);
PPC_FUNC_IMPL(__imp__sub_836DB350) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836db580
	sub_836DB580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DB358"))) PPC_WEAK_FUNC(sub_836DB358);
PPC_FUNC_IMPL(__imp__sub_836DB358) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836db580
	sub_836DB580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DB360"))) PPC_WEAK_FUNC(sub_836DB360);
PPC_FUNC_IMPL(__imp__sub_836DB360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DB368;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,18800
	ctx.r8.s64 = ctx.r11.s64 + 18800;
	// addi r7,r10,18788
	ctx.r7.s64 = ctx.r10.s64 + 18788;
	// addi r6,r9,18784
	ctx.r6.s64 = ctx.r9.s64 + 18784;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r27,r3,660
	ctx.r27.s64 = ctx.r3.s64 + 660;
	// lwz r5,680(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836db3ac
	if (cr6.lt) goto loc_836DB3AC;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB3AC;
	sub_8386D088(ctx, base);
loc_836DB3AC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// addi r28,r30,628
	ctx.r28.s64 = ctx.r30.s64 + 628;
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db3d8
	if (cr6.lt) goto loc_836DB3D8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB3D8;
	sub_8386D088(ctx, base);
loc_836DB3D8:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,600
	ctx.r27.s64 = ctx.r30.s64 + 600;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db3fc
	if (cr6.lt) goto loc_836DB3FC;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB3FC;
	sub_8386D088(ctx, base);
loc_836DB3FC:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,572
	ctx.r28.s64 = ctx.r30.s64 + 572;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db420
	if (cr6.lt) goto loc_836DB420;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB420;
	sub_8386D088(ctx, base);
loc_836DB420:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,544
	ctx.r27.s64 = ctx.r30.s64 + 544;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db444
	if (cr6.lt) goto loc_836DB444;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB444;
	sub_8386D088(ctx, base);
loc_836DB444:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,516
	ctx.r28.s64 = ctx.r30.s64 + 516;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db468
	if (cr6.lt) goto loc_836DB468;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB468;
	sub_8386D088(ctx, base);
loc_836DB468:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,488
	ctx.r27.s64 = ctx.r30.s64 + 488;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db48c
	if (cr6.lt) goto loc_836DB48C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB48C;
	sub_8386D088(ctx, base);
loc_836DB48C:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,460
	ctx.r28.s64 = ctx.r30.s64 + 460;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db4b0
	if (cr6.lt) goto loc_836DB4B0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB4B0;
	sub_8386D088(ctx, base);
loc_836DB4B0:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,428
	ctx.r27.s64 = ctx.r30.s64 + 428;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db4d4
	if (cr6.lt) goto loc_836DB4D4;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB4D4;
	sub_8386D088(ctx, base);
loc_836DB4D4:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,400
	ctx.r28.s64 = ctx.r30.s64 + 400;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db4f8
	if (cr6.lt) goto loc_836DB4F8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB4F8;
	sub_8386D088(ctx, base);
loc_836DB4F8:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,372
	ctx.r27.s64 = ctx.r30.s64 + 372;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db51c
	if (cr6.lt) goto loc_836DB51C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB51C;
	sub_8386D088(ctx, base);
loc_836DB51C:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,344
	ctx.r28.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db540
	if (cr6.lt) goto loc_836DB540;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB540;
	sub_8386D088(ctx, base);
loc_836DB540:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,316
	ctx.r27.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db564
	if (cr6.lt) goto loc_836DB564;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DB564;
	sub_8386D088(ctx, base);
loc_836DB564:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836DB578;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DB580"))) PPC_WEAK_FUNC(sub_836DB580);
PPC_FUNC_IMPL(__imp__sub_836DB580) {
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
	// bl 0x836db360
	ctx.lr = 0x836DB5A0;
	sub_836DB360(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836db5c0
	if (cr6.eq) goto loc_836DB5C0;
	// bl 0x82595188
	ctx.lr = 0x836DB5B0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DB5C0;
	sub_825952B8(ctx, base);
loc_836DB5C0:
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

__attribute__((alias("__imp__sub_836DB5DC"))) PPC_WEAK_FUNC(sub_836DB5DC);
PPC_FUNC_IMPL(__imp__sub_836DB5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DB5E0"))) PPC_WEAK_FUNC(sub_836DB5E0);
PPC_FUNC_IMPL(__imp__sub_836DB5E0) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836DB5F8;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,18304
	ctx.r4.s64 = ctx.r11.s64 + 18304;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x824208c8
	ctx.lr = 0x836DB60C;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,18848
	ctx.r3.s64 = ctx.r7.s64 + 18848;
	// addi r6,r10,18832
	ctx.r6.s64 = ctx.r10.s64 + 18832;
	// addi r5,r9,18820
	ctx.r5.s64 = ctx.r9.s64 + 18820;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,18816
	ctx.r4.s64 = ctx.r8.s64 + 18816;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_836DB65C"))) PPC_WEAK_FUNC(sub_836DB65C);
PPC_FUNC_IMPL(__imp__sub_836DB65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DB660"))) PPC_WEAK_FUNC(sub_836DB660);
PPC_FUNC_IMPL(__imp__sub_836DB660) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836db678
	sub_836DB678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DB668"))) PPC_WEAK_FUNC(sub_836DB668);
PPC_FUNC_IMPL(__imp__sub_836DB668) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836db678
	sub_836DB678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DB670"))) PPC_WEAK_FUNC(sub_836DB670);
PPC_FUNC_IMPL(__imp__sub_836DB670) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836db678
	sub_836DB678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DB678"))) PPC_WEAK_FUNC(sub_836DB678);
PPC_FUNC_IMPL(__imp__sub_836DB678) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,18832
	ctx.r7.s64 = ctx.r11.s64 + 18832;
	// addi r6,r10,18820
	ctx.r6.s64 = ctx.r10.s64 + 18820;
	// addi r5,r9,18816
	ctx.r5.s64 = ctx.r9.s64 + 18816;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,18848
	ctx.r4.s64 = ctx.r8.s64 + 18848;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836DB6C8;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836db6e8
	if (cr6.eq) goto loc_836DB6E8;
	// bl 0x82595188
	ctx.lr = 0x836DB6D8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DB6E8;
	sub_825952B8(ctx, base);
loc_836DB6E8:
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

__attribute__((alias("__imp__sub_836DB704"))) PPC_WEAK_FUNC(sub_836DB704);
PPC_FUNC_IMPL(__imp__sub_836DB704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DB708"))) PPC_WEAK_FUNC(sub_836DB708);
PPC_FUNC_IMPL(__imp__sub_836DB708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836DB710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x836DB740;
	sub_824208C8(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x835fe558
	ctx.lr = 0x836DB74C;
	sub_835FE558(ctx, base);
	// std r30,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r30.u64);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DB76C;
	sub_824208C8(ctx, base);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// sth r30,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r30.u16);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// sth r30,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r30.u16);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// sth r30,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r30.u16);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// addi r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 + 172;
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DB7D4"))) PPC_WEAK_FUNC(sub_836DB7D4);
PPC_FUNC_IMPL(__imp__sub_836DB7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DB7D8"))) PPC_WEAK_FUNC(sub_836DB7D8);
PPC_FUNC_IMPL(__imp__sub_836DB7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DB7E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,135
	ctx.r10.s64 = 135;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836db820
	if (!cr6.lt) goto loc_836DB820;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836DB820;
	sub_82E745E0(ctx, base);
loc_836DB820:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,19012
	ctx.r27.s64 = ctx.r11.s64 + 19012;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DB868;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DB874;
	sub_82E74C08(ctx, base);
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836db888
	if (cr6.lt) goto loc_836DB888;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836DB888;
	sub_82416268(ctx, base);
loc_836DB888:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x836db8a8
	if (cr6.lt) goto loc_836DB8A8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DB8A8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836DB8B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836db8b8
	if (!cr6.eq) goto loc_836DB8B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DB8DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DB8E8;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836db8fc
	if (cr6.lt) goto loc_836DB8FC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836DB8FC;
	sub_82416268(ctx, base);
loc_836DB8FC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DB924;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DB930;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db944
	if (cr6.lt) goto loc_836DB944;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836DB944;
	sub_82416268(ctx, base);
loc_836DB944:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836DB95C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836DB978;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DB984;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836db998
	if (cr6.lt) goto loc_836DB998;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836DB998;
	sub_82416268(ctx, base);
loc_836DB998:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836db9b8
	if (cr6.lt) goto loc_836DB9B8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DB9B8:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_836DB9C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836db9c8
	if (!cr6.eq) goto loc_836DB9C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DB9EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DB9F8;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dba0c
	if (cr6.lt) goto loc_836DBA0C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836DBA0C;
	sub_82416268(ctx, base);
loc_836DBA0C:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DBA34;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DBA40;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dba54
	if (cr6.lt) goto loc_836DBA54;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836DBA54;
	sub_82416268(ctx, base);
loc_836DBA54:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836dba74
	if (cr6.lt) goto loc_836DBA74;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DBA74:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836DBA84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dba84
	if (!cr6.eq) goto loc_836DBA84;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DBAA8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DBAB4;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dbac8
	if (cr6.lt) goto loc_836DBAC8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836DBAC8;
	sub_82416268(ctx, base);
loc_836DBAC8:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DBAF0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DBAFC;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dbb10
	if (cr6.lt) goto loc_836DBB10;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836DBB10;
	sub_82416268(ctx, base);
loc_836DBB10:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836DBB28;
	sub_82E746C0(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x836DBB44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DBB50;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dbb64
	if (cr6.lt) goto loc_836DBB64;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836DBB64;
	sub_82416268(ctx, base);
loc_836DBB64:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x836dbb84
	if (cr6.lt) goto loc_836DBB84;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DBB84:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_836DBB94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dbb94
	if (!cr6.eq) goto loc_836DBB94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DBBB8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DBBC4;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dbbd8
	if (cr6.lt) goto loc_836DBBD8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836DBBD8;
	sub_82416268(ctx, base);
loc_836DBBD8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DBC00;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DBC0C;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dbc20
	if (cr6.lt) goto loc_836DBC20;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836DBC20;
	sub_82416268(ctx, base);
loc_836DBC20:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// addi r4,r28,204
	ctx.r4.s64 = ctx.r28.s64 + 204;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x836dbc40
	if (cr6.lt) goto loc_836DBC40;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DBC40:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_836DBC50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dbc50
	if (!cr6.eq) goto loc_836DBC50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DBC74;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DBC80;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dbc94
	if (cr6.lt) goto loc_836DBC94;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836DBC94;
	sub_82416268(ctx, base);
loc_836DBC94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DBCA0"))) PPC_WEAK_FUNC(sub_836DBCA0);
PPC_FUNC_IMPL(__imp__sub_836DBCA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836DBCA8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r26,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r26.u32);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x83691bb8
	ctx.lr = 0x836DBCD0;
	sub_83691BB8(ctx, base);
	// lwz r10,1032(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1032);
	// lwz r11,1036(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// bge cr6,0x836dd0b0
	if (!cr6.lt) goto loc_836DD0B0;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// li r21,15
	ctx.r21.s64 = 15;
	// li r23,4
	ctx.r23.s64 = 4;
	// ori r17,r8,1
	ctx.r17.u64 = ctx.r8.u64 | 1;
	// addi r14,r11,19296
	ctx.r14.s64 = ctx.r11.s64 + 19296;
	// addi r18,r10,8980
	ctx.r18.s64 = ctx.r10.s64 + 8980;
	// addi r20,r9,26164
	ctx.r20.s64 = ctx.r9.s64 + 26164;
loc_836DBD1C:
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// addi r11,r1,1472
	ctx.r11.s64 = ctx.r1.s64 + 1472;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1480(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1480);
	// lwz r4,1484(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1484);
	// bl 0x82472fc0
	ctx.lr = 0x836DBD4C;
	sub_82472FC0(ctx, base);
	// addi r6,r14,-256
	ctx.r6.s64 = ctx.r14.s64 + -256;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836DBD64;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dbdfc
	if (!cr6.eq) goto loc_836DBDFC;
	// stb r26,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r26.u8);
	// addi r11,r1,1408
	ctx.r11.s64 = ctx.r1.s64 + 1408;
	// stw r21,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r21.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r26,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r26.u32);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1420(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1420);
	// lwz r5,1416(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1416);
	// bl 0x82472fc0
	ctx.lr = 0x836DBDA0;
	sub_82472FC0(ctx, base);
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dbdb4
	if (!cr6.lt) goto loc_836DBDB4;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
loc_836DBDB4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DBDB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dbdb8
	if (!cr6.eq) goto loc_836DBDB8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,20
	ctx.r3.s64 = ctx.r16.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DBDDC;
	sub_824208C8(ctx, base);
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dbdf0
	if (cr6.lt) goto loc_836DBDF0;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x836DBDF0;
	sub_82416268(ctx, base);
loc_836DBDF0:
	// stw r21,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r21.u32);
	// stw r26,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r26.u32);
	// stb r26,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r26.u8);
loc_836DBDFC:
	// addi r6,r14,-248
	ctx.r6.s64 = ctx.r14.s64 + -248;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836DBE14;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dbe54
	if (!cr6.eq) goto loc_836DBE54;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r10,r1,1504
	ctx.r10.s64 = ctx.r1.s64 + 1504;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1504(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1504);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836dbe4c
	if (!cr6.eq) goto loc_836DBE4C;
	// ld r11,1512(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1512);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dbe50
	goto loc_836DBE50;
loc_836DBE4C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_836DBE50:
	// stw r11,48(r16)
	PPC_STORE_U32(ctx.r16.u32 + 48, ctx.r11.u32);
loc_836DBE54:
	// addi r6,r14,-240
	ctx.r6.s64 = ctx.r14.s64 + -240;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836DBE6C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dbf04
	if (!cr6.eq) goto loc_836DBF04;
	// stw r21,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r21.u32);
	// addi r11,r1,1440
	ctx.r11.s64 = ctx.r1.s64 + 1440;
	// stw r26,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r26.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stb r26,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r26.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1452);
	// lwz r5,1448(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1448);
	// bl 0x82472fc0
	ctx.lr = 0x836DBEA8;
	sub_82472FC0(ctx, base);
	// lwz r7,484(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dbebc
	if (!cr6.lt) goto loc_836DBEBC;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
loc_836DBEBC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DBEC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dbec0
	if (!cr6.eq) goto loc_836DBEC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,116
	ctx.r3.s64 = ctx.r16.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DBEE4;
	sub_824208C8(ctx, base);
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dbef8
	if (cr6.lt) goto loc_836DBEF8;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82416268
	ctx.lr = 0x836DBEF8;
	sub_82416268(ctx, base);
loc_836DBEF8:
	// stw r21,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r21.u32);
	// stw r26,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r26.u32);
	// stb r26,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r26.u8);
loc_836DBF04:
	// addi r6,r14,-232
	ctx.r6.s64 = ctx.r14.s64 + -232;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836DBF1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dcfd0
	if (!cr6.eq) goto loc_836DCFD0;
	// stw r26,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r26.u32);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836DBF40;
	sub_83691BB8(ctx, base);
	// lwz r10,984(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 984);
	// lwz r11,988(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 988);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r28,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r28.u32);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x836dcfb4
	if (!cr6.lt) goto loc_836DCFB4;
loc_836DBF60:
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r11,r1,1296
	ctx.r11.s64 = ctx.r1.s64 + 1296;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// ld r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r15.u32 + 0);
	// ld r9,8(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1304(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1304);
	// lwz r4,1308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// bl 0x82472fc0
	ctx.lr = 0x836DBF90;
	sub_82472FC0(ctx, base);
	// addi r6,r14,-220
	ctx.r6.s64 = ctx.r14.s64 + -220;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836DBFA8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc040
	if (!cr6.eq) goto loc_836DC040;
	// stw r21,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r21.u32);
	// addi r11,r1,1328
	ctx.r11.s64 = ctx.r1.s64 + 1328;
	// stw r26,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r26.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stb r26,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r26.u8);
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// ld r9,16(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// ld r8,24(r15)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1340);
	// lwz r5,1336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1336);
	// bl 0x82472fc0
	ctx.lr = 0x836DBFE4;
	sub_82472FC0(ctx, base);
	// lwz r7,612(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dbff8
	if (!cr6.lt) goto loc_836DBFF8;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
loc_836DBFF8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DBFFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dbffc
	if (!cr6.eq) goto loc_836DBFFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,152
	ctx.r3.s64 = ctx.r16.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DC020;
	sub_824208C8(ctx, base);
	// lwz r10,612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dc034
	if (cr6.lt) goto loc_836DC034;
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x82416268
	ctx.lr = 0x836DC034;
	sub_82416268(ctx, base);
loc_836DC034:
	// stw r21,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r21.u32);
	// stw r26,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r26.u32);
	// stb r26,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r26.u8);
loc_836DC040:
	// addi r6,r14,-212
	ctx.r6.s64 = ctx.r14.s64 + -212;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836DC058;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc098
	if (!cr6.eq) goto loc_836DC098;
	// ld r11,16(r15)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// addi r10,r1,1360
	ctx.r10.s64 = ctx.r1.s64 + 1360;
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// addi r8,r15,16
	ctx.r8.s64 = ctx.r15.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1360(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1360);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836dc090
	if (!cr6.eq) goto loc_836DC090;
	// ld r11,1368(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1368);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dc094
	goto loc_836DC094;
loc_836DC090:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_836DC094:
	// stw r11,180(r16)
	PPC_STORE_U32(ctx.r16.u32 + 180, ctx.r11.u32);
loc_836DC098:
	// addi r6,r14,-208
	ctx.r6.s64 = ctx.r14.s64 + -208;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836DC0B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc7b4
	if (!cr6.eq) goto loc_836DC7B4;
	// stw r26,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r26.u32);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// lwz r5,24(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24);
	// lwz r4,28(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836DC0D4;
	sub_83691BB8(ctx, base);
	// lwz r10,1064(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// lwz r11,1068(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836dc798
	if (!cr6.lt) goto loc_836DC798;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r22,r11,28
	ctx.r22.s64 = ctx.r11.s64 + 28;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
loc_836DC100:
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// addi r11,r1,1392
	ctx.r11.s64 = ctx.r1.s64 + 1392;
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
	// addi r10,r22,-28
	ctx.r10.s64 = ctx.r22.s64 + -28;
	// ld r9,-28(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + -28);
	// ld r8,-20(r22)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r22.u32 + -20);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1404);
	// lwz r5,1400(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1400);
	// bl 0x82472fc0
	ctx.lr = 0x836DC134;
	sub_82472FC0(ctx, base);
	// addi r6,r14,-200
	ctx.r6.s64 = ctx.r14.s64 + -200;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827a8810
	ctx.lr = 0x836DC14C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc498
	if (!cr6.eq) goto loc_836DC498;
	// stw r26,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r26.u32);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// lwz r5,-4(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x83691bb8
	ctx.lr = 0x836DC170;
	sub_83691BB8(ctx, base);
	// lwz r10,952(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// lwz r11,956(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 956);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836dc47c
	if (!cr6.lt) goto loc_836DC47C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
loc_836DC19C:
	// stw r21,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r21.u32);
	// addi r11,r1,1424
	ctx.r11.s64 = ctx.r1.s64 + 1424;
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
	// addi r10,r25,-16
	ctx.r10.s64 = ctx.r25.s64 + -16;
	// ld r9,-16(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + -16);
	// ld r8,-8(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1436(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1436);
	// lwz r5,1432(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1432);
	// bl 0x82472fc0
	ctx.lr = 0x836DC1D0;
	sub_82472FC0(ctx, base);
	// addi r6,r14,-192
	ctx.r6.s64 = ctx.r14.s64 + -192;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x836DC1E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc27c
	if (!cr6.eq) goto loc_836DC27C;
	// stw r21,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r21.u32);
	// addi r11,r1,1456
	ctx.r11.s64 = ctx.r1.s64 + 1456;
	// stw r26,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r26.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stb r26,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r26.u8);
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1464(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1464);
	// lwz r4,1468(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// bl 0x82472fc0
	ctx.lr = 0x836DC220;
	sub_82472FC0(ctx, base);
	// lwz r8,420(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836dc234
	if (!cr6.lt) goto loc_836DC234;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
loc_836DC234:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DC238:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dc238
	if (!cr6.eq) goto loc_836DC238;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,184
	ctx.r3.s64 = ctx.r16.s64 + 184;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DC25C;
	sub_824208C8(ctx, base);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dc270
	if (cr6.lt) goto loc_836DC270;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x836DC270;
	sub_82416268(ctx, base);
loc_836DC270:
	// stw r21,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r21.u32);
	// stw r26,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r26.u32);
	// stb r26,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r26.u8);
loc_836DC27C:
	// addi r6,r14,-184
	ctx.r6.s64 = ctx.r14.s64 + -184;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x836DC294;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc2e4
	if (!cr6.eq) goto loc_836DC2E4;
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836dc2c8
	if (!cr6.eq) goto loc_836DC2C8;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dc2e0
	goto loc_836DC2E0;
loc_836DC2C8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836dc2dc
	if (!cr6.eq) goto loc_836DC2DC;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836dc2e0
	goto loc_836DC2E0;
loc_836DC2DC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_836DC2E0:
	// stw r11,212(r16)
	PPC_STORE_U32(ctx.r16.u32 + 212, ctx.r11.u32);
loc_836DC2E4:
	// addi r6,r14,-176
	ctx.r6.s64 = ctx.r14.s64 + -176;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x836DC2FC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc450
	if (!cr6.eq) goto loc_836DC450;
	// addi r31,r16,216
	ctx.r31.s64 = ctx.r16.s64 + 216;
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// stw r23,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r23.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r23,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r23.u32);
	// stw r30,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r30.u32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stw r29,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836DC334;
	sub_8247B7D8(ctx, base);
	// lwz r3,224(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 224);
	// stw r26,216(r16)
	PPC_STORE_U32(ctx.r16.u32 + 216, ctx.r26.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836dc354
	if (cr6.eq) goto loc_836DC354;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x8247b268
	ctx.lr = 0x836DC34C;
	sub_8247B268(ctx, base);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_836DC354:
	// stw r18,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r18.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x836dc44c
	if (!cr6.lt) goto loc_836DC44C;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_836DC378:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1088(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836dc3a4
	if (!cr6.eq) goto loc_836DC3A4;
	// ld r11,1096(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1096);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dc3bc
	goto loc_836DC3BC;
loc_836DC3A4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836dc3b8
	if (!cr6.eq) goto loc_836DC3B8;
	// ld r11,1096(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1096);
	// extsw r29,r11
	ctx.r29.s64 = ctx.r11.s32;
	// b 0x836dc3bc
	goto loc_836DC3BC;
loc_836DC3B8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_836DC3BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836dc41c
	if (cr6.lt) goto loc_836DC41C;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836dc40c
	if (!cr6.gt) goto loc_836DC40C;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r31.u32);
	// stw r30,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r30.u32);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r11,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r11.u32);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stw r23,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r23.u32);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// stw r23,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r23.u32);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// bl 0x8247b270
	ctx.lr = 0x836DC404;
	sub_8247B270(ctx, base);
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// b 0x836dc410
	goto loc_836DC410;
loc_836DC40C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836DC410:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836dc440
	if (cr6.eq) goto loc_836DC440;
loc_836DC41C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836dc434
	if (cr0.eq) goto loc_836DC434;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_836DC434:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836DC440:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x836dc378
	if (cr6.lt) goto loc_836DC378;
loc_836DC44C:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_836DC450:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dc464
	if (cr6.lt) goto loc_836DC464;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836DC464;
	sub_82416268(ctx, base);
loc_836DC464:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r21,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r21.u32);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
	// bne 0x836dc19c
	if (!cr0.eq) goto loc_836DC19C;
loc_836DC47C:
	// lwz r31,960(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836dc498
	if (cr6.eq) goto loc_836DC498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DC490;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DC498;
	sub_82416268(ctx, base);
loc_836DC498:
	// addi r6,r14,-168
	ctx.r6.s64 = ctx.r14.s64 + -168;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827a8810
	ctx.lr = 0x836DC4B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc600
	if (!cr6.eq) goto loc_836DC600;
	// addi r31,r16,232
	ctx.r31.s64 = ctx.r16.s64 + 232;
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// stw r23,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r23.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r23,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r23.u32);
	// stw r30,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r30.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// stw r29,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836DC4E8;
	sub_8247B7D8(ctx, base);
	// lwz r3,240(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 240);
	// stw r26,232(r16)
	PPC_STORE_U32(ctx.r16.u32 + 232, ctx.r26.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836dc508
	if (cr6.eq) goto loc_836DC508;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x8247b268
	ctx.lr = 0x836DC500;
	sub_8247B268(ctx, base);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_836DC508:
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// lwz r11,-4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bge cr6,0x836dc5fc
	if (!cr6.lt) goto loc_836DC5FC;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_836DC528:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r1,1136
	ctx.r10.s64 = ctx.r1.s64 + 1136;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836dc554
	if (!cr6.eq) goto loc_836DC554;
	// ld r11,1144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1144);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dc56c
	goto loc_836DC56C;
loc_836DC554:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836dc568
	if (!cr6.eq) goto loc_836DC568;
	// ld r11,1144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1144);
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// b 0x836dc56c
	goto loc_836DC56C;
loc_836DC568:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_836DC56C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836dc5cc
	if (cr6.lt) goto loc_836DC5CC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836dc5bc
	if (!cr6.gt) goto loc_836DC5BC;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r31.u32);
	// stw r30,888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 888, ctx.r30.u32);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// stw r11,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r11.u32);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stw r23,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r23.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// stw r23,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r23.u32);
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// bl 0x8247b270
	ctx.lr = 0x836DC5B4;
	sub_8247B270(ctx, base);
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// b 0x836dc5c0
	goto loc_836DC5C0;
loc_836DC5BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836DC5C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836dc5f0
	if (cr6.eq) goto loc_836DC5F0;
loc_836DC5CC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836dc5e4
	if (cr0.eq) goto loc_836DC5E4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_836DC5E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836DC5F0:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x836dc528
	if (cr6.lt) goto loc_836DC528;
loc_836DC5FC:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_836DC600:
	// addi r6,r14,-164
	ctx.r6.s64 = ctx.r14.s64 + -164;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827a8810
	ctx.lr = 0x836DC618;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc768
	if (!cr6.eq) goto loc_836DC768;
	// addi r31,r16,248
	ctx.r31.s64 = ctx.r16.s64 + 248;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// stw r23,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r23.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r23,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r23.u32);
	// stw r30,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r30.u32);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// stw r29,920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 920, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836DC650;
	sub_8247B7D8(ctx, base);
	// lwz r3,256(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 256);
	// stw r26,248(r16)
	PPC_STORE_U32(ctx.r16.u32 + 248, ctx.r26.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836dc670
	if (cr6.eq) goto loc_836DC670;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x8247b268
	ctx.lr = 0x836DC668;
	sub_8247B268(ctx, base);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_836DC670:
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,-4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bge cr6,0x836dc764
	if (!cr6.lt) goto loc_836DC764;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_836DC690:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836dc6bc
	if (!cr6.eq) goto loc_836DC6BC;
	// ld r11,1176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1176);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dc6d4
	goto loc_836DC6D4;
loc_836DC6BC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836dc6d0
	if (!cr6.eq) goto loc_836DC6D0;
	// ld r11,1176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1176);
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// b 0x836dc6d4
	goto loc_836DC6D4;
loc_836DC6D0:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_836DC6D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836dc734
	if (cr6.lt) goto loc_836DC734;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836dc724
	if (!cr6.gt) goto loc_836DC724;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r31.u32);
	// stw r30,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r30.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r11,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r11.u32);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stw r23,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r23.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r23,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r23.u32);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// bl 0x8247b270
	ctx.lr = 0x836DC71C;
	sub_8247B270(ctx, base);
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// b 0x836dc728
	goto loc_836DC728;
loc_836DC724:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836DC728:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836dc758
	if (cr6.eq) goto loc_836DC758;
loc_836DC734:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836dc74c
	if (cr0.eq) goto loc_836DC74C;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_836DC74C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836DC758:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x836dc690
	if (cr6.lt) goto loc_836DC690;
loc_836DC764:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_836DC768:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dc77c
	if (cr6.lt) goto loc_836DC77C;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836DC77C;
	sub_82416268(ctx, base);
loc_836DC77C:
	// addic. r19,r19,-1
	xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
	// bne 0x836dc100
	if (!cr0.eq) goto loc_836DC100;
	// lwz r28,252(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
loc_836DC798:
	// lwz r31,1072(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836dc7b4
	if (cr6.eq) goto loc_836DC7B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DC7AC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DC7B4;
	sub_82416268(ctx, base);
loc_836DC7B4:
	// addi r6,r14,-152
	ctx.r6.s64 = ctx.r14.s64 + -152;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836DC7CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc804
	if (!cr6.eq) goto loc_836DC804;
	// ld r11,16(r15)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// addi r10,r1,1488
	ctx.r10.s64 = ctx.r1.s64 + 1488;
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// addi r8,r15,16
	ctx.r8.s64 = ctx.r15.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1488(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1488);
	// ld r11,1496(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1496);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x836dc800
	if (cr6.eq) goto loc_836DC800;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_836DC800:
	// std r11,264(r16)
	PPC_STORE_U64(ctx.r16.u32 + 264, ctx.r11.u64);
loc_836DC804:
	// addi r6,r14,-144
	ctx.r6.s64 = ctx.r14.s64 + -144;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836DC81C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc8b4
	if (!cr6.eq) goto loc_836DC8B4;
	// stw r21,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r21.u32);
	// addi r11,r1,1520
	ctx.r11.s64 = ctx.r1.s64 + 1520;
	// stw r26,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r26.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stb r26,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r26.u8);
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// ld r8,16(r15)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1528(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1528);
	// lwz r4,1532(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1532);
	// bl 0x82472fc0
	ctx.lr = 0x836DC858;
	sub_82472FC0(ctx, base);
	// lwz r7,452(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dc86c
	if (!cr6.lt) goto loc_836DC86C;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
loc_836DC86C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DC870:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dc870
	if (!cr6.eq) goto loc_836DC870;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,272
	ctx.r3.s64 = ctx.r16.s64 + 272;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DC894;
	sub_824208C8(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dc8a8
	if (cr6.lt) goto loc_836DC8A8;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x836DC8A8;
	sub_82416268(ctx, base);
loc_836DC8A8:
	// stw r21,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r21.u32);
	// stw r26,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r26.u32);
	// stb r26,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r26.u8);
loc_836DC8B4:
	// addi r6,r14,-132
	ctx.r6.s64 = ctx.r14.s64 + -132;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836DC8CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dcadc
	if (!cr6.eq) goto loc_836DCADC;
	// stw r26,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r26.u32);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// lwz r5,24(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24);
	// lwz r4,28(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836DC8F0;
	sub_83691BB8(ctx, base);
	// lwz r11,1240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1240);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r31,1244(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1244);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x836dcac0
	if (!cr6.lt) goto loc_836DCAC0;
loc_836DC908:
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// addi r11,r1,1552
	ctx.r11.s64 = ctx.r1.s64 + 1552;
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r26,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r26.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1560(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1560);
	// lwz r4,1564(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// bl 0x82472fc0
	ctx.lr = 0x836DC938;
	sub_82472FC0(ctx, base);
	// addi r6,r14,-120
	ctx.r6.s64 = ctx.r14.s64 + -120;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x836DC950;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dc9a4
	if (!cr6.eq) goto loc_836DC9A4;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,1216
	ctx.r10.s64 = ctx.r1.s64 + 1216;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1216);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836dc988
	if (!cr6.eq) goto loc_836DC988;
	// ld r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dc9a0
	goto loc_836DC9A0;
loc_836DC988:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836dc99c
	if (!cr6.eq) goto loc_836DC99C;
	// ld r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836dc9a0
	goto loc_836DC9A0;
loc_836DC99C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_836DC9A0:
	// stw r11,300(r16)
	PPC_STORE_U32(ctx.r16.u32 + 300, ctx.r11.u32);
loc_836DC9A4:
	// addi r6,r14,-104
	ctx.r6.s64 = ctx.r14.s64 + -104;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x836DC9BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dca94
	if (!cr6.eq) goto loc_836DCA94;
	// stw r21,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r21.u32);
	// addi r11,r1,1584
	ctx.r11.s64 = ctx.r1.s64 + 1584;
	// stw r26,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r26.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stb r26,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r26.u8);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1596(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1596);
	// lwz r5,1592(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1592);
	// bl 0x82472fc0
	ctx.lr = 0x836DC9F8;
	sub_82472FC0(ctx, base);
	// lwz r7,516(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dca0c
	if (!cr6.lt) goto loc_836DCA0C;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
loc_836DCA0C:
	// stw r21,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r21.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r26.u32);
	// stb r26,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r26.u8);
loc_836DCA1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dca1c
	if (!cr6.eq) goto loc_836DCA1C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DCA40;
	sub_824208C8(ctx, base);
	// addi r5,r16,304
	ctx.r5.s64 = ctx.r16.s64 + 304;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// lwz r6,320(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 320);
	// addi r3,r16,-200
	ctx.r3.s64 = ctx.r16.s64 + -200;
	// bl 0x83354a28
	ctx.lr = 0x836DCA54;
	sub_83354A28(ctx, base);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dca68
	if (cr6.lt) goto loc_836DCA68;
	// lwz r3,688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x8386d088
	ctx.lr = 0x836DCA68;
	sub_8386D088(ctx, base);
loc_836DCA68:
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// stw r21,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r21.u32);
	// stw r26,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r26.u8);
	// blt cr6,0x836dca88
	if (cr6.lt) goto loc_836DCA88;
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82416268
	ctx.lr = 0x836DCA88;
	sub_82416268(ctx, base);
loc_836DCA88:
	// stw r21,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r21.u32);
	// stw r26,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r26.u32);
	// stb r26,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r26.u8);
loc_836DCA94:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dcaa8
	if (cr6.lt) goto loc_836DCAA8;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x836DCAA8;
	sub_82416268(ctx, base);
loc_836DCAA8:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r26,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r26.u8);
	// blt cr6,0x836dc908
	if (cr6.lt) goto loc_836DC908;
loc_836DCAC0:
	// lwz r31,1248(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836dcadc
	if (cr6.eq) goto loc_836DCADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DCAD4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DCADC;
	sub_82416268(ctx, base);
loc_836DCADC:
	// addi r6,r14,-96
	ctx.r6.s64 = ctx.r14.s64 + -96;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836DCAF4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dcd04
	if (!cr6.eq) goto loc_836DCD04;
	// stw r26,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r26.u32);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// lwz r5,24(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24);
	// lwz r4,28(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836DCB18;
	sub_83691BB8(ctx, base);
	// lwz r11,1112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1112);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r31,1116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1116);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x836dcce8
	if (!cr6.lt) goto loc_836DCCE8;
loc_836DCB30:
	// stw r21,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r21.u32);
	// addi r11,r1,1312
	ctx.r11.s64 = ctx.r1.s64 + 1312;
	// stw r26,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r26,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r26.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,1320(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1320);
	// lwz r4,1324(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	// bl 0x82472fc0
	ctx.lr = 0x836DCB60;
	sub_82472FC0(ctx, base);
	// addi r6,r14,-80
	ctx.r6.s64 = ctx.r14.s64 + -80;
	// lwz r5,320(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x827a8810
	ctx.lr = 0x836DCB78;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dcbcc
	if (!cr6.eq) goto loc_836DCBCC;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,1264
	ctx.r10.s64 = ctx.r1.s64 + 1264;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1264);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836dcbb0
	if (!cr6.eq) goto loc_836DCBB0;
	// ld r11,1272(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1272);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dcbc8
	goto loc_836DCBC8;
loc_836DCBB0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836dcbc4
	if (!cr6.eq) goto loc_836DCBC4;
	// ld r11,1272(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1272);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836dcbc8
	goto loc_836DCBC8;
loc_836DCBC4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_836DCBC8:
	// stw r11,324(r16)
	PPC_STORE_U32(ctx.r16.u32 + 324, ctx.r11.u32);
loc_836DCBCC:
	// addi r6,r14,-64
	ctx.r6.s64 = ctx.r14.s64 + -64;
	// lwz r5,320(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x827a8810
	ctx.lr = 0x836DCBE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dccbc
	if (!cr6.eq) goto loc_836DCCBC;
	// stw r21,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r21.u32);
	// addi r11,r1,1568
	ctx.r11.s64 = ctx.r1.s64 + 1568;
	// stw r26,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r26.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stb r26,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r26.u8);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1580(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// lwz r5,1576(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1576);
	// bl 0x82472fc0
	ctx.lr = 0x836DCC20;
	sub_82472FC0(ctx, base);
	// lwz r7,580(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dcc34
	if (!cr6.lt) goto loc_836DCC34;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
loc_836DCC34:
	// stw r21,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r21.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r26.u32);
	// stb r26,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r26.u8);
loc_836DCC44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dcc44
	if (!cr6.eq) goto loc_836DCC44;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DCC68;
	sub_824208C8(ctx, base);
	// addi r5,r16,328
	ctx.r5.s64 = ctx.r16.s64 + 328;
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// lwz r6,344(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 344);
	// addi r3,r16,-200
	ctx.r3.s64 = ctx.r16.s64 + -200;
	// bl 0x83354a28
	ctx.lr = 0x836DCC7C;
	sub_83354A28(ctx, base);
	// lwz r10,740(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dcc90
	if (cr6.lt) goto loc_836DCC90;
	// lwz r3,720(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x8386d088
	ctx.lr = 0x836DCC90;
	sub_8386D088(ctx, base);
loc_836DCC90:
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// stw r21,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r21.u32);
	// stw r26,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r26.u8);
	// blt cr6,0x836dccb0
	if (cr6.lt) goto loc_836DCCB0;
	// lwz r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82416268
	ctx.lr = 0x836DCCB0;
	sub_82416268(ctx, base);
loc_836DCCB0:
	// stw r21,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r21.u32);
	// stw r26,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r26.u32);
	// stb r26,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r26.u8);
loc_836DCCBC:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dccd0
	if (cr6.lt) goto loc_836DCCD0;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x836DCCD0;
	sub_82416268(ctx, base);
loc_836DCCD0:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r21,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r21.u32);
	// stw r26,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r26,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r26.u8);
	// blt cr6,0x836dcb30
	if (cr6.lt) goto loc_836DCB30;
loc_836DCCE8:
	// lwz r31,1120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836dcd04
	if (cr6.eq) goto loc_836DCD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DCCFC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DCD04;
	sub_82416268(ctx, base);
loc_836DCD04:
	// addi r6,r14,-56
	ctx.r6.s64 = ctx.r14.s64 + -56;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836DCD1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dcf2c
	if (!cr6.eq) goto loc_836DCF2C;
	// stw r26,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,1200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1200, ctx.r26.u32);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// lwz r5,24(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24);
	// lwz r4,28(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836DCD40;
	sub_83691BB8(ctx, base);
	// lwz r11,1192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1192);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r31,1196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1196);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x836dcf10
	if (!cr6.lt) goto loc_836DCF10;
loc_836DCD58:
	// stw r21,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r21.u32);
	// addi r11,r1,1344
	ctx.r11.s64 = ctx.r1.s64 + 1344;
	// stw r26,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r26.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r26,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r26.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1356);
	// lwz r5,1352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1352);
	// bl 0x82472fc0
	ctx.lr = 0x836DCD88;
	sub_82472FC0(ctx, base);
	// addi r6,r14,-40
	ctx.r6.s64 = ctx.r14.s64 + -40;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x827a8810
	ctx.lr = 0x836DCDA0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dcdf4
	if (!cr6.eq) goto loc_836DCDF4;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,1008
	ctx.r10.s64 = ctx.r1.s64 + 1008;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1008(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836dcdd8
	if (!cr6.eq) goto loc_836DCDD8;
	// ld r11,1016(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1016);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dcdf0
	goto loc_836DCDF0;
loc_836DCDD8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836dcdec
	if (!cr6.eq) goto loc_836DCDEC;
	// ld r11,1016(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1016);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836dcdf0
	goto loc_836DCDF0;
loc_836DCDEC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_836DCDF0:
	// stw r11,348(r16)
	PPC_STORE_U32(ctx.r16.u32 + 348, ctx.r11.u32);
loc_836DCDF4:
	// addi r6,r14,-24
	ctx.r6.s64 = ctx.r14.s64 + -24;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x827a8810
	ctx.lr = 0x836DCE0C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dcee4
	if (!cr6.eq) goto loc_836DCEE4;
	// stw r21,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r21.u32);
	// addi r11,r1,1280
	ctx.r11.s64 = ctx.r1.s64 + 1280;
	// stw r26,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r26.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stb r26,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r26.u8);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1292);
	// lwz r5,1288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1288);
	// bl 0x82472fc0
	ctx.lr = 0x836DCE48;
	sub_82472FC0(ctx, base);
	// lwz r7,644(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r4,624(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dce5c
	if (!cr6.lt) goto loc_836DCE5C;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
loc_836DCE5C:
	// stw r21,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r21.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r26.u32);
	// stb r26,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r26.u8);
loc_836DCE6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dce6c
	if (!cr6.eq) goto loc_836DCE6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DCE90;
	sub_824208C8(ctx, base);
	// addi r5,r16,352
	ctx.r5.s64 = ctx.r16.s64 + 352;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// lwz r6,368(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 368);
	// addi r3,r16,-200
	ctx.r3.s64 = ctx.r16.s64 + -200;
	// bl 0x83354a28
	ctx.lr = 0x836DCEA4;
	sub_83354A28(ctx, base);
	// lwz r10,676(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dceb8
	if (cr6.lt) goto loc_836DCEB8;
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x8386d088
	ctx.lr = 0x836DCEB8;
	sub_8386D088(ctx, base);
loc_836DCEB8:
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// stw r21,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r21.u32);
	// stw r26,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r26.u8);
	// blt cr6,0x836dced8
	if (cr6.lt) goto loc_836DCED8;
	// lwz r3,624(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x82416268
	ctx.lr = 0x836DCED8;
	sub_82416268(ctx, base);
loc_836DCED8:
	// stw r21,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r21.u32);
	// stw r26,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r26.u32);
	// stb r26,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r26.u8);
loc_836DCEE4:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dcef8
	if (cr6.lt) goto loc_836DCEF8;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x836DCEF8;
	sub_82416268(ctx, base);
loc_836DCEF8:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r21,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r21.u32);
	// stw r26,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r26.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r26,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r26.u8);
	// blt cr6,0x836dcd58
	if (cr6.lt) goto loc_836DCD58;
loc_836DCF10:
	// lwz r31,1200(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836dcf2c
	if (cr6.eq) goto loc_836DCF2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DCF24;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DCF2C;
	sub_82416268(ctx, base);
loc_836DCF2C:
	// addi r6,r14,-16
	ctx.r6.s64 = ctx.r14.s64 + -16;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836DCF44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dcf84
	if (!cr6.eq) goto loc_836DCF84;
	// ld r11,16(r15)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// addi r10,r1,1376
	ctx.r10.s64 = ctx.r1.s64 + 1376;
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// addi r8,r15,16
	ctx.r8.s64 = ctx.r15.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1376(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1376);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836dcf7c
	if (!cr6.eq) goto loc_836DCF7C;
	// ld r11,1384(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1384);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dcf80
	goto loc_836DCF80;
loc_836DCF7C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_836DCF80:
	// stw r11,372(r16)
	PPC_STORE_U32(ctx.r16.u32 + 372, ctx.r11.u32);
loc_836DCF84:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dcf98
	if (cr6.lt) goto loc_836DCF98;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836DCF98;
	sub_82416268(ctx, base);
loc_836DCF98:
	// addi r15,r15,32
	ctx.r15.s64 = ctx.r15.s64 + 32;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// cmplw cr6,r15,r28
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r28.u32, xer);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// blt cr6,0x836dbf60
	if (cr6.lt) goto loc_836DBF60;
	// lwz r30,256(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
loc_836DCFB4:
	// lwz r31,992(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836dcfd0
	if (cr6.eq) goto loc_836DCFD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DCFC8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DCFD0;
	sub_82416268(ctx, base);
loc_836DCFD0:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836DCFE8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dd080
	if (!cr6.eq) goto loc_836DD080;
	// stw r21,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r21.u32);
	// addi r11,r1,1536
	ctx.r11.s64 = ctx.r1.s64 + 1536;
	// stw r26,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r26.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stb r26,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r26.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1544(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1544);
	// lwz r4,1548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// bl 0x82472fc0
	ctx.lr = 0x836DD024;
	sub_82472FC0(ctx, base);
	// lwz r7,548(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dd038
	if (!cr6.lt) goto loc_836DD038;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
loc_836DD038:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DD03C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dd03c
	if (!cr6.eq) goto loc_836DD03C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r16,376
	ctx.r3.s64 = ctx.r16.s64 + 376;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DD060;
	sub_824208C8(ctx, base);
	// lwz r10,548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dd074
	if (cr6.lt) goto loc_836DD074;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x82416268
	ctx.lr = 0x836DD074;
	sub_82416268(ctx, base);
loc_836DD074:
	// stw r21,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r21.u32);
	// stw r26,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r26.u32);
	// stb r26,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r26.u8);
loc_836DD080:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dd094
	if (cr6.lt) goto loc_836DD094;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836DD094;
	sub_82416268(ctx, base);
loc_836DD094:
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// blt cr6,0x836dbd1c
	if (cr6.lt) goto loc_836DBD1C;
loc_836DD0B0:
	// lwz r31,1040(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836dd0cc
	if (cr6.eq) goto loc_836DD0CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DD0C4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DD0CC;
	sub_82416268(ctx, base);
loc_836DD0CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DD0D8"))) PPC_WEAK_FUNC(sub_836DD0D8);
PPC_FUNC_IMPL(__imp__sub_836DD0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836DD0E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836DD0EC;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,18904
	ctx.r29.s64 = ctx.r11.s64 + 18904;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836DD104;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,19408
	ctx.r7.s64 = ctx.r10.s64 + 19408;
	// addi r5,r8,19392
	ctx.r5.s64 = ctx.r8.s64 + 19392;
	// addi r6,r9,19396
	ctx.r6.s64 = ctx.r9.s64 + 19396;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DD14C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DD168;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x824208c8
	ctx.lr = 0x836DD188;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DD1A0"))) PPC_WEAK_FUNC(sub_836DD1A0);
PPC_FUNC_IMPL(__imp__sub_836DD1A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836dd290
	sub_836DD290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DD1A8"))) PPC_WEAK_FUNC(sub_836DD1A8);
PPC_FUNC_IMPL(__imp__sub_836DD1A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836dd290
	sub_836DD290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DD1B0"))) PPC_WEAK_FUNC(sub_836DD1B0);
PPC_FUNC_IMPL(__imp__sub_836DD1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DD1B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,19408
	ctx.r8.s64 = ctx.r11.s64 + 19408;
	// addi r7,r10,19396
	ctx.r7.s64 = ctx.r10.s64 + 19396;
	// addi r6,r9,19392
	ctx.r6.s64 = ctx.r9.s64 + 19392;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,404
	ctx.r30.s64 = ctx.r3.s64 + 404;
	// lwz r5,424(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836dd1fc
	if (cr6.lt) goto loc_836DD1FC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DD1FC;
	sub_8386D088(ctx, base);
loc_836DD1FC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,376
	ctx.r29.s64 = ctx.r28.s64 + 376;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dd228
	if (cr6.lt) goto loc_836DD228;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DD228;
	sub_8386D088(ctx, base);
loc_836DD228:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,344
	ctx.r30.s64 = ctx.r28.s64 + 344;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dd24c
	if (cr6.lt) goto loc_836DD24C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DD24C;
	sub_8386D088(ctx, base);
loc_836DD24C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dd270
	if (cr6.lt) goto loc_836DD270;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DD270;
	sub_8386D088(ctx, base);
loc_836DD270:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836DD284;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DD28C"))) PPC_WEAK_FUNC(sub_836DD28C);
PPC_FUNC_IMPL(__imp__sub_836DD28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DD290"))) PPC_WEAK_FUNC(sub_836DD290);
PPC_FUNC_IMPL(__imp__sub_836DD290) {
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
	// bl 0x836dd1b0
	ctx.lr = 0x836DD2B0;
	sub_836DD1B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836dd2d0
	if (cr6.eq) goto loc_836DD2D0;
	// bl 0x82595188
	ctx.lr = 0x836DD2C0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DD2D0;
	sub_825952B8(ctx, base);
loc_836DD2D0:
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

__attribute__((alias("__imp__sub_836DD2EC"))) PPC_WEAK_FUNC(sub_836DD2EC);
PPC_FUNC_IMPL(__imp__sub_836DD2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DD2F0"))) PPC_WEAK_FUNC(sub_836DD2F0);
PPC_FUNC_IMPL(__imp__sub_836DD2F0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836DD30C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,18904
	ctx.r30.s64 = ctx.r11.s64 + 18904;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x836DD324;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r6,r10,19444
	ctx.r6.s64 = ctx.r10.s64 + 19444;
	// addi r5,r9,19432
	ctx.r5.s64 = ctx.r9.s64 + 19432;
	// addi r4,r8,19428
	ctx.r4.s64 = ctx.r8.s64 + 19428;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r7,19424
	ctx.r11.s64 = ctx.r7.s64 + 19424;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// bl 0x836db708
	ctx.lr = 0x836DD35C;
	sub_836DB708(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// stb r11,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r11.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DD380;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_836DD39C"))) PPC_WEAK_FUNC(sub_836DD39C);
PPC_FUNC_IMPL(__imp__sub_836DD39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DD3A0"))) PPC_WEAK_FUNC(sub_836DD3A0);
PPC_FUNC_IMPL(__imp__sub_836DD3A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836dd458
	sub_836DD458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DD3A8"))) PPC_WEAK_FUNC(sub_836DD3A8);
PPC_FUNC_IMPL(__imp__sub_836DD3A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836dd458
	sub_836DD458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DD3B0"))) PPC_WEAK_FUNC(sub_836DD3B0);
PPC_FUNC_IMPL(__imp__sub_836DD3B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836dd458
	sub_836DD458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DD3B8"))) PPC_WEAK_FUNC(sub_836DD3B8);
PPC_FUNC_IMPL(__imp__sub_836DD3B8) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r11,19444
	ctx.r7.s64 = ctx.r11.s64 + 19444;
	// addi r6,r10,19432
	ctx.r6.s64 = ctx.r10.s64 + 19432;
	// addi r5,r9,19428
	ctx.r5.s64 = ctx.r9.s64 + 19428;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,19424
	ctx.r4.s64 = ctx.r8.s64 + 19424;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r30,r3,576
	ctx.r30.s64 = ctx.r3.s64 + 576;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x836dd418
	if (cr6.lt) goto loc_836DD418;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DD418;
	sub_8386D088(ctx, base);
loc_836DD418:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x835fe420
	ctx.lr = 0x836DD434;
	sub_835FE420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836DD43C;
	sub_82EAF978(ctx, base);
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

__attribute__((alias("__imp__sub_836DD454"))) PPC_WEAK_FUNC(sub_836DD454);
PPC_FUNC_IMPL(__imp__sub_836DD454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DD458"))) PPC_WEAK_FUNC(sub_836DD458);
PPC_FUNC_IMPL(__imp__sub_836DD458) {
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
	// bl 0x836dd3b8
	ctx.lr = 0x836DD478;
	sub_836DD3B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836dd498
	if (cr6.eq) goto loc_836DD498;
	// bl 0x82595188
	ctx.lr = 0x836DD488;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DD498;
	sub_825952B8(ctx, base);
loc_836DD498:
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

__attribute__((alias("__imp__sub_836DD4B4"))) PPC_WEAK_FUNC(sub_836DD4B4);
PPC_FUNC_IMPL(__imp__sub_836DD4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DD4B8"))) PPC_WEAK_FUNC(sub_836DD4B8);
PPC_FUNC_IMPL(__imp__sub_836DD4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DD4C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,134
	ctx.r10.s64 = 134;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836dd500
	if (!cr6.lt) goto loc_836DD500;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836DD500;
	sub_82E745E0(ctx, base);
loc_836DD500:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,19616
	ctx.r27.s64 = ctx.r11.s64 + 19616;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DD548;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD554;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836dd568
	if (cr6.lt) goto loc_836DD568;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836DD568;
	sub_82416268(ctx, base);
loc_836DD568:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836dd588
	if (cr6.lt) goto loc_836DD588;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DD588:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836DD598:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dd598
	if (!cr6.eq) goto loc_836DD598;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DD5BC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD5C8;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dd5dc
	if (cr6.lt) goto loc_836DD5DC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836DD5DC;
	sub_82416268(ctx, base);
loc_836DD5DC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DD604;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD610;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dd624
	if (cr6.lt) goto loc_836DD624;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836DD624;
	sub_82416268(ctx, base);
loc_836DD624:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836DD63C;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x836DD658;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD664;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dd678
	if (cr6.lt) goto loc_836DD678;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836DD678;
	sub_82416268(ctx, base);
loc_836DD678:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x836dd698
	if (cr6.lt) goto loc_836DD698;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DD698:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_836DD6A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dd6a8
	if (!cr6.eq) goto loc_836DD6A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DD6CC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD6D8;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dd6ec
	if (cr6.lt) goto loc_836DD6EC;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836DD6EC;
	sub_82416268(ctx, base);
loc_836DD6EC:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DD714;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD720;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dd734
	if (cr6.lt) goto loc_836DD734;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836DD734;
	sub_82416268(ctx, base);
loc_836DD734:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x836dd754
	if (cr6.lt) goto loc_836DD754;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DD754:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_836DD764:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dd764
	if (!cr6.eq) goto loc_836DD764;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DD788;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD794;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dd7a8
	if (cr6.lt) goto loc_836DD7A8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836DD7A8;
	sub_82416268(ctx, base);
loc_836DD7A8:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DD7D0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD7DC;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dd7f0
	if (cr6.lt) goto loc_836DD7F0;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836DD7F0;
	sub_82416268(ctx, base);
loc_836DD7F0:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836DD808;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x836DD824;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD830;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dd844
	if (cr6.lt) goto loc_836DD844;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836DD844;
	sub_82416268(ctx, base);
loc_836DD844:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x836dd864
	if (cr6.lt) goto loc_836DD864;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DD864:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_836DD874:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dd874
	if (!cr6.eq) goto loc_836DD874;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DD898;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DD8A4;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dd8b8
	if (cr6.lt) goto loc_836DD8B8;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836DD8B8;
	sub_82416268(ctx, base);
loc_836DD8B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DD8C4"))) PPC_WEAK_FUNC(sub_836DD8C4);
PPC_FUNC_IMPL(__imp__sub_836DD8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DD8C8"))) PPC_WEAK_FUNC(sub_836DD8C8);
PPC_FUNC_IMPL(__imp__sub_836DD8C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836DD8D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83691bb8
	ctx.lr = 0x836DD8F8;
	sub_83691BB8(ctx, base);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ddc7c
	if (!cr6.lt) goto loc_836DDC7C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,19668
	ctx.r26.s64 = ctx.r11.s64 + 19668;
loc_836DD930:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// ld r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82472fc0
	ctx.lr = 0x836DD964;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-44
	ctx.r6.s64 = ctx.r26.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DD97C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dda10
	if (!cr6.eq) goto loc_836DDA10;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// bl 0x82472fc0
	ctx.lr = 0x836DD9B4;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836dd9c8
	if (!cr6.lt) goto loc_836DD9C8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836DD9C8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DD9CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dd9cc
	if (!cr6.eq) goto loc_836DD9CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DD9F0;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dda04
	if (cr6.lt) goto loc_836DDA04;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836DDA04;
	sub_82416268(ctx, base);
loc_836DDA04:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_836DDA10:
	// addi r6,r26,-36
	ctx.r6.s64 = ctx.r26.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DDA28;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dda64
	if (!cr6.eq) goto loc_836DDA64;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836dda5c
	if (!cr6.eq) goto loc_836DDA5C;
	// ld r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dda60
	goto loc_836DDA60;
loc_836DDA5C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836DDA60:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836DDA64:
	// addi r6,r26,-28
	ctx.r6.s64 = ctx.r26.s64 + -28;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DDA7C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ddb10
	if (!cr6.eq) goto loc_836DDB10;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82472fc0
	ctx.lr = 0x836DDAB4;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ddac8
	if (!cr6.lt) goto loc_836DDAC8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836DDAC8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DDACC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ddacc
	if (!cr6.eq) goto loc_836DDACC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DDAF0;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ddb04
	if (cr6.lt) goto loc_836DDB04;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836DDB04;
	sub_82416268(ctx, base);
loc_836DDB04:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_836DDB10:
	// addi r6,r26,-20
	ctx.r6.s64 = ctx.r26.s64 + -20;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DDB28;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ddb64
	if (!cr6.eq) goto loc_836DDB64;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ddb5c
	if (!cr6.eq) goto loc_836DDB5C;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ddb60
	goto loc_836DDB60;
loc_836DDB5C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836DDB60:
	// stw r11,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r11.u32);
loc_836DDB64:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DDB7C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ddc50
	if (!cr6.eq) goto loc_836DDC50;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x836DDBB4;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ddbc8
	if (!cr6.lt) goto loc_836DDBC8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_836DDBC8:
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
loc_836DDBD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ddbd8
	if (!cr6.eq) goto loc_836DDBD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DDBFC;
	sub_824208C8(ctx, base);
	// addi r5,r28,152
	ctx.r5.s64 = ctx.r28.s64 + 152;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r6,2200(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2200);
	// addi r3,r28,-200
	ctx.r3.s64 = ctx.r28.s64 + -200;
	// bl 0x83354a28
	ctx.lr = 0x836DDC10;
	sub_83354A28(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ddc24
	if (cr6.lt) goto loc_836DDC24;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8386d088
	ctx.lr = 0x836DDC24;
	sub_8386D088(ctx, base);
loc_836DDC24:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x836ddc44
	if (cr6.lt) goto loc_836DDC44;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x836DDC44;
	sub_82416268(ctx, base);
loc_836DDC44:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_836DDC50:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ddc64
	if (cr6.lt) goto loc_836DDC64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836DDC64;
	sub_82416268(ctx, base);
loc_836DDC64:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne 0x836dd930
	if (!cr0.eq) goto loc_836DD930;
loc_836DDC7C:
	// lwz r31,256(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836ddc98
	if (cr6.eq) goto loc_836DDC98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DDC90;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DDC98;
	sub_82416268(ctx, base);
loc_836DDC98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DDCA4"))) PPC_WEAK_FUNC(sub_836DDCA4);
PPC_FUNC_IMPL(__imp__sub_836DDCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DDCA8"))) PPC_WEAK_FUNC(sub_836DDCA8);
PPC_FUNC_IMPL(__imp__sub_836DDCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836DDCB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836DDCBC;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,19512
	ctx.r29.s64 = ctx.r11.s64 + 19512;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836DDCD4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,19784
	ctx.r7.s64 = ctx.r10.s64 + 19784;
	// addi r5,r8,19768
	ctx.r5.s64 = ctx.r8.s64 + 19768;
	// addi r6,r9,19772
	ctx.r6.s64 = ctx.r9.s64 + 19772;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DDD1C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DDD38;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DDD58;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DDD64"))) PPC_WEAK_FUNC(sub_836DDD64);
PPC_FUNC_IMPL(__imp__sub_836DDD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DDD68"))) PPC_WEAK_FUNC(sub_836DDD68);
PPC_FUNC_IMPL(__imp__sub_836DDD68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836dde30
	sub_836DDE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DDD70"))) PPC_WEAK_FUNC(sub_836DDD70);
PPC_FUNC_IMPL(__imp__sub_836DDD70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836dde30
	sub_836DDE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DDD78"))) PPC_WEAK_FUNC(sub_836DDD78);
PPC_FUNC_IMPL(__imp__sub_836DDD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DDD80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,19784
	ctx.r8.s64 = ctx.r11.s64 + 19784;
	// addi r7,r10,19772
	ctx.r7.s64 = ctx.r10.s64 + 19772;
	// addi r6,r9,19768
	ctx.r6.s64 = ctx.r9.s64 + 19768;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836dddc4
	if (cr6.lt) goto loc_836DDDC4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DDDC4;
	sub_8386D088(ctx, base);
loc_836DDDC4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dddf0
	if (cr6.lt) goto loc_836DDDF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DDDF0;
	sub_8386D088(ctx, base);
loc_836DDDF0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dde14
	if (cr6.lt) goto loc_836DDE14;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DDE14;
	sub_8386D088(ctx, base);
loc_836DDE14:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836DDE28;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DDE30"))) PPC_WEAK_FUNC(sub_836DDE30);
PPC_FUNC_IMPL(__imp__sub_836DDE30) {
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
	// bl 0x836ddd78
	ctx.lr = 0x836DDE50;
	sub_836DDD78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836dde70
	if (cr6.eq) goto loc_836DDE70;
	// bl 0x82595188
	ctx.lr = 0x836DDE60;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DDE70;
	sub_825952B8(ctx, base);
loc_836DDE70:
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

__attribute__((alias("__imp__sub_836DDE8C"))) PPC_WEAK_FUNC(sub_836DDE8C);
PPC_FUNC_IMPL(__imp__sub_836DDE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DDE90"))) PPC_WEAK_FUNC(sub_836DDE90);
PPC_FUNC_IMPL(__imp__sub_836DDE90) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836DDEA8;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,19512
	ctx.r4.s64 = ctx.r11.s64 + 19512;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x824208c8
	ctx.lr = 0x836DDEBC;
	sub_824208C8(ctx, base);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r5,r9,19824
	ctx.r5.s64 = ctx.r9.s64 + 19824;
	// addi r4,r8,19820
	ctx.r4.s64 = ctx.r8.s64 + 19820;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,19804
	ctx.r6.s64 = ctx.r10.s64 + 19804;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r11,r7,19800
	ctx.r11.s64 = ctx.r7.s64 + 19800;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x836DDF04;
	sub_831CDCF0(ctx, base);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_836DDF24"))) PPC_WEAK_FUNC(sub_836DDF24);
PPC_FUNC_IMPL(__imp__sub_836DDF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DDF28"))) PPC_WEAK_FUNC(sub_836DDF28);
PPC_FUNC_IMPL(__imp__sub_836DDF28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836ddf40
	sub_836DDF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DDF30"))) PPC_WEAK_FUNC(sub_836DDF30);
PPC_FUNC_IMPL(__imp__sub_836DDF30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836ddf40
	sub_836DDF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DDF38"))) PPC_WEAK_FUNC(sub_836DDF38);
PPC_FUNC_IMPL(__imp__sub_836DDF38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836ddf40
	sub_836DDF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DDF40"))) PPC_WEAK_FUNC(sub_836DDF40);
PPC_FUNC_IMPL(__imp__sub_836DDF40) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,19804
	ctx.r7.s64 = ctx.r11.s64 + 19804;
	// addi r6,r10,19824
	ctx.r6.s64 = ctx.r10.s64 + 19824;
	// addi r5,r9,19820
	ctx.r5.s64 = ctx.r9.s64 + 19820;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,19800
	ctx.r4.s64 = ctx.r8.s64 + 19800;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836DDF90;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836ddfb0
	if (cr6.eq) goto loc_836DDFB0;
	// bl 0x82595188
	ctx.lr = 0x836DDFA0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DDFB0;
	sub_825952B8(ctx, base);
loc_836DDFB0:
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

__attribute__((alias("__imp__sub_836DDFCC"))) PPC_WEAK_FUNC(sub_836DDFCC);
PPC_FUNC_IMPL(__imp__sub_836DDFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DDFD0"))) PPC_WEAK_FUNC(sub_836DDFD0);
PPC_FUNC_IMPL(__imp__sub_836DDFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DDFD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,136
	ctx.r10.s64 = 136;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836de018
	if (!cr6.lt) goto loc_836DE018;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836DE018;
	sub_82E745E0(ctx, base);
loc_836DE018:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r28,r11,20020
	ctx.r28.s64 = ctx.r11.s64 + 20020;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DE060;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE06C;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836de080
	if (cr6.lt) goto loc_836DE080;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836DE080;
	sub_82416268(ctx, base);
loc_836DE080:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836de0a0
	if (cr6.lt) goto loc_836DE0A0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DE0A0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836DE0B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836de0b0
	if (!cr6.eq) goto loc_836DE0B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DE0D4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE0E0;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836de0f4
	if (cr6.lt) goto loc_836DE0F4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836DE0F4;
	sub_82416268(ctx, base);
loc_836DE0F4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r28,-56
	ctx.r4.s64 = ctx.r28.s64 + -56;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DE11C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE128;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de13c
	if (cr6.lt) goto loc_836DE13C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836DE13C;
	sub_82416268(ctx, base);
loc_836DE13C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836DE154;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836DE170;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE17C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de190
	if (cr6.lt) goto loc_836DE190;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836DE190;
	sub_82416268(ctx, base);
loc_836DE190:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836de1b0
	if (cr6.lt) goto loc_836DE1B0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DE1B0:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_836DE1C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836de1c0
	if (!cr6.eq) goto loc_836DE1C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DE1E4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE1F0;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836de204
	if (cr6.lt) goto loc_836DE204;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x836DE204;
	sub_82416268(ctx, base);
loc_836DE204:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DE22C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE238;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de24c
	if (cr6.lt) goto loc_836DE24C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836DE24C;
	sub_82416268(ctx, base);
loc_836DE24C:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x836de26c
	if (cr6.lt) goto loc_836DE26C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DE26C:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_836DE27C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836de27c
	if (!cr6.eq) goto loc_836DE27C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DE2A0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE2AC;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836de2c0
	if (cr6.lt) goto loc_836DE2C0;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836DE2C0;
	sub_82416268(ctx, base);
loc_836DE2C0:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DE2E8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE2F4;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de308
	if (cr6.lt) goto loc_836DE308;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836DE308;
	sub_82416268(ctx, base);
loc_836DE308:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836DE320;
	sub_82E746C0(ctx, base);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82472fc0
	ctx.lr = 0x836DE33C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE348;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de35c
	if (cr6.lt) goto loc_836DE35C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836DE35C;
	sub_82416268(ctx, base);
loc_836DE35C:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836de37c
	if (cr6.lt) goto loc_836DE37C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DE37C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836DE38C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836de38c
	if (!cr6.eq) goto loc_836DE38C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DE3B0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE3BC;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836de3d0
	if (cr6.lt) goto loc_836DE3D0;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836DE3D0;
	sub_82416268(ctx, base);
loc_836DE3D0:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DE3F8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE404;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de418
	if (cr6.lt) goto loc_836DE418;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836DE418;
	sub_82416268(ctx, base);
loc_836DE418:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,204(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// bl 0x82e746c0
	ctx.lr = 0x836DE430;
	sub_82E746C0(ctx, base);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82472fc0
	ctx.lr = 0x836DE44C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE458;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de46c
	if (cr6.lt) goto loc_836DE46C;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836DE46C;
	sub_82416268(ctx, base);
loc_836DE46C:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r4,r29,208
	ctx.r4.s64 = ctx.r29.s64 + 208;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// addi r3,r29,-200
	ctx.r3.s64 = ctx.r29.s64 + -200;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// lwz r5,2256(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// bl 0x83354d50
	ctx.lr = 0x836DE498;
	sub_83354D50(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x836de4ac
	if (!cr6.lt) goto loc_836DE4AC;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
loc_836DE4AC:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_836DE4BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836de4bc
	if (!cr6.eq) goto loc_836DE4BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DE4E0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DE4EC;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836de500
	if (cr6.lt) goto loc_836DE500;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836DE500;
	sub_82416268(ctx, base);
loc_836DE500:
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x836de520
	if (cr6.lt) goto loc_836DE520;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x8386d088
	ctx.lr = 0x836DE520;
	sub_8386D088(ctx, base);
loc_836DE520:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DE52C"))) PPC_WEAK_FUNC(sub_836DE52C);
PPC_FUNC_IMPL(__imp__sub_836DE52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DE530"))) PPC_WEAK_FUNC(sub_836DE530);
PPC_FUNC_IMPL(__imp__sub_836DE530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836DE538;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836DE560;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836de7a4
	if (!cr6.lt) goto loc_836DE7A4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,20052
	ctx.r26.s64 = ctx.r11.s64 + 20052;
loc_836DE598:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836DE5CC;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DE5E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836de678
	if (!cr6.eq) goto loc_836DE678;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836DE61C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836de630
	if (!cr6.lt) goto loc_836DE630;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836DE630:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DE634:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836de634
	if (!cr6.eq) goto loc_836DE634;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DE658;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836de66c
	if (cr6.lt) goto loc_836DE66C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836DE66C;
	sub_82416268(ctx, base);
loc_836DE66C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836DE678:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DE690;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836de6cc
	if (!cr6.eq) goto loc_836DE6CC;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836de6c4
	if (!cr6.eq) goto loc_836DE6C4;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836de6c8
	goto loc_836DE6C8;
loc_836DE6C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836DE6C8:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836DE6CC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DE6E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836de778
	if (!cr6.eq) goto loc_836DE778;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836DE71C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836de730
	if (!cr6.lt) goto loc_836DE730;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836DE730:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DE734:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836de734
	if (!cr6.eq) goto loc_836DE734;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DE758;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836de76c
	if (cr6.lt) goto loc_836DE76C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836DE76C;
	sub_82416268(ctx, base);
loc_836DE76C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836DE778:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de78c
	if (cr6.lt) goto loc_836DE78C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836DE78C;
	sub_82416268(ctx, base);
loc_836DE78C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836de598
	if (!cr0.eq) goto loc_836DE598;
loc_836DE7A4:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836de7c0
	if (cr6.eq) goto loc_836DE7C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DE7B8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DE7C0;
	sub_82416268(ctx, base);
loc_836DE7C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DE7CC"))) PPC_WEAK_FUNC(sub_836DE7CC);
PPC_FUNC_IMPL(__imp__sub_836DE7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DE7D0"))) PPC_WEAK_FUNC(sub_836DE7D0);
PPC_FUNC_IMPL(__imp__sub_836DE7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836DE7D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836DE7E4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,19888
	ctx.r29.s64 = ctx.r11.s64 + 19888;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836DE7FC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,20160
	ctx.r7.s64 = ctx.r10.s64 + 20160;
	// addi r5,r8,20144
	ctx.r5.s64 = ctx.r8.s64 + 20144;
	// addi r6,r9,20148
	ctx.r6.s64 = ctx.r9.s64 + 20148;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DE844;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DE860;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DE880;
	sub_824208C8(ctx, base);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x836DE894;
	sub_831CDCF0(ctx, base);
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,2456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2456, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DE8A8"))) PPC_WEAK_FUNC(sub_836DE8A8);
PPC_FUNC_IMPL(__imp__sub_836DE8A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836de970
	sub_836DE970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DE8B0"))) PPC_WEAK_FUNC(sub_836DE8B0);
PPC_FUNC_IMPL(__imp__sub_836DE8B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836de970
	sub_836DE970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DE8B8"))) PPC_WEAK_FUNC(sub_836DE8B8);
PPC_FUNC_IMPL(__imp__sub_836DE8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DE8C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,20160
	ctx.r8.s64 = ctx.r11.s64 + 20160;
	// addi r7,r10,20148
	ctx.r7.s64 = ctx.r10.s64 + 20148;
	// addi r6,r9,20144
	ctx.r6.s64 = ctx.r9.s64 + 20144;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836de904
	if (cr6.lt) goto loc_836DE904;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DE904;
	sub_8386D088(ctx, base);
loc_836DE904:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de930
	if (cr6.lt) goto loc_836DE930;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DE930;
	sub_8386D088(ctx, base);
loc_836DE930:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836de954
	if (cr6.lt) goto loc_836DE954;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DE954;
	sub_8386D088(ctx, base);
loc_836DE954:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836DE968;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DE970"))) PPC_WEAK_FUNC(sub_836DE970);
PPC_FUNC_IMPL(__imp__sub_836DE970) {
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
	// bl 0x836de8b8
	ctx.lr = 0x836DE990;
	sub_836DE8B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836de9b0
	if (cr6.eq) goto loc_836DE9B0;
	// bl 0x82595188
	ctx.lr = 0x836DE9A0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DE9B0;
	sub_825952B8(ctx, base);
loc_836DE9B0:
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

__attribute__((alias("__imp__sub_836DE9CC"))) PPC_WEAK_FUNC(sub_836DE9CC);
PPC_FUNC_IMPL(__imp__sub_836DE9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DE9D0"))) PPC_WEAK_FUNC(sub_836DE9D0);
PPC_FUNC_IMPL(__imp__sub_836DE9D0) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836DE9E8;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,19888
	ctx.r4.s64 = ctx.r11.s64 + 19888;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x824208c8
	ctx.lr = 0x836DE9FC;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,20208
	ctx.r3.s64 = ctx.r7.s64 + 20208;
	// addi r6,r10,20192
	ctx.r6.s64 = ctx.r10.s64 + 20192;
	// addi r5,r9,20180
	ctx.r5.s64 = ctx.r9.s64 + 20180;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,20176
	ctx.r4.s64 = ctx.r8.s64 + 20176;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836DEA44"))) PPC_WEAK_FUNC(sub_836DEA44);
PPC_FUNC_IMPL(__imp__sub_836DEA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DEA48"))) PPC_WEAK_FUNC(sub_836DEA48);
PPC_FUNC_IMPL(__imp__sub_836DEA48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836dea60
	sub_836DEA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DEA50"))) PPC_WEAK_FUNC(sub_836DEA50);
PPC_FUNC_IMPL(__imp__sub_836DEA50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836dea60
	sub_836DEA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DEA58"))) PPC_WEAK_FUNC(sub_836DEA58);
PPC_FUNC_IMPL(__imp__sub_836DEA58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836dea60
	sub_836DEA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DEA60"))) PPC_WEAK_FUNC(sub_836DEA60);
PPC_FUNC_IMPL(__imp__sub_836DEA60) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,20192
	ctx.r7.s64 = ctx.r11.s64 + 20192;
	// addi r6,r10,20180
	ctx.r6.s64 = ctx.r10.s64 + 20180;
	// addi r5,r9,20176
	ctx.r5.s64 = ctx.r9.s64 + 20176;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,20208
	ctx.r4.s64 = ctx.r8.s64 + 20208;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836DEAB0;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836dead0
	if (cr6.eq) goto loc_836DEAD0;
	// bl 0x82595188
	ctx.lr = 0x836DEAC0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DEAD0;
	sub_825952B8(ctx, base);
loc_836DEAD0:
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

__attribute__((alias("__imp__sub_836DEAEC"))) PPC_WEAK_FUNC(sub_836DEAEC);
PPC_FUNC_IMPL(__imp__sub_836DEAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DEAF0"))) PPC_WEAK_FUNC(sub_836DEAF0);
PPC_FUNC_IMPL(__imp__sub_836DEAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DEAF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836deb38
	if (!cr6.lt) goto loc_836DEB38;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836DEB38;
	sub_82E745E0(ctx, base);
loc_836DEB38:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,20364
	ctx.r27.s64 = ctx.r11.s64 + 20364;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DEB80;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DEB8C;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836deba0
	if (cr6.lt) goto loc_836DEBA0;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836DEBA0;
	sub_82416268(ctx, base);
loc_836DEBA0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836debc0
	if (cr6.lt) goto loc_836DEBC0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DEBC0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836DEBD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836debd0
	if (!cr6.eq) goto loc_836DEBD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DEBF4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DEC00;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dec14
	if (cr6.lt) goto loc_836DEC14;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836DEC14;
	sub_82416268(ctx, base);
loc_836DEC14:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DEC3C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DEC48;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dec5c
	if (cr6.lt) goto loc_836DEC5C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836DEC5C;
	sub_82416268(ctx, base);
loc_836DEC5C:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836DEC74;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836DEC90;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DEC9C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836decb0
	if (cr6.lt) goto loc_836DECB0;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836DECB0;
	sub_82416268(ctx, base);
loc_836DECB0:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836decd0
	if (cr6.lt) goto loc_836DECD0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DECD0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836DECE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dece0
	if (!cr6.eq) goto loc_836DECE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DED04;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DED10;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ded24
	if (cr6.lt) goto loc_836DED24;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836DED24;
	sub_82416268(ctx, base);
loc_836DED24:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DED4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DED58;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ded6c
	if (cr6.lt) goto loc_836DED6C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836DED6C;
	sub_82416268(ctx, base);
loc_836DED6C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836ded8c
	if (cr6.lt) goto loc_836DED8C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836DED8C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836DED9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ded9c
	if (!cr6.eq) goto loc_836DED9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836DEDC0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DEDCC;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dede0
	if (cr6.lt) goto loc_836DEDE0;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836DEDE0;
	sub_82416268(ctx, base);
loc_836DEDE0:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836DEE08;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836DEE14;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dee28
	if (cr6.lt) goto loc_836DEE28;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836DEE28;
	sub_82416268(ctx, base);
loc_836DEE28:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836DEE40;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DEE4C"))) PPC_WEAK_FUNC(sub_836DEE4C);
PPC_FUNC_IMPL(__imp__sub_836DEE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DEE50"))) PPC_WEAK_FUNC(sub_836DEE50);
PPC_FUNC_IMPL(__imp__sub_836DEE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836DEE58;
	__savegprlr_14(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r23,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r23.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x83691bb8
	ctx.lr = 0x836DEE80;
	sub_83691BB8(ctx, base);
	// lwz r10,680(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r11,684(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x836dfba4
	if (!cr6.lt) goto loc_836DFBA4;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// addi r30,r11,20572
	ctx.r30.s64 = ctx.r11.s64 + 20572;
	// li r16,15
	ctx.r16.s64 = 15;
	// li r24,4
	ctx.r24.s64 = 4;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// ori r19,r8,1
	ctx.r19.u64 = ctx.r8.u64 | 1;
	// addi r20,r10,8980
	ctx.r20.s64 = ctx.r10.s64 + 8980;
	// addi r21,r9,26164
	ctx.r21.s64 = ctx.r9.s64 + 26164;
loc_836DEECC:
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r11,r1,976
	ctx.r11.s64 = ctx.r1.s64 + 976;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// ld r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r14.u32 + 8);
	// ld r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,984(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 984);
	// lwz r4,988(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 988);
	// bl 0x82472fc0
	ctx.lr = 0x836DEEFC;
	sub_82472FC0(ctx, base);
	// addi r6,r30,-132
	ctx.r6.s64 = ctx.r30.s64 + -132;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DEF14;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836defac
	if (!cr6.eq) goto loc_836DEFAC;
	// stb r23,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r23.u8);
	// addi r11,r1,832
	ctx.r11.s64 = ctx.r1.s64 + 832;
	// stw r16,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r16.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r23,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r23.u32);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,844(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// lwz r5,840(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 840);
	// bl 0x82472fc0
	ctx.lr = 0x836DEF50;
	sub_82472FC0(ctx, base);
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836def64
	if (!cr6.lt) goto loc_836DEF64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_836DEF64:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DEF68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836def68
	if (!cr6.eq) goto loc_836DEF68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,20
	ctx.r3.s64 = ctx.r17.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DEF8C;
	sub_824208C8(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836defa0
	if (cr6.lt) goto loc_836DEFA0;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x836DEFA0;
	sub_82416268(ctx, base);
loc_836DEFA0:
	// stw r16,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r16.u32);
	// stw r23,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r23.u32);
	// stb r23,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r23.u8);
loc_836DEFAC:
	// addi r6,r30,-124
	ctx.r6.s64 = ctx.r30.s64 + -124;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DEFC4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df004
	if (!cr6.eq) goto loc_836DF004;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r10,r1,864
	ctx.r10.s64 = ctx.r1.s64 + 864;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,864(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836deffc
	if (!cr6.eq) goto loc_836DEFFC;
	// ld r11,872(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 872);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836df000
	goto loc_836DF000;
loc_836DEFFC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_836DF000:
	// stw r11,48(r17)
	PPC_STORE_U32(ctx.r17.u32 + 48, ctx.r11.u32);
loc_836DF004:
	// addi r6,r30,-116
	ctx.r6.s64 = ctx.r30.s64 + -116;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DF01C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df0b4
	if (!cr6.eq) goto loc_836DF0B4;
	// stw r16,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r16.u32);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r23,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,908(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// lwz r5,904(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// bl 0x82472fc0
	ctx.lr = 0x836DF058;
	sub_82472FC0(ctx, base);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836df06c
	if (!cr6.lt) goto loc_836DF06C;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_836DF06C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DF070:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836df070
	if (!cr6.eq) goto loc_836DF070;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,116
	ctx.r3.s64 = ctx.r17.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DF094;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836df0a8
	if (cr6.lt) goto loc_836DF0A8;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x836DF0A8;
	sub_82416268(ctx, base);
loc_836DF0A8:
	// stw r16,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r16.u32);
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// stb r23,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r23.u8);
loc_836DF0B4:
	// addi r6,r30,-108
	ctx.r6.s64 = ctx.r30.s64 + -108;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DF0CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df164
	if (!cr6.eq) goto loc_836DF164;
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// addi r11,r1,928
	ctx.r11.s64 = ctx.r1.s64 + 928;
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r16,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r16.u32);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,936(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r4,940(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// bl 0x82472fc0
	ctx.lr = 0x836DF108;
	sub_82472FC0(ctx, base);
	// lwz r7,292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836df11c
	if (!cr6.lt) goto loc_836DF11C;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_836DF11C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DF120:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836df120
	if (!cr6.eq) goto loc_836DF120;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,148
	ctx.r3.s64 = ctx.r17.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DF144;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836df158
	if (cr6.lt) goto loc_836DF158;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x836DF158;
	sub_82416268(ctx, base);
loc_836DF158:
	// stw r16,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r16.u32);
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
loc_836DF164:
	// addi r6,r30,-96
	ctx.r6.s64 = ctx.r30.s64 + -96;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DF17C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df214
	if (!cr6.eq) goto loc_836DF214;
	// stw r23,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r23.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stb r23,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r23.u8);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r16,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r16.u32);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,968(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	// lwz r4,972(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
	// bl 0x82472fc0
	ctx.lr = 0x836DF1B8;
	sub_82472FC0(ctx, base);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836df1cc
	if (!cr6.lt) goto loc_836DF1CC;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_836DF1CC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DF1D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836df1d0
	if (!cr6.eq) goto loc_836DF1D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,176
	ctx.r3.s64 = ctx.r17.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DF1F4;
	sub_824208C8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836df208
	if (cr6.lt) goto loc_836DF208;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x836DF208;
	sub_82416268(ctx, base);
loc_836DF208:
	// stw r16,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r16.u32);
	// stw r23,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r23.u32);
	// stb r23,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r23.u8);
loc_836DF214:
	// addi r6,r30,-88
	ctx.r6.s64 = ctx.r30.s64 + -88;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DF22C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df26c
	if (!cr6.eq) goto loc_836DF26C;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,992
	ctx.r10.s64 = ctx.r1.s64 + 992;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,992(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836df264
	if (!cr6.eq) goto loc_836DF264;
	// ld r11,1000(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1000);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836df268
	goto loc_836DF268;
loc_836DF264:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_836DF268:
	// stw r11,204(r17)
	PPC_STORE_U32(ctx.r17.u32 + 204, ctx.r11.u32);
loc_836DF26C:
	// addi r6,r30,-84
	ctx.r6.s64 = ctx.r30.s64 + -84;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DF284;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df970
	if (!cr6.eq) goto loc_836DF970;
	// stw r23,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r23.u32);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// lwz r5,24(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r4,28(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836DF2A8;
	sub_83691BB8(ctx, base);
	// lwz r10,728(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 728);
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836df954
	if (!cr6.lt) goto loc_836DF954;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r18,r11,28
	ctx.r18.s64 = ctx.r11.s64 + 28;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r15,r11,1
	ctx.r15.s64 = ctx.r11.s64 + 1;
loc_836DF2D4:
	// stw r16,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r16.u32);
	// addi r11,r1,816
	ctx.r11.s64 = ctx.r1.s64 + 816;
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r23,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r23.u8);
	// addi r10,r18,-28
	ctx.r10.s64 = ctx.r18.s64 + -28;
	// ld r9,-28(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + -28);
	// ld r8,-20(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + -20);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,824(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// lwz r4,828(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// bl 0x82472fc0
	ctx.lr = 0x836DF308;
	sub_82472FC0(ctx, base);
	// addi r6,r30,-76
	ctx.r6.s64 = ctx.r30.s64 + -76;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836DF320;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df664
	if (!cr6.eq) goto loc_836DF664;
	// stw r23,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r23.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lwz r5,-4(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// bl 0x83691bb8
	ctx.lr = 0x836DF344;
	sub_83691BB8(ctx, base);
	// lwz r10,760(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 760);
	// lwz r11,764(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836df648
	if (!cr6.lt) goto loc_836DF648;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
loc_836DF370:
	// stw r16,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r16.u32);
	// addi r11,r1,912
	ctx.r11.s64 = ctx.r1.s64 + 912;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r23,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r23.u8);
	// addi r10,r25,-16
	ctx.r10.s64 = ctx.r25.s64 + -16;
	// ld r9,-16(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + -16);
	// ld r8,-8(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,924(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// lwz r5,920(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	// bl 0x82472fc0
	ctx.lr = 0x836DF3A4;
	sub_82472FC0(ctx, base);
	// addi r6,r30,-68
	ctx.r6.s64 = ctx.r30.s64 + -68;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x836DF3BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df450
	if (!cr6.eq) goto loc_836DF450;
	// stw r16,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r16.u32);
	// addi r11,r1,848
	ctx.r11.s64 = ctx.r1.s64 + 848;
	// stw r23,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r23.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stb r23,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r23.u8);
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,856(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// lwz r4,860(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// bl 0x82472fc0
	ctx.lr = 0x836DF3F4;
	sub_82472FC0(ctx, base);
	// lwz r8,420(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836df408
	if (!cr6.lt) goto loc_836DF408;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
loc_836DF408:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DF40C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836df40c
	if (!cr6.eq) goto loc_836DF40C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,208
	ctx.r3.s64 = ctx.r17.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DF430;
	sub_824208C8(ctx, base);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836df444
	if (cr6.lt) goto loc_836DF444;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x836DF444;
	sub_82416268(ctx, base);
loc_836DF444:
	// stw r16,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r16.u32);
	// stw r23,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r23.u32);
	// stb r23,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r23.u8);
loc_836DF450:
	// addi r6,r30,-60
	ctx.r6.s64 = ctx.r30.s64 + -60;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x836DF468;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df4b8
	if (!cr6.eq) goto loc_836DF4B8;
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,624(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836df49c
	if (!cr6.eq) goto loc_836DF49C;
	// ld r11,632(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836df4b4
	goto loc_836DF4B4;
loc_836DF49C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836df4b0
	if (!cr6.eq) goto loc_836DF4B0;
	// ld r11,632(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836df4b4
	goto loc_836DF4B4;
loc_836DF4B0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_836DF4B4:
	// stw r11,236(r17)
	PPC_STORE_U32(ctx.r17.u32 + 236, ctx.r11.u32);
loc_836DF4B8:
	// addi r6,r30,-52
	ctx.r6.s64 = ctx.r30.s64 + -52;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x836DF4D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df61c
	if (!cr6.eq) goto loc_836DF61C;
	// addi r31,r17,240
	ctx.r31.s64 = ctx.r17.s64 + 240;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// stw r24,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r24.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r24,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r24.u32);
	// stw r30,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r30.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r29,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836DF508;
	sub_8247B7D8(ctx, base);
	// lwz r3,248(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 248);
	// stw r23,240(r17)
	PPC_STORE_U32(ctx.r17.u32 + 240, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836df528
	if (cr6.eq) goto loc_836DF528;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x836DF520;
	sub_8247B268(ctx, base);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_836DF528:
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x836df618
	if (!cr6.lt) goto loc_836DF618;
loc_836DF548:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836df574
	if (!cr6.eq) goto loc_836DF574;
	// ld r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836df58c
	goto loc_836DF58C;
loc_836DF574:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836df588
	if (!cr6.eq) goto loc_836DF588;
	// ld r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// b 0x836df58c
	goto loc_836DF58C;
loc_836DF588:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_836DF58C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836df5e8
	if (cr6.lt) goto loc_836DF5E8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836df5d8
	if (!cr6.gt) goto loc_836DF5D8;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r31,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r29.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r24,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r24.u32);
	// stw r24,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r24.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x836DF5D0;
	sub_8247B270(ctx, base);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// b 0x836df5dc
	goto loc_836DF5DC;
loc_836DF5D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836DF5DC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836df60c
	if (cr6.eq) goto loc_836DF60C;
loc_836DF5E8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836df600
	if (cr0.eq) goto loc_836DF600;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_836DF600:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836DF60C:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x836df548
	if (cr6.lt) goto loc_836DF548;
loc_836DF618:
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_836DF61C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836df630
	if (cr6.lt) goto loc_836DF630;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x836DF630;
	sub_82416268(ctx, base);
loc_836DF630:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// stw r16,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r16.u32);
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// stb r23,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r23.u8);
	// bne 0x836df370
	if (!cr0.eq) goto loc_836DF370;
loc_836DF648:
	// lwz r31,768(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836df664
	if (cr6.eq) goto loc_836DF664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DF65C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DF664;
	sub_82416268(ctx, base);
loc_836DF664:
	// addi r6,r30,-44
	ctx.r6.s64 = ctx.r30.s64 + -44;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836DF67C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df7c4
	if (!cr6.eq) goto loc_836DF7C4;
	// addi r31,r17,256
	ctx.r31.s64 = ctx.r17.s64 + 256;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r24,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r24.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r24,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r24.u32);
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r29,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836DF6B4;
	sub_8247B7D8(ctx, base);
	// lwz r3,264(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 264);
	// stw r23,256(r17)
	PPC_STORE_U32(ctx.r17.u32 + 256, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836df6d4
	if (cr6.eq) goto loc_836DF6D4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x836DF6CC;
	sub_8247B268(ctx, base);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_836DF6D4:
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// lwz r11,-4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// lwz r28,0(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x836df7c0
	if (!cr6.lt) goto loc_836DF7C0;
loc_836DF6F0:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836df71c
	if (!cr6.eq) goto loc_836DF71C;
	// ld r11,664(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836df734
	goto loc_836DF734;
loc_836DF71C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836df730
	if (!cr6.eq) goto loc_836DF730;
	// ld r11,664(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// extsw r27,r11
	ctx.r27.s64 = ctx.r11.s32;
	// b 0x836df734
	goto loc_836DF734;
loc_836DF730:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_836DF734:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836df790
	if (cr6.lt) goto loc_836DF790;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836df780
	if (!cr6.gt) goto loc_836DF780;
	// stw r30,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r31,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r29.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r24,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r24.u32);
	// stw r24,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r24.u32);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x836DF778;
	sub_8247B270(ctx, base);
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// b 0x836df784
	goto loc_836DF784;
loc_836DF780:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836DF784:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836df7b4
	if (cr6.eq) goto loc_836DF7B4;
loc_836DF790:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836df7a8
	if (cr0.eq) goto loc_836DF7A8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_836DF7A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836DF7B4:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x836df6f0
	if (cr6.lt) goto loc_836DF6F0;
loc_836DF7C0:
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_836DF7C4:
	// addi r6,r30,-40
	ctx.r6.s64 = ctx.r30.s64 + -40;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836DF7DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df924
	if (!cr6.eq) goto loc_836DF924;
	// addi r31,r17,272
	ctx.r31.s64 = ctx.r17.s64 + 272;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r24,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r24.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r24,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r24.u32);
	// stw r30,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r30.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r29,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836DF814;
	sub_8247B7D8(ctx, base);
	// lwz r3,280(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 280);
	// stw r23,272(r17)
	PPC_STORE_U32(ctx.r17.u32 + 272, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836df834
	if (cr6.eq) goto loc_836DF834;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x836DF82C;
	sub_8247B268(ctx, base);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_836DF834:
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// lwz r28,0(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,-4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x836df920
	if (!cr6.lt) goto loc_836DF920;
loc_836DF850:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,704(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836df87c
	if (!cr6.eq) goto loc_836DF87C;
	// ld r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836df894
	goto loc_836DF894;
loc_836DF87C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836df890
	if (!cr6.eq) goto loc_836DF890;
	// ld r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// extsw r27,r11
	ctx.r27.s64 = ctx.r11.s32;
	// b 0x836df894
	goto loc_836DF894;
loc_836DF890:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_836DF894:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836df8f0
	if (cr6.lt) goto loc_836DF8F0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836df8e0
	if (!cr6.gt) goto loc_836DF8E0;
	// stw r30,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r31,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r29.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r24,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r24.u32);
	// stw r24,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r24.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x836DF8D8;
	sub_8247B270(ctx, base);
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// b 0x836df8e4
	goto loc_836DF8E4;
loc_836DF8E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836DF8E4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836df914
	if (cr6.eq) goto loc_836DF914;
loc_836DF8F0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836df908
	if (cr0.eq) goto loc_836DF908;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_836DF908:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836DF914:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x836df850
	if (cr6.lt) goto loc_836DF850;
loc_836DF920:
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_836DF924:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836df938
	if (cr6.lt) goto loc_836DF938;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836DF938;
	sub_82416268(ctx, base);
loc_836DF938:
	// addic. r15,r15,-1
	xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	cr0.compare<int32_t>(ctx.r15.s32, 0, xer);
	// stw r16,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r16.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// addi r18,r18,32
	ctx.r18.s64 = ctx.r18.s64 + 32;
	// stb r23,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r23.u8);
	// bne 0x836df2d4
	if (!cr0.eq) goto loc_836DF2D4;
	// lwz r29,204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
loc_836DF954:
	// lwz r31,736(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836df970
	if (cr6.eq) goto loc_836DF970;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DF968;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DF970;
	sub_82416268(ctx, base);
loc_836DF970:
	// addi r6,r30,-28
	ctx.r6.s64 = ctx.r30.s64 + -28;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DF988;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836df9c0
	if (!cr6.eq) goto loc_836DF9C0;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,784(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// ld r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x836df9bc
	if (cr6.eq) goto loc_836DF9BC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_836DF9BC:
	// std r11,288(r17)
	PPC_STORE_U64(ctx.r17.u32 + 288, ctx.r11.u64);
loc_836DF9C0:
	// addi r6,r30,-20
	ctx.r6.s64 = ctx.r30.s64 + -20;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DF9D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dfa70
	if (!cr6.eq) goto loc_836DFA70;
	// stw r16,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r16.u32);
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stb r23,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,888(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	// lwz r4,892(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// bl 0x82472fc0
	ctx.lr = 0x836DFA14;
	sub_82472FC0(ctx, base);
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dfa28
	if (!cr6.lt) goto loc_836DFA28;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
loc_836DFA28:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DFA2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dfa2c
	if (!cr6.eq) goto loc_836DFA2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,296
	ctx.r3.s64 = ctx.r17.s64 + 296;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DFA50;
	sub_824208C8(ctx, base);
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dfa64
	if (cr6.lt) goto loc_836DFA64;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x836DFA64;
	sub_82416268(ctx, base);
loc_836DFA64:
	// stw r16,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r16.u32);
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// stb r23,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r23.u8);
loc_836DFA70:
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DFA88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dfac8
	if (!cr6.eq) goto loc_836DFAC8;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,944(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836dfac0
	if (!cr6.eq) goto loc_836DFAC0;
	// ld r11,952(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 952);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836dfac4
	goto loc_836DFAC4;
loc_836DFAC0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_836DFAC4:
	// stw r11,324(r17)
	PPC_STORE_U32(ctx.r17.u32 + 324, ctx.r11.u32);
loc_836DFAC8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836DFAE0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836dfb78
	if (!cr6.eq) goto loc_836DFB78;
	// stw r16,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r16.u32);
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,808(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// lwz r4,812(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// bl 0x82472fc0
	ctx.lr = 0x836DFB1C;
	sub_82472FC0(ctx, base);
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836dfb30
	if (!cr6.lt) goto loc_836DFB30;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_836DFB30:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836DFB34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836dfb34
	if (!cr6.eq) goto loc_836DFB34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,328
	ctx.r3.s64 = ctx.r17.s64 + 328;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836DFB58;
	sub_824208C8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836dfb6c
	if (cr6.lt) goto loc_836DFB6C;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836DFB6C;
	sub_82416268(ctx, base);
loc_836DFB6C:
	// stw r16,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r16.u32);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
loc_836DFB78:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dfb8c
	if (cr6.lt) goto loc_836DFB8C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836DFB8C;
	sub_82416268(ctx, base);
loc_836DFB8C:
	// addi r14,r14,32
	ctx.r14.s64 = ctx.r14.s64 + 32;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// cmplw cr6,r14,r29
	cr6.compare<uint32_t>(ctx.r14.u32, ctx.r29.u32, xer);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// blt cr6,0x836deecc
	if (cr6.lt) goto loc_836DEECC;
loc_836DFBA4:
	// lwz r31,688(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836dfbc0
	if (cr6.eq) goto loc_836DFBC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836DFBB8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836DFBC0;
	sub_82416268(ctx, base);
loc_836DFBC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFBCC"))) PPC_WEAK_FUNC(sub_836DFBCC);
PPC_FUNC_IMPL(__imp__sub_836DFBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DFBD0"))) PPC_WEAK_FUNC(sub_836DFBD0);
PPC_FUNC_IMPL(__imp__sub_836DFBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836DFBD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836DFBE4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,20264
	ctx.r29.s64 = ctx.r11.s64 + 20264;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836DFBFC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,20684
	ctx.r7.s64 = ctx.r10.s64 + 20684;
	// addi r5,r8,20668
	ctx.r5.s64 = ctx.r8.s64 + 20668;
	// addi r6,r9,20672
	ctx.r6.s64 = ctx.r9.s64 + 20672;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DFC44;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DFC60;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFC70"))) PPC_WEAK_FUNC(sub_836DFC70);
PPC_FUNC_IMPL(__imp__sub_836DFC70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836dfd18
	sub_836DFD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFC78"))) PPC_WEAK_FUNC(sub_836DFC78);
PPC_FUNC_IMPL(__imp__sub_836DFC78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836dfd18
	sub_836DFD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFC80"))) PPC_WEAK_FUNC(sub_836DFC80);
PPC_FUNC_IMPL(__imp__sub_836DFC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DFC88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,20684
	ctx.r8.s64 = ctx.r11.s64 + 20684;
	// addi r7,r10,20672
	ctx.r7.s64 = ctx.r10.s64 + 20672;
	// addi r6,r9,20668
	ctx.r6.s64 = ctx.r9.s64 + 20668;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836dfccc
	if (cr6.lt) goto loc_836DFCCC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DFCCC;
	sub_8386D088(ctx, base);
loc_836DFCCC:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dfcf8
	if (cr6.lt) goto loc_836DFCF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DFCF8;
	sub_8386D088(ctx, base);
loc_836DFCF8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836DFD0C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFD14"))) PPC_WEAK_FUNC(sub_836DFD14);
PPC_FUNC_IMPL(__imp__sub_836DFD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DFD18"))) PPC_WEAK_FUNC(sub_836DFD18);
PPC_FUNC_IMPL(__imp__sub_836DFD18) {
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
	// bl 0x836dfc80
	ctx.lr = 0x836DFD38;
	sub_836DFC80(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836dfd58
	if (cr6.eq) goto loc_836DFD58;
	// bl 0x82595188
	ctx.lr = 0x836DFD48;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DFD58;
	sub_825952B8(ctx, base);
loc_836DFD58:
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

__attribute__((alias("__imp__sub_836DFD74"))) PPC_WEAK_FUNC(sub_836DFD74);
PPC_FUNC_IMPL(__imp__sub_836DFD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DFD78"))) PPC_WEAK_FUNC(sub_836DFD78);
PPC_FUNC_IMPL(__imp__sub_836DFD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836DFD80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x836DFD8C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,20264
	ctx.r29.s64 = ctx.r11.s64 + 20264;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836DFDA4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r5,r9,20708
	ctx.r5.s64 = ctx.r9.s64 + 20708;
	// addi r4,r8,20704
	ctx.r4.s64 = ctx.r8.s64 + 20704;
	// addi r3,r7,20700
	ctx.r3.s64 = ctx.r7.s64 + 20700;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,20720
	ctx.r6.s64 = ctx.r10.s64 + 20720;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DFDF8;
	sub_824208C8(ctx, base);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DFE14;
	sub_824208C8(ctx, base);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// bl 0x835fe558
	ctx.lr = 0x836DFE20;
	sub_835FE558(ctx, base);
	// std r30,488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 488, ctx.r30.u64);
	// stw r28,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r28.u32);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stb r30,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DFE40;
	sub_824208C8(ctx, base);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// stw r28,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r28.u32);
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// addi r4,r29,160
	ctx.r4.s64 = ctx.r29.s64 + 160;
	// stb r30,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836DFE60;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFE6C"))) PPC_WEAK_FUNC(sub_836DFE6C);
PPC_FUNC_IMPL(__imp__sub_836DFE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DFE70"))) PPC_WEAK_FUNC(sub_836DFE70);
PPC_FUNC_IMPL(__imp__sub_836DFE70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836dffb0
	sub_836DFFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFE78"))) PPC_WEAK_FUNC(sub_836DFE78);
PPC_FUNC_IMPL(__imp__sub_836DFE78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836dffb0
	sub_836DFFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFE80"))) PPC_WEAK_FUNC(sub_836DFE80);
PPC_FUNC_IMPL(__imp__sub_836DFE80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836dffb0
	sub_836DFFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFE88"))) PPC_WEAK_FUNC(sub_836DFE88);
PPC_FUNC_IMPL(__imp__sub_836DFE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836DFE90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r11,20720
	ctx.r7.s64 = ctx.r11.s64 + 20720;
	// addi r6,r10,20708
	ctx.r6.s64 = ctx.r10.s64 + 20708;
	// addi r5,r9,20704
	ctx.r5.s64 = ctx.r9.s64 + 20704;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,20700
	ctx.r4.s64 = ctx.r8.s64 + 20700;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r30,r3,528
	ctx.r30.s64 = ctx.r3.s64 + 528;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,548(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x836dfee0
	if (cr6.lt) goto loc_836DFEE0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DFEE0;
	sub_8386D088(ctx, base);
loc_836DFEE0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r28,r29,496
	ctx.r28.s64 = ctx.r29.s64 + 496;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dff0c
	if (cr6.lt) goto loc_836DFF0C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DFF0C;
	sub_8386D088(ctx, base);
loc_836DFF0C:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r30,r29,408
	ctx.r30.s64 = ctx.r29.s64 + 408;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x836DFF24;
	sub_824238B8(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x836DFF2C;
	sub_824238B8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x836DFF34;
	sub_824238B8(ctx, base);
	// lwz r11,428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dff48
	if (cr6.lt) goto loc_836DFF48;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DFF48;
	sub_8386D088(ctx, base);
loc_836DFF48:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r28,r29,376
	ctx.r28.s64 = ctx.r29.s64 + 376;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dff6c
	if (cr6.lt) goto loc_836DFF6C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DFF6C;
	sub_8386D088(ctx, base);
loc_836DFF6C:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r30,r29,348
	ctx.r30.s64 = ctx.r29.s64 + 348;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836dff90
	if (cr6.lt) goto loc_836DFF90;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836DFF90;
	sub_8386D088(ctx, base);
loc_836DFF90:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bl 0x82eaf978
	ctx.lr = 0x836DFFA4;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836DFFAC"))) PPC_WEAK_FUNC(sub_836DFFAC);
PPC_FUNC_IMPL(__imp__sub_836DFFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836DFFB0"))) PPC_WEAK_FUNC(sub_836DFFB0);
PPC_FUNC_IMPL(__imp__sub_836DFFB0) {
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
	// bl 0x836dfe88
	ctx.lr = 0x836DFFD0;
	sub_836DFE88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836dfff0
	if (cr6.eq) goto loc_836DFFF0;
	// bl 0x82595188
	ctx.lr = 0x836DFFE0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836DFFF0;
	sub_825952B8(ctx, base);
loc_836DFFF0:
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

__attribute__((alias("__imp__sub_836E000C"))) PPC_WEAK_FUNC(sub_836E000C);
PPC_FUNC_IMPL(__imp__sub_836E000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E0010"))) PPC_WEAK_FUNC(sub_836E0010);
PPC_FUNC_IMPL(__imp__sub_836E0010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836e007c
	if (!cr6.gt) goto loc_836E007C;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,21956
	ctx.r8.s64 = ctx.r10.s64 + 21956;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,272
	ctx.r6.s64 = 272;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x836E006C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_836E007C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836E0090"))) PPC_WEAK_FUNC(sub_836E0090);
PPC_FUNC_IMPL(__imp__sub_836E0090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836E0098;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,21956
	ctx.r10.s64 = ctx.r11.s64 + 21956;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,272
	ctx.r8.s64 = 272;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x836E00DC;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836e0104
	if (cr6.eq) goto loc_836E0104;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836E00FC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836E0104:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E010C"))) PPC_WEAK_FUNC(sub_836E010C);
PPC_FUNC_IMPL(__imp__sub_836E010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E0110"))) PPC_WEAK_FUNC(sub_836E0110);
PPC_FUNC_IMPL(__imp__sub_836E0110) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x8362c480
	ctx.lr = 0x836E012C;
	sub_8362C480(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0140
	if (cr6.lt) goto loc_836E0140;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E0140;
	sub_8386D088(ctx, base);
loc_836E0140:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_836E0168"))) PPC_WEAK_FUNC(sub_836E0168);
PPC_FUNC_IMPL(__imp__sub_836E0168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E0170;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,616
	ctx.r3.s64 = ctx.r3.s64 + 616;
	// bl 0x836e0090
	ctx.lr = 0x836E0180;
	sub_836E0090(ctx, base);
	// lwz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// addi r27,r30,588
	ctx.r27.s64 = ctx.r30.s64 + 588;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0198
	if (cr6.lt) goto loc_836E0198;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E0198;
	sub_8386D088(ctx, base);
loc_836E0198:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// addi r28,r30,560
	ctx.r28.s64 = ctx.r30.s64 + 560;
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e01c4
	if (cr6.lt) goto loc_836E01C4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E01C4;
	sub_8386D088(ctx, base);
loc_836E01C4:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r3,r30,544
	ctx.r3.s64 = ctx.r30.s64 + 544;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82d8d2e8
	ctx.lr = 0x836E01D8;
	sub_82D8D2E8(ctx, base);
	// addi r3,r30,528
	ctx.r3.s64 = ctx.r30.s64 + 528;
	// bl 0x824238b8
	ctx.lr = 0x836E01E0;
	sub_824238B8(ctx, base);
	// addi r3,r30,504
	ctx.r3.s64 = ctx.r30.s64 + 504;
	// bl 0x824238b8
	ctx.lr = 0x836E01E8;
	sub_824238B8(ctx, base);
	// addi r3,r30,480
	ctx.r3.s64 = ctx.r30.s64 + 480;
	// bl 0x824238b8
	ctx.lr = 0x836E01F0;
	sub_824238B8(ctx, base);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// addi r28,r30,448
	ctx.r28.s64 = ctx.r30.s64 + 448;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0208
	if (cr6.lt) goto loc_836E0208;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E0208;
	sub_8386D088(ctx, base);
loc_836E0208:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,420
	ctx.r27.s64 = ctx.r30.s64 + 420;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e022c
	if (cr6.lt) goto loc_836E022C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E022C;
	sub_8386D088(ctx, base);
loc_836E022C:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,392
	ctx.r28.s64 = ctx.r30.s64 + 392;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0250
	if (cr6.lt) goto loc_836E0250;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E0250;
	sub_8386D088(ctx, base);
loc_836E0250:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r3,r30,376
	ctx.r3.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x824238b8
	ctx.lr = 0x836E0264;
	sub_824238B8(ctx, base);
	// addi r3,r30,360
	ctx.r3.s64 = ctx.r30.s64 + 360;
	// bl 0x824238b8
	ctx.lr = 0x836E026C;
	sub_824238B8(ctx, base);
	// addi r3,r30,344
	ctx.r3.s64 = ctx.r30.s64 + 344;
	// bl 0x824238b8
	ctx.lr = 0x836E0274;
	sub_824238B8(ctx, base);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// addi r28,r30,308
	ctx.r28.s64 = ctx.r30.s64 + 308;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e028c
	if (cr6.lt) goto loc_836E028C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E028C;
	sub_8386D088(ctx, base);
loc_836E028C:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,280
	ctx.r27.s64 = ctx.r30.s64 + 280;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e02b0
	if (cr6.lt) goto loc_836E02B0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E02B0;
	sub_8386D088(ctx, base);
loc_836E02B0:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,252
	ctx.r28.s64 = ctx.r30.s64 + 252;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e02d4
	if (cr6.lt) goto loc_836E02D4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E02D4;
	sub_8386D088(ctx, base);
loc_836E02D4:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,220
	ctx.r27.s64 = ctx.r30.s64 + 220;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e02f8
	if (cr6.lt) goto loc_836E02F8;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E02F8;
	sub_8386D088(ctx, base);
loc_836E02F8:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e031c
	if (cr6.lt) goto loc_836E031C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E031C;
	sub_8386D088(ctx, base);
loc_836E031C:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r3,r30,152
	ctx.r3.s64 = ctx.r30.s64 + 152;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82d8d2e8
	ctx.lr = 0x836E0330;
	sub_82D8D2E8(ctx, base);
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// bl 0x82d8d2e8
	ctx.lr = 0x836E0338;
	sub_82D8D2E8(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r27,r30,108
	ctx.r27.s64 = ctx.r30.s64 + 108;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0350
	if (cr6.lt) goto loc_836E0350;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E0350;
	sub_8386D088(ctx, base);
loc_836E0350:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,80
	ctx.r28.s64 = ctx.r30.s64 + 80;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0374
	if (cr6.lt) goto loc_836E0374;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E0374;
	sub_8386D088(ctx, base);
loc_836E0374:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0398
	if (cr6.lt) goto loc_836E0398;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E0398;
	sub_8386D088(ctx, base);
loc_836E0398:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e03b8
	if (cr6.lt) goto loc_836E03B8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E03B8;
	sub_8386D088(ctx, base);
loc_836E03B8:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E03CC"))) PPC_WEAK_FUNC(sub_836E03CC);
PPC_FUNC_IMPL(__imp__sub_836E03CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E03D0"))) PPC_WEAK_FUNC(sub_836E03D0);
PPC_FUNC_IMPL(__imp__sub_836E03D0) {
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
	// addi r3,r4,28
	ctx.r3.s64 = ctx.r4.s64 + 28;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8362c480
	ctx.lr = 0x836E03EC;
	sub_8362C480(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0400
	if (cr6.lt) goto loc_836E0400;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E0400;
	sub_8386D088(ctx, base);
loc_836E0400:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_836E0428"))) PPC_WEAK_FUNC(sub_836E0428);
PPC_FUNC_IMPL(__imp__sub_836E0428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836E0430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x836E0460;
	sub_824208C8(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836E0494;
	sub_824208C8(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E04B0;
	sub_824208C8(ctx, base);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E04CC;
	sub_824208C8(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// std r30,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r30.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d8c9b0
	ctx.lr = 0x836E04E4;
	sub_82D8C9B0(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// std r30,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r30.u64);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82d8c9b0
	ctx.lr = 0x836E04FC;
	sub_82D8C9B0(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836E0528;
	sub_824208C8(ctx, base);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836E054C;
	sub_824208C8(ctx, base);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E056C;
	sub_824208C8(ctx, base);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stb r30,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E0588;
	sub_824208C8(ctx, base);
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E05A4;
	sub_824208C8(ctx, base);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// li r4,800
	ctx.r4.s64 = 800;
	// std r30,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x836E05C0;
	sub_82423930(ctx, base);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// std r30,368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 368, ctx.r30.u64);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82423930
	ctx.lr = 0x836E05D8;
	sub_82423930(ctx, base);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// std r30,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r30.u64);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82423930
	ctx.lr = 0x836E05F0;
	sub_82423930(ctx, base);
	// stw r29,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r29.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// stb r30,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E060C;
	sub_824208C8(ctx, base);
	// stw r29,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r29.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// stb r30,420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 420, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E0628;
	sub_824208C8(ctx, base);
	// stw r29,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r29.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stb r30,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E0644;
	sub_824208C8(ctx, base);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// std r30,488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 488, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x836E0660;
	sub_82423930(ctx, base);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// std r30,512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 512, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x836E067C;
	sub_82423930(ctx, base);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// std r30,536(r31)
	PPC_STORE_U64(ctx.r31.u32 + 536, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x836E0698;
	sub_82423930(ctx, base);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// std r30,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r30.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d8c9b0
	ctx.lr = 0x836E06B0;
	sub_82D8C9B0(ctx, base);
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stb r30,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E06CC;
	sub_824208C8(ctx, base);
	// stw r29,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r29.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// stb r30,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E06E8;
	sub_824208C8(ctx, base);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// std r30,624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 624, ctx.r30.u64);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x836e0010
	ctx.lr = 0x836E0700;
	sub_836E0010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E070C"))) PPC_WEAK_FUNC(sub_836E070C);
PPC_FUNC_IMPL(__imp__sub_836E070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E0710"))) PPC_WEAK_FUNC(sub_836E0710);
PPC_FUNC_IMPL(__imp__sub_836E0710) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x836E074C;
	sub_82420558(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x8362c6c0
	ctx.lr = 0x836E0758;
	sub_8362C6C0(ctx, base);
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

__attribute__((alias("__imp__sub_836E0774"))) PPC_WEAK_FUNC(sub_836E0774);
PPC_FUNC_IMPL(__imp__sub_836E0774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E0778"))) PPC_WEAK_FUNC(sub_836E0778);
PPC_FUNC_IMPL(__imp__sub_836E0778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x836e078c
	if (cr6.eq) goto loc_836E078C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x836e0710
	sub_836E0710(ctx, base);
	return;
loc_836E078C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836E0794"))) PPC_WEAK_FUNC(sub_836E0794);
PPC_FUNC_IMPL(__imp__sub_836E0794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E0798"))) PPC_WEAK_FUNC(sub_836E0798);
PPC_FUNC_IMPL(__imp__sub_836E0798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E07A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836e07e0
	if (!cr6.lt) goto loc_836E07E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836E07E0;
	sub_82E745E0(ctx, base);
loc_836E07E0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,20868
	ctx.r27.s64 = ctx.r11.s64 + 20868;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E0828;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E0834;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836e0848
	if (cr6.lt) goto loc_836E0848;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836E0848;
	sub_82416268(ctx, base);
loc_836E0848:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836e0868
	if (cr6.lt) goto loc_836E0868;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E0868:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836E0878:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e0878
	if (!cr6.eq) goto loc_836E0878;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E089C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E08A8;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e08bc
	if (cr6.lt) goto loc_836E08BC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836E08BC;
	sub_82416268(ctx, base);
loc_836E08BC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E08E4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E08F0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0904
	if (cr6.lt) goto loc_836E0904;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836E0904;
	sub_82416268(ctx, base);
loc_836E0904:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836E091C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836E0938;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E0944;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0958
	if (cr6.lt) goto loc_836E0958;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836E0958;
	sub_82416268(ctx, base);
loc_836E0958:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836e0978
	if (cr6.lt) goto loc_836E0978;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E0978:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836E0988:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e0988
	if (!cr6.eq) goto loc_836E0988;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E09AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E09B8;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e09cc
	if (cr6.lt) goto loc_836E09CC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836E09CC;
	sub_82416268(ctx, base);
loc_836E09CC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E09F4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E0A00;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0a14
	if (cr6.lt) goto loc_836E0A14;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836E0A14;
	sub_82416268(ctx, base);
loc_836E0A14:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836e0a34
	if (cr6.lt) goto loc_836E0A34;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E0A34:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836E0A44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e0a44
	if (!cr6.eq) goto loc_836E0A44;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E0A68;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E0A74;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e0a88
	if (cr6.lt) goto loc_836E0A88;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836E0A88;
	sub_82416268(ctx, base);
loc_836E0A88:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E0AB0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E0ABC;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e0ad0
	if (cr6.lt) goto loc_836E0AD0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836E0AD0;
	sub_82416268(ctx, base);
loc_836E0AD0:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836E0AE8;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E0AF4"))) PPC_WEAK_FUNC(sub_836E0AF4);
PPC_FUNC_IMPL(__imp__sub_836E0AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E0AF8"))) PPC_WEAK_FUNC(sub_836E0AF8);
PPC_FUNC_IMPL(__imp__sub_836E0AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836e0b38
	if (cr6.lt) goto loc_836E0B38;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x836e0010
	ctx.lr = 0x836E0B2C;
	sub_836E0010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836e0b60
	if (cr6.eq) goto loc_836E0B60;
loc_836E0B38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 * 272;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x836e0b54
	if (cr0.eq) goto loc_836E0B54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x836e0710
	ctx.lr = 0x836E0B54;
	sub_836E0710(ctx, base);
loc_836E0B54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836E0B60:
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

__attribute__((alias("__imp__sub_836E0B7C"))) PPC_WEAK_FUNC(sub_836E0B7C);
PPC_FUNC_IMPL(__imp__sub_836E0B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E0B80"))) PPC_WEAK_FUNC(sub_836E0B80);
PPC_FUNC_IMPL(__imp__sub_836E0B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836E0B88;
	__savegprlr_14(ctx, base);
	// stwu r1,-3040(r1)
	ea = -3040 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r27,1600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1600, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1616, ctx.r27.u32);
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x83691bb8
	ctx.lr = 0x836E0BB0;
	sub_83691BB8(ctx, base);
	// lwz r10,1608(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1608);
	// lwz r11,1612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// bge cr6,0x836e3398
	if (!cr6.lt) goto loc_836E3398;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r7,11
	ctx.r7.s64 = 720896;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// addi r6,r10,27936
	ctx.r6.s64 = ctx.r10.s64 + 27936;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r15,8
	ctx.r15.s64 = 8;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// li r16,28
	ctx.r16.s64 = 28;
	// ori r25,r7,1
	ctx.r25.u64 = ctx.r7.u64 | 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r20,r11,21860
	ctx.r20.s64 = ctx.r11.s64 + 21860;
	// addi r14,r9,8980
	ctx.r14.s64 = ctx.r9.s64 + 8980;
	// addi r17,r8,27920
	ctx.r17.s64 = ctx.r8.s64 + 27920;
loc_836E0C10:
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// addi r11,r1,2576
	ctx.r11.s64 = ctx.r1.s64 + 2576;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r27,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r27.u8);
	// ld r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,2584(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2584);
	// lwz r4,2588(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2588);
	// bl 0x82472fc0
	ctx.lr = 0x836E0C40;
	sub_82472FC0(ctx, base);
	// addi r6,r20,-980
	ctx.r6.s64 = ctx.r20.s64 + -980;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x836E0C58;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e0cf0
	if (!cr6.eq) goto loc_836E0CF0;
	// stb r27,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r27.u8);
	// addi r11,r1,1920
	ctx.r11.s64 = ctx.r1.s64 + 1920;
	// stw r26,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r26.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r27,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r27.u32);
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
	// ld r8,16(r23)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r23.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1932(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1932);
	// lwz r5,1928(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1928);
	// bl 0x82472fc0
	ctx.lr = 0x836E0C94;
	sub_82472FC0(ctx, base);
	// lwz r7,452(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e0ca8
	if (!cr6.lt) goto loc_836E0CA8;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
loc_836E0CA8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E0CAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e0cac
	if (!cr6.eq) goto loc_836E0CAC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,20
	ctx.r3.s64 = ctx.r18.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E0CD0;
	sub_824208C8(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e0ce4
	if (cr6.lt) goto loc_836E0CE4;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x836E0CE4;
	sub_82416268(ctx, base);
loc_836E0CE4:
	// stw r26,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r26.u32);
	// stw r27,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r27.u32);
	// stb r27,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r27.u8);
loc_836E0CF0:
	// addi r6,r20,-972
	ctx.r6.s64 = ctx.r20.s64 + -972;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x836E0D08;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e0d48
	if (!cr6.eq) goto loc_836E0D48;
	// ld r9,24(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 24);
	// addi r10,r1,2272
	ctx.r10.s64 = ctx.r1.s64 + 2272;
	// ld r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 16);
	// addi r8,r23,16
	ctx.r8.s64 = ctx.r23.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,2272(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2272);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e0d40
	if (!cr6.eq) goto loc_836E0D40;
	// ld r11,2280(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2280);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e0d44
	goto loc_836E0D44;
loc_836E0D40:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E0D44:
	// stw r11,48(r18)
	PPC_STORE_U32(ctx.r18.u32 + 48, ctx.r11.u32);
loc_836E0D48:
	// addi r6,r20,-964
	ctx.r6.s64 = ctx.r20.s64 + -964;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x836E0D60;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e0df8
	if (!cr6.eq) goto loc_836E0DF8;
	// stw r26,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r26.u32);
	// addi r11,r1,1952
	ctx.r11.s64 = ctx.r1.s64 + 1952;
	// stw r27,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r27.u32);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// stb r27,944(r1)
	PPC_STORE_U8(ctx.r1.u32 + 944, ctx.r27.u8);
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
	// ld r8,24(r23)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r23.u32 + 24);
	// ld r9,16(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1964(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1964);
	// lwz r5,1960(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1960);
	// bl 0x82472fc0
	ctx.lr = 0x836E0D9C;
	sub_82472FC0(ctx, base);
	// lwz r7,964(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// lwz r4,944(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e0db0
	if (!cr6.lt) goto loc_836E0DB0;
	// addi r4,r1,944
	ctx.r4.s64 = ctx.r1.s64 + 944;
loc_836E0DB0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E0DB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e0db4
	if (!cr6.eq) goto loc_836E0DB4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,116
	ctx.r3.s64 = ctx.r18.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E0DD8;
	sub_824208C8(ctx, base);
	// lwz r10,964(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 964);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e0dec
	if (cr6.lt) goto loc_836E0DEC;
	// lwz r3,944(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// bl 0x82416268
	ctx.lr = 0x836E0DEC;
	sub_82416268(ctx, base);
loc_836E0DEC:
	// stw r26,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r26.u32);
	// stw r27,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r27.u32);
	// stb r27,944(r1)
	PPC_STORE_U8(ctx.r1.u32 + 944, ctx.r27.u8);
loc_836E0DF8:
	// addi r6,r20,-956
	ctx.r6.s64 = ctx.r20.s64 + -956;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x836E0E10;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e3380
	if (!cr6.eq) goto loc_836E3380;
	// stw r27,1552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1552, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1568, ctx.r27.u32);
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// lwz r5,24(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// lwz r4,28(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836E0E34;
	sub_83691BB8(ctx, base);
	// lwz r10,1560(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1560);
	// lwz r11,1564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bge cr6,0x836e3364
	if (!cr6.lt) goto loc_836E3364;
loc_836E0E54:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r11,r1,2528
	ctx.r11.s64 = ctx.r1.s64 + 2528;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// ld r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// ld r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,2536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2536);
	// lwz r4,2540(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2540);
	// bl 0x82472fc0
	ctx.lr = 0x836E0E84;
	sub_82472FC0(ctx, base);
	// addi r6,r20,-944
	ctx.r6.s64 = ctx.r20.s64 + -944;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E0E9C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e0f34
	if (!cr6.eq) goto loc_836E0F34;
	// stw r26,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r26.u32);
	// addi r11,r1,1984
	ctx.r11.s64 = ctx.r1.s64 + 1984;
	// stw r27,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r27.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stb r27,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1996(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1996);
	// lwz r5,1992(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1992);
	// bl 0x82472fc0
	ctx.lr = 0x836E0ED8;
	sub_82472FC0(ctx, base);
	// lwz r7,516(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e0eec
	if (!cr6.lt) goto loc_836E0EEC;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
loc_836E0EEC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E0EF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e0ef0
	if (!cr6.eq) goto loc_836E0EF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,152
	ctx.r3.s64 = ctx.r18.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E0F14;
	sub_824208C8(ctx, base);
	// lwz r10,516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e0f28
	if (cr6.lt) goto loc_836E0F28;
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82416268
	ctx.lr = 0x836E0F28;
	sub_82416268(ctx, base);
loc_836E0F28:
	// stw r26,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r26.u32);
	// stw r27,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r27.u32);
	// stb r27,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r27.u8);
loc_836E0F34:
	// addi r6,r20,-932
	ctx.r6.s64 = ctx.r20.s64 + -932;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E0F4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e0f8c
	if (!cr6.eq) goto loc_836E0F8C;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,2304
	ctx.r10.s64 = ctx.r1.s64 + 2304;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2304(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2304);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e0f84
	if (!cr6.eq) goto loc_836E0F84;
	// ld r11,2312(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2312);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e0f88
	goto loc_836E0F88;
loc_836E0F84:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E0F88:
	// stw r11,180(r18)
	PPC_STORE_U32(ctx.r18.u32 + 180, ctx.r11.u32);
loc_836E0F8C:
	// addi r6,r20,-920
	ctx.r6.s64 = ctx.r20.s64 + -920;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E0FA4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e0fe4
	if (!cr6.eq) goto loc_836E0FE4;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,2016
	ctx.r10.s64 = ctx.r1.s64 + 2016;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2016(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2016);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e0fdc
	if (!cr6.eq) goto loc_836E0FDC;
	// ld r11,2024(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2024);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e0fe0
	goto loc_836E0FE0;
loc_836E0FDC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E0FE0:
	// stw r11,184(r18)
	PPC_STORE_U32(ctx.r18.u32 + 184, ctx.r11.u32);
loc_836E0FE4:
	// addi r6,r20,-900
	ctx.r6.s64 = ctx.r20.s64 + -900;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E0FFC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e103c
	if (!cr6.eq) goto loc_836E103C;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,2464
	ctx.r10.s64 = ctx.r1.s64 + 2464;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2464(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2464);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e1034
	if (!cr6.eq) goto loc_836E1034;
	// ld r11,2472(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2472);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1038
	goto loc_836E1038;
loc_836E1034:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1038:
	// stw r11,188(r18)
	PPC_STORE_U32(ctx.r18.u32 + 188, ctx.r11.u32);
loc_836E103C:
	// addi r6,r20,-884
	ctx.r6.s64 = ctx.r20.s64 + -884;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1054;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1094
	if (!cr6.eq) goto loc_836E1094;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,2048
	ctx.r10.s64 = ctx.r1.s64 + 2048;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2048(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2048);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e108c
	if (!cr6.eq) goto loc_836E108C;
	// ld r11,2056(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2056);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1090
	goto loc_836E1090;
loc_836E108C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1090:
	// stw r11,192(r18)
	PPC_STORE_U32(ctx.r18.u32 + 192, ctx.r11.u32);
loc_836E1094:
	// addi r6,r20,-864
	ctx.r6.s64 = ctx.r20.s64 + -864;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E10AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e10ec
	if (!cr6.eq) goto loc_836E10EC;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,2336
	ctx.r10.s64 = ctx.r1.s64 + 2336;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2336(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2336);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e10e4
	if (!cr6.eq) goto loc_836E10E4;
	// ld r11,2344(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2344);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e10e8
	goto loc_836E10E8;
loc_836E10E4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E10E8:
	// stw r11,196(r18)
	PPC_STORE_U32(ctx.r18.u32 + 196, ctx.r11.u32);
loc_836E10EC:
	// addi r6,r20,-848
	ctx.r6.s64 = ctx.r20.s64 + -848;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1104;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1144
	if (!cr6.eq) goto loc_836E1144;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,2080
	ctx.r10.s64 = ctx.r1.s64 + 2080;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2080(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2080);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e113c
	if (!cr6.eq) goto loc_836E113C;
	// ld r11,2088(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2088);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1140
	goto loc_836E1140;
loc_836E113C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1140:
	// stw r11,200(r18)
	PPC_STORE_U32(ctx.r18.u32 + 200, ctx.r11.u32);
loc_836E1144:
	// addi r6,r20,-832
	ctx.r6.s64 = ctx.r20.s64 + -832;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E115C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e11f4
	if (!cr6.eq) goto loc_836E11F4;
	// stw r26,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r26.u32);
	// addi r11,r1,2592
	ctx.r11.s64 = ctx.r1.s64 + 2592;
	// stw r27,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r27.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// stb r27,816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 816, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,2604(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2604);
	// lwz r5,2600(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2600);
	// bl 0x82472fc0
	ctx.lr = 0x836E1198;
	sub_82472FC0(ctx, base);
	// lwz r7,836(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// lwz r4,816(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e11ac
	if (!cr6.lt) goto loc_836E11AC;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
loc_836E11AC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E11B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e11b0
	if (!cr6.eq) goto loc_836E11B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,204
	ctx.r3.s64 = ctx.r18.s64 + 204;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E11D4;
	sub_824208C8(ctx, base);
	// lwz r10,836(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e11e8
	if (cr6.lt) goto loc_836E11E8;
	// lwz r3,816(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// bl 0x82416268
	ctx.lr = 0x836E11E8;
	sub_82416268(ctx, base);
loc_836E11E8:
	// stw r26,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r26.u32);
	// stw r27,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r27.u32);
	// stb r27,816(r1)
	PPC_STORE_U8(ctx.r1.u32 + 816, ctx.r27.u8);
loc_836E11F4:
	// addi r6,r20,-820
	ctx.r6.s64 = ctx.r20.s64 + -820;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E120C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e12a4
	if (!cr6.eq) goto loc_836E12A4;
	// stw r27,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r27.u32);
	// addi r11,r1,2112
	ctx.r11.s64 = ctx.r1.s64 + 2112;
	// stb r27,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r27.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r26,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r26.u32);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,2120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2120);
	// lwz r4,2124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2124);
	// bl 0x82472fc0
	ctx.lr = 0x836E1248;
	sub_82472FC0(ctx, base);
	// lwz r7,580(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e125c
	if (!cr6.lt) goto loc_836E125C;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
loc_836E125C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E1260:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e1260
	if (!cr6.eq) goto loc_836E1260;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,232
	ctx.r3.s64 = ctx.r18.s64 + 232;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1284;
	sub_824208C8(ctx, base);
	// lwz r10,580(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e1298
	if (cr6.lt) goto loc_836E1298;
	// lwz r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82416268
	ctx.lr = 0x836E1298;
	sub_82416268(ctx, base);
loc_836E1298:
	// stw r26,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r26.u32);
	// stw r27,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r27.u32);
	// stb r27,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r27.u8);
loc_836E12A4:
	// addi r6,r20,-812
	ctx.r6.s64 = ctx.r20.s64 + -812;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E12BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1354
	if (!cr6.eq) goto loc_836E1354;
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// addi r11,r1,2368
	ctx.r11.s64 = ctx.r1.s64 + 2368;
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r27,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2376(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2376);
	// lwz r4,2380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2380);
	// bl 0x82472fc0
	ctx.lr = 0x836E12F8;
	sub_82472FC0(ctx, base);
	// lwz r7,292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e130c
	if (!cr6.lt) goto loc_836E130C;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_836E130C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E1310:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e1310
	if (!cr6.eq) goto loc_836E1310;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,260
	ctx.r3.s64 = ctx.r18.s64 + 260;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1334;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e1348
	if (cr6.lt) goto loc_836E1348;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x836E1348;
	sub_82416268(ctx, base);
loc_836E1348:
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// stb r27,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r27.u8);
loc_836E1354:
	// addi r6,r20,-800
	ctx.r6.s64 = ctx.r20.s64 + -800;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E136C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1548
	if (!cr6.eq) goto loc_836E1548;
	// addi r31,r18,288
	ctx.r31.s64 = ctx.r18.s64 + 288;
	// stw r17,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// stw r15,1308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1308, ctx.r15.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r16,1312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1312, ctx.r16.u32);
	// stw r30,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r30.u32);
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// stw r29,1304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1304, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836E13A4;
	sub_8247B7D8(ctx, base);
	// lwz r3,296(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 296);
	// stw r27,288(r18)
	PPC_STORE_U32(ctx.r18.u32 + 288, ctx.r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836e13c4
	if (cr6.eq) goto loc_836E13C4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8247b268
	ctx.lr = 0x836E13BC;
	sub_8247B268(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_836E13C4:
	// stw r14,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r14.u32);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,28(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x836e1548
	if (!cr6.lt) goto loc_836E1548;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_836E13E8:
	// stw r26,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r26.u32);
	// addi r11,r1,1648
	ctx.r11.s64 = ctx.r1.s64 + 1648;
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r27,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r27.u8);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1656(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1656);
	// lwz r4,1660(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// bl 0x82472fc0
	ctx.lr = 0x836E1418;
	sub_82472FC0(ctx, base);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836e142c
	if (!cr6.lt) goto loc_836E142C;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_836E142C:
	// stw r26,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r27.u32);
	// stb r27,1168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1168, ctx.r27.u8);
loc_836E143C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e143c
	if (!cr6.eq) goto loc_836E143C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1460;
	sub_824208C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836e14c0
	if (cr6.lt) goto loc_836E14C0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836e14b0
	if (!cr6.gt) goto loc_836E14B0;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,1268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1268, ctx.r31.u32);
	// stw r30,1272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1272, ctx.r30.u32);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// stw r11,1264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1264, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r15,1276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1276, ctx.r15.u32);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// stw r16,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r16.u32);
	// stw r17,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// bl 0x8247b270
	ctx.lr = 0x836E14A8;
	sub_8247B270(ctx, base);
	// stw r14,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r14.u32);
	// b 0x836e14b4
	goto loc_836E14B4;
loc_836E14B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836E14B4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836e14fc
	if (cr6.eq) goto loc_836E14FC;
loc_836E14C0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x836e14f0
	if (cr0.eq) goto loc_836E14F0;
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// bl 0x82420558
	ctx.lr = 0x836E14F0;
	sub_82420558(ctx, base);
loc_836E14F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836E14FC:
	// lwz r11,1188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1188);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e1510
	if (cr6.lt) goto loc_836E1510;
	// lwz r3,1168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// bl 0x8386d088
	ctx.lr = 0x836E1510;
	sub_8386D088(ctx, base);
loc_836E1510:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r26,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r26.u32);
	// stw r27,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,1168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1168, ctx.r27.u8);
	// blt cr6,0x836e1530
	if (cr6.lt) goto loc_836E1530;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x836E1530;
	sub_82416268(ctx, base);
loc_836E1530:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// stw r26,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r26.u32);
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// stb r27,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r27.u8);
	// blt cr6,0x836e13e8
	if (cr6.lt) goto loc_836E13E8;
loc_836E1548:
	// addi r6,r20,-788
	ctx.r6.s64 = ctx.r20.s64 + -788;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1560;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1738
	if (!cr6.eq) goto loc_836E1738;
	// addi r31,r18,304
	ctx.r31.s64 = ctx.r18.s64 + 304;
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// stw r15,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, ctx.r15.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r16,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r16.u32);
	// stw r30,1200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1200, ctx.r30.u32);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// stw r29,1208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1208, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836E1598;
	sub_8247B7D8(ctx, base);
	// lwz r3,312(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 312);
	// stw r27,304(r18)
	PPC_STORE_U32(ctx.r18.u32 + 304, ctx.r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836e15b8
	if (cr6.eq) goto loc_836E15B8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8247b268
	ctx.lr = 0x836E15B0;
	sub_8247B268(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_836E15B8:
	// stw r14,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// lwz r29,28(r19)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bge cr6,0x836e1738
	if (!cr6.lt) goto loc_836E1738;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_836E15D8:
	// stw r26,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r26.u32);
	// addi r11,r1,1680
	ctx.r11.s64 = ctx.r1.s64 + 1680;
	// stb r27,1072(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1072, ctx.r27.u8);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// stw r27,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r27.u32);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,1688(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1688);
	// lwz r4,1692(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// bl 0x82472fc0
	ctx.lr = 0x836E1608;
	sub_82472FC0(ctx, base);
	// lwz r8,1092(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// lwz r4,1072(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836e161c
	if (!cr6.lt) goto loc_836E161C;
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
loc_836E161C:
	// stw r26,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r27.u32);
	// stb r27,1136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1136, ctx.r27.u8);
loc_836E162C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e162c
	if (!cr6.eq) goto loc_836E162C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1650;
	sub_824208C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836e16b0
	if (cr6.lt) goto loc_836E16B0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836e16a0
	if (!cr6.gt) goto loc_836E16A0;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r31.u32);
	// stw r30,1240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1240, ctx.r30.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r11,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r15,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r15.u32);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// stw r16,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r16.u32);
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// bl 0x8247b270
	ctx.lr = 0x836E1698;
	sub_8247B270(ctx, base);
	// stw r14,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r14.u32);
	// b 0x836e16a4
	goto loc_836E16A4;
loc_836E16A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836E16A4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836e16ec
	if (cr6.eq) goto loc_836E16EC;
loc_836E16B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x836e16e0
	if (cr0.eq) goto loc_836E16E0;
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// bl 0x82420558
	ctx.lr = 0x836E16E0;
	sub_82420558(ctx, base);
loc_836E16E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836E16EC:
	// lwz r11,1156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e1700
	if (cr6.lt) goto loc_836E1700;
	// lwz r3,1136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// bl 0x8386d088
	ctx.lr = 0x836E1700;
	sub_8386D088(ctx, base);
loc_836E1700:
	// lwz r11,1092(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// stw r26,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r26.u32);
	// stw r27,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,1136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1136, ctx.r27.u8);
	// blt cr6,0x836e1720
	if (cr6.lt) goto loc_836E1720;
	// lwz r3,1072(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// bl 0x82416268
	ctx.lr = 0x836E1720;
	sub_82416268(ctx, base);
loc_836E1720:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// stw r26,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r26.u32);
	// stw r27,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r27.u32);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// stb r27,1072(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1072, ctx.r27.u8);
	// blt cr6,0x836e15d8
	if (cr6.lt) goto loc_836E15D8;
loc_836E1738:
	// addi r6,r20,-764
	ctx.r6.s64 = ctx.r20.s64 + -764;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1750;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1790
	if (!cr6.eq) goto loc_836E1790;
	// ld r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r10,r1,1712
	ctx.r10.s64 = ctx.r1.s64 + 1712;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r7,1712(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1712);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e1788
	if (!cr6.eq) goto loc_836E1788;
	// ld r11,1720(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1720);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e178c
	goto loc_836E178C;
loc_836E1788:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E178C:
	// stw r11,320(r18)
	PPC_STORE_U32(ctx.r18.u32 + 320, ctx.r11.u32);
loc_836E1790:
	// addi r6,r20,-740
	ctx.r6.s64 = ctx.r20.s64 + -740;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E17A8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e17e8
	if (!cr6.eq) goto loc_836E17E8;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1744
	ctx.r10.s64 = ctx.r1.s64 + 1744;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1744(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1744);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e17e0
	if (!cr6.eq) goto loc_836E17E0;
	// ld r11,1752(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1752);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e17e4
	goto loc_836E17E4;
loc_836E17E0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E17E4:
	// stw r11,324(r18)
	PPC_STORE_U32(ctx.r18.u32 + 324, ctx.r11.u32);
loc_836E17E8:
	// addi r6,r20,-716
	ctx.r6.s64 = ctx.r20.s64 + -716;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,26
	ctx.r7.s64 = 26;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1800;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1840
	if (!cr6.eq) goto loc_836E1840;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1776
	ctx.r10.s64 = ctx.r1.s64 + 1776;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1776(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1776);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e1838
	if (!cr6.eq) goto loc_836E1838;
	// ld r11,1784(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1784);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e183c
	goto loc_836E183C;
loc_836E1838:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E183C:
	// stw r11,328(r18)
	PPC_STORE_U32(ctx.r18.u32 + 328, ctx.r11.u32);
loc_836E1840:
	// addi r6,r20,-688
	ctx.r6.s64 = ctx.r20.s64 + -688;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,26
	ctx.r7.s64 = 26;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1858;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1898
	if (!cr6.eq) goto loc_836E1898;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1808
	ctx.r10.s64 = ctx.r1.s64 + 1808;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1808(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1808);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e1890
	if (!cr6.eq) goto loc_836E1890;
	// ld r11,1816(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1816);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1894
	goto loc_836E1894;
loc_836E1890:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1894:
	// stw r11,332(r18)
	PPC_STORE_U32(ctx.r18.u32 + 332, ctx.r11.u32);
loc_836E1898:
	// addi r6,r20,-660
	ctx.r6.s64 = ctx.r20.s64 + -660;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E18B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1948
	if (!cr6.eq) goto loc_836E1948;
	// stw r26,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r26.u32);
	// addi r11,r1,1840
	ctx.r11.s64 = ctx.r1.s64 + 1840;
	// stw r27,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r27.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stb r27,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,1848(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1848);
	// lwz r4,1852(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1852);
	// bl 0x82472fc0
	ctx.lr = 0x836E18EC;
	sub_82472FC0(ctx, base);
	// lwz r7,644(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r4,624(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e1900
	if (!cr6.lt) goto loc_836E1900;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
loc_836E1900:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E1904:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e1904
	if (!cr6.eq) goto loc_836E1904;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,336
	ctx.r3.s64 = ctx.r18.s64 + 336;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1928;
	sub_824208C8(ctx, base);
	// lwz r10,644(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e193c
	if (cr6.lt) goto loc_836E193C;
	// lwz r3,624(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x82416268
	ctx.lr = 0x836E193C;
	sub_82416268(ctx, base);
loc_836E193C:
	// stw r26,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r26.u32);
	// stw r27,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r27.u32);
	// stb r27,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r27.u8);
loc_836E1948:
	// addi r6,r20,-652
	ctx.r6.s64 = ctx.r20.s64 + -652;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1960;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e19b4
	if (!cr6.eq) goto loc_836E19B4;
	// ld r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r10,r1,1392
	ctx.r10.s64 = ctx.r1.s64 + 1392;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r11,1392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1392);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e1998
	if (!cr6.eq) goto loc_836E1998;
	// ld r11,1400(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1400);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e19b0
	goto loc_836E19B0;
loc_836E1998:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e19ac
	if (!cr6.eq) goto loc_836E19AC;
	// ld r11,1400(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1400);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e19b0
	goto loc_836E19B0;
loc_836E19AC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E19B0:
	// stw r11,364(r18)
	PPC_STORE_U32(ctx.r18.u32 + 364, ctx.r11.u32);
loc_836E19B4:
	// addi r6,r20,-636
	ctx.r6.s64 = ctx.r20.s64 + -636;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E19CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1a20
	if (!cr6.eq) goto loc_836E1A20;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1584
	ctx.r10.s64 = ctx.r1.s64 + 1584;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1584(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1584);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e1a04
	if (!cr6.eq) goto loc_836E1A04;
	// ld r11,1592(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1592);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1a1c
	goto loc_836E1A1C;
loc_836E1A04:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e1a18
	if (!cr6.eq) goto loc_836E1A18;
	// ld r11,1592(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1592);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e1a1c
	goto loc_836E1A1C;
loc_836E1A18:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1A1C:
	// stw r11,368(r18)
	PPC_STORE_U32(ctx.r18.u32 + 368, ctx.r11.u32);
loc_836E1A20:
	// addi r6,r20,-624
	ctx.r6.s64 = ctx.r20.s64 + -624;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1A38;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1ad0
	if (!cr6.eq) goto loc_836E1AD0;
	// stw r26,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r26.u32);
	// addi r11,r1,1872
	ctx.r11.s64 = ctx.r1.s64 + 1872;
	// stw r27,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r27.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// stb r27,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1880(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1880);
	// lwz r4,1884(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1884);
	// bl 0x82472fc0
	ctx.lr = 0x836E1A74;
	sub_82472FC0(ctx, base);
	// lwz r7,900(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// lwz r4,880(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e1a88
	if (!cr6.lt) goto loc_836E1A88;
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
loc_836E1A88:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E1A8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e1a8c
	if (!cr6.eq) goto loc_836E1A8C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,372
	ctx.r3.s64 = ctx.r18.s64 + 372;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1AB0;
	sub_824208C8(ctx, base);
	// lwz r10,900(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e1ac4
	if (cr6.lt) goto loc_836E1AC4;
	// lwz r3,880(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// bl 0x82416268
	ctx.lr = 0x836E1AC4;
	sub_82416268(ctx, base);
loc_836E1AC4:
	// stw r26,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r26.u32);
	// stw r27,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r27.u32);
	// stb r27,880(r1)
	PPC_STORE_U8(ctx.r1.u32 + 880, ctx.r27.u8);
loc_836E1AD0:
	// addi r6,r20,-608
	ctx.r6.s64 = ctx.r20.s64 + -608;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1AE8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1b3c
	if (!cr6.eq) goto loc_836E1B3C;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1440
	ctx.r10.s64 = ctx.r1.s64 + 1440;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1440(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1440);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e1b20
	if (!cr6.eq) goto loc_836E1B20;
	// ld r11,1448(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1448);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1b38
	goto loc_836E1B38;
loc_836E1B20:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e1b34
	if (!cr6.eq) goto loc_836E1B34;
	// ld r11,1448(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1448);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e1b38
	goto loc_836E1B38;
loc_836E1B34:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1B38:
	// stw r11,400(r18)
	PPC_STORE_U32(ctx.r18.u32 + 400, ctx.r11.u32);
loc_836E1B3C:
	// addi r6,r20,-596
	ctx.r6.s64 = ctx.r20.s64 + -596;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1B54;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1bec
	if (!cr6.eq) goto loc_836E1BEC;
	// stw r26,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r26.u32);
	// addi r11,r1,1904
	ctx.r11.s64 = ctx.r1.s64 + 1904;
	// stw r27,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r27.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stb r27,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1912(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1912);
	// lwz r4,1916(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1916);
	// bl 0x82472fc0
	ctx.lr = 0x836E1B90;
	sub_82472FC0(ctx, base);
	// lwz r7,708(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r4,688(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e1ba4
	if (!cr6.lt) goto loc_836E1BA4;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
loc_836E1BA4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E1BA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e1ba8
	if (!cr6.eq) goto loc_836E1BA8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,404
	ctx.r3.s64 = ctx.r18.s64 + 404;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1BCC;
	sub_824208C8(ctx, base);
	// lwz r10,708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e1be0
	if (cr6.lt) goto loc_836E1BE0;
	// lwz r3,688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x82416268
	ctx.lr = 0x836E1BE0;
	sub_82416268(ctx, base);
loc_836E1BE0:
	// stw r26,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r26.u32);
	// stw r27,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r27.u32);
	// stb r27,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r27.u8);
loc_836E1BEC:
	// addi r6,r20,-580
	ctx.r6.s64 = ctx.r20.s64 + -580;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1C04;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1c9c
	if (!cr6.eq) goto loc_836E1C9C;
	// stw r26,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r26.u32);
	// addi r11,r1,1936
	ctx.r11.s64 = ctx.r1.s64 + 1936;
	// stw r27,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r27.u32);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// stb r27,1008(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1008, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1944(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1944);
	// lwz r4,1948(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1948);
	// bl 0x82472fc0
	ctx.lr = 0x836E1C40;
	sub_82472FC0(ctx, base);
	// lwz r7,1028(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1028);
	// lwz r4,1008(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e1c54
	if (!cr6.lt) goto loc_836E1C54;
	// addi r4,r1,1008
	ctx.r4.s64 = ctx.r1.s64 + 1008;
loc_836E1C54:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E1C58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e1c58
	if (!cr6.eq) goto loc_836E1C58;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,432
	ctx.r3.s64 = ctx.r18.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1C7C;
	sub_824208C8(ctx, base);
	// lwz r10,1028(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1028);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e1c90
	if (cr6.lt) goto loc_836E1C90;
	// lwz r3,1008(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// bl 0x82416268
	ctx.lr = 0x836E1C90;
	sub_82416268(ctx, base);
loc_836E1C90:
	// stw r26,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r26.u32);
	// stw r27,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r27.u32);
	// stb r27,1008(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1008, ctx.r27.u8);
loc_836E1C9C:
	// addi r6,r20,-568
	ctx.r6.s64 = ctx.r20.s64 + -568;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1CB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1d4c
	if (!cr6.eq) goto loc_836E1D4C;
	// stw r26,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r26.u32);
	// addi r11,r1,1968
	ctx.r11.s64 = ctx.r1.s64 + 1968;
	// stw r27,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r27,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1976(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1976);
	// lwz r4,1980(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1980);
	// bl 0x82472fc0
	ctx.lr = 0x836E1CF0;
	sub_82472FC0(ctx, base);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e1d04
	if (!cr6.lt) goto loc_836E1D04;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_836E1D04:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E1D08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e1d08
	if (!cr6.eq) goto loc_836E1D08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,460
	ctx.r3.s64 = ctx.r18.s64 + 460;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1D2C;
	sub_824208C8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e1d40
	if (cr6.lt) goto loc_836E1D40;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x836E1D40;
	sub_82416268(ctx, base);
loc_836E1D40:
	// stw r26,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r26.u32);
	// stw r27,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r27.u32);
	// stb r27,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r27.u8);
loc_836E1D4C:
	// addi r6,r20,-560
	ctx.r6.s64 = ctx.r20.s64 + -560;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1D64;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1db8
	if (!cr6.eq) goto loc_836E1DB8;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1536
	ctx.r10.s64 = ctx.r1.s64 + 1536;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1536(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1536);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e1d9c
	if (!cr6.eq) goto loc_836E1D9C;
	// ld r11,1544(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1544);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1db4
	goto loc_836E1DB4;
loc_836E1D9C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e1db0
	if (!cr6.eq) goto loc_836E1DB0;
	// ld r11,1544(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1544);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e1db4
	goto loc_836E1DB4;
loc_836E1DB0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1DB4:
	// stw r11,488(r18)
	PPC_STORE_U32(ctx.r18.u32 + 488, ctx.r11.u32);
loc_836E1DB8:
	// addi r6,r20,-540
	ctx.r6.s64 = ctx.r20.s64 + -540;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1DD0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1e48
	if (!cr6.eq) goto loc_836E1E48;
	// addi r30,r18,496
	ctx.r30.s64 = ctx.r18.s64 + 496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824238b8
	ctx.lr = 0x836E1DE4;
	sub_824238B8(ctx, base);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,28(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x836e1e48
	if (!cr6.lt) goto loc_836E1E48;
loc_836E1DFC:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,2000
	ctx.r10.s64 = ctx.r1.s64 + 2000;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,2000(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2000);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e1e28
	if (!cr6.eq) goto loc_836E1E28;
	// ld r11,2008(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2008);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1e2c
	goto loc_836E1E2C;
loc_836E1E28:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1E2C:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82437de0
	ctx.lr = 0x836E1E3C;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x836e1dfc
	if (cr6.lt) goto loc_836E1DFC;
loc_836E1E48:
	// addi r6,r20,-524
	ctx.r6.s64 = ctx.r20.s64 + -524;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1E60;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1ed8
	if (!cr6.eq) goto loc_836E1ED8;
	// addi r30,r18,512
	ctx.r30.s64 = ctx.r18.s64 + 512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824238b8
	ctx.lr = 0x836E1E74;
	sub_824238B8(ctx, base);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,28(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x836e1ed8
	if (!cr6.lt) goto loc_836E1ED8;
loc_836E1E8C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,2032
	ctx.r10.s64 = ctx.r1.s64 + 2032;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,2032(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2032);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e1eb8
	if (!cr6.eq) goto loc_836E1EB8;
	// ld r11,2040(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2040);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1ebc
	goto loc_836E1EBC;
loc_836E1EB8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1EBC:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82437de0
	ctx.lr = 0x836E1ECC;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x836e1e8c
	if (cr6.lt) goto loc_836E1E8C;
loc_836E1ED8:
	// addi r6,r20,-508
	ctx.r6.s64 = ctx.r20.s64 + -508;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1EF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e1f68
	if (!cr6.eq) goto loc_836E1F68;
	// addi r30,r18,528
	ctx.r30.s64 = ctx.r18.s64 + 528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824238b8
	ctx.lr = 0x836E1F04;
	sub_824238B8(ctx, base);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,28(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x836e1f68
	if (!cr6.lt) goto loc_836E1F68;
loc_836E1F1C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,2064
	ctx.r10.s64 = ctx.r1.s64 + 2064;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,2064(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2064);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e1f48
	if (!cr6.eq) goto loc_836E1F48;
	// ld r11,2072(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2072);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e1f4c
	goto loc_836E1F4C;
loc_836E1F48:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E1F4C:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82437de0
	ctx.lr = 0x836E1F5C;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x836e1f1c
	if (cr6.lt) goto loc_836E1F1C;
loc_836E1F68:
	// addi r6,r20,-496
	ctx.r6.s64 = ctx.r20.s64 + -496;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E1F80;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2018
	if (!cr6.eq) goto loc_836E2018;
	// stw r26,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r26.u32);
	// addi r11,r1,2096
	ctx.r11.s64 = ctx.r1.s64 + 2096;
	// stw r27,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2104);
	// lwz r4,2108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2108);
	// bl 0x82472fc0
	ctx.lr = 0x836E1FBC;
	sub_82472FC0(ctx, base);
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e1fd0
	if (!cr6.lt) goto loc_836E1FD0;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
loc_836E1FD0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E1FD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e1fd4
	if (!cr6.eq) goto loc_836E1FD4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,544
	ctx.r3.s64 = ctx.r18.s64 + 544;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E1FF8;
	sub_824208C8(ctx, base);
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e200c
	if (cr6.lt) goto loc_836E200C;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x836E200C;
	sub_82416268(ctx, base);
loc_836E200C:
	// stw r26,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r26.u32);
	// stw r27,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
loc_836E2018:
	// addi r6,r20,-480
	ctx.r6.s64 = ctx.r20.s64 + -480;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E2030;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e20c8
	if (!cr6.eq) goto loc_836E20C8;
	// stw r26,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r26.u32);
	// addi r11,r1,2128
	ctx.r11.s64 = ctx.r1.s64 + 2128;
	// stw r27,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r27.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stb r27,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2136);
	// lwz r4,2140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2140);
	// bl 0x82472fc0
	ctx.lr = 0x836E206C;
	sub_82472FC0(ctx, base);
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e2080
	if (!cr6.lt) goto loc_836E2080;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
loc_836E2080:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2084:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2084
	if (!cr6.eq) goto loc_836E2084;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,572
	ctx.r3.s64 = ctx.r18.s64 + 572;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E20A8;
	sub_824208C8(ctx, base);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e20bc
	if (cr6.lt) goto loc_836E20BC;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x836E20BC;
	sub_82416268(ctx, base);
loc_836E20BC:
	// stw r26,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r26.u32);
	// stw r27,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r27.u32);
	// stb r27,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r27.u8);
loc_836E20C8:
	// addi r6,r20,-460
	ctx.r6.s64 = ctx.r20.s64 + -460;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E20E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2178
	if (!cr6.eq) goto loc_836E2178;
	// stw r26,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r26.u32);
	// addi r11,r1,2160
	ctx.r11.s64 = ctx.r1.s64 + 2160;
	// stw r27,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r27.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stb r27,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2168);
	// lwz r4,2172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2172);
	// bl 0x82472fc0
	ctx.lr = 0x836E211C;
	sub_82472FC0(ctx, base);
	// lwz r7,484(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e2130
	if (!cr6.lt) goto loc_836E2130;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
loc_836E2130:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2134:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2134
	if (!cr6.eq) goto loc_836E2134;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,600
	ctx.r3.s64 = ctx.r18.s64 + 600;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2158;
	sub_824208C8(ctx, base);
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e216c
	if (cr6.lt) goto loc_836E216C;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82416268
	ctx.lr = 0x836E216C;
	sub_82416268(ctx, base);
loc_836E216C:
	// stw r26,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r26.u32);
	// stw r27,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r27.u32);
	// stb r27,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r27.u8);
loc_836E2178:
	// addi r6,r20,-444
	ctx.r6.s64 = ctx.r20.s64 + -444;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E2190;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e21e4
	if (!cr6.eq) goto loc_836E21E4;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1488
	ctx.r10.s64 = ctx.r1.s64 + 1488;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1488(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1488);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e21c8
	if (!cr6.eq) goto loc_836E21C8;
	// ld r11,1496(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1496);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e21e0
	goto loc_836E21E0;
loc_836E21C8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e21dc
	if (!cr6.eq) goto loc_836E21DC;
	// ld r11,1496(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1496);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e21e0
	goto loc_836E21E0;
loc_836E21DC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E21E0:
	// stw r11,628(r18)
	PPC_STORE_U32(ctx.r18.u32 + 628, ctx.r11.u32);
loc_836E21E4:
	// addi r6,r20,-424
	ctx.r6.s64 = ctx.r20.s64 + -424;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E21FC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2274
	if (!cr6.eq) goto loc_836E2274;
	// addi r30,r18,632
	ctx.r30.s64 = ctx.r18.s64 + 632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824238b8
	ctx.lr = 0x836E2210;
	sub_824238B8(ctx, base);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,28(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x836e2274
	if (!cr6.lt) goto loc_836E2274;
loc_836E2228:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,2192
	ctx.r10.s64 = ctx.r1.s64 + 2192;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,2192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2192);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e2254
	if (!cr6.eq) goto loc_836E2254;
	// ld r11,2200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2200);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e2258
	goto loc_836E2258;
loc_836E2254:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E2258:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82437de0
	ctx.lr = 0x836E2268;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x836e2228
	if (cr6.lt) goto loc_836E2228;
loc_836E2274:
	// addi r6,r20,-400
	ctx.r6.s64 = ctx.r20.s64 + -400;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,23
	ctx.r7.s64 = 23;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E228C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e22e0
	if (!cr6.eq) goto loc_836E22E0;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1376
	ctx.r10.s64 = ctx.r1.s64 + 1376;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1376(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1376);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e22c4
	if (!cr6.eq) goto loc_836E22C4;
	// ld r11,1384(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1384);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e22dc
	goto loc_836E22DC;
loc_836E22C4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e22d8
	if (!cr6.eq) goto loc_836E22D8;
	// ld r11,1384(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1384);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e22dc
	goto loc_836E22DC;
loc_836E22D8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E22DC:
	// stw r11,648(r18)
	PPC_STORE_U32(ctx.r18.u32 + 648, ctx.r11.u32);
loc_836E22E0:
	// addi r6,r20,-376
	ctx.r6.s64 = ctx.r20.s64 + -376;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E22F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2370
	if (!cr6.eq) goto loc_836E2370;
	// addi r30,r18,656
	ctx.r30.s64 = ctx.r18.s64 + 656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824238b8
	ctx.lr = 0x836E230C;
	sub_824238B8(ctx, base);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,28(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x836e2370
	if (!cr6.lt) goto loc_836E2370;
loc_836E2324:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,2224
	ctx.r10.s64 = ctx.r1.s64 + 2224;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,2224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2224);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e2350
	if (!cr6.eq) goto loc_836E2350;
	// ld r11,2232(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2232);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e2354
	goto loc_836E2354;
loc_836E2350:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E2354:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82437de0
	ctx.lr = 0x836E2364;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x836e2324
	if (cr6.lt) goto loc_836E2324;
loc_836E2370:
	// addi r6,r20,-348
	ctx.r6.s64 = ctx.r20.s64 + -348;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E2388;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e23dc
	if (!cr6.eq) goto loc_836E23DC;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,1328
	ctx.r10.s64 = ctx.r1.s64 + 1328;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1328);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e23c0
	if (!cr6.eq) goto loc_836E23C0;
	// ld r11,1336(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1336);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e23d8
	goto loc_836E23D8;
loc_836E23C0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e23d4
	if (!cr6.eq) goto loc_836E23D4;
	// ld r11,1336(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1336);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e23d8
	goto loc_836E23D8;
loc_836E23D4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E23D8:
	// stw r11,672(r18)
	PPC_STORE_U32(ctx.r18.u32 + 672, ctx.r11.u32);
loc_836E23DC:
	// addi r6,r20,-324
	ctx.r6.s64 = ctx.r20.s64 + -324;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E23F4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e246c
	if (!cr6.eq) goto loc_836E246C;
	// addi r30,r18,680
	ctx.r30.s64 = ctx.r18.s64 + 680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824238b8
	ctx.lr = 0x836E2408;
	sub_824238B8(ctx, base);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,28(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x836e246c
	if (!cr6.lt) goto loc_836E246C;
loc_836E2420:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,2256
	ctx.r10.s64 = ctx.r1.s64 + 2256;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,2256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2256);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e244c
	if (!cr6.eq) goto loc_836E244C;
	// ld r11,2264(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2264);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e2450
	goto loc_836E2450;
loc_836E244C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E2450:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82437de0
	ctx.lr = 0x836E2460;
	sub_82437DE0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x836e2420
	if (cr6.lt) goto loc_836E2420;
loc_836E246C:
	// addi r6,r20,-300
	ctx.r6.s64 = ctx.r20.s64 + -300;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E2484;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2554
	if (!cr6.eq) goto loc_836E2554;
	// addi r29,r18,696
	ctx.r29.s64 = ctx.r18.s64 + 696;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8d2e8
	ctx.lr = 0x836E2498;
	sub_82D8D2E8(ctx, base);
	// lwz r11,24(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r31,28(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x836e2554
	if (!cr6.lt) goto loc_836E2554;
loc_836E24B0:
	// stw r26,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r26.u32);
	// addi r11,r1,2288
	ctx.r11.s64 = ctx.r1.s64 + 2288;
	// stw r27,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r27.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stb r27,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r27.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,2296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2296);
	// lwz r4,2300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2300);
	// bl 0x82472fc0
	ctx.lr = 0x836E24E0;
	sub_82472FC0(ctx, base);
	// lwz r8,548(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836e24f4
	if (!cr6.lt) goto loc_836E24F4;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
loc_836E24F4:
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x824209f8
	ctx.lr = 0x836E24FC;
	sub_824209F8(ctx, base);
	// addi r4,r1,1344
	ctx.r4.s64 = ctx.r1.s64 + 1344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8ffa0
	ctx.lr = 0x836E2508;
	sub_82D8FFA0(ctx, base);
	// lwz r11,1364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e251c
	if (cr6.lt) goto loc_836E251C;
	// lwz r3,1344(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// bl 0x8386d088
	ctx.lr = 0x836E251C;
	sub_8386D088(ctx, base);
loc_836E251C:
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// stw r26,1364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1364, ctx.r26.u32);
	// stw r27,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,1344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1344, ctx.r27.u8);
	// blt cr6,0x836e253c
	if (cr6.lt) goto loc_836E253C;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x82416268
	ctx.lr = 0x836E253C;
	sub_82416268(ctx, base);
loc_836E253C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stw r26,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r26.u32);
	// stw r27,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r27.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r27,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r27.u8);
	// blt cr6,0x836e24b0
	if (cr6.lt) goto loc_836E24B0;
loc_836E2554:
	// addi r6,r20,-288
	ctx.r6.s64 = ctx.r20.s64 + -288;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E256C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2604
	if (!cr6.eq) goto loc_836E2604;
	// stw r26,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r26.u32);
	// addi r11,r1,2320
	ctx.r11.s64 = ctx.r1.s64 + 2320;
	// stw r27,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r27.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stb r27,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2328);
	// lwz r4,2332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2332);
	// bl 0x82472fc0
	ctx.lr = 0x836E25A8;
	sub_82472FC0(ctx, base);
	// lwz r7,612(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e25bc
	if (!cr6.lt) goto loc_836E25BC;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
loc_836E25BC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E25C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e25c0
	if (!cr6.eq) goto loc_836E25C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,712
	ctx.r3.s64 = ctx.r18.s64 + 712;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E25E4;
	sub_824208C8(ctx, base);
	// lwz r10,612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e25f8
	if (cr6.lt) goto loc_836E25F8;
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x82416268
	ctx.lr = 0x836E25F8;
	sub_82416268(ctx, base);
loc_836E25F8:
	// stw r26,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r26.u32);
	// stw r27,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r27.u32);
	// stb r27,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r27.u8);
loc_836E2604:
	// addi r6,r20,-272
	ctx.r6.s64 = ctx.r20.s64 + -272;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E261C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e26b4
	if (!cr6.eq) goto loc_836E26B4;
	// stw r26,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r26.u32);
	// addi r11,r1,2352
	ctx.r11.s64 = ctx.r1.s64 + 2352;
	// stw r27,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r27.u32);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// stb r27,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r27.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2360);
	// lwz r4,2364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2364);
	// bl 0x82472fc0
	ctx.lr = 0x836E2658;
	sub_82472FC0(ctx, base);
	// lwz r7,676(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r4,656(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e266c
	if (!cr6.lt) goto loc_836E266C;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
loc_836E266C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2670:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2670
	if (!cr6.eq) goto loc_836E2670;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r18,740
	ctx.r3.s64 = ctx.r18.s64 + 740;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2694;
	sub_824208C8(ctx, base);
	// lwz r10,676(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e26a8
	if (cr6.lt) goto loc_836E26A8;
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x82416268
	ctx.lr = 0x836E26A8;
	sub_82416268(ctx, base);
loc_836E26A8:
	// stw r26,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r26.u32);
	// stw r27,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r27.u32);
	// stb r27,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r27.u8);
loc_836E26B4:
	// addi r6,r20,-256
	ctx.r6.s64 = ctx.r20.s64 + -256;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E26CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e3334
	if (!cr6.eq) goto loc_836E3334;
	// addi r22,r18,768
	ctx.r22.s64 = ctx.r18.s64 + 768;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x836e0090
	ctx.lr = 0x836E26E0;
	sub_836E0090(ctx, base);
	// lwz r10,24(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// lwz r11,28(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bge cr6,0x836e3320
	if (!cr6.lt) goto loc_836E3320;
loc_836E26FC:
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x824209f8
	ctx.lr = 0x836E2708;
	sub_824209F8(ctx, base);
	// addi r3,r1,2636
	ctx.r3.s64 = ctx.r1.s64 + 2636;
	// bl 0x8362c7e0
	ctx.lr = 0x836E2710;
	sub_8362C7E0(ctx, base);
	// stw r27,1504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1504, ctx.r27.u32);
	// stw r27,1520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1520, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// lwz r5,8(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r4,12(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x836E272C;
	sub_83691BB8(ctx, base);
	// lwz r10,1512(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// lwz r11,1516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1516);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bge cr6,0x836e32e4
	if (!cr6.lt) goto loc_836E32E4;
loc_836E2748:
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// addi r11,r1,2384
	ctx.r11.s64 = ctx.r1.s64 + 2384;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,2392(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2392);
	// lwz r4,2396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2396);
	// bl 0x82472fc0
	ctx.lr = 0x836E2778;
	sub_82472FC0(ctx, base);
	// addi r6,r20,-244
	ctx.r6.s64 = ctx.r20.s64 + -244;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x836E2790;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2828
	if (!cr6.eq) goto loc_836E2828;
	// stw r26,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r26.u32);
	// addi r11,r1,2416
	ctx.r11.s64 = ctx.r1.s64 + 2416;
	// stw r27,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r27.u32);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stb r27,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r27.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2424(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2424);
	// lwz r4,2428(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2428);
	// bl 0x82472fc0
	ctx.lr = 0x836E27CC;
	sub_82472FC0(ctx, base);
	// lwz r7,740(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r4,720(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e27e0
	if (!cr6.lt) goto loc_836E27E0;
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
loc_836E27E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E27E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e27e4
	if (!cr6.eq) goto loc_836E27E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2808;
	sub_824208C8(ctx, base);
	// lwz r10,740(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e281c
	if (cr6.lt) goto loc_836E281C;
	// lwz r3,720(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x82416268
	ctx.lr = 0x836E281C;
	sub_82416268(ctx, base);
loc_836E281C:
	// stw r26,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r26.u32);
	// stw r27,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r27.u32);
	// stb r27,720(r1)
	PPC_STORE_U8(ctx.r1.u32 + 720, ctx.r27.u8);
loc_836E2828:
	// addi r6,r20,-228
	ctx.r6.s64 = ctx.r20.s64 + -228;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x836E2840;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e32b8
	if (!cr6.eq) goto loc_836E32B8;
	// stw r27,1456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1456, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1472, ctx.r27.u32);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836E2864;
	sub_83691BB8(ctx, base);
	// lwz r10,1464(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1464);
	// lwz r11,1468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bge cr6,0x836e329c
	if (!cr6.lt) goto loc_836E329C;
loc_836E2880:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r11,r1,2448
	ctx.r11.s64 = ctx.r1.s64 + 2448;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,2456(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2456);
	// lwz r4,2460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2460);
	// bl 0x82472fc0
	ctx.lr = 0x836E28B0;
	sub_82472FC0(ctx, base);
	// addi r6,r20,-212
	ctx.r6.s64 = ctx.r20.s64 + -212;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E28C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2908
	if (!cr6.eq) goto loc_836E2908;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,2480
	ctx.r10.s64 = ctx.r1.s64 + 2480;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2480(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2480);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e2900
	if (!cr6.eq) goto loc_836E2900;
	// ld r11,2488(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2488);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e2904
	goto loc_836E2904;
loc_836E2900:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E2904:
	// stw r11,2636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2636, ctx.r11.u32);
loc_836E2908:
	// addi r6,r20,-200
	ctx.r6.s64 = ctx.r20.s64 + -200;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E2920;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e29b8
	if (!cr6.eq) goto loc_836E29B8;
	// stw r26,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r26.u32);
	// addi r11,r1,2512
	ctx.r11.s64 = ctx.r1.s64 + 2512;
	// stw r27,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r27.u32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stb r27,784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 784, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,2524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2524);
	// lwz r5,2520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2520);
	// bl 0x82472fc0
	ctx.lr = 0x836E295C;
	sub_82472FC0(ctx, base);
	// lwz r7,804(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r4,784(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e2970
	if (!cr6.lt) goto loc_836E2970;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
loc_836E2970:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2974:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2974
	if (!cr6.eq) goto loc_836E2974;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2998;
	sub_824208C8(ctx, base);
	// lwz r10,804(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e29ac
	if (cr6.lt) goto loc_836E29AC;
	// lwz r3,784(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// bl 0x82416268
	ctx.lr = 0x836E29AC;
	sub_82416268(ctx, base);
loc_836E29AC:
	// stw r26,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r26.u32);
	// stw r27,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r27.u32);
	// stb r27,784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 784, ctx.r27.u8);
loc_836E29B8:
	// addi r6,r20,-192
	ctx.r6.s64 = ctx.r20.s64 + -192;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E29D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2a68
	if (!cr6.eq) goto loc_836E2A68;
	// stw r26,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r26.u32);
	// addi r11,r1,2544
	ctx.r11.s64 = ctx.r1.s64 + 2544;
	// stw r27,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r27.u32);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// stb r27,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2552(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2552);
	// lwz r4,2556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2556);
	// bl 0x82472fc0
	ctx.lr = 0x836E2A0C;
	sub_82472FC0(ctx, base);
	// lwz r7,868(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// lwz r4,848(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e2a20
	if (!cr6.lt) goto loc_836E2A20;
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
loc_836E2A20:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2A24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2a24
	if (!cr6.eq) goto loc_836E2A24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2668
	ctx.r3.s64 = ctx.r1.s64 + 2668;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2A48;
	sub_824208C8(ctx, base);
	// lwz r10,868(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e2a5c
	if (cr6.lt) goto loc_836E2A5C;
	// lwz r3,848(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// bl 0x82416268
	ctx.lr = 0x836E2A5C;
	sub_82416268(ctx, base);
loc_836E2A5C:
	// stw r26,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r26.u32);
	// stw r27,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r27.u32);
	// stb r27,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, ctx.r27.u8);
loc_836E2A68:
	// addi r6,r20,-184
	ctx.r6.s64 = ctx.r20.s64 + -184;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E2A80;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2b18
	if (!cr6.eq) goto loc_836E2B18;
	// stw r26,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r26.u32);
	// addi r11,r1,1632
	ctx.r11.s64 = ctx.r1.s64 + 1632;
	// stw r27,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r27.u32);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// stb r27,912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 912, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1640(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1640);
	// lwz r4,1644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1644);
	// bl 0x82472fc0
	ctx.lr = 0x836E2ABC;
	sub_82472FC0(ctx, base);
	// lwz r7,932(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// lwz r4,912(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e2ad0
	if (!cr6.lt) goto loc_836E2AD0;
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
loc_836E2AD0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2AD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2ad4
	if (!cr6.eq) goto loc_836E2AD4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2696
	ctx.r3.s64 = ctx.r1.s64 + 2696;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2AF8;
	sub_824208C8(ctx, base);
	// lwz r10,932(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e2b0c
	if (cr6.lt) goto loc_836E2B0C;
	// lwz r3,912(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// bl 0x82416268
	ctx.lr = 0x836E2B0C;
	sub_82416268(ctx, base);
loc_836E2B0C:
	// stw r26,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r26.u32);
	// stw r27,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r27.u32);
	// stb r27,912(r1)
	PPC_STORE_U8(ctx.r1.u32 + 912, ctx.r27.u8);
loc_836E2B18:
	// addi r6,r20,-176
	ctx.r6.s64 = ctx.r20.s64 + -176;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E2B30;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2b70
	if (!cr6.eq) goto loc_836E2B70;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1664
	ctx.r10.s64 = ctx.r1.s64 + 1664;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1664(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1664);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e2b68
	if (!cr6.eq) goto loc_836E2B68;
	// ld r11,1672(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1672);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e2b6c
	goto loc_836E2B6C;
loc_836E2B68:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E2B6C:
	// stw r11,2724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2724, ctx.r11.u32);
loc_836E2B70:
	// addi r6,r20,-164
	ctx.r6.s64 = ctx.r20.s64 + -164;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E2B88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2bc8
	if (!cr6.eq) goto loc_836E2BC8;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,2144
	ctx.r10.s64 = ctx.r1.s64 + 2144;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2144);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e2bc0
	if (!cr6.eq) goto loc_836E2BC0;
	// ld r11,2152(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2152);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e2bc4
	goto loc_836E2BC4;
loc_836E2BC0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E2BC4:
	// stw r11,2728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2728, ctx.r11.u32);
loc_836E2BC8:
	// addi r6,r20,-156
	ctx.r6.s64 = ctx.r20.s64 + -156;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E2BE0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2c78
	if (!cr6.eq) goto loc_836E2C78;
	// stw r26,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r26.u32);
	// addi r11,r1,1696
	ctx.r11.s64 = ctx.r1.s64 + 1696;
	// stw r27,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r27.u32);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// stb r27,976(r1)
	PPC_STORE_U8(ctx.r1.u32 + 976, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1704(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1704);
	// lwz r4,1708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1708);
	// bl 0x82472fc0
	ctx.lr = 0x836E2C1C;
	sub_82472FC0(ctx, base);
	// lwz r7,996(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// lwz r4,976(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e2c30
	if (!cr6.lt) goto loc_836E2C30;
	// addi r4,r1,976
	ctx.r4.s64 = ctx.r1.s64 + 976;
loc_836E2C30:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2C34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2c34
	if (!cr6.eq) goto loc_836E2C34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2732
	ctx.r3.s64 = ctx.r1.s64 + 2732;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2C58;
	sub_824208C8(ctx, base);
	// lwz r10,996(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e2c6c
	if (cr6.lt) goto loc_836E2C6C;
	// lwz r3,976(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// bl 0x82416268
	ctx.lr = 0x836E2C6C;
	sub_82416268(ctx, base);
loc_836E2C6C:
	// stw r26,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r26.u32);
	// stw r27,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r27.u32);
	// stb r27,976(r1)
	PPC_STORE_U8(ctx.r1.u32 + 976, ctx.r27.u8);
loc_836E2C78:
	// addi r6,r20,-148
	ctx.r6.s64 = ctx.r20.s64 + -148;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E2C90;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2cd0
	if (!cr6.eq) goto loc_836E2CD0;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,2496
	ctx.r10.s64 = ctx.r1.s64 + 2496;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2496(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2496);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e2cc8
	if (!cr6.eq) goto loc_836E2CC8;
	// ld r11,2504(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2504);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e2ccc
	goto loc_836E2CCC;
loc_836E2CC8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E2CCC:
	// stw r11,2760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2760, ctx.r11.u32);
loc_836E2CD0:
	// addi r6,r20,-132
	ctx.r6.s64 = ctx.r20.s64 + -132;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E2CE8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2d28
	if (!cr6.eq) goto loc_836E2D28;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1728
	ctx.r10.s64 = ctx.r1.s64 + 1728;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1728(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1728);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e2d20
	if (!cr6.eq) goto loc_836E2D20;
	// ld r11,1736(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1736);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e2d24
	goto loc_836E2D24;
loc_836E2D20:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E2D24:
	// stw r11,2764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2764, ctx.r11.u32);
loc_836E2D28:
	// addi r6,r20,-116
	ctx.r6.s64 = ctx.r20.s64 + -116;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E2D40;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2dd8
	if (!cr6.eq) goto loc_836E2DD8;
	// stw r26,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r26.u32);
	// addi r11,r1,2176
	ctx.r11.s64 = ctx.r1.s64 + 2176;
	// stw r27,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r27.u32);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// stb r27,1040(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1040, ctx.r27.u8);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,2184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2184);
	// lwz r4,2188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2188);
	// bl 0x82472fc0
	ctx.lr = 0x836E2D7C;
	sub_82472FC0(ctx, base);
	// lwz r7,1060(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// lwz r4,1040(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e2d90
	if (!cr6.lt) goto loc_836E2D90;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
loc_836E2D90:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2D94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2d94
	if (!cr6.eq) goto loc_836E2D94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2DB8;
	sub_824208C8(ctx, base);
	// lwz r10,1060(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e2dcc
	if (cr6.lt) goto loc_836E2DCC;
	// lwz r3,1040(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// bl 0x82416268
	ctx.lr = 0x836E2DCC;
	sub_82416268(ctx, base);
loc_836E2DCC:
	// stw r26,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r26.u32);
	// stw r27,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r27.u32);
	// stb r27,1040(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1040, ctx.r27.u8);
loc_836E2DD8:
	// addi r6,r20,-100
	ctx.r6.s64 = ctx.r20.s64 + -100;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E2DF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e3110
	if (!cr6.eq) goto loc_836E3110;
	// stw r27,1408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1408, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,1424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1424, ctx.r27.u32);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836E2E14;
	sub_83691BB8(ctx, base);
	// lwz r10,1416(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1416);
	// lwz r11,1420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1420);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836e30f4
	if (!cr6.lt) goto loc_836E30F4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_836E2E40:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// addi r11,r1,1760
	ctx.r11.s64 = ctx.r1.s64 + 1760;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1768(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1768);
	// lwz r4,1772(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1772);
	// bl 0x82472fc0
	ctx.lr = 0x836E2E74;
	sub_82472FC0(ctx, base);
	// addi r6,r20,-92
	ctx.r6.s64 = ctx.r20.s64 + -92;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836E2E8C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2f20
	if (!cr6.eq) goto loc_836E2F20;
	// stw r26,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r26.u32);
	// addi r11,r1,2400
	ctx.r11.s64 = ctx.r1.s64 + 2400;
	// stw r27,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r27.u32);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// stb r27,1104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1104, ctx.r27.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,2408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2408);
	// lwz r4,2412(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2412);
	// bl 0x82472fc0
	ctx.lr = 0x836E2EC4;
	sub_82472FC0(ctx, base);
	// lwz r8,1124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1124);
	// lwz r4,1104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836e2ed8
	if (!cr6.lt) goto loc_836E2ED8;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
loc_836E2ED8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2EDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2edc
	if (!cr6.eq) goto loc_836E2EDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2796
	ctx.r3.s64 = ctx.r1.s64 + 2796;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2F00;
	sub_824208C8(ctx, base);
	// lwz r10,1124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1124);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e2f14
	if (cr6.lt) goto loc_836E2F14;
	// lwz r3,1104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// bl 0x82416268
	ctx.lr = 0x836E2F14;
	sub_82416268(ctx, base);
loc_836E2F14:
	// stw r26,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r26.u32);
	// stw r27,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r27.u32);
	// stb r27,1104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1104, ctx.r27.u8);
loc_836E2F20:
	// addi r6,r20,-80
	ctx.r6.s64 = ctx.r20.s64 + -80;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836E2F38;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e2fcc
	if (!cr6.eq) goto loc_836E2FCC;
	// stw r26,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r26.u32);
	// addi r11,r1,1792
	ctx.r11.s64 = ctx.r1.s64 + 1792;
	// stw r27,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r27.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stb r27,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r27.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1800(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1800);
	// lwz r4,1804(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1804);
	// bl 0x82472fc0
	ctx.lr = 0x836E2F70;
	sub_82472FC0(ctx, base);
	// lwz r8,772(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r4,752(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836e2f84
	if (!cr6.lt) goto loc_836E2F84;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
loc_836E2F84:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E2F88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e2f88
	if (!cr6.eq) goto loc_836E2F88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,2824
	ctx.r3.s64 = ctx.r1.s64 + 2824;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E2FAC;
	sub_824208C8(ctx, base);
	// lwz r10,772(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e2fc0
	if (cr6.lt) goto loc_836E2FC0;
	// lwz r3,752(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// bl 0x82416268
	ctx.lr = 0x836E2FC0;
	sub_82416268(ctx, base);
loc_836E2FC0:
	// stw r26,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r26.u32);
	// stw r27,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r27.u32);
	// stb r27,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, ctx.r27.u8);
loc_836E2FCC:
	// addi r6,r20,-64
	ctx.r6.s64 = ctx.r20.s64 + -64;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836E2FE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e3020
	if (!cr6.eq) goto loc_836E3020;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,2208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2208);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e3018
	if (!cr6.eq) goto loc_836E3018;
	// ld r11,2216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e301c
	goto loc_836E301C;
loc_836E3018:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E301C:
	// stw r11,2852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2852, ctx.r11.u32);
loc_836E3020:
	// addi r6,r20,-48
	ctx.r6.s64 = ctx.r20.s64 + -48;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836E3038;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e3074
	if (!cr6.eq) goto loc_836E3074;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1824
	ctx.r10.s64 = ctx.r1.s64 + 1824;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1824(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1824);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e306c
	if (!cr6.eq) goto loc_836E306C;
	// ld r11,1832(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1832);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e3070
	goto loc_836E3070;
loc_836E306C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E3070:
	// stw r11,2856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2856, ctx.r11.u32);
loc_836E3074:
	// addi r6,r20,-40
	ctx.r6.s64 = ctx.r20.s64 + -40;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836E308C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e30c8
	if (!cr6.eq) goto loc_836E30C8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,2560
	ctx.r10.s64 = ctx.r1.s64 + 2560;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,2560(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2560);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e30c0
	if (!cr6.eq) goto loc_836E30C0;
	// ld r11,2568(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2568);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e30c4
	goto loc_836E30C4;
loc_836E30C0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E30C4:
	// stw r11,2860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2860, ctx.r11.u32);
loc_836E30C8:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e30dc
	if (cr6.lt) goto loc_836E30DC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836E30DC;
	sub_82416268(ctx, base);
loc_836E30DC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// bne 0x836e2e40
	if (!cr0.eq) goto loc_836E2E40;
loc_836E30F4:
	// lwz r31,1424(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1424);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836e3110
	if (cr6.eq) goto loc_836E3110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836E3108;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836E3110;
	sub_82416268(ctx, base);
loc_836E3110:
	// addi r6,r20,-24
	ctx.r6.s64 = ctx.r20.s64 + -24;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E3128;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e3168
	if (!cr6.eq) goto loc_836E3168;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1856
	ctx.r10.s64 = ctx.r1.s64 + 1856;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1856(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1856);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e3160
	if (!cr6.eq) goto loc_836E3160;
	// ld r11,1864(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1864);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e3164
	goto loc_836E3164;
loc_836E3160:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E3164:
	// stw r11,2864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2864, ctx.r11.u32);
loc_836E3168:
	// addi r6,r20,-16
	ctx.r6.s64 = ctx.r20.s64 + -16;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E3180;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e31c0
	if (!cr6.eq) goto loc_836E31C0;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,2240
	ctx.r10.s64 = ctx.r1.s64 + 2240;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2240(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2240);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e31b8
	if (!cr6.eq) goto loc_836E31B8;
	// ld r11,2248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e31bc
	goto loc_836E31BC;
loc_836E31B8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E31BC:
	// stw r11,2868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2868, ctx.r11.u32);
loc_836E31C0:
	// addi r6,r20,-8
	ctx.r6.s64 = ctx.r20.s64 + -8;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E31D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e3218
	if (!cr6.eq) goto loc_836E3218;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,1888
	ctx.r10.s64 = ctx.r1.s64 + 1888;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1888(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1888);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e3210
	if (!cr6.eq) goto loc_836E3210;
	// ld r11,1896(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1896);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e3214
	goto loc_836E3214;
loc_836E3210:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E3214:
	// stw r11,2872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2872, ctx.r11.u32);
loc_836E3218:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E3230;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e3270
	if (!cr6.eq) goto loc_836E3270;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r10,r1,2432
	ctx.r10.s64 = ctx.r1.s64 + 2432;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,2432(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2432);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e3268
	if (!cr6.eq) goto loc_836E3268;
	// ld r11,2440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2440);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e326c
	goto loc_836E326C;
loc_836E3268:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_836E326C:
	// stw r11,2876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2876, ctx.r11.u32);
loc_836E3270:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e3284
	if (cr6.lt) goto loc_836E3284;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836E3284;
	sub_82416268(ctx, base);
loc_836E3284:
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// blt cr6,0x836e2880
	if (cr6.lt) goto loc_836E2880;
loc_836E329C:
	// lwz r31,1472(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1472);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836e32b8
	if (cr6.eq) goto loc_836E32B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836E32B0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836E32B8;
	sub_82416268(ctx, base);
loc_836E32B8:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e32cc
	if (cr6.lt) goto loc_836E32CC;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836E32CC;
	sub_82416268(ctx, base);
loc_836E32CC:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
	// blt cr6,0x836e2748
	if (cr6.lt) goto loc_836E2748;
loc_836E32E4:
	// addi r4,r1,2608
	ctx.r4.s64 = ctx.r1.s64 + 2608;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x836e0af8
	ctx.lr = 0x836E32F0;
	sub_836E0AF8(ctx, base);
	// lwz r31,1520(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1520);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836e330c
	if (cr6.eq) goto loc_836E330C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836E3304;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836E330C;
	sub_82416268(ctx, base);
loc_836E330C:
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x836e0110
	ctx.lr = 0x836E3314;
	sub_836E0110(ctx, base);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, xer);
	// blt cr6,0x836e26fc
	if (cr6.lt) goto loc_836E26FC;
loc_836E3320:
	// lis r11,11
	ctx.r11.s64 = 720896;
	// lwz r24,196(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r23,140(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r22,-1
	ctx.r22.s64 = -1;
	// ori r25,r11,1
	ctx.r25.u64 = ctx.r11.u64 | 1;
loc_836E3334:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e3348
	if (cr6.lt) goto loc_836E3348;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836E3348;
	sub_82416268(ctx, base);
loc_836E3348:
	// addi r19,r19,32
	ctx.r19.s64 = ctx.r19.s64 + 32;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplw cr6,r19,r24
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r24.u32, xer);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// blt cr6,0x836e0e54
	if (cr6.lt) goto loc_836E0E54;
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_836E3364:
	// lwz r31,1568(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1568);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836e3380
	if (cr6.eq) goto loc_836E3380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836E3378;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836E3380;
	sub_82416268(ctx, base);
loc_836E3380:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x824707c8
	ctx.lr = 0x836E3388;
	sub_824707C8(ctx, base);
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// cmplw cr6,r23,r30
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, xer);
	// blt cr6,0x836e0c10
	if (cr6.lt) goto loc_836E0C10;
loc_836E3398:
	// lwz r31,1616(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836e33b4
	if (cr6.eq) goto loc_836E33B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836E33AC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836E33B4;
	sub_82416268(ctx, base);
loc_836E33B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3040
	ctx.r1.s64 = ctx.r1.s64 + 3040;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E33C0"))) PPC_WEAK_FUNC(sub_836E33C0);
PPC_FUNC_IMPL(__imp__sub_836E33C0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82420558
	ctx.lr = 0x836E33F0;
	sub_82420558(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x8362cb88
	ctx.lr = 0x836E33FC;
	sub_8362CB88(ctx, base);
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

__attribute__((alias("__imp__sub_836E3414"))) PPC_WEAK_FUNC(sub_836E3414);
PPC_FUNC_IMPL(__imp__sub_836E3414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E3418"))) PPC_WEAK_FUNC(sub_836E3418);
PPC_FUNC_IMPL(__imp__sub_836E3418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836E3420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836E342C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,20784
	ctx.r29.s64 = ctx.r11.s64 + 20784;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836E3444;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,21988
	ctx.r7.s64 = ctx.r10.s64 + 21988;
	// addi r5,r8,21972
	ctx.r5.s64 = ctx.r8.s64 + 21972;
	// addi r6,r9,21976
	ctx.r6.s64 = ctx.r9.s64 + 21976;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E348C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E34A8;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E34B8"))) PPC_WEAK_FUNC(sub_836E34B8);
PPC_FUNC_IMPL(__imp__sub_836E34B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836e3560
	sub_836E3560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E34C0"))) PPC_WEAK_FUNC(sub_836E34C0);
PPC_FUNC_IMPL(__imp__sub_836E34C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836e3560
	sub_836E3560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E34C8"))) PPC_WEAK_FUNC(sub_836E34C8);
PPC_FUNC_IMPL(__imp__sub_836E34C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E34D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,21988
	ctx.r8.s64 = ctx.r11.s64 + 21988;
	// addi r7,r10,21976
	ctx.r7.s64 = ctx.r10.s64 + 21976;
	// addi r6,r9,21972
	ctx.r6.s64 = ctx.r9.s64 + 21972;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836e3514
	if (cr6.lt) goto loc_836E3514;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E3514;
	sub_8386D088(ctx, base);
loc_836E3514:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e3540
	if (cr6.lt) goto loc_836E3540;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E3540;
	sub_8386D088(ctx, base);
loc_836E3540:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836E3554;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E355C"))) PPC_WEAK_FUNC(sub_836E355C);
PPC_FUNC_IMPL(__imp__sub_836E355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E3560"))) PPC_WEAK_FUNC(sub_836E3560);
PPC_FUNC_IMPL(__imp__sub_836E3560) {
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
	// bl 0x836e34c8
	ctx.lr = 0x836E3580;
	sub_836E34C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836e35a0
	if (cr6.eq) goto loc_836E35A0;
	// bl 0x82595188
	ctx.lr = 0x836E3590;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836E35A0;
	sub_825952B8(ctx, base);
loc_836E35A0:
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

__attribute__((alias("__imp__sub_836E35BC"))) PPC_WEAK_FUNC(sub_836E35BC);
PPC_FUNC_IMPL(__imp__sub_836E35BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E35C0"))) PPC_WEAK_FUNC(sub_836E35C0);
PPC_FUNC_IMPL(__imp__sub_836E35C0) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836E35D8;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,20784
	ctx.r4.s64 = ctx.r11.s64 + 20784;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x824208c8
	ctx.lr = 0x836E35EC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r6,r10,22024
	ctx.r6.s64 = ctx.r10.s64 + 22024;
	// addi r5,r9,22012
	ctx.r5.s64 = ctx.r9.s64 + 22012;
	// addi r4,r8,22008
	ctx.r4.s64 = ctx.r8.s64 + 22008;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r11,r7,22004
	ctx.r11.s64 = ctx.r7.s64 + 22004;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// bl 0x836e0428
	ctx.lr = 0x836E3624;
	sub_836E0428(ctx, base);
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

__attribute__((alias("__imp__sub_836E363C"))) PPC_WEAK_FUNC(sub_836E363C);
PPC_FUNC_IMPL(__imp__sub_836E363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E3640"))) PPC_WEAK_FUNC(sub_836E3640);
PPC_FUNC_IMPL(__imp__sub_836E3640) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836e3658
	sub_836E3658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E3648"))) PPC_WEAK_FUNC(sub_836E3648);
PPC_FUNC_IMPL(__imp__sub_836E3648) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836e3658
	sub_836E3658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E3650"))) PPC_WEAK_FUNC(sub_836E3650);
PPC_FUNC_IMPL(__imp__sub_836E3650) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836e3658
	sub_836E3658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E3658"))) PPC_WEAK_FUNC(sub_836E3658);
PPC_FUNC_IMPL(__imp__sub_836E3658) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,22024
	ctx.r7.s64 = ctx.r11.s64 + 22024;
	// addi r6,r10,22012
	ctx.r6.s64 = ctx.r10.s64 + 22012;
	// addi r5,r9,22008
	ctx.r5.s64 = ctx.r9.s64 + 22008;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,22004
	ctx.r4.s64 = ctx.r8.s64 + 22004;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836e0168
	ctx.lr = 0x836E36AC;
	sub_836E0168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836E36B4;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836e36d4
	if (cr6.eq) goto loc_836E36D4;
	// bl 0x82595188
	ctx.lr = 0x836E36C4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836E36D4;
	sub_825952B8(ctx, base);
loc_836E36D4:
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

__attribute__((alias("__imp__sub_836E36F0"))) PPC_WEAK_FUNC(sub_836E36F0);
PPC_FUNC_IMPL(__imp__sub_836E36F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836e375c
	if (!cr6.gt) goto loc_836E375C;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,22852
	ctx.r8.s64 = ctx.r10.s64 + 22852;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,336
	ctx.r6.s64 = 336;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x836E374C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_836E375C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836E3770"))) PPC_WEAK_FUNC(sub_836E3770);
PPC_FUNC_IMPL(__imp__sub_836E3770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836E3778;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,22852
	ctx.r10.s64 = ctx.r11.s64 + 22852;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,336
	ctx.r8.s64 = 336;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x836E37BC;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836e37e4
	if (cr6.eq) goto loc_836E37E4;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836E37DC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836E37E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E37EC"))) PPC_WEAK_FUNC(sub_836E37EC);
PPC_FUNC_IMPL(__imp__sub_836E37EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E37F0"))) PPC_WEAK_FUNC(sub_836E37F0);
PPC_FUNC_IMPL(__imp__sub_836E37F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E37F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r3,308
	ctx.r28.s64 = ctx.r3.s64 + 308;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e3818
	if (cr6.lt) goto loc_836E3818;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E3818;
	sub_8386D088(ctx, base);
loc_836E3818:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r27,r30,280
	ctx.r27.s64 = ctx.r30.s64 + 280;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e3844
	if (cr6.lt) goto loc_836E3844;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E3844;
	sub_8386D088(ctx, base);
loc_836E3844:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,252
	ctx.r28.s64 = ctx.r30.s64 + 252;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e3868
	if (cr6.lt) goto loc_836E3868;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E3868;
	sub_8386D088(ctx, base);
loc_836E3868:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,220
	ctx.r27.s64 = ctx.r30.s64 + 220;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e388c
	if (cr6.lt) goto loc_836E388C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E388C;
	sub_8386D088(ctx, base);
loc_836E388C:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e38b0
	if (cr6.lt) goto loc_836E38B0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E38B0;
	sub_8386D088(ctx, base);
loc_836E38B0:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r3,r30,152
	ctx.r3.s64 = ctx.r30.s64 + 152;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82d8d2e8
	ctx.lr = 0x836E38C4;
	sub_82D8D2E8(ctx, base);
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// bl 0x82d8d2e8
	ctx.lr = 0x836E38CC;
	sub_82D8D2E8(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r27,r30,108
	ctx.r27.s64 = ctx.r30.s64 + 108;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e38e4
	if (cr6.lt) goto loc_836E38E4;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E38E4;
	sub_8386D088(ctx, base);
loc_836E38E4:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,80
	ctx.r28.s64 = ctx.r30.s64 + 80;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e3908
	if (cr6.lt) goto loc_836E3908;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E3908;
	sub_8386D088(ctx, base);
loc_836E3908:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e392c
	if (cr6.lt) goto loc_836E392C;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E392C;
	sub_8386D088(ctx, base);
loc_836E392C:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e394c
	if (cr6.lt) goto loc_836E394C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E394C;
	sub_8386D088(ctx, base);
loc_836E394C:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E3960"))) PPC_WEAK_FUNC(sub_836E3960);
PPC_FUNC_IMPL(__imp__sub_836E3960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E3968;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x836E3998;
	sub_82420558(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stb r29,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r29.u8);
	// bl 0x82420558
	ctx.lr = 0x836E39E8;
	sub_82420558(ctx, base);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// bl 0x82420558
	ctx.lr = 0x836E3A08;
	sub_82420558(ctx, base);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// bl 0x82420558
	ctx.lr = 0x836E3A28;
	sub_82420558(ctx, base);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// std r29,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r29.u64);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// bl 0x82e0b168
	ctx.lr = 0x836E3A40;
	sub_82E0B168(ctx, base);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// std r29,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r29.u64);
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// bl 0x82e0b168
	ctx.lr = 0x836E3A58;
	sub_82E0B168(ctx, base);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lwz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// lwz r8,176(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// lwz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// stw r27,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r27.u32);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// stb r29,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r29.u8);
	// bl 0x82420558
	ctx.lr = 0x836E3A98;
	sub_82420558(ctx, base);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r27,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
	// stb r29,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r29.u8);
	// bl 0x82420558
	ctx.lr = 0x836E3AC8;
	sub_82420558(ctx, base);
	// lwz r9,248(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,252
	ctx.r4.s64 = ctx.r30.s64 + 252;
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// stw r27,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r27.u32);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// stb r29,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r29.u8);
	// bl 0x82420558
	ctx.lr = 0x836E3AF0;
	sub_82420558(ctx, base);
	// stw r27,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r27.u32);
	// stw r29,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stb r29,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,280
	ctx.r4.s64 = ctx.r30.s64 + 280;
	// bl 0x82420558
	ctx.lr = 0x836E3B10;
	sub_82420558(ctx, base);
	// stw r27,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r27.u32);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// stb r29,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,308
	ctx.r4.s64 = ctx.r30.s64 + 308;
	// bl 0x82420558
	ctx.lr = 0x836E3B30;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E3B3C"))) PPC_WEAK_FUNC(sub_836E3B3C);
PPC_FUNC_IMPL(__imp__sub_836E3B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E3B40"))) PPC_WEAK_FUNC(sub_836E3B40);
PPC_FUNC_IMPL(__imp__sub_836E3B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x836e3b54
	if (cr6.eq) goto loc_836E3B54;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x836e3960
	sub_836E3960(ctx, base);
	return;
loc_836E3B54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836E3B5C"))) PPC_WEAK_FUNC(sub_836E3B5C);
PPC_FUNC_IMPL(__imp__sub_836E3B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E3B60"))) PPC_WEAK_FUNC(sub_836E3B60);
PPC_FUNC_IMPL(__imp__sub_836E3B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836e3ba0
	if (cr6.lt) goto loc_836E3BA0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x836e36f0
	ctx.lr = 0x836E3B94;
	sub_836E36F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836e3bc8
	if (cr6.eq) goto loc_836E3BC8;
loc_836E3BA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,336
	ctx.r11.s64 = ctx.r11.s64 * 336;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x836e3bbc
	if (cr0.eq) goto loc_836E3BBC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x836e3960
	ctx.lr = 0x836E3BBC;
	sub_836E3960(ctx, base);
loc_836E3BBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836E3BC8:
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

__attribute__((alias("__imp__sub_836E3BE4"))) PPC_WEAK_FUNC(sub_836E3BE4);
PPC_FUNC_IMPL(__imp__sub_836E3BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E3BE8"))) PPC_WEAK_FUNC(sub_836E3BE8);
PPC_FUNC_IMPL(__imp__sub_836E3BE8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x836e37f0
	sub_836E37F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E3BF0"))) PPC_WEAK_FUNC(sub_836E3BF0);
PPC_FUNC_IMPL(__imp__sub_836E3BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836E3BF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82420558
	ctx.lr = 0x836E3C14;
	sub_82420558(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82420558
	ctx.lr = 0x836E3C58;
	sub_82420558(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// bl 0x82420558
	ctx.lr = 0x836E3C6C;
	sub_82420558(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// bl 0x82420558
	ctx.lr = 0x836E3C80;
	sub_82420558(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// bl 0x82e0b168
	ctx.lr = 0x836E3C8C;
	sub_82E0B168(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// bl 0x82e0b168
	ctx.lr = 0x836E3C98;
	sub_82E0B168(ctx, base);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lwz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// lwz r8,176(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// lwz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// bl 0x82420558
	ctx.lr = 0x836E3CCC;
	sub_82420558(ctx, base);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// bl 0x82420558
	ctx.lr = 0x836E3CF0;
	sub_82420558(ctx, base);
	// lwz r9,248(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,252
	ctx.r4.s64 = ctx.r30.s64 + 252;
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// bl 0x82420558
	ctx.lr = 0x836E3D0C;
	sub_82420558(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,280
	ctx.r4.s64 = ctx.r30.s64 + 280;
	// bl 0x82420558
	ctx.lr = 0x836E3D20;
	sub_82420558(ctx, base);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,308
	ctx.r4.s64 = ctx.r30.s64 + 308;
	// bl 0x82420558
	ctx.lr = 0x836E3D34;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E3D40"))) PPC_WEAK_FUNC(sub_836E3D40);
PPC_FUNC_IMPL(__imp__sub_836E3D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836E3D48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x836E3D78;
	sub_824208C8(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836E3DAC;
	sub_824208C8(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E3DC8;
	sub_824208C8(ctx, base);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E3DE4;
	sub_824208C8(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// std r30,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r30.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d8c9b0
	ctx.lr = 0x836E3DFC;
	sub_82D8C9B0(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// std r30,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r30.u64);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82d8c9b0
	ctx.lr = 0x836E3E14;
	sub_82D8C9B0(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836E3E40;
	sub_824208C8(ctx, base);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836E3E64;
	sub_824208C8(ctx, base);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E3E84;
	sub_824208C8(ctx, base);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stb r30,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E3EA0;
	sub_824208C8(ctx, base);
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E3EBC;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E3EC8"))) PPC_WEAK_FUNC(sub_836E3EC8);
PPC_FUNC_IMPL(__imp__sub_836E3EC8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x836e3bf0
	sub_836E3BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E3ED4"))) PPC_WEAK_FUNC(sub_836E3ED4);
PPC_FUNC_IMPL(__imp__sub_836E3ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E3ED8"))) PPC_WEAK_FUNC(sub_836E3ED8);
PPC_FUNC_IMPL(__imp__sub_836E3ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E3EE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,135
	ctx.r11.s64 = 135;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x836e3f20
	if (!cr6.lt) goto loc_836E3F20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836E3F20;
	sub_82E745E0(ctx, base);
loc_836E3F20:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,22248
	ctx.r27.s64 = ctx.r11.s64 + 22248;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E3F68;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E3F74;
	sub_82E74C08(ctx, base);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836e3f88
	if (cr6.lt) goto loc_836E3F88;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836E3F88;
	sub_82416268(ctx, base);
loc_836E3F88:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x836e3fa8
	if (cr6.lt) goto loc_836E3FA8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E3FA8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_836E3FB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e3fb8
	if (!cr6.eq) goto loc_836E3FB8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E3FDC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E3FE8;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e3ffc
	if (cr6.lt) goto loc_836E3FFC;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836E3FFC;
	sub_82416268(ctx, base);
loc_836E3FFC:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E4024;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E4030;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e4044
	if (cr6.lt) goto loc_836E4044;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836E4044;
	sub_82416268(ctx, base);
loc_836E4044:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836E405C;
	sub_82E746C0(ctx, base);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82472fc0
	ctx.lr = 0x836E4078;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E4084;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e4098
	if (cr6.lt) goto loc_836E4098;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836E4098;
	sub_82416268(ctx, base);
loc_836E4098:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x836e40b8
	if (cr6.lt) goto loc_836E40B8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E40B8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836E40C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e40c8
	if (!cr6.eq) goto loc_836E40C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E40EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E40F8;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e410c
	if (cr6.lt) goto loc_836E410C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836E410C;
	sub_82416268(ctx, base);
loc_836E410C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E4134;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E4140;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e4154
	if (cr6.lt) goto loc_836E4154;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836E4154;
	sub_82416268(ctx, base);
loc_836E4154:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x836e4174
	if (cr6.lt) goto loc_836E4174;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E4174:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836E4184:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e4184
	if (!cr6.eq) goto loc_836E4184;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E41A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E41B4;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e41c8
	if (cr6.lt) goto loc_836E41C8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836E41C8;
	sub_82416268(ctx, base);
loc_836E41C8:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E41F0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E41FC;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e4210
	if (cr6.lt) goto loc_836E4210;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836E4210;
	sub_82416268(ctx, base);
loc_836E4210:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x836e4230
	if (cr6.lt) goto loc_836E4230;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E4230:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_836E4240:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e4240
	if (!cr6.eq) goto loc_836E4240;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E4264;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E4270;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e4284
	if (cr6.lt) goto loc_836E4284;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836E4284;
	sub_82416268(ctx, base);
loc_836E4284:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E42AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E42B8;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e42cc
	if (cr6.lt) goto loc_836E42CC;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836E42CC;
	sub_82416268(ctx, base);
loc_836E42CC:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// addi r4,r28,200
	ctx.r4.s64 = ctx.r28.s64 + 200;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836e42ec
	if (cr6.lt) goto loc_836E42EC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E42EC:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_836E42FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e42fc
	if (!cr6.eq) goto loc_836E42FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E4320;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E432C;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e4340
	if (cr6.lt) goto loc_836E4340;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836E4340;
	sub_82416268(ctx, base);
loc_836E4340:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E4368;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E4374;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e4388
	if (cr6.lt) goto loc_836E4388;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836E4388;
	sub_82416268(ctx, base);
loc_836E4388:
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r4,r28,228
	ctx.r4.s64 = ctx.r28.s64 + 228;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// blt cr6,0x836e43a8
	if (cr6.lt) goto loc_836E43A8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E43A8:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_836E43B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e43b8
	if (!cr6.eq) goto loc_836E43B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E43DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E43E8;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e43fc
	if (cr6.lt) goto loc_836E43FC;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x836E43FC;
	sub_82416268(ctx, base);
loc_836E43FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E4408"))) PPC_WEAK_FUNC(sub_836E4408);
PPC_FUNC_IMPL(__imp__sub_836E4408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836E4410;
	__savegprlr_14(ctx, base);
	// stwu r1,-1952(r1)
	ea = -1952 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r29,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r29.u32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x83691bb8
	ctx.lr = 0x836E4438;
	sub_83691BB8(ctx, base);
	// lwz r10,888(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	// lwz r11,892(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bge cr6,0x836e58b4
	if (!cr6.lt) goto loc_836E58B4;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r7,11
	ctx.r7.s64 = 720896;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r8,22852
	ctx.r6.s64 = ctx.r8.s64 + 22852;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r25,8
	ctx.r25.s64 = 8;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// ori r22,r7,1
	ctx.r22.u64 = ctx.r7.u64 | 1;
	// li r23,28
	ctx.r23.s64 = 28;
	// li r18,-1
	ctx.r18.s64 = -1;
	// addi r21,r11,22752
	ctx.r21.s64 = ctx.r11.s64 + 22752;
	// addi r24,r10,27920
	ctx.r24.s64 = ctx.r10.s64 + 27920;
	// addi r26,r9,8980
	ctx.r26.s64 = ctx.r9.s64 + 8980;
loc_836E4494:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r11,r1,1264
	ctx.r11.s64 = ctx.r1.s64 + 1264;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// ld r10,8(r15)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r15.u32 + 8);
	// ld r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1272);
	// lwz r4,1276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
	// bl 0x82472fc0
	ctx.lr = 0x836E44C4;
	sub_82472FC0(ctx, base);
	// addi r6,r21,-460
	ctx.r6.s64 = ctx.r21.s64 + -460;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E44DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4574
	if (!cr6.eq) goto loc_836E4574;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// addi r11,r1,1056
	ctx.r11.s64 = ctx.r1.s64 + 1056;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// ld r8,16(r15)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1068(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r5,1064(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// bl 0x82472fc0
	ctx.lr = 0x836E4518;
	sub_82472FC0(ctx, base);
	// lwz r7,196(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e452c
	if (!cr6.lt) goto loc_836E452C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_836E452C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E4530:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e4530
	if (!cr6.eq) goto loc_836E4530;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,20
	ctx.r3.s64 = ctx.r14.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E4554;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e4568
	if (cr6.lt) goto loc_836E4568;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x836E4568;
	sub_82416268(ctx, base);
loc_836E4568:
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
loc_836E4574:
	// addi r6,r21,-452
	ctx.r6.s64 = ctx.r21.s64 + -452;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E458C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e45cc
	if (!cr6.eq) goto loc_836E45CC;
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// addi r10,r1,1408
	ctx.r10.s64 = ctx.r1.s64 + 1408;
	// ld r11,16(r15)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// addi r8,r15,16
	ctx.r8.s64 = ctx.r15.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1408(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1408);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e45c4
	if (!cr6.eq) goto loc_836E45C4;
	// ld r11,1416(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1416);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e45c8
	goto loc_836E45C8;
loc_836E45C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E45C8:
	// stw r11,48(r14)
	PPC_STORE_U32(ctx.r14.u32 + 48, ctx.r11.u32);
loc_836E45CC:
	// addi r6,r21,-444
	ctx.r6.s64 = ctx.r21.s64 + -444;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E45E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e467c
	if (!cr6.eq) goto loc_836E467C;
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// addi r11,r1,1088
	ctx.r11.s64 = ctx.r1.s64 + 1088;
	// stw r29,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r29,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r29.u8);
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// ld r8,24(r15)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// ld r9,16(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// lwz r5,1096(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1096);
	// bl 0x82472fc0
	ctx.lr = 0x836E4620;
	sub_82472FC0(ctx, base);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e4634
	if (!cr6.lt) goto loc_836E4634;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_836E4634:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E4638:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e4638
	if (!cr6.eq) goto loc_836E4638;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,116
	ctx.r3.s64 = ctx.r14.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E465C;
	sub_824208C8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e4670
	if (cr6.lt) goto loc_836E4670;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x836E4670;
	sub_82416268(ctx, base);
loc_836E4670:
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// stw r29,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// stb r29,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r29.u8);
loc_836E467C:
	// addi r6,r21,-436
	ctx.r6.s64 = ctx.r21.s64 + -436;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E4694;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e472c
	if (!cr6.eq) goto loc_836E472C;
	// stw r29,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r29.u32);
	// addi r11,r1,1280
	ctx.r11.s64 = ctx.r1.s64 + 1280;
	// stb r29,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r29.u8);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r27,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r27.u32);
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// ld r8,16(r15)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,1288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1288);
	// lwz r4,1292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1292);
	// bl 0x82472fc0
	ctx.lr = 0x836E46D0;
	sub_82472FC0(ctx, base);
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e46e4
	if (!cr6.lt) goto loc_836E46E4;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
loc_836E46E4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E46E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e46e8
	if (!cr6.eq) goto loc_836E46E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,148
	ctx.r3.s64 = ctx.r14.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E470C;
	sub_824208C8(ctx, base);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e4720
	if (cr6.lt) goto loc_836E4720;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x836E4720;
	sub_82416268(ctx, base);
loc_836E4720:
	// stw r27,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r27.u32);
	// stw r29,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r29.u32);
	// stb r29,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r29.u8);
loc_836E472C:
	// addi r6,r21,-420
	ctx.r6.s64 = ctx.r21.s64 + -420;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E4744;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e47dc
	if (!cr6.eq) goto loc_836E47DC;
	// stw r29,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r29.u32);
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// stb r29,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r29.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r27,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r27.u32);
	// addi r10,r15,16
	ctx.r10.s64 = ctx.r15.s64 + 16;
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// ld r8,16(r15)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,1128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	// lwz r4,1132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// bl 0x82472fc0
	ctx.lr = 0x836E4780;
	sub_82472FC0(ctx, base);
	// lwz r7,548(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e4794
	if (!cr6.lt) goto loc_836E4794;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
loc_836E4794:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E4798:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e4798
	if (!cr6.eq) goto loc_836E4798;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r14,176
	ctx.r3.s64 = ctx.r14.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E47BC;
	sub_824208C8(ctx, base);
	// lwz r10,548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e47d0
	if (cr6.lt) goto loc_836E47D0;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x82416268
	ctx.lr = 0x836E47D0;
	sub_82416268(ctx, base);
loc_836E47D0:
	// stw r27,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r27.u32);
	// stw r29,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r29.u32);
	// stb r29,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r29.u8);
loc_836E47DC:
	// addi r6,r21,-408
	ctx.r6.s64 = ctx.r21.s64 + -408;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E47F4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4848
	if (!cr6.eq) goto loc_836E4848;
	// ld r11,16(r15)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r15.u32 + 16);
	// addi r10,r1,960
	ctx.r10.s64 = ctx.r1.s64 + 960;
	// ld r9,24(r15)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r15.u32 + 24);
	// addi r8,r15,16
	ctx.r8.s64 = ctx.r15.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,960(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e482c
	if (!cr6.eq) goto loc_836E482C;
	// ld r11,968(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 968);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e4844
	goto loc_836E4844;
loc_836E482C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e4840
	if (!cr6.eq) goto loc_836E4840;
	// ld r11,968(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 968);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e4844
	goto loc_836E4844;
loc_836E4840:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E4844:
	// stw r11,204(r14)
	PPC_STORE_U32(ctx.r14.u32 + 204, ctx.r11.u32);
loc_836E4848:
	// addi r6,r21,-396
	ctx.r6.s64 = ctx.r21.s64 + -396;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836E4860;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e5888
	if (!cr6.eq) goto loc_836E5888;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r17,r14,208
	ctx.r17.s64 = ctx.r14.s64 + 208;
	// li r10,336
	ctx.r10.s64 = 336;
	// stw r25,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r25.u32);
	// addi r31,r17,8
	ctx.r31.s64 = ctx.r17.s64 + 8;
	// stw r17,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r17.u32);
	// addi r30,r17,4
	ctx.r30.s64 = ctx.r17.s64 + 4;
	// stw r10,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r10.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stw r30,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836E48A0;
	sub_8247B7D8(ctx, base);
	// lwz r3,216(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 216);
	// stw r29,208(r14)
	PPC_STORE_U32(ctx.r14.u32 + 208, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836e48c0
	if (cr6.eq) goto loc_836E48C0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8247b268
	ctx.lr = 0x836E48B8;
	sub_8247B268(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_836E48C0:
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// lwz r11,24(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,28(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	// add r16,r10,r11
	ctx.r16.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, xer);
	// bge cr6,0x836e5884
	if (!cr6.lt) goto loc_836E5884;
loc_836E48E0:
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x836e3d40
	ctx.lr = 0x836E48E8;
	sub_836E3D40(ctx, base);
	// stw r29,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r29.u32);
	// stw r29,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// lwz r5,8(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r4,12(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x836E4904;
	sub_83691BB8(ctx, base);
	// lwz r10,936(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r11,940(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bge cr6,0x836e5848
	if (!cr6.lt) goto loc_836E5848;
loc_836E4920:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r11,r1,1376
	ctx.r11.s64 = ctx.r1.s64 + 1376;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r4,1388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1388);
	// lwz r5,1384(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1384);
	// bl 0x82472fc0
	ctx.lr = 0x836E4950;
	sub_82472FC0(ctx, base);
	// addi r6,r21,-384
	ctx.r6.s64 = ctx.r21.s64 + -384;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4968;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4a00
	if (!cr6.eq) goto loc_836E4A00;
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// addi r11,r1,1152
	ctx.r11.s64 = ctx.r1.s64 + 1152;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// lwz r4,1164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1164);
	// bl 0x82472fc0
	ctx.lr = 0x836E49A4;
	sub_82472FC0(ctx, base);
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e49b8
	if (!cr6.lt) goto loc_836E49B8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_836E49B8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E49BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e49bc
	if (!cr6.eq) goto loc_836E49BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E49E0;
	sub_824208C8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e49f4
	if (cr6.lt) goto loc_836E49F4;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836E49F4;
	sub_82416268(ctx, base);
loc_836E49F4:
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
loc_836E4A00:
	// addi r6,r21,-372
	ctx.r6.s64 = ctx.r21.s64 + -372;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4A18;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4a58
	if (!cr6.eq) goto loc_836E4A58;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1312
	ctx.r10.s64 = ctx.r1.s64 + 1312;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1312(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1312);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e4a50
	if (!cr6.eq) goto loc_836E4A50;
	// ld r11,1320(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1320);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e4a54
	goto loc_836E4A54;
loc_836E4A50:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E4A54:
	// stw r11,1484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1484, ctx.r11.u32);
loc_836E4A58:
	// addi r6,r21,-360
	ctx.r6.s64 = ctx.r21.s64 + -360;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4A70;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4ab0
	if (!cr6.eq) goto loc_836E4AB0;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1184
	ctx.r10.s64 = ctx.r1.s64 + 1184;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e4aa8
	if (!cr6.eq) goto loc_836E4AA8;
	// ld r11,1192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1192);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e4aac
	goto loc_836E4AAC;
loc_836E4AA8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E4AAC:
	// stw r11,1488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1488, ctx.r11.u32);
loc_836E4AB0:
	// addi r6,r21,-340
	ctx.r6.s64 = ctx.r21.s64 + -340;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4AC8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4b08
	if (!cr6.eq) goto loc_836E4B08;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1440
	ctx.r10.s64 = ctx.r1.s64 + 1440;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1440(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1440);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e4b00
	if (!cr6.eq) goto loc_836E4B00;
	// ld r11,1448(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1448);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e4b04
	goto loc_836E4B04;
loc_836E4B00:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E4B04:
	// stw r11,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, ctx.r11.u32);
loc_836E4B08:
	// addi r6,r21,-324
	ctx.r6.s64 = ctx.r21.s64 + -324;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4B20;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4b60
	if (!cr6.eq) goto loc_836E4B60;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1216
	ctx.r10.s64 = ctx.r1.s64 + 1216;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1216);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e4b58
	if (!cr6.eq) goto loc_836E4B58;
	// ld r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e4b5c
	goto loc_836E4B5C;
loc_836E4B58:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E4B5C:
	// stw r11,1496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1496, ctx.r11.u32);
loc_836E4B60:
	// addi r6,r21,-304
	ctx.r6.s64 = ctx.r21.s64 + -304;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4B78;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4bb8
	if (!cr6.eq) goto loc_836E4BB8;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1344
	ctx.r10.s64 = ctx.r1.s64 + 1344;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1344(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e4bb0
	if (!cr6.eq) goto loc_836E4BB0;
	// ld r11,1352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1352);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e4bb4
	goto loc_836E4BB4;
loc_836E4BB0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E4BB4:
	// stw r11,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r11.u32);
loc_836E4BB8:
	// addi r6,r21,-288
	ctx.r6.s64 = ctx.r21.s64 + -288;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4BD0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4c10
	if (!cr6.eq) goto loc_836E4C10;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1024
	ctx.r10.s64 = ctx.r1.s64 + 1024;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1024(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e4c08
	if (!cr6.eq) goto loc_836E4C08;
	// ld r11,1032(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1032);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e4c0c
	goto loc_836E4C0C;
loc_836E4C08:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E4C0C:
	// stw r11,1504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1504, ctx.r11.u32);
loc_836E4C10:
	// addi r6,r21,-272
	ctx.r6.s64 = ctx.r21.s64 + -272;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4C28;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4cc0
	if (!cr6.eq) goto loc_836E4CC0;
	// stw r27,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r27.u32);
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// stw r29,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r29.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stb r29,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1048(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// lwz r4,1052(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// bl 0x82472fc0
	ctx.lr = 0x836E4C64;
	sub_82472FC0(ctx, base);
	// lwz r7,484(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e4c78
	if (!cr6.lt) goto loc_836E4C78;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
loc_836E4C78:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E4C7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e4c7c
	if (!cr6.eq) goto loc_836E4C7C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1508
	ctx.r3.s64 = ctx.r1.s64 + 1508;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E4CA0;
	sub_824208C8(ctx, base);
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e4cb4
	if (cr6.lt) goto loc_836E4CB4;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82416268
	ctx.lr = 0x836E4CB4;
	sub_82416268(ctx, base);
loc_836E4CB4:
	// stw r27,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r27.u32);
	// stw r29,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r29.u32);
	// stb r29,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r29.u8);
loc_836E4CC0:
	// addi r6,r21,-260
	ctx.r6.s64 = ctx.r21.s64 + -260;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4CD8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4d70
	if (!cr6.eq) goto loc_836E4D70;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1080(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1080);
	// lwz r4,1084(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// bl 0x82472fc0
	ctx.lr = 0x836E4D14;
	sub_82472FC0(ctx, base);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e4d28
	if (!cr6.lt) goto loc_836E4D28;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_836E4D28:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E4D2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e4d2c
	if (!cr6.eq) goto loc_836E4D2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E4D50;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e4d64
	if (cr6.lt) goto loc_836E4D64;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x836E4D64;
	sub_82416268(ctx, base);
loc_836E4D64:
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
loc_836E4D70:
	// addi r6,r21,-252
	ctx.r6.s64 = ctx.r21.s64 + -252;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4D88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e4e20
	if (!cr6.eq) goto loc_836E4E20;
	// stw r27,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r27.u32);
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1112);
	// lwz r4,1116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1116);
	// bl 0x82472fc0
	ctx.lr = 0x836E4DC4;
	sub_82472FC0(ctx, base);
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e4dd8
	if (!cr6.lt) goto loc_836E4DD8;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_836E4DD8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E4DDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e4ddc
	if (!cr6.eq) goto loc_836E4DDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1564
	ctx.r3.s64 = ctx.r1.s64 + 1564;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E4E00;
	sub_824208C8(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e4e14
	if (cr6.lt) goto loc_836E4E14;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x836E4E14;
	sub_82416268(ctx, base);
loc_836E4E14:
	// stw r27,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r27.u32);
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
loc_836E4E20:
	// addi r6,r21,-240
	ctx.r6.s64 = ctx.r21.s64 + -240;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E4E38;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e5014
	if (!cr6.eq) goto loc_836E5014;
	// addi r11,r1,1600
	ctx.r11.s64 = ctx.r1.s64 + 1600;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r10,r1,1592
	ctx.r10.s64 = ctx.r1.s64 + 1592;
	// stw r25,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r25.u32);
	// addi r9,r1,1596
	ctx.r9.s64 = ctx.r1.s64 + 1596;
	// stw r11,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r11.u32);
	// stw r10,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r9.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// stw r23,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r23.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836E4E70;
	sub_8247B7D8(ctx, base);
	// lwz r3,1600(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	// stw r29,1592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1592, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836e4e90
	if (cr6.eq) goto loc_836E4E90;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8247b268
	ctx.lr = 0x836E4E88;
	sub_8247B268(ctx, base);
	// stw r29,1596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1596, ctx.r29.u32);
	// stw r29,1600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1600, ctx.r29.u32);
loc_836E4E90:
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r31,28(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x836e5014
	if (!cr6.lt) goto loc_836E5014;
loc_836E4EAC:
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// addi r11,r1,1136
	ctx.r11.s64 = ctx.r1.s64 + 1136;
	// stw r29,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r29.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stb r29,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r29.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1144);
	// lwz r4,1148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// bl 0x82472fc0
	ctx.lr = 0x836E4EDC;
	sub_82472FC0(ctx, base);
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836e4ef0
	if (!cr6.lt) goto loc_836E4EF0;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
loc_836E4EF0:
	// stw r27,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r29.u32);
	// stb r29,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r29.u8);
loc_836E4F00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e4f00
	if (!cr6.eq) goto loc_836E4F00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E4F24;
	sub_824208C8(ctx, base);
	// lwz r11,1592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1592);
	// lwz r10,1596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1596);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836e4f90
	if (cr6.lt) goto loc_836E4F90;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836e4f80
	if (!cr6.gt) goto loc_836E4F80;
	// addi r11,r1,1600
	ctx.r11.s64 = ctx.r1.s64 + 1600;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// addi r10,r1,1592
	ctx.r10.s64 = ctx.r1.s64 + 1592;
	// stw r25,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r25.u32);
	// addi r9,r1,1596
	ctx.r9.s64 = ctx.r1.s64 + 1596;
	// stw r11,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r11.u32);
	// stw r10,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r10.u32);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// stw r9,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r9.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r23,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r23.u32);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8247b270
	ctx.lr = 0x836E4F74;
	sub_8247B270(ctx, base);
	// lwz r11,1592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1592);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// b 0x836e4f84
	goto loc_836E4F84;
loc_836E4F80:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836E4F84:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x836e4fc8
	if (cr6.eq) goto loc_836E4FC8;
loc_836E4F90:
	// lwz r10,1600(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	// mulli r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 * 28;
	// add. r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x836e4fc0
	if (cr0.eq) goto loc_836E4FC0;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// bl 0x82420558
	ctx.lr = 0x836E4FBC;
	sub_82420558(ctx, base);
	// lwz r11,1592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1592);
loc_836E4FC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1592, ctx.r11.u32);
loc_836E4FC8:
	// lwz r11,676(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e4fdc
	if (cr6.lt) goto loc_836E4FDC;
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x8386d088
	ctx.lr = 0x836E4FDC;
	sub_8386D088(ctx, base);
loc_836E4FDC:
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// stw r27,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r27.u32);
	// stw r29,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r29.u8);
	// blt cr6,0x836e4ffc
	if (cr6.lt) goto loc_836E4FFC;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x836E4FFC;
	sub_82416268(ctx, base);
loc_836E4FFC:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// stw r29,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r29.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r29,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r29.u8);
	// blt cr6,0x836e4eac
	if (cr6.lt) goto loc_836E4EAC;
loc_836E5014:
	// addi r6,r21,-228
	ctx.r6.s64 = ctx.r21.s64 + -228;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E502C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e5208
	if (!cr6.eq) goto loc_836E5208;
	// addi r11,r1,1616
	ctx.r11.s64 = ctx.r1.s64 + 1616;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// addi r10,r1,1608
	ctx.r10.s64 = ctx.r1.s64 + 1608;
	// stw r25,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r25.u32);
	// addi r9,r1,1612
	ctx.r9.s64 = ctx.r1.s64 + 1612;
	// stw r11,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r11.u32);
	// stw r10,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r10.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r9,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r9.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stw r23,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r23.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836E5064;
	sub_8247B7D8(ctx, base);
	// lwz r3,1616(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	// stw r29,1608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1608, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836e5084
	if (cr6.eq) goto loc_836E5084;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8247b268
	ctx.lr = 0x836E507C;
	sub_8247B268(ctx, base);
	// stw r29,1612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1612, ctx.r29.u32);
	// stw r29,1616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1616, ctx.r29.u32);
loc_836E5084:
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r31,28(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x836e5208
	if (!cr6.lt) goto loc_836E5208;
loc_836E50A0:
	// stw r27,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r27.u32);
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// stw r29,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r29.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stb r29,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r29.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r5,1176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1176);
	// bl 0x82472fc0
	ctx.lr = 0x836E50D0;
	sub_82472FC0(ctx, base);
	// lwz r8,452(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836e50e4
	if (!cr6.lt) goto loc_836E50E4;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
loc_836E50E4:
	// stw r27,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r29.u32);
	// stb r29,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r29.u8);
loc_836E50F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e50f4
	if (!cr6.eq) goto loc_836E50F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E5118;
	sub_824208C8(ctx, base);
	// lwz r11,1608(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1608);
	// lwz r10,1612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836e5184
	if (cr6.lt) goto loc_836E5184;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836e5174
	if (!cr6.gt) goto loc_836E5174;
	// addi r11,r1,1616
	ctx.r11.s64 = ctx.r1.s64 + 1616;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r10,r1,1608
	ctx.r10.s64 = ctx.r1.s64 + 1608;
	// stw r25,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r25.u32);
	// addi r9,r1,1612
	ctx.r9.s64 = ctx.r1.s64 + 1612;
	// stw r11,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r11.u32);
	// stw r10,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r10.u32);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r9,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r9.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r23,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r23.u32);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x8247b270
	ctx.lr = 0x836E5168;
	sub_8247B270(ctx, base);
	// lwz r11,1608(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1608);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// b 0x836e5178
	goto loc_836E5178;
loc_836E5174:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836E5178:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x836e51bc
	if (cr6.eq) goto loc_836E51BC;
loc_836E5184:
	// lwz r10,1616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	// mulli r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 * 28;
	// add. r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x836e51b4
	if (cr0.eq) goto loc_836E51B4;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// bl 0x82420558
	ctx.lr = 0x836E51B0;
	sub_82420558(ctx, base);
	// lwz r11,1608(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1608);
loc_836E51B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1608, ctx.r11.u32);
loc_836E51BC:
	// lwz r11,708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e51d0
	if (cr6.lt) goto loc_836E51D0;
	// lwz r3,688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x8386d088
	ctx.lr = 0x836E51D0;
	sub_8386D088(ctx, base);
loc_836E51D0:
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stw r27,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r27.u32);
	// stw r29,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r29.u8);
	// blt cr6,0x836e51f0
	if (cr6.lt) goto loc_836E51F0;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x836E51F0;
	sub_82416268(ctx, base);
loc_836E51F0:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stw r27,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r27.u32);
	// stw r29,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r29.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r29,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r29.u8);
	// blt cr6,0x836e50a0
	if (cr6.lt) goto loc_836E50A0;
loc_836E5208:
	// addi r6,r21,-204
	ctx.r6.s64 = ctx.r21.s64 + -204;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E5220;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e5260
	if (!cr6.eq) goto loc_836E5260;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e5258
	if (!cr6.eq) goto loc_836E5258;
	// ld r11,1208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1208);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e525c
	goto loc_836E525C;
loc_836E5258:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E525C:
	// stw r11,1624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1624, ctx.r11.u32);
loc_836E5260:
	// addi r6,r21,-180
	ctx.r6.s64 = ctx.r21.s64 + -180;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E5278;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e52b8
	if (!cr6.eq) goto loc_836E52B8;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1232
	ctx.r10.s64 = ctx.r1.s64 + 1232;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e52b0
	if (!cr6.eq) goto loc_836E52B0;
	// ld r11,1240(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1240);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e52b4
	goto loc_836E52B4;
loc_836E52B0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E52B4:
	// stw r11,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, ctx.r11.u32);
loc_836E52B8:
	// addi r6,r21,-156
	ctx.r6.s64 = ctx.r21.s64 + -156;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,26
	ctx.r7.s64 = 26;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E52D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e5310
	if (!cr6.eq) goto loc_836E5310;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1008
	ctx.r10.s64 = ctx.r1.s64 + 1008;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1008(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e5308
	if (!cr6.eq) goto loc_836E5308;
	// ld r11,1016(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1016);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e530c
	goto loc_836E530C;
loc_836E5308:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E530C:
	// stw r11,1632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1632, ctx.r11.u32);
loc_836E5310:
	// addi r6,r21,-128
	ctx.r6.s64 = ctx.r21.s64 + -128;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,26
	ctx.r7.s64 = 26;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E5328;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e5368
	if (!cr6.eq) goto loc_836E5368;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1296
	ctx.r10.s64 = ctx.r1.s64 + 1296;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1296(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836e5360
	if (!cr6.eq) goto loc_836E5360;
	// ld r11,1304(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1304);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e5364
	goto loc_836E5364;
loc_836E5360:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E5364:
	// stw r11,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r11.u32);
loc_836E5368:
	// addi r6,r21,-100
	ctx.r6.s64 = ctx.r21.s64 + -100;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E5380;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e5418
	if (!cr6.eq) goto loc_836E5418;
	// stw r27,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r27.u32);
	// addi r11,r1,1328
	ctx.r11.s64 = ctx.r1.s64 + 1328;
	// stw r29,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r29.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stb r29,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1336);
	// lwz r4,1340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1340);
	// bl 0x82472fc0
	ctx.lr = 0x836E53BC;
	sub_82472FC0(ctx, base);
	// lwz r7,516(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e53d0
	if (!cr6.lt) goto loc_836E53D0;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
loc_836E53D0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E53D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e53d4
	if (!cr6.eq) goto loc_836E53D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1640
	ctx.r3.s64 = ctx.r1.s64 + 1640;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E53F8;
	sub_824208C8(ctx, base);
	// lwz r10,516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e540c
	if (cr6.lt) goto loc_836E540C;
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82416268
	ctx.lr = 0x836E540C;
	sub_82416268(ctx, base);
loc_836E540C:
	// stw r27,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r27.u32);
	// stw r29,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r29.u32);
	// stb r29,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r29.u8);
loc_836E5418:
	// addi r6,r21,-92
	ctx.r6.s64 = ctx.r21.s64 + -92;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E5430;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e5484
	if (!cr6.eq) goto loc_836E5484;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,992
	ctx.r10.s64 = ctx.r1.s64 + 992;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,992(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e5468
	if (!cr6.eq) goto loc_836E5468;
	// ld r11,1000(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1000);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e5480
	goto loc_836E5480;
loc_836E5468:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e547c
	if (!cr6.eq) goto loc_836E547C;
	// ld r11,1000(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1000);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e5480
	goto loc_836E5480;
loc_836E547C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E5480:
	// stw r11,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r11.u32);
loc_836E5484:
	// addi r6,r21,-76
	ctx.r6.s64 = ctx.r21.s64 + -76;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E549C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e54f0
	if (!cr6.eq) goto loc_836E54F0;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,976(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e54d4
	if (!cr6.eq) goto loc_836E54D4;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e54ec
	goto loc_836E54EC;
loc_836E54D4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e54e8
	if (!cr6.eq) goto loc_836E54E8;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e54ec
	goto loc_836E54EC;
loc_836E54E8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E54EC:
	// stw r11,1672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1672, ctx.r11.u32);
loc_836E54F0:
	// addi r6,r21,-64
	ctx.r6.s64 = ctx.r21.s64 + -64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E5508;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e55a0
	if (!cr6.eq) goto loc_836E55A0;
	// stw r27,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r27.u32);
	// addi r11,r1,1360
	ctx.r11.s64 = ctx.r1.s64 + 1360;
	// stw r29,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r29.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stb r29,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1368(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1368);
	// lwz r4,1372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1372);
	// bl 0x82472fc0
	ctx.lr = 0x836E5544;
	sub_82472FC0(ctx, base);
	// lwz r7,580(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e5558
	if (!cr6.lt) goto loc_836E5558;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
loc_836E5558:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E555C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e555c
	if (!cr6.eq) goto loc_836E555C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1676
	ctx.r3.s64 = ctx.r1.s64 + 1676;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E5580;
	sub_824208C8(ctx, base);
	// lwz r10,580(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e5594
	if (cr6.lt) goto loc_836E5594;
	// lwz r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82416268
	ctx.lr = 0x836E5594;
	sub_82416268(ctx, base);
loc_836E5594:
	// stw r27,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r27.u32);
	// stw r29,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r29.u32);
	// stb r29,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r29.u8);
loc_836E55A0:
	// addi r6,r21,-48
	ctx.r6.s64 = ctx.r21.s64 + -48;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E55B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e560c
	if (!cr6.eq) goto loc_836E560C;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,912(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836e55f0
	if (!cr6.eq) goto loc_836E55F0;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e5608
	goto loc_836E5608;
loc_836E55F0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836e5604
	if (!cr6.eq) goto loc_836E5604;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836e5608
	goto loc_836E5608;
loc_836E5604:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836E5608:
	// stw r11,1704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1704, ctx.r11.u32);
loc_836E560C:
	// addi r6,r21,-36
	ctx.r6.s64 = ctx.r21.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E5624;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e56bc
	if (!cr6.eq) goto loc_836E56BC;
	// stw r27,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r27.u32);
	// addi r11,r1,1392
	ctx.r11.s64 = ctx.r1.s64 + 1392;
	// stw r29,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r29.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stb r29,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1400(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1400);
	// lwz r4,1404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1404);
	// bl 0x82472fc0
	ctx.lr = 0x836E5660;
	sub_82472FC0(ctx, base);
	// lwz r7,644(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r4,624(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e5674
	if (!cr6.lt) goto loc_836E5674;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
loc_836E5674:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E5678:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e5678
	if (!cr6.eq) goto loc_836E5678;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1708
	ctx.r3.s64 = ctx.r1.s64 + 1708;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E569C;
	sub_824208C8(ctx, base);
	// lwz r10,644(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e56b0
	if (cr6.lt) goto loc_836E56B0;
	// lwz r3,624(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x82416268
	ctx.lr = 0x836E56B0;
	sub_82416268(ctx, base);
loc_836E56B0:
	// stw r27,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r27.u32);
	// stw r29,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r29.u32);
	// stb r29,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r29.u8);
loc_836E56BC:
	// addi r6,r21,-20
	ctx.r6.s64 = ctx.r21.s64 + -20;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E56D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e576c
	if (!cr6.eq) goto loc_836E576C;
	// stw r27,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r27.u32);
	// addi r11,r1,1424
	ctx.r11.s64 = ctx.r1.s64 + 1424;
	// stw r29,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r29.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stb r29,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1432(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1432);
	// lwz r4,1436(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1436);
	// bl 0x82472fc0
	ctx.lr = 0x836E5710;
	sub_82472FC0(ctx, base);
	// lwz r7,612(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e5724
	if (!cr6.lt) goto loc_836E5724;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
loc_836E5724:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E5728:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e5728
	if (!cr6.eq) goto loc_836E5728;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1736
	ctx.r3.s64 = ctx.r1.s64 + 1736;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E574C;
	sub_824208C8(ctx, base);
	// lwz r10,612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e5760
	if (cr6.lt) goto loc_836E5760;
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x82416268
	ctx.lr = 0x836E5760;
	sub_82416268(ctx, base);
loc_836E5760:
	// stw r27,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r27.u32);
	// stw r29,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r29.u32);
	// stb r29,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r29.u8);
loc_836E576C:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E5784;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e581c
	if (!cr6.eq) goto loc_836E581C;
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// addi r11,r1,1248
	ctx.r11.s64 = ctx.r1.s64 + 1248;
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1256);
	// lwz r4,1260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1260);
	// bl 0x82472fc0
	ctx.lr = 0x836E57C0;
	sub_82472FC0(ctx, base);
	// lwz r7,292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836e57d4
	if (!cr6.lt) goto loc_836E57D4;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_836E57D4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E57D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e57d8
	if (!cr6.eq) goto loc_836E57D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1764
	ctx.r3.s64 = ctx.r1.s64 + 1764;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E57FC;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e5810
	if (cr6.lt) goto loc_836E5810;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x836E5810;
	sub_82416268(ctx, base);
loc_836E5810:
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
loc_836E581C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e5830
	if (cr6.lt) goto loc_836E5830;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836E5830;
	sub_82416268(ctx, base);
loc_836E5830:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplw cr6,r28,r20
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, xer);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// blt cr6,0x836e4920
	if (cr6.lt) goto loc_836E4920;
loc_836E5848:
	// addi r4,r1,1456
	ctx.r4.s64 = ctx.r1.s64 + 1456;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x836e3b60
	ctx.lr = 0x836E5854;
	sub_836E3B60(ctx, base);
	// lwz r31,944(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836e5870
	if (cr6.eq) goto loc_836E5870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836E5868;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836E5870;
	sub_82416268(ctx, base);
loc_836E5870:
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x836e37f0
	ctx.lr = 0x836E5878;
	sub_836E37F0(ctx, base);
	// addi r19,r19,16
	ctx.r19.s64 = ctx.r19.s64 + 16;
	// cmplw cr6,r19,r16
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r16.u32, xer);
	// blt cr6,0x836e48e0
	if (cr6.lt) goto loc_836E48E0;
loc_836E5884:
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_836E5888:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e589c
	if (cr6.lt) goto loc_836E589C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836E589C;
	sub_82416268(ctx, base);
loc_836E589C:
	// addi r15,r15,32
	ctx.r15.s64 = ctx.r15.s64 + 32;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplw cr6,r15,r31
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r31.u32, xer);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// blt cr6,0x836e4494
	if (cr6.lt) goto loc_836E4494;
loc_836E58B4:
	// lwz r31,896(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836e58d0
	if (cr6.eq) goto loc_836E58D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836E58C8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836E58D0;
	sub_82416268(ctx, base);
loc_836E58D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1952
	ctx.r1.s64 = ctx.r1.s64 + 1952;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E58DC"))) PPC_WEAK_FUNC(sub_836E58DC);
PPC_FUNC_IMPL(__imp__sub_836E58DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E58E0"))) PPC_WEAK_FUNC(sub_836E58E0);
PPC_FUNC_IMPL(__imp__sub_836E58E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836E58E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836E58F4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,22088
	ctx.r29.s64 = ctx.r11.s64 + 22088;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836E590C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,22884
	ctx.r7.s64 = ctx.r10.s64 + 22884;
	// addi r5,r8,22868
	ctx.r5.s64 = ctx.r8.s64 + 22868;
	// addi r6,r9,22872
	ctx.r6.s64 = ctx.r9.s64 + 22872;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E5954;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E5970;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E598C;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E59A8;
	sub_824208C8(ctx, base);
	// stw r28,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// stb r30,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r30.u8);
	// addi r4,r29,84
	ctx.r4.s64 = ctx.r29.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E59C4;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E59D0"))) PPC_WEAK_FUNC(sub_836E59D0);
PPC_FUNC_IMPL(__imp__sub_836E59D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836e5ae0
	sub_836E5AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E59D8"))) PPC_WEAK_FUNC(sub_836E59D8);
PPC_FUNC_IMPL(__imp__sub_836E59D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836e5ae0
	sub_836E5AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E59E0"))) PPC_WEAK_FUNC(sub_836E59E0);
PPC_FUNC_IMPL(__imp__sub_836E59E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E59E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,22884
	ctx.r8.s64 = ctx.r11.s64 + 22884;
	// addi r7,r10,22872
	ctx.r7.s64 = ctx.r10.s64 + 22872;
	// addi r6,r9,22868
	ctx.r6.s64 = ctx.r9.s64 + 22868;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r28,r3,428
	ctx.r28.s64 = ctx.r3.s64 + 428;
	// lwz r5,448(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836e5a2c
	if (cr6.lt) goto loc_836E5A2C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E5A2C;
	sub_8386D088(ctx, base);
loc_836E5A2C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r29,r30,400
	ctx.r29.s64 = ctx.r30.s64 + 400;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e5a58
	if (cr6.lt) goto loc_836E5A58;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E5A58;
	sub_8386D088(ctx, base);
loc_836E5A58:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,372
	ctx.r28.s64 = ctx.r30.s64 + 372;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e5a7c
	if (cr6.lt) goto loc_836E5A7C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E5A7C;
	sub_8386D088(ctx, base);
loc_836E5A7C:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e5aa0
	if (cr6.lt) goto loc_836E5AA0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E5AA0;
	sub_8386D088(ctx, base);
loc_836E5AA0:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,316
	ctx.r28.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e5ac4
	if (cr6.lt) goto loc_836E5AC4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E5AC4;
	sub_8386D088(ctx, base);
loc_836E5AC4:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836E5AD8;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E5AE0"))) PPC_WEAK_FUNC(sub_836E5AE0);
PPC_FUNC_IMPL(__imp__sub_836E5AE0) {
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
	// bl 0x836e59e0
	ctx.lr = 0x836E5B00;
	sub_836E59E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836e5b20
	if (cr6.eq) goto loc_836E5B20;
	// bl 0x82595188
	ctx.lr = 0x836E5B10;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836E5B20;
	sub_825952B8(ctx, base);
loc_836E5B20:
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

__attribute__((alias("__imp__sub_836E5B3C"))) PPC_WEAK_FUNC(sub_836E5B3C);
PPC_FUNC_IMPL(__imp__sub_836E5B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E5B40"))) PPC_WEAK_FUNC(sub_836E5B40);
PPC_FUNC_IMPL(__imp__sub_836E5B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836E5B48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x836E5B54;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,22088
	ctx.r29.s64 = ctx.r11.s64 + 22088;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836E5B6C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r5,r9,22908
	ctx.r5.s64 = ctx.r9.s64 + 22908;
	// addi r4,r8,22904
	ctx.r4.s64 = ctx.r8.s64 + 22904;
	// addi r3,r7,22900
	ctx.r3.s64 = ctx.r7.s64 + 22900;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,22920
	ctx.r6.s64 = ctx.r10.s64 + 22920;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// addi r4,r29,172
	ctx.r4.s64 = ctx.r29.s64 + 172;
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E5BC0;
	sub_824208C8(ctx, base);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// addi r4,r29,188
	ctx.r4.s64 = ctx.r29.s64 + 188;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E5BDC;
	sub_824208C8(ctx, base);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// std r30,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r30.u64);
	// bl 0x836e36f0
	ctx.lr = 0x836E5BF8;
	sub_836E36F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E5C04"))) PPC_WEAK_FUNC(sub_836E5C04);
PPC_FUNC_IMPL(__imp__sub_836E5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E5C08"))) PPC_WEAK_FUNC(sub_836E5C08);
PPC_FUNC_IMPL(__imp__sub_836E5C08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836e5cc8
	sub_836E5CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E5C10"))) PPC_WEAK_FUNC(sub_836E5C10);
PPC_FUNC_IMPL(__imp__sub_836E5C10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836e5cc8
	sub_836E5CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E5C18"))) PPC_WEAK_FUNC(sub_836E5C18);
PPC_FUNC_IMPL(__imp__sub_836E5C18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836e5cc8
	sub_836E5CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E5C20"))) PPC_WEAK_FUNC(sub_836E5C20);
PPC_FUNC_IMPL(__imp__sub_836E5C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E5C28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r11,22920
	ctx.r7.s64 = ctx.r11.s64 + 22920;
	// addi r6,r10,22908
	ctx.r6.s64 = ctx.r10.s64 + 22908;
	// addi r5,r9,22904
	ctx.r5.s64 = ctx.r9.s64 + 22904;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,22900
	ctx.r4.s64 = ctx.r8.s64 + 22900;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// stw r4,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r4.u32);
	// bl 0x836e3770
	ctx.lr = 0x836E5C68;
	sub_836E3770(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// addi r29,r30,376
	ctx.r29.s64 = ctx.r30.s64 + 376;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x836e5c80
	if (cr6.lt) goto loc_836E5C80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E5C80;
	sub_8386D088(ctx, base);
loc_836E5C80:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r31,r30,348
	ctx.r31.s64 = ctx.r30.s64 + 348;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e5cac
	if (cr6.lt) goto loc_836E5CAC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E5CAC;
	sub_8386D088(ctx, base);
loc_836E5CAC:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82eaf978
	ctx.lr = 0x836E5CC0;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E5CC8"))) PPC_WEAK_FUNC(sub_836E5CC8);
PPC_FUNC_IMPL(__imp__sub_836E5CC8) {
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
	// bl 0x836e5c20
	ctx.lr = 0x836E5CE8;
	sub_836E5C20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836e5d08
	if (cr6.eq) goto loc_836E5D08;
	// bl 0x82595188
	ctx.lr = 0x836E5CF8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836E5D08;
	sub_825952B8(ctx, base);
loc_836E5D08:
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

__attribute__((alias("__imp__sub_836E5D24"))) PPC_WEAK_FUNC(sub_836E5D24);
PPC_FUNC_IMPL(__imp__sub_836E5D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E5D28"))) PPC_WEAK_FUNC(sub_836E5D28);
PPC_FUNC_IMPL(__imp__sub_836E5D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E5D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,133
	ctx.r11.s64 = 133;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x836e5d70
	if (!cr6.lt) goto loc_836E5D70;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836E5D70;
	sub_82E745E0(ctx, base);
loc_836E5D70:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,23096
	ctx.r27.s64 = ctx.r11.s64 + 23096;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E5DB8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E5DC4;
	sub_82E74C08(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836e5dd8
	if (cr6.lt) goto loc_836E5DD8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836E5DD8;
	sub_82416268(ctx, base);
loc_836E5DD8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x836e5df8
	if (cr6.lt) goto loc_836E5DF8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E5DF8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836E5E08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e5e08
	if (!cr6.eq) goto loc_836E5E08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E5E2C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E5E38;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e5e4c
	if (cr6.lt) goto loc_836E5E4C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836E5E4C;
	sub_82416268(ctx, base);
loc_836E5E4C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E5E74;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E5E80;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e5e94
	if (cr6.lt) goto loc_836E5E94;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836E5E94;
	sub_82416268(ctx, base);
loc_836E5E94:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836E5EAC;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x836E5EC8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E5ED4;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e5ee8
	if (cr6.lt) goto loc_836E5EE8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836E5EE8;
	sub_82416268(ctx, base);
loc_836E5EE8:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x836e5f08
	if (cr6.lt) goto loc_836E5F08;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E5F08:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836E5F18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e5f18
	if (!cr6.eq) goto loc_836E5F18;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E5F3C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E5F48;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e5f5c
	if (cr6.lt) goto loc_836E5F5C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836E5F5C;
	sub_82416268(ctx, base);
loc_836E5F5C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E5F84;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E5F90;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e5fa4
	if (cr6.lt) goto loc_836E5FA4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836E5FA4;
	sub_82416268(ctx, base);
loc_836E5FA4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x836e5fc4
	if (cr6.lt) goto loc_836E5FC4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E5FC4:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_836E5FD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e5fd4
	if (!cr6.eq) goto loc_836E5FD4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E5FF8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E6004;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e6018
	if (cr6.lt) goto loc_836E6018;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836E6018;
	sub_82416268(ctx, base);
loc_836E6018:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836E6040;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E604C;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e6060
	if (cr6.lt) goto loc_836E6060;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836E6060;
	sub_82416268(ctx, base);
loc_836E6060:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836e6080
	if (cr6.lt) goto loc_836E6080;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836E6080:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_836E6090:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e6090
	if (!cr6.eq) goto loc_836E6090;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836E60B4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836E60C0;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e60d4
	if (cr6.lt) goto loc_836E60D4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836E60D4;
	sub_82416268(ctx, base);
loc_836E60D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E60E0"))) PPC_WEAK_FUNC(sub_836E60E0);
PPC_FUNC_IMPL(__imp__sub_836E60E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836E60E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836E6110;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836e6354
	if (!cr6.lt) goto loc_836E6354;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,23128
	ctx.r26.s64 = ctx.r11.s64 + 23128;
loc_836E6148:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836E617C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E6194;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e6228
	if (!cr6.eq) goto loc_836E6228;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836E61CC;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836e61e0
	if (!cr6.lt) goto loc_836E61E0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836E61E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E61E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e61e4
	if (!cr6.eq) goto loc_836E61E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E6208;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e621c
	if (cr6.lt) goto loc_836E621C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836E621C;
	sub_82416268(ctx, base);
loc_836E621C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836E6228:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E6240;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e627c
	if (!cr6.eq) goto loc_836E627C;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836e6274
	if (!cr6.eq) goto loc_836E6274;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836e6278
	goto loc_836E6278;
loc_836E6274:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836E6278:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836E627C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836E6294;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836e6328
	if (!cr6.eq) goto loc_836E6328;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836E62CC;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836e62e0
	if (!cr6.lt) goto loc_836E62E0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836E62E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836E62E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836e62e4
	if (!cr6.eq) goto loc_836E62E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836E6308;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836e631c
	if (cr6.lt) goto loc_836E631C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836E631C;
	sub_82416268(ctx, base);
loc_836E631C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836E6328:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e633c
	if (cr6.lt) goto loc_836E633C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836E633C;
	sub_82416268(ctx, base);
loc_836E633C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836e6148
	if (!cr0.eq) goto loc_836E6148;
loc_836E6354:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836e6370
	if (cr6.eq) goto loc_836E6370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836E6368;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836E6370;
	sub_82416268(ctx, base);
loc_836E6370:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E637C"))) PPC_WEAK_FUNC(sub_836E637C);
PPC_FUNC_IMPL(__imp__sub_836E637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E6380"))) PPC_WEAK_FUNC(sub_836E6380);
PPC_FUNC_IMPL(__imp__sub_836E6380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836E6388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836E6394;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,22984
	ctx.r29.s64 = ctx.r11.s64 + 22984;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836E63AC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,23236
	ctx.r7.s64 = ctx.r10.s64 + 23236;
	// addi r5,r8,23220
	ctx.r5.s64 = ctx.r8.s64 + 23220;
	// addi r6,r9,23224
	ctx.r6.s64 = ctx.r9.s64 + 23224;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E63F4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E6410;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836E642C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E6438"))) PPC_WEAK_FUNC(sub_836E6438);
PPC_FUNC_IMPL(__imp__sub_836E6438) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836e6500
	sub_836E6500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E6440"))) PPC_WEAK_FUNC(sub_836E6440);
PPC_FUNC_IMPL(__imp__sub_836E6440) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836e6500
	sub_836E6500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E6448"))) PPC_WEAK_FUNC(sub_836E6448);
PPC_FUNC_IMPL(__imp__sub_836E6448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836E6450;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,23236
	ctx.r8.s64 = ctx.r11.s64 + 23236;
	// addi r7,r10,23224
	ctx.r7.s64 = ctx.r10.s64 + 23224;
	// addi r6,r9,23220
	ctx.r6.s64 = ctx.r9.s64 + 23220;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,372
	ctx.r29.s64 = ctx.r3.s64 + 372;
	// lwz r5,392(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836e6494
	if (cr6.lt) goto loc_836E6494;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E6494;
	sub_8386D088(ctx, base);
loc_836E6494:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e64c0
	if (cr6.lt) goto loc_836E64C0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E64C0;
	sub_8386D088(ctx, base);
loc_836E64C0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836e64e4
	if (cr6.lt) goto loc_836E64E4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836E64E4;
	sub_8386D088(ctx, base);
loc_836E64E4:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836E64F8;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E6500"))) PPC_WEAK_FUNC(sub_836E6500);
PPC_FUNC_IMPL(__imp__sub_836E6500) {
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
	// bl 0x836e6448
	ctx.lr = 0x836E6520;
	sub_836E6448(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836e6540
	if (cr6.eq) goto loc_836E6540;
	// bl 0x82595188
	ctx.lr = 0x836E6530;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836E6540;
	sub_825952B8(ctx, base);
loc_836E6540:
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

__attribute__((alias("__imp__sub_836E655C"))) PPC_WEAK_FUNC(sub_836E655C);
PPC_FUNC_IMPL(__imp__sub_836E655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E6560"))) PPC_WEAK_FUNC(sub_836E6560);
PPC_FUNC_IMPL(__imp__sub_836E6560) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836E6578;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,22984
	ctx.r4.s64 = ctx.r11.s64 + 22984;
	// li r5,30
	ctx.r5.s64 = 30;
	// bl 0x824208c8
	ctx.lr = 0x836E658C;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,23284
	ctx.r3.s64 = ctx.r7.s64 + 23284;
	// addi r6,r10,23268
	ctx.r6.s64 = ctx.r10.s64 + 23268;
	// addi r5,r9,23256
	ctx.r5.s64 = ctx.r9.s64 + 23256;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,23252
	ctx.r4.s64 = ctx.r8.s64 + 23252;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836E65D4"))) PPC_WEAK_FUNC(sub_836E65D4);
PPC_FUNC_IMPL(__imp__sub_836E65D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836E65D8"))) PPC_WEAK_FUNC(sub_836E65D8);
PPC_FUNC_IMPL(__imp__sub_836E65D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836e65f0
	sub_836E65F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E65E0"))) PPC_WEAK_FUNC(sub_836E65E0);
PPC_FUNC_IMPL(__imp__sub_836E65E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836e65f0
	sub_836E65F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E65E8"))) PPC_WEAK_FUNC(sub_836E65E8);
PPC_FUNC_IMPL(__imp__sub_836E65E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836e65f0
	sub_836E65F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836E65F0"))) PPC_WEAK_FUNC(sub_836E65F0);
PPC_FUNC_IMPL(__imp__sub_836E65F0) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,23268
	ctx.r7.s64 = ctx.r11.s64 + 23268;
	// addi r6,r10,23256
	ctx.r6.s64 = ctx.r10.s64 + 23256;
	// addi r5,r9,23252
	ctx.r5.s64 = ctx.r9.s64 + 23252;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,23284
	ctx.r4.s64 = ctx.r8.s64 + 23284;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836E6640;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836e6660
	if (cr6.eq) goto loc_836E6660;
	// bl 0x82595188
	ctx.lr = 0x836E6650;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836E6660;
	sub_825952B8(ctx, base);
loc_836E6660:
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

