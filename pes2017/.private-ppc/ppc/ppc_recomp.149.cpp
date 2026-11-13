#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C0FCCC"))) PPC_WEAK_FUNC(sub_82C0FCCC);
PPC_FUNC_IMPL(__imp__sub_82C0FCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0FCD0"))) PPC_WEAK_FUNC(sub_82C0FCD0);
PPC_FUNC_IMPL(__imp__sub_82C0FCD0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28224
	ctx.r9.s64 = ctx.r11.s64 + -28224;
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
	// bl 0x82d25548
	ctx.lr = 0x82C0FD08;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c0fd20
	if (cr6.eq) goto loc_82C0FD20;
	// bl 0x82416268
	ctx.lr = 0x82C0FD1C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C0FD20:
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

__attribute__((alias("__imp__sub_82C0FD38"))) PPC_WEAK_FUNC(sub_82C0FD38);
PPC_FUNC_IMPL(__imp__sub_82C0FD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C0FD40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82C0FD58;
	sub_82D253F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// addi r8,r11,-27152
	ctx.r8.s64 = ctx.r11.s64 + -27152;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lis r29,-31776
	ctx.r29.s64 = -2082471936;
	// stw r7,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r29,-23544
	ctx.r6.s64 = ctx.r29.s64 + -23544;
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// ld r11,-23504(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -23504);
	// std r11,96(r30)
	PPC_STORE_U64(ctx.r30.u32 + 96, ctx.r11.u64);
	// bl 0x82d20ae0
	ctx.lr = 0x82C0FD90;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-23544(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23544);
	// bl 0x82d23390
	ctx.lr = 0x82C0FDA0;
	sub_82D23390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d195d8
	ctx.lr = 0x82C0FDAC;
	sub_82D195D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0FDB8"))) PPC_WEAK_FUNC(sub_82C0FDB8);
PPC_FUNC_IMPL(__imp__sub_82C0FDB8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27152
	ctx.r9.s64 = ctx.r11.s64 + -27152;
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
	// bl 0x82d25548
	ctx.lr = 0x82C0FDF0;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c0fe08
	if (cr6.eq) goto loc_82C0FE08;
	// bl 0x82416268
	ctx.lr = 0x82C0FE04;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C0FE08:
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

__attribute__((alias("__imp__sub_82C0FE20"))) PPC_WEAK_FUNC(sub_82C0FE20);
PPC_FUNC_IMPL(__imp__sub_82C0FE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C0FE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C0FE38;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-27252
	ctx.r4.s64 = ctx.r11.s64 + -27252;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C0FE54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c0fe94
	if (cr6.eq) goto loc_82C0FE94;
	// bl 0x82d2fe58
	ctx.lr = 0x82C0FE64;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c0fe94
	if (cr6.eq) goto loc_82C0FE94;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x82c0fe88
	if (!cr6.eq) goto loc_82C0FE88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30530
	ctx.lr = 0x82C0FE80;
	sub_82D30530(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C0FE88:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82C0FE94;
	sub_82D3D968(ctx, base);
loc_82C0FE94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0FE9C"))) PPC_WEAK_FUNC(sub_82C0FE9C);
PPC_FUNC_IMPL(__imp__sub_82C0FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0FEA0"))) PPC_WEAK_FUNC(sub_82C0FEA0);
PPC_FUNC_IMPL(__imp__sub_82C0FEA0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C0FED4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c0feec
	if (cr6.eq) goto loc_82C0FEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c0fd38
	ctx.lr = 0x82C0FEE8;
	sub_82C0FD38(ctx, base);
	// b 0x82c0fef0
	goto loc_82C0FEF0;
loc_82C0FEEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C0FEF0:
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

__attribute__((alias("__imp__sub_82C0FF08"))) PPC_WEAK_FUNC(sub_82C0FF08);
PPC_FUNC_IMPL(__imp__sub_82C0FF08) {
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
	ctx.lr = 0x82C0FF10;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce778
	ctx.lr = 0x82C0FF18;
	__savefpr_28(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23504
	ctx.r11.s64 = ctx.r11.s64 + -23504;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r24,r3,96
	ctx.r24.s64 = ctx.r3.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c0ff4c
	if (!cr6.eq) goto loc_82C0FF4C;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c0ff74
	goto loc_82C0FF74;
loc_82C0FF4C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c0ff6c
	if (!cr6.eq) goto loc_82C0FF6C;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c0ff70
	if (cr6.eq) goto loc_82C0FF70;
loc_82C0FF6C:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82C0FF70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C0FF74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c106d0
	if (!cr6.eq) goto loc_82C106D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C0FF88;
	sub_82D19A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c106d0
	if (cr6.eq) goto loc_82C106D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82C0FF9C;
	sub_82D19A10(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c106d0
	if (cr6.eq) goto loc_82C106D0;
	// bl 0x831156e8
	ctx.lr = 0x82C0FFAC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8319dc20
	ctx.lr = 0x82C0FFBC;
	sub_8319DC20(ctx, base);
	// addis r20,r19,209
	ctx.r20.s64 = ctx.r19.s64 + 13697024;
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r20,r20,320
	ctx.r20.s64 = ctx.r20.s64 + 320;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82ad3cf8
	ctx.lr = 0x82C0FFD0;
	sub_82AD3CF8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831507d8
	ctx.lr = 0x82C0FFDC;
	sub_831507D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c0fff8
	if (!cr6.eq) goto loc_82C0FFF8;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq cr6,0x82c0fffc
	if (cr6.eq) goto loc_82C0FFFC;
loc_82C0FFF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C0FFFC:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x830ff290
	ctx.lr = 0x82C10004;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C10008;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-13
	ctx.r11.s64 = ctx.r3.s64 + -13;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r25,r11,-27264
	ctx.r25.s64 = ctx.r11.s64 + -27264;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// and r31,r8,r16
	ctx.r31.u64 = ctx.r8.u64 & ctx.r16.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r25,-176
	ctx.r4.s64 = ctx.r25.s64 + -176;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bne cr6,0x82c10048
	if (!cr6.eq) goto loc_82C10048;
	// addi r4,r25,-156
	ctx.r4.s64 = ctx.r25.s64 + -156;
loc_82C10048:
	// bctrl 
	ctx.lr = 0x82C1004C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r15,r31,24
	ctx.r15.u64 = ctx.r31.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r4,r25,-136
	ctx.r4.s64 = ctx.r25.s64 + -136;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c10074
	if (!cr6.eq) goto loc_82C10074;
	// addi r4,r25,-116
	ctx.r4.s64 = ctx.r25.s64 + -116;
loc_82C10074:
	// bctrl 
	ctx.lr = 0x82C10078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82C10084;
	sub_8311BF98(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x83120738
	ctx.lr = 0x82C10098;
	sub_83120738(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r18,7
	ctx.r18.s64 = 7;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r7,r9,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r18,r7
	xer.ca = ctx.r7.u32 >= ctx.r18.u32;
	ctx.r11.s64 = ctx.r7.s64 - ctx.r18.s64;
	// addi r6,r8,253
	ctx.r6.s64 = ctx.r8.s64 + 253;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r23,r6,24
	ctx.r23.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c100d0
	if (cr6.eq) goto loc_82C100D0;
	// li r18,8
	ctx.r18.s64 = 8;
loc_82C100D0:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r4,r25,-96
	ctx.r4.s64 = ctx.r25.s64 + -96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82C100F0;
	sub_837B0C10(ctx, base);
	// addi r4,r25,-84
	ctx.r4.s64 = ctx.r25.s64 + -84;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x837b0c10
	ctx.lr = 0x82C100FC;
	sub_837B0C10(ctx, base);
	// addi r4,r25,-72
	ctx.r4.s64 = ctx.r25.s64 + -72;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x837b0c10
	ctx.lr = 0x82C10108;
	sub_837B0C10(ctx, base);
	// addi r26,r30,100
	ctx.r26.s64 = ctx.r30.s64 + 100;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
loc_82C10114:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c10128
	if (cr6.lt) goto loc_82C10128;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c1012c
	goto loc_82C1012C;
loc_82C10128:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C1012C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C10140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1015c
	if (cr6.eq) goto loc_82C1015C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C1015C;
	sub_82D294D0(ctx, base);
loc_82C1015C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c10114
	if (!cr0.eq) goto loc_82C10114;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r31,r1,292
	ctx.r31.s64 = ctx.r1.s64 + 292;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82C1017C:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1019c
	if (cr6.lt) goto loc_82C1019C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C1019C;
	sub_825952B8(ctx, base);
loc_82C1019C:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r17,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r17.u32);
	// stb r17,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r17.u8);
	// bge 0x82c1017c
	if (!cr0.lt) goto loc_82C1017C;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8314b1d0
	ctx.lr = 0x82C101C8;
	sub_8314B1D0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r25,-60
	ctx.r4.s64 = ctx.r25.s64 + -60;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83815d38
	ctx.lr = 0x82C101D8;
	sub_83815D38(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// beq cr6,0x82c101fc
	if (cr6.eq) goto loc_82C101FC;
	// addi r10,r11,-7
	ctx.r10.s64 = ctx.r11.s64 + -7;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82c1020c
	goto loc_82C1020C;
loc_82C101FC:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82C1020C:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r25,-40
	ctx.r4.s64 = ctx.r25.s64 + -40;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,-7404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7404);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x83815d38
	ctx.lr = 0x82C1022C;
	sub_83815D38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815b08
	ctx.lr = 0x82C10238;
	sub_83815B08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x83815b68
	ctx.lr = 0x82C10244;
	sub_83815B68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// lfs f30,21152(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,8976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8976);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82c1035c
	if (cr6.eq) goto loc_82C1035C;
	// clrlwi r28,r23,24
	ctx.r28.u64 = ctx.r23.u32 & 0xFF;
loc_82C1026C:
	// rlwinm r11,r29,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r31,r29,31
	ctx.r31.u64 = ctx.r29.u32 & 0x1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x82c102fc
	if (cr6.lt) goto loc_82C102FC;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c102e0
	if (cr6.eq) goto loc_82C102E0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82ae59a8
	ctx.lr = 0x82C102A4;
	sub_82AE59A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,192
	ctx.r5.s64 = 192;
	// bl 0x831ce980
	ctx.lr = 0x82C102B4;
	sub_831CE980(ctx, base);
	// addi r11,r30,246
	ctx.r11.s64 = ctx.r30.s64 + 246;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// blt cr6,0x82c102d4
	if (cr6.lt) goto loc_82C102D4;
	// lbz r3,450(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 450);
	// b 0x82c102fc
	goto loc_82C102FC;
loc_82C102D4:
	// addi r10,r1,361
	ctx.r10.s64 = ctx.r1.s64 + 361;
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82c102fc
	goto loc_82C102FC;
loc_82C102E0:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82C102E8;
	sub_8311BF98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x831a5ae0
	ctx.lr = 0x82C102FC;
	sub_831A5AE0(ctx, base);
loc_82C102FC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82c10310
	if (!cr6.eq) goto loc_82C10310;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82c10344
	goto loc_82C10344;
loc_82C10310:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82c10338
	if (!cr6.lt) goto loc_82C10338;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82c10344
	goto loc_82C10344;
loc_82C10338:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82c10344
	if (!cr6.gt) goto loc_82C10344;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82C10344:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x83815b68
	ctx.lr = 0x82C10350;
	sub_83815B68(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// blt cr6,0x82c1026c
	if (cr6.lt) goto loc_82C1026C;
loc_82C1035C:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82c10370
	if (!cr6.eq) goto loc_82C10370;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82c103a4
	goto loc_82C103A4;
loc_82C10370:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82c10398
	if (!cr6.lt) goto loc_82C10398;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82c103a4
	goto loc_82C103A4;
loc_82C10398:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82c103a4
	if (!cr6.gt) goto loc_82C103A4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82C103A4:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x83815b68
	ctx.lr = 0x82C103B0;
	sub_83815B68(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x838153c8
	ctx.lr = 0x82C103BC;
	sub_838153C8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r25,-28
	ctx.r4.s64 = ctx.r25.s64 + -28;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C103D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c103e4
	if (cr6.eq) goto loc_82C103E4;
	// clrldi r4,r22,56
	ctx.r4.u64 = ctx.r22.u64 & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C103E4;
	sub_82D294D0(ctx, base);
loc_82C103E4:
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815d38
	ctx.lr = 0x82C103F0;
	sub_83815D38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815b08
	ctx.lr = 0x82C103FC;
	sub_83815B08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x83815b68
	ctx.lr = 0x82C10408;
	sub_83815B68(ctx, base);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82C1040C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// bne cr6,0x82c1041c
	if (!cr6.eq) goto loc_82C1041C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82c1050c
	goto loc_82C1050C;
loc_82C1041C:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// rlwinm r10,r29,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r31,r29,31
	ctx.r31.u64 = ctx.r29.u32 & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x82c104c0
	if (cr6.lt) goto loc_82C104C0;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c10494
	if (cr6.eq) goto loc_82C10494;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// bl 0x82ae59a8
	ctx.lr = 0x82C10458;
	sub_82AE59A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,192
	ctx.r5.s64 = 192;
	// bl 0x831ce980
	ctx.lr = 0x82C10468;
	sub_831CE980(ctx, base);
	// addi r11,r30,246
	ctx.r11.s64 = ctx.r30.s64 + 246;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// blt cr6,0x82c10488
	if (cr6.lt) goto loc_82C10488;
	// lbz r3,540(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 540);
	// b 0x82c104c0
	goto loc_82C104C0;
loc_82C10488:
	// addi r10,r1,451
	ctx.r10.s64 = ctx.r1.s64 + 451;
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82c104c0
	goto loc_82C104C0;
loc_82C10494:
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c104c0
	if (cr6.lt) goto loc_82C104C0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82C104AC;
	sub_8311BF98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x831a5ae0
	ctx.lr = 0x82C104C0;
	sub_831A5AE0(ctx, base);
loc_82C104C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82c104d4
	if (!cr6.eq) goto loc_82C104D4;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82c10508
	goto loc_82C10508;
loc_82C104D4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82c104fc
	if (!cr6.lt) goto loc_82C104FC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82c10508
	goto loc_82C10508;
loc_82C104FC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82c10508
	if (!cr6.gt) goto loc_82C10508;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82C10508:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82C1050C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815b68
	ctx.lr = 0x82C10514;
	sub_83815B68(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,12
	cr6.compare<uint32_t>(ctx.r29.u32, 12, xer);
	// ble cr6,0x82c1040c
	if (!cr6.gt) goto loc_82C1040C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x838153c8
	ctx.lr = 0x82C1052C;
	sub_838153C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815cb8
	ctx.lr = 0x82C10534;
	sub_83815CB8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815d38
	ctx.lr = 0x82C10540;
	sub_83815D38(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815b08
	ctx.lr = 0x82C1054C;
	sub_83815B08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x83815b68
	ctx.lr = 0x82C10558;
	sub_83815B68(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_82C10560:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// bne cr6,0x82c10570
	if (!cr6.eq) goto loc_82C10570;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82c10698
	goto loc_82C10698;
loc_82C10570:
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c10584
	if (!cr6.lt) goto loc_82C10584;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82c10698
	goto loc_82C10698;
loc_82C10584:
	// rlwinm r11,r28,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r30,r28,31
	ctx.r30.u64 = ctx.r28.u32 & 0x1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// li r31,255
	ctx.r31.s64 = 255;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c105b4
	if (cr6.eq) goto loc_82C105B4;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// b 0x82c1064c
	goto loc_82C1064C;
loc_82C105B4:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(ctx.r29.u32, 10, xer);
	// blt cr6,0x82c1064c
	if (cr6.lt) goto loc_82C1064C;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c10614
	if (cr6.eq) goto loc_82C10614;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// bl 0x82ae59a8
	ctx.lr = 0x82C105D8;
	sub_82AE59A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,192
	ctx.r5.s64 = 192;
	// bl 0x831ce980
	ctx.lr = 0x82C105E8;
	sub_831CE980(ctx, base);
	// addi r11,r29,246
	ctx.r11.s64 = ctx.r29.s64 + 246;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// blt cr6,0x82c10608
	if (cr6.lt) goto loc_82C10608;
	// lbz r31,450(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 450);
	// b 0x82c1064c
	goto loc_82C1064C;
loc_82C10608:
	// addi r10,r1,361
	ctx.r10.s64 = ctx.r1.s64 + 361;
	// lbzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82c1064c
	goto loc_82C1064C;
loc_82C10614:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831507d8
	ctx.lr = 0x82C1061C;
	sub_831507D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1064c
	if (cr6.eq) goto loc_82C1064C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82C10634;
	sub_8311BF98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x831a5ae0
	ctx.lr = 0x82C10648;
	sub_831A5AE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C1064C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82c10660
	if (!cr6.eq) goto loc_82C10660;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82c10694
	goto loc_82C10694;
loc_82C10660:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82c10688
	if (!cr6.lt) goto loc_82C10688;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82c10694
	goto loc_82C10694;
loc_82C10688:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82c10694
	if (!cr6.gt) goto loc_82C10694;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82C10694:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82C10698:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815b68
	ctx.lr = 0x82C106A0;
	sub_83815B68(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,12
	cr6.compare<uint32_t>(ctx.r28.u32, 12, xer);
	// ble cr6,0x82c10560
	if (!cr6.gt) goto loc_82C10560;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x838153c8
	ctx.lr = 0x82C106B8;
	sub_838153C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83815cb8
	ctx.lr = 0x82C106C0;
	sub_83815CB8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83815cb8
	ctx.lr = 0x82C106C8;
	sub_83815CB8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83815cb8
	ctx.lr = 0x82C106D0;
	sub_83815CB8(ctx, base);
loc_82C106D0:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c4
	ctx.lr = 0x82C106DC;
	__restfpr_28(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C106E0"))) PPC_WEAK_FUNC(sub_82C106E0);
PPC_FUNC_IMPL(__imp__sub_82C106E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// std r4,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r4.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82c0ff08
	sub_82C0FF08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C106F4"))) PPC_WEAK_FUNC(sub_82C106F4);
PPC_FUNC_IMPL(__imp__sub_82C106F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C106F8"))) PPC_WEAK_FUNC(sub_82C106F8);
PPC_FUNC_IMPL(__imp__sub_82C106F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C10700;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1070C;
	sub_82D19A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1071c
	if (cr6.eq) goto loc_82C1071C;
	// bl 0x82d2bbb8
	ctx.lr = 0x82C1071C;
	sub_82D2BBB8(ctx, base);
loc_82C1071C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C10724;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,-27456
	ctx.r31.s64 = ctx.r11.s64 + -27456;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C10744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1075c
	if (cr6.eq) goto loc_82C1075C;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,166
	ctx.r4.u64 = ctx.r4.u64 | 166;
	// bl 0x82d30340
	ctx.lr = 0x82C1075C;
	sub_82D30340(ctx, base);
loc_82C1075C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c10904
	if (cr6.eq) goto loc_82C10904;
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C10780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c10794
	if (cr6.eq) goto loc_82C10794;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,690
	ctx.r4.u64 = ctx.r4.u64 | 690;
	// bl 0x82d29598
	ctx.lr = 0x82C10794;
	sub_82D29598(ctx, base);
loc_82C10794:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C107AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c107c0
	if (cr6.eq) goto loc_82C107C0;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,689
	ctx.r4.u64 = ctx.r4.u64 | 689;
	// bl 0x82d29598
	ctx.lr = 0x82C107C0;
	sub_82D29598(ctx, base);
loc_82C107C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C107D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c107ec
	if (cr6.eq) goto loc_82C107EC;
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,127
	ctx.r4.u64 = ctx.r4.u64 | 127;
	// bl 0x82d29598
	ctx.lr = 0x82C107EC;
	sub_82D29598(ctx, base);
loc_82C107EC:
	// li r11,95
	ctx.r11.s64 = 95;
	// li r10,90
	ctx.r10.s64 = 90;
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,75
	ctx.r8.s64 = 75;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r7,70
	ctx.r7.s64 = 70;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r6,60
	ctx.r6.s64 = 60;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82C10828;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x837b0c10
	ctx.lr = 0x82C10834;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x837b0c10
	ctx.lr = 0x82C10840;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x837b0c10
	ctx.lr = 0x82C1084C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82C10858;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x837b0c10
	ctx.lr = 0x82C10864;
	sub_837B0C10(ctx, base);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// li r28,6
	ctx.r28.s64 = 6;
loc_82C10870:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c10884
	if (cr6.lt) goto loc_82C10884;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82c10888
	goto loc_82C10888;
loc_82C10884:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C10888:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1089C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c108ac
	if (cr6.eq) goto loc_82C108AC;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d294d0
	ctx.lr = 0x82C108AC;
	sub_82D294D0(ctx, base);
loc_82C108AC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82c10870
	if (!cr0.eq) goto loc_82C10870;
	// addi r31,r1,296
	ctx.r31.s64 = ctx.r1.s64 + 296;
	// li r30,5
	ctx.r30.s64 = 5;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C108D0:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c108f0
	if (cr6.lt) goto loc_82C108F0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C108F0;
	sub_825952B8(ctx, base);
loc_82C108F0:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x82c108d0
	if (!cr0.lt) goto loc_82C108D0;
loc_82C10904:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c0ff08
	ctx.lr = 0x82C1090C;
	sub_82C0FF08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C10918"))) PPC_WEAK_FUNC(sub_82C10918);
PPC_FUNC_IMPL(__imp__sub_82C10918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x82c10964
	if (cr6.gt) goto loc_82C10964;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c10940
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C10940;
	// bdzf 4*cr6+eq,0x82c1094c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C1094C;
	// bne cr6,0x82c10958
	if (!cr6.eq) goto loc_82C10958;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// rlwinm r3,r11,20,12,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// blr 
	return;
loc_82C10940:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
loc_82C1094C:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
loc_82C10958:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
loc_82C10964:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C1096C"))) PPC_WEAK_FUNC(sub_82C1096C);
PPC_FUNC_IMPL(__imp__sub_82C1096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C10970"))) PPC_WEAK_FUNC(sub_82C10970);
PPC_FUNC_IMPL(__imp__sub_82C10970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x82c109bc
	if (cr6.gt) goto loc_82C109BC;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c10998
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C10998;
	// bdzf 4*cr6+eq,0x82c109a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C109A4;
	// bne cr6,0x82c109b0
	if (!cr6.eq) goto loc_82C109B0;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// rlwinm r3,r11,20,12,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// blr 
	return;
loc_82C10998:
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
loc_82C109A4:
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
loc_82C109B0:
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
loc_82C109BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C109C4"))) PPC_WEAK_FUNC(sub_82C109C4);
PPC_FUNC_IMPL(__imp__sub_82C109C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C109C8"))) PPC_WEAK_FUNC(sub_82C109C8);
PPC_FUNC_IMPL(__imp__sub_82C109C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,6
	ctx.r11.s64 = 393216;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r7,28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,58096
	ctx.r8.u64 = ctx.r11.u64 | 58096;
	// lhz r6,24(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
loc_82C109E4:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82c10a04
	if (!cr6.eq) goto loc_82C10A04;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x82c10a2c
	goto loc_82C10A2C;
loc_82C10A04:
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c10a24
	if (!cr6.eq) goto loc_82C10A24;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c10a28
	if (cr6.eq) goto loc_82C10A28;
loc_82C10A24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C10A28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C10A2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c10a54
	if (!cr6.eq) goto loc_82C10A54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x82c109e4
	if (cr6.lt) goto loc_82C109E4;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r11,-23088
	ctx.r3.s64 = ctx.r11.s64 + -23088;
	// blr 
	return;
loc_82C10A54:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C10A6C"))) PPC_WEAK_FUNC(sub_82C10A6C);
PPC_FUNC_IMPL(__imp__sub_82C10A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C10A70"))) PPC_WEAK_FUNC(sub_82C10A70);
PPC_FUNC_IMPL(__imp__sub_82C10A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C10A78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82C10A94;
	sub_82D253F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// addi r8,r11,-25248
	ctx.r8.s64 = ctx.r11.s64 + -25248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// ld r11,-23160(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + -23160);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// ld r11,-23160(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + -23160);
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stb r10,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r10.u8);
	// bl 0x831156e8
	ctx.lr = 0x82C10ADC;
	sub_831156E8(ctx, base);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r10,-23160(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + -23160);
	// addis r11,r6,72
	ctx.r11.s64 = ctx.r6.s64 + 4718592;
	// addi r11,r11,7136
	ctx.r11.s64 = ctx.r11.s64 + 7136;
	// lhz r5,808(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 808);
	// clrlwi r4,r5,25
	ctx.r4.u64 = ctx.r5.u32 & 0x7F;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c10b00
	if (cr6.eq) goto loc_82C10B00;
	// ld r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
loc_82C10B00:
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// beq cr6,0x82c10b30
	if (cr6.eq) goto loc_82C10B30;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x82c10b30
	if (cr6.eq) goto loc_82C10B30;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-23408
	ctx.r30.s64 = ctx.r11.s64 + -23408;
	// lwz r4,-23408(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23408);
	// bl 0x82d20ae0
	ctx.lr = 0x82C10B28;
	sub_82D20AE0(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82c10b48
	goto loc_82C10B48;
loc_82C10B30:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-23408
	ctx.r30.s64 = ctx.r11.s64 + -23408;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82C10B44;
	sub_82D20AE0(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82C10B48:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82C10B54;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d20ae0
	ctx.lr = 0x82C10B60;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82d20ae0
	ctx.lr = 0x82C10B6C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82d20ae0
	ctx.lr = 0x82C10B78;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82d20ae0
	ctx.lr = 0x82C10B84;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82d20ae0
	ctx.lr = 0x82C10B90;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C10B9C"))) PPC_WEAK_FUNC(sub_82C10B9C);
PPC_FUNC_IMPL(__imp__sub_82C10B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C10BA0"))) PPC_WEAK_FUNC(sub_82C10BA0);
PPC_FUNC_IMPL(__imp__sub_82C10BA0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-25248
	ctx.r9.s64 = ctx.r11.s64 + -25248;
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
	// bl 0x82d25548
	ctx.lr = 0x82C10BD8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c10bf0
	if (cr6.eq) goto loc_82C10BF0;
	// bl 0x82416268
	ctx.lr = 0x82C10BEC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C10BF0:
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

__attribute__((alias("__imp__sub_82C10C08"))) PPC_WEAK_FUNC(sub_82C10C08);
PPC_FUNC_IMPL(__imp__sub_82C10C08) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C10C28;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-23372(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23372);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C10C44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c10c78
	if (cr6.eq) goto loc_82C10C78;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82c10c60
	if (!cr6.eq) goto loc_82C10C60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d30530
	ctx.lr = 0x82C10C5C;
	sub_82D30530(ctx, base);
	// b 0x82c10c78
	goto loc_82C10C78;
loc_82C10C60:
	// bl 0x82d2fe58
	ctx.lr = 0x82C10C64;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c10c78
	if (cr6.eq) goto loc_82C10C78;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82C10C78;
	sub_82D3D968(ctx, base);
loc_82C10C78:
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

__attribute__((alias("__imp__sub_82C10C90"))) PPC_WEAK_FUNC(sub_82C10C90);
PPC_FUNC_IMPL(__imp__sub_82C10C90) {
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
	// bl 0x830ff290
	ctx.lr = 0x82C10CB0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C10CB4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82c10cc0
	if (!cr6.eq) goto loc_82C10CC0;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
loc_82C10CC0:
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

__attribute__((alias("__imp__sub_82C10CD8"))) PPC_WEAK_FUNC(sub_82C10CD8);
PPC_FUNC_IMPL(__imp__sub_82C10CD8) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c10d58
	if (cr6.eq) goto loc_82C10D58;
	// bl 0x831156e8
	ctx.lr = 0x82C10D00;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82C10D08;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C10D0C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82c10d48
	if (!cr6.eq) goto loc_82C10D48;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82c10d48
	if (!cr6.eq) goto loc_82C10D48;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46613
	ctx.r10.u64 = ctx.r11.u64 | 46613;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c10d48
	if (!cr6.eq) goto loc_82C10D48;
	// addis r3,r31,222
	ctx.r3.s64 = ctx.r31.s64 + 14548992;
	// addi r3,r3,26344
	ctx.r3.s64 = ctx.r3.s64 + 26344;
	// b 0x82c10d80
	goto loc_82C10D80;
loc_82C10D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// bl 0x8311bd68
	ctx.lr = 0x82C10D54;
	sub_8311BD68(ctx, base);
	// b 0x82c10d80
	goto loc_82C10D80;
loc_82C10D58:
	// bl 0x82d86078
	ctx.lr = 0x82C10D5C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c10d7c
	if (cr6.eq) goto loc_82C10D7C;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lbz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c10d7c
	if (cr6.eq) goto loc_82C10D7C;
	// bl 0x83767d18
	ctx.lr = 0x82C10D78;
	sub_83767D18(ctx, base);
	// b 0x82c10d80
	goto loc_82C10D80;
loc_82C10D7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C10D80:
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

__attribute__((alias("__imp__sub_82C10D98"))) PPC_WEAK_FUNC(sub_82C10D98);
PPC_FUNC_IMPL(__imp__sub_82C10D98) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce778
	ctx.lr = 0x82C10DA8;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x82c10e78
	if (!cr6.gt) goto loc_82C10E78;
	// fcmpu cr6,f2,f1
	cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// ble cr6,0x82c10e78
	if (!cr6.gt) goto loc_82C10E78;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bne cr6,0x82c10dec
	if (!cr6.eq) goto loc_82C10DEC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f28,-11416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11416);
	ctx.f28.f64 = double(temp.f32);
	// b 0x82c10e00
	goto loc_82C10E00;
loc_82C10DEC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-24956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24956);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// bl 0x831d1a10
	ctx.lr = 0x82C10DFC;
	sub_831D1A10(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
loc_82C10E00:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// beq cr6,0x82c10e20
	if (cr6.eq) goto loc_82C10E20;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-24960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24960);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// bl 0x831d1a10
	ctx.lr = 0x82C10E20;
	sub_831D1A10(ctx, base);
loc_82C10E20:
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f12,f30,f30
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f11,f28,f31
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fadds f10,f31,f30
	ctx.f10.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f8,f11,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fnmsubs f6,f8,f0,f9
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f4,f5,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f7.f64));
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fdivs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// fdivs f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f10.f64));
	// fnmsubs f13,f1,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
loc_82C10E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7c4
	ctx.lr = 0x82C10E84;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C10E90"))) PPC_WEAK_FUNC(sub_82C10E90);
PPC_FUNC_IMPL(__imp__sub_82C10E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C10E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C10EC0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c10ee0
	if (cr6.eq) goto loc_82C10EE0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c10a70
	ctx.lr = 0x82C10ED8;
	sub_82C10A70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C10EE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C10EEC"))) PPC_WEAK_FUNC(sub_82C10EEC);
PPC_FUNC_IMPL(__imp__sub_82C10EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C10EF0"))) PPC_WEAK_FUNC(sub_82C10EF0);
PPC_FUNC_IMPL(__imp__sub_82C10EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C10EF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82c10fc4
	if (!cr6.eq) goto loc_82C10FC4;
	// bl 0x82d19a68
	ctx.lr = 0x82C10F14;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r11,-23272
	ctx.r27.s64 = ctx.r11.s64 + -23272;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C10F34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C10F3C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-36(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -36);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C10F54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C10F60;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82C10F78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82c10f9c
	if (!cr6.eq) goto loc_82C10F9C;
loc_82C10F84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82C10F8C;
	sub_8387E8E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82C10F94;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C10F9C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82c10f84
	if (cr6.eq) goto loc_82C10F84;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C10FB8;
	sub_82D291E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c11028
	goto loc_82C11028;
loc_82C10FC4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82c10fd4
	if (cr6.eq) goto loc_82C10FD4;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82c11034
	if (!cr6.eq) goto loc_82C11034;
loc_82C10FD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C10FDC;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r29,-31776
	ctx.r29.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r29,-23272
	ctx.r11.s64 = ctx.r29.s64 + -23272;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C10FFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C11004;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-23272(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23272);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C1101C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c10f84
	if (cr6.eq) goto loc_82C10F84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C11028:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82C11034;
	sub_82D291E0(ctx, base);
loc_82C11034:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c11054
	if (cr6.lt) goto loc_82C11054;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C11054;
	sub_825952B8(ctx, base);
loc_82C11054:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c11084
	if (cr6.lt) goto loc_82C11084;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C11084;
	sub_825952B8(ctx, base);
loc_82C11084:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C11098"))) PPC_WEAK_FUNC(sub_82C11098);
PPC_FUNC_IMPL(__imp__sub_82C11098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C110A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C110B0;
	sub_831156E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r28,r11,-26746
	ctx.r28.s64 = ctx.r11.s64 + -26746;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r28,-1
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// bl 0x8259cc28
	ctx.lr = 0x82C110E0;
	sub_8259CC28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c10cd8
	ctx.lr = 0x82C110E8;
	sub_82C10CD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c1111c
	if (!cr6.eq) goto loc_82C1111C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c111d0
	if (cr6.lt) goto loc_82C111D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C11114;
	sub_825952B8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1111C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311bd68
	ctx.lr = 0x82C11128;
	sub_8311BD68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c111c8
	if (cr6.eq) goto loc_82C111C8;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831235b8
	ctx.lr = 0x82C11148;
	sub_831235B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831a7760
	ctx.lr = 0x82C11150;
	sub_831A7760(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82c11188
	if (cr6.eq) goto loc_82C11188;
	// lis r4,277
	ctx.r4.s64 = 18153472;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,740
	ctx.r4.u64 = ctx.r4.u64 | 740;
	// bl 0x82d042a8
	ctx.lr = 0x82C11188;
	sub_82D042A8(ctx, base);
loc_82C11188:
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82C111A8;
	sub_8259CB28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C111B4;
	sub_837B0C10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c10ef0
	ctx.lr = 0x82C111C8;
	sub_82C10EF0(ctx, base);
loc_82C111C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C111D0;
	sub_8387E8E0(ctx, base);
loc_82C111D0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C111D8"))) PPC_WEAK_FUNC(sub_82C111D8);
PPC_FUNC_IMPL(__imp__sub_82C111D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C111E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r4.u64);
	// bl 0x831156e8
	ctx.lr = 0x82C111F0;
	sub_831156E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r30,r11,-26674
	ctx.r30.s64 = ctx.r11.s64 + -26674;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r30,-71
	ctx.r4.s64 = ctx.r30.s64 + -71;
	// bl 0x8259cc28
	ctx.lr = 0x82C1121C;
	sub_8259CC28(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82C11238;
	sub_8259CC28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c10cd8
	ctx.lr = 0x82C11240;
	sub_82C10CD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c11298
	if (!cr6.eq) goto loc_82C11298;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c11268
	if (cr6.lt) goto loc_82C11268;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C11268;
	sub_825952B8(ctx, base);
loc_82C11268:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82c11344
	if (cr6.lt) goto loc_82C11344;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C11290;
	sub_825952B8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C11298:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c112ac
	if (!cr6.eq) goto loc_82C112AC;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82C112AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x83182dc0
	ctx.lr = 0x82C112BC;
	sub_83182DC0(ctx, base);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x82C112DC;
	sub_8259CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82C112E8;
	sub_837B0C10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c10ef0
	ctx.lr = 0x82C112FC;
	sub_82C10EF0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1131c
	if (cr6.lt) goto loc_82C1131C;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C1131C;
	sub_825952B8(ctx, base);
loc_82C1131C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82c11344
	if (cr6.lt) goto loc_82C11344;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C11344;
	sub_825952B8(ctx, base);
loc_82C11344:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1134C"))) PPC_WEAK_FUNC(sub_82C1134C);
PPC_FUNC_IMPL(__imp__sub_82C1134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C11350"))) PPC_WEAK_FUNC(sub_82C11350);
PPC_FUNC_IMPL(__imp__sub_82C11350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82C11358;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce768
	ctx.lr = 0x82C11360;
	__savefpr_24(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r11,-25344
	ctx.r26.s64 = ctx.r11.s64 + -25344;
	// addi r25,r3,104
	ctx.r25.s64 = ctx.r3.s64 + 104;
	// addi r11,r26,-120
	ctx.r11.s64 = ctx.r26.s64 + -120;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r11,r26,-88
	ctx.r11.s64 = ctx.r26.s64 + -88;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r3,r26,-100
	ctx.r3.s64 = ctx.r26.s64 + -100;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r11,r26,-52
	ctx.r11.s64 = ctx.r26.s64 + -52;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r31,r26,-108
	ctx.r31.s64 = ctx.r26.s64 + -108;
	// addi r3,r26,-64
	ctx.r3.s64 = ctx.r26.s64 + -64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r11,r26,-20
	ctx.r11.s64 = ctx.r26.s64 + -20;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lis r9,21
	ctx.r9.s64 = 1376256;
	// addi r31,r26,-76
	ctx.r31.s64 = ctx.r26.s64 + -76;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r8,21
	ctx.r8.s64 = 1376256;
	// addi r3,r26,-32
	ctx.r3.s64 = ctx.r26.s64 + -32;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lis r7,21
	ctx.r7.s64 = 1376256;
	// ori r11,r9,61
	ctx.r11.u64 = ctx.r9.u64 | 61;
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// lis r6,21
	ctx.r6.s64 = 1376256;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// ori r9,r8,62
	ctx.r9.u64 = ctx.r8.u64 | 62;
	// lis r5,21
	ctx.r5.s64 = 1376256;
	// addi r31,r26,-44
	ctx.r31.s64 = ctx.r26.s64 + -44;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// ori r8,r7,31
	ctx.r8.u64 = ctx.r7.u64 | 31;
	// lis r4,21
	ctx.r4.s64 = 1376256;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// ori r7,r6,28
	ctx.r7.u64 = ctx.r6.u64 | 28;
	// ori r6,r5,29
	ctx.r6.u64 = ctx.r5.u64 | 29;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// ori r5,r4,63
	ctx.r5.u64 = ctx.r4.u64 | 63;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r21,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r21.u32);
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// bl 0x8314be30
	ctx.lr = 0x82C11450;
	sub_8314BE30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C11458;
	sub_831156E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r24,48(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// bl 0x82d19a68
	ctx.lr = 0x82C11468;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-23256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23256);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C11484;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c11b00
	if (cr6.eq) goto loc_82C11B00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c10cd8
	ctx.lr = 0x82C11498;
	sub_82C10CD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c11b00
	if (cr6.eq) goto loc_82C11B00;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c11598
	if (!cr6.eq) goto loc_82C11598;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a67800
	ctx.lr = 0x82C114C0;
	sub_82A67800(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b00d00
	ctx.lr = 0x82C114C8;
	sub_82B00D00(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b00b98
	ctx.lr = 0x82C114D0;
	sub_82B00B98(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// addi r4,r11,-23160
	ctx.r4.s64 = ctx.r11.s64 + -23160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a2298
	ctx.lr = 0x82C114E4;
	sub_825A2298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c11514
	if (cr6.eq) goto loc_82C11514;
	// bl 0x831156e8
	ctx.lr = 0x82C114F4;
	sub_831156E8(ctx, base);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82C11500;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b1e0e8
	ctx.lr = 0x82C1150C;
	sub_82B1E0E8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82c11518
	goto loc_82C11518;
loc_82C11514:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82C11518:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82a67800
	ctx.lr = 0x82C11528;
	sub_82A67800(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// addi r27,r11,100
	ctx.r27.s64 = ctx.r11.s64 + 100;
	// li r28,6
	ctx.r28.s64 = 6;
loc_82C1153C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C11554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c11578
	if (cr6.eq) goto loc_82C11578;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1156C;
	sub_82D2AEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82C11578;
	sub_82D29598(ctx, base);
loc_82C11578:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82c1153c
	if (!cr0.eq) goto loc_82C1153C;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7b4
	ctx.lr = 0x82C11594;
	__restfpr_24(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82C11598:
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r20,48(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83815d38
	ctx.lr = 0x82C115AC;
	sub_83815D38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815b28
	ctx.lr = 0x82C115B8;
	sub_83815B28(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lfs f25,24500(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24500);
	ctx.f25.f64 = double(temp.f32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lfs f26,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f26.f64 = double(temp.f32);
	// lis r3,221
	ctx.r3.s64 = 14483456;
	// lfs f27,21812(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21812);
	ctx.f27.f64 = double(temp.f32);
	// clrlwi r22,r28,24
	ctx.r22.u64 = ctx.r28.u32 & 0xFF;
	// lfs f30,7400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7400);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,21708(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21708);
	ctx.f31.f64 = double(temp.f32);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// lfs f28,-24948(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24948);
	ctx.f28.f64 = double(temp.f32);
	// addi r23,r31,100
	ctx.r23.s64 = ctx.r31.s64 + 100;
	// lfs f29,-24952(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24952);
	ctx.f29.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ori r28,r3,57072
	ctx.r28.u64 = ctx.r3.u64 | 57072;
loc_82C11608:
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r8,r27,r10
	ctx.r8.u64 = ctx.r27.u64 + ctx.r10.u64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C1162C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c11680
	if (cr6.eq) goto loc_82C11680;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c11670
	if (cr6.eq) goto loc_82C11670;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82C11650;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C11664;
	sub_82D291E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1166C;
	sub_8387E8E0(ctx, base);
	// b 0x82c11680
	goto loc_82C11680;
loc_82C11670:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C11680;
	sub_82D2AEC8(ctx, base);
loc_82C11680:
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// lwzx r31,r31,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// beq cr6,0x82c11710
	if (cr6.eq) goto loc_82C11710;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82c116e4
	if (cr6.eq) goto loc_82C116E4;
	// add r3,r24,r28
	ctx.r3.u64 = ctx.r24.u64 + ctx.r28.u64;
	// ld r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// bl 0x82c109c8
	ctx.lr = 0x82C116A4;
	sub_82C109C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c10970
	ctx.lr = 0x82C116AC;
	sub_82C10970(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af5b48
	ctx.lr = 0x82C116BC;
	sub_82AF5B48(ctx, base);
	// rlwinm r11,r3,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFF0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fmuls f1,f11,f28
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// b 0x82c11898
	goto loc_82C11898;
loc_82C116E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af5b48
	ctx.lr = 0x82C116F0;
	sub_82AF5B48(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fmuls f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// b 0x82c11898
	goto loc_82C11898;
loc_82C11710:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// beq cr6,0x82c11720
	if (cr6.eq) goto loc_82C11720;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
loc_82C11720:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(ctx.r27.u32, 5, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x82c11734
	if (cr6.eq) goto loc_82C11734;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
loc_82C11734:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82c11804
	if (cr6.eq) goto loc_82C11804;
	// add r3,r24,r28
	ctx.r3.u64 = ctx.r24.u64 + ctx.r28.u64;
	// ld r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// bl 0x82c109c8
	ctx.lr = 0x82C1174C;
	sub_82C109C8(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r11,r30,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1FE;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r18,r7,r9
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82af5b48
	ctx.lr = 0x82C11774;
	sub_82AF5B48(ctx, base);
	// rlwinm r30,r3,4,12,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFF0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82c10970
	ctx.lr = 0x82C11784;
	sub_82C10970(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r31,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// lfd f0,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fmuls f24,f11,f28
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// bl 0x82af5b48
	ctx.lr = 0x82C117CC;
	sub_82AF5B48(ctx, base);
	// rlwinm r31,r3,4,12,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82c10970
	ctx.lr = 0x82C117DC;
	sub_82C10970(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fadds f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f29.f64));
	// fmuls f2,f7,f28
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// b 0x82c1187c
	goto loc_82C1187C;
loc_82C11804:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r11,r30,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1FE;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x82af5b48
	ctx.lr = 0x82C11824;
	sub_82AF5B48(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r31,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fmuls f24,f11,f30
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// bl 0x82af5b48
	ctx.lr = 0x82C11860;
	sub_82AF5B48(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f10,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fadds f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// fmuls f2,f7,f30
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
loc_82C1187C:
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x82c10d98
	ctx.lr = 0x82C11888;
	sub_82C10D98(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// blt cr6,0x82c118a0
	if (cr6.lt) goto loc_82C118A0;
	// fcmpu cr6,f1,f25
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bgt cr6,0x82c118a0
	if (cr6.gt) goto loc_82C118A0;
loc_82C11898:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815b68
	ctx.lr = 0x82C118A0;
	sub_83815B68(ctx, base);
loc_82C118A0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r27,6
	cr6.compare<uint32_t>(ctx.r27.u32, 6, xer);
	// blt cr6,0x82c11608
	if (cr6.lt) goto loc_82C11608;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x838153c8
	ctx.lr = 0x82C118BC;
	sub_838153C8(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82c11af8
	if (cr6.eq) goto loc_82C11AF8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83815d38
	ctx.lr = 0x82C118D0;
	sub_83815D38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83815b28
	ctx.lr = 0x82C118DC;
	sub_83815B28(ctx, base);
	// add r3,r24,r28
	ctx.r3.u64 = ctx.r24.u64 + ctx.r28.u64;
	// ld r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// bl 0x82c109c8
	ctx.lr = 0x82C118E8;
	sub_82C109C8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
loc_82C118FC:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c11984
	if (cr6.eq) goto loc_82C11984;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82c11960
	if (cr6.gt) goto loc_82C11960;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c1193c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C1193C;
	// bdzf 4*cr6+eq,0x82c11948
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C11948;
	// bne cr6,0x82c11954
	if (!cr6.eq) goto loc_82C11954;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// b 0x82c11964
	goto loc_82C11964;
loc_82C1193C:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82c11964
	goto loc_82C11964;
loc_82C11948:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// b 0x82c11964
	goto loc_82C11964;
loc_82C11954:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82c11964
	goto loc_82C11964;
loc_82C11960:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C11964:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fmuls f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// b 0x82c11acc
	goto loc_82C11ACC;
loc_82C11984:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// beq cr6,0x82c11994
	if (cr6.eq) goto loc_82C11994;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
loc_82C11994:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// beq cr6,0x82c119a8
	if (cr6.eq) goto loc_82C119A8;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
loc_82C119A8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82c11a10
	if (cr6.gt) goto loc_82C11A10;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c119ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C119EC;
	// bdzf 4*cr6+eq,0x82c119f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C119F8;
	// bne cr6,0x82c11a04
	if (!cr6.eq) goto loc_82C11A04;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// b 0x82c11a14
	goto loc_82C11A14;
loc_82C119EC:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82c11a14
	goto loc_82C11A14;
loc_82C119F8:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// b 0x82c11a14
	goto loc_82C11A14;
loc_82C11A04:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82c11a14
	goto loc_82C11A14;
loc_82C11A10:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C11A14:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1FE;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fmuls f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// bgt cr6,0x82c11a94
	if (cr6.gt) goto loc_82C11A94;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c11a70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C11A70;
	// bdzf 4*cr6+eq,0x82c11a7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C11A7C;
	// bne cr6,0x82c11a88
	if (!cr6.eq) goto loc_82C11A88;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// b 0x82c11a98
	goto loc_82C11A98;
loc_82C11A70:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82c11a98
	goto loc_82C11A98;
loc_82C11A7C:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// b 0x82c11a98
	goto loc_82C11A98;
loc_82C11A88:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82c11a98
	goto loc_82C11A98;
loc_82C11A94:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C11A98:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fmuls f2,f11,f30
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// bl 0x82c10d98
	ctx.lr = 0x82C11ABC;
	sub_82C10D98(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// blt cr6,0x82c11ad4
	if (cr6.lt) goto loc_82C11AD4;
	// fcmpu cr6,f1,f25
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bgt cr6,0x82c11ad4
	if (cr6.gt) goto loc_82C11AD4;
loc_82C11ACC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83815b68
	ctx.lr = 0x82C11AD4;
	sub_83815B68(ctx, base);
loc_82C11AD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x82c118fc
	if (cr6.lt) goto loc_82C118FC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x838153c8
	ctx.lr = 0x82C11AF0;
	sub_838153C8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83815cb8
	ctx.lr = 0x82C11AF8;
	sub_83815CB8(ctx, base);
loc_82C11AF8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83815cb8
	ctx.lr = 0x82C11B00;
	sub_83815CB8(ctx, base);
loc_82C11B00:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7b4
	ctx.lr = 0x82C11B0C;
	__restfpr_24(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C11B10"))) PPC_WEAK_FUNC(sub_82C11B10);
PPC_FUNC_IMPL(__imp__sub_82C11B10) {
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
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82c11350
	ctx.lr = 0x82C11B34;
	sub_82C11350(ctx, base);
	// lbz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_82C11B58"))) PPC_WEAK_FUNC(sub_82C11B58);
PPC_FUNC_IMPL(__imp__sub_82C11B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82C11B60;
	__savegprlr_21(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82C11B6C;
	sub_830FF290(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C11B74;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r21,48(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c10cd8
	ctx.lr = 0x82C11B84;
	sub_82C10CD8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c11bbc
	if (!cr6.eq) goto loc_82C11BBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ffaa8
	ctx.lr = 0x82C11B98;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x82c1274c
	if (cr6.eq) goto loc_82C1274C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C11BA8;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82C11BB4;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C11BBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C11BC4;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r25,r11,-23256
	ctx.r25.s64 = ctx.r11.s64 + -23256;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-104(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -104);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C11BE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1274c
	if (cr6.eq) goto loc_82C1274C;
	// bl 0x82d28268
	ctx.lr = 0x82C11BF4;
	sub_82D28268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,-25480
	ctx.r27.s64 = ctx.r11.s64 + -25480;
	// addi r4,r27,-1330
	ctx.r4.s64 = ctx.r27.s64 + -1330;
	// bl 0x837b0c10
	ctx.lr = 0x82C11C08;
	sub_837B0C10(ctx, base);
	// lwz r11,200(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c11c64
	if (cr6.eq) goto loc_82C11C64;
	// addi r4,r27,-1329
	ctx.r4.s64 = ctx.r27.s64 + -1329;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82C11C20;
	sub_837B0C10(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,200(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 200);
	// bl 0x82d04220
	ctx.lr = 0x82C11C2C;
	sub_82D04220(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c11c40
	if (!cr6.lt) goto loc_82C11C40;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
loc_82C11C40:
	// addi r30,r24,56
	ctx.r30.s64 = ctx.r24.s64 + 56;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r4,r4,629
	ctx.r4.u64 = ctx.r4.u64 | 629;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82C11C58;
	sub_82D042A8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82C11C60;
	sub_8387E8E0(ctx, base);
	// b 0x82c11c74
	goto loc_82C11C74;
loc_82C11C64:
	// addi r30,r24,56
	ctx.r30.s64 = ctx.r24.s64 + 56;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82C11C74;
	sub_8259D6C0(ctx, base);
loc_82C11C74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ffaa8
	ctx.lr = 0x82C11C7C;
	sub_830FFAA8(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82c11cfc
	if (!cr6.eq) goto loc_82C11CFC;
	// bl 0x82d86078
	ctx.lr = 0x82C11C8C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12744
	if (cr6.eq) goto loc_82C12744;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C11C9C;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82C11CA0;
	sub_83102DB0(ctx, base);
	// ld r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82d9a868
	ctx.lr = 0x82C11CB0;
	sub_82D9A868(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r27,-1298
	ctx.r4.s64 = ctx.r27.s64 + -1298;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x82C11CC0;
	sub_837B0C10(ctx, base);
	// lbz r10,66(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 66);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c11cf4
	if (cr6.eq) goto loc_82C11CF4;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,347
	ctx.r4.u64 = ctx.r4.u64 | 347;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d042a8
	ctx.lr = 0x82C11CE0;
	sub_82D042A8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82C11CF4;
	sub_8259CB28(ctx, base);
loc_82C11CF4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82C11CFC;
	sub_8387E8E0(ctx, base);
loc_82C11CFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C11D10;
	sub_82D291E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28248
	ctx.lr = 0x82C11D18;
	sub_82D28248(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C11D20;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-96(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C11D38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12744
	if (cr6.eq) goto loc_82C12744;
	// addis r22,r21,236
	ctx.r22.s64 = ctx.r21.s64 + 15466496;
	// addi r22,r22,5128
	ctx.r22.s64 = ctx.r22.s64 + 5128;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c11d74
	if (!cr6.eq) goto loc_82C11D74;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c11d74
	if (!cr6.eq) goto loc_82C11D74;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46724
	ctx.r10.u64 = ctx.r11.u64 | 46724;
	// lhzx r11,r21,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r10.u32);
	// b 0x82c11d78
	goto loc_82C11D78;
loc_82C11D74:
	// lhz r11,188(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 188);
loc_82C11D78:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82c11d9c
	if (cr6.eq) goto loc_82C11D9C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c11d9c
	if (cr6.eq) goto loc_82C11D9C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8311c628
	ctx.lr = 0x82C11D94;
	sub_8311C628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82c11da0
	goto loc_82C11DA0;
loc_82C11D9C:
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
loc_82C11DA0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82C11DA8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C11DBC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82C11DC4;
	sub_8387E8E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C11DCC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-88(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C11DE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12744
	if (cr6.eq) goto loc_82C12744;
	// bl 0x83763ef8
	ctx.lr = 0x82C11DF4;
	sub_83763EF8(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// beq cr6,0x82c11e0c
	if (cr6.eq) goto loc_82C11E0C;
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, xer);
	// bne cr6,0x82c11ea8
	if (!cr6.eq) goto loc_82C11EA8;
loc_82C11E0C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c11ea8
	if (cr6.eq) goto loc_82C11EA8;
	// lbz r11,209(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 209);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c11ea8
	if (cr6.eq) goto loc_82C11EA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be2aa0
	ctx.lr = 0x82C11E30;
	sub_82BE2AA0(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-23112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23112);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c11e60
	if (!cr6.eq) goto loc_82C11E60;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c11e64
	if (cr6.eq) goto loc_82C11E64;
loc_82C11E60:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82C11E64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c123a8
	if (!cr6.eq) goto loc_82C123A8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8311c148
	ctx.lr = 0x82C11E78;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82C11E88;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C11E9C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82C11EA4;
	sub_8387E8E0(ctx, base);
	// b 0x82c121e0
	goto loc_82C121E0;
loc_82C11EA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ffaa8
	ctx.lr = 0x82C11EB0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82c120a8
	if (!cr6.eq) goto loc_82C120A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C11EC0;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82c11ed0
	if (!cr6.eq) goto loc_82C11ED0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82C11ED0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-92(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -92);
	// bl 0x837b0c10
	ctx.lr = 0x82C11EDC;
	sub_837B0C10(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,364
	ctx.r5.u64 = ctx.r5.u64 | 364;
	// bl 0x82a69a28
	ctx.lr = 0x82C11EF0;
	sub_82A69A28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82C11EF4;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bf98
	ctx.lr = 0x82C11F04;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82C11F14;
	sub_831CE980(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x831235b8
	ctx.lr = 0x82C11F28;
	sub_831235B8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,-23112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23112);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c11f58
	if (!cr6.eq) goto loc_82C11F58;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c11f5c
	if (cr6.eq) goto loc_82C11F5C;
loc_82C11F58:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82C11F5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c11fa0
	if (!cr6.eq) goto loc_82C11FA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x82C11F70;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82C11F80;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C11F94;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C11F9C;
	sub_8387E8E0(ctx, base);
	// b 0x82c11fb0
	goto loc_82C11FB0;
loc_82C11FA0:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,177
	ctx.r4.u64 = ctx.r4.u64 | 177;
	// bl 0x82d29598
	ctx.lr = 0x82C11FB0;
	sub_82D29598(ctx, base);
loc_82C11FB0:
	// addi r4,r27,-1297
	ctx.r4.s64 = ctx.r27.s64 + -1297;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82C11FC0;
	sub_837B0C10(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82C11FC4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c11fe8
	if (!cr6.eq) goto loc_82C11FE8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82C11FD8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C11FE0;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82C11FE8:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82C11FF0;
	sub_825832D8(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82c12018
	if (!cr6.eq) goto loc_82C12018;
	// bl 0x83102db0
	ctx.lr = 0x82C12000;
	sub_83102DB0(ctx, base);
	// ld r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82d9a868
	ctx.lr = 0x82C12010;
	sub_82D9A868(ctx, base);
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x82c12050
	goto loc_82C12050;
loc_82C12018:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82c12044
	if (!cr6.eq) goto loc_82C12044;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82C12028;
	sub_8332F198(ctx, base);
	// ld r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82d9c120
	ctx.lr = 0x82C12034;
	sub_82D9C120(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82d9c458
	ctx.lr = 0x82C1203C;
	sub_82D9C458(ctx, base);
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x82c12050
	goto loc_82C12050;
loc_82C12044:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x82c12050
	if (!cr6.eq) goto loc_82C12050;
	// li r30,30
	ctx.r30.s64 = 30;
loc_82C12050:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12058;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-84(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,500
	ctx.r4.u64 = ctx.r4.u64 | 500;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x82C12088;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C1209C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82C120A4;
	sub_8387E8E0(ctx, base);
	// b 0x82c121e0
	goto loc_82C121E0;
loc_82C120A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ffaa8
	ctx.lr = 0x82C120B0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// beq cr6,0x82c121e0
	if (cr6.eq) goto loc_82C121E0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831235b8
	ctx.lr = 0x82C120CC;
	sub_831235B8(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c1212c
	if (!cr6.eq) goto loc_82C1212C;
	// bl 0x8311e3d0
	ctx.lr = 0x82C120E0;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8311d640
	ctx.lr = 0x82C120F0;
	sub_8311D640(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x82C120FC;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82C1210C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C12120;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C12128;
	sub_8387E8E0(ctx, base);
	// b 0x82c121e0
	goto loc_82C121E0;
loc_82C1212C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,-23112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23112);
	// xor r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c12158
	if (!cr6.eq) goto loc_82C12158;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1215c
	if (cr6.eq) goto loc_82C1215C;
loc_82C12158:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82C1215C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c121a0
	if (!cr6.eq) goto loc_82C121A0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8311c148
	ctx.lr = 0x82C12170;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82C12180;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C12194;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1219C;
	sub_8387E8E0(ctx, base);
	// b 0x82c121e0
	goto loc_82C121E0;
loc_82C121A0:
	// lwz r11,180(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 180);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82c123cc
	if (cr6.gt) goto loc_82C123CC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c123b4
	if (cr6.eq) goto loc_82C123B4;
	// bdz 0x82c123a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C123A8;
	// bdz 0x82c123c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C123C0;
	// bdz 0x82c123cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C123CC;
	// bdz 0x82c123cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C123CC;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,274
	ctx.r4.u64 = ctx.r4.u64 | 274;
loc_82C121D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C121E0;
	sub_82D29598(ctx, base);
loc_82C121E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C121E8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-76(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12200;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12744
	if (cr6.eq) goto loc_82C12744;
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83120738
	ctx.lr = 0x82C12224;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C12234;
	sub_82D294D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C1223C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-68(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -68);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C12254;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12744
	if (cr6.eq) goto loc_82C12744;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a66ef0
	ctx.lr = 0x82C1226C;
	sub_82A66EF0(ctx, base);
	// clrldi r4,r3,56
	ctx.r4.u64 = ctx.r3.u64 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82C12278;
	sub_82D294D0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83120738
	ctx.lr = 0x82C12288;
	sub_83120738(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82a67598
	ctx.lr = 0x82C12290;
	sub_82A67598(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C1229C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-36(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C122B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12744
	if (cr6.eq) goto loc_82C12744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C122C4;
	sub_82D29598(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C122CC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-32(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C122E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12744
	if (cr6.eq) goto loc_82C12744;
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// ori r4,r4,180
	ctx.r4.u64 = ctx.r4.u64 | 180;
	// bl 0x82d29598
	ctx.lr = 0x82C122F8;
	sub_82D29598(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12300;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12744
	if (cr6.eq) goto loc_82C12744;
	// lwz r10,184(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 184);
	// li r11,15
	ctx.r11.s64 = 15;
	// lbz r31,196(r24)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r24.u32 + 196);
	// rlwinm r5,r10,28,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r26.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stb r26,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r26.u8);
	// beq cr6,0x82c12420
	if (cr6.eq) goto loc_82C12420;
	// cmpwi cr6,r31,18
	cr6.compare<int32_t>(ctx.r31.s32, 18, xer);
	// beq cr6,0x82c12420
	if (cr6.eq) goto loc_82C12420;
	// cmpwi cr6,r31,19
	cr6.compare<int32_t>(ctx.r31.s32, 19, xer);
	// beq cr6,0x82c12420
	if (cr6.eq) goto loc_82C12420;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// ori r4,r4,500
	ctx.r4.u64 = ctx.r4.u64 | 500;
	// bl 0x82d042a8
	ctx.lr = 0x82C12374;
	sub_82D042A8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,208(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bge cr6,0x82c12388
	if (!cr6.lt) goto loc_82C12388;
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
loc_82C12388:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831a82a8
	ctx.lr = 0x82C12394;
	sub_831A82A8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c123f8
	if (cr6.lt) goto loc_82C123F8;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c123fc
	goto loc_82C123FC;
loc_82C123A8:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,177
	ctx.r4.u64 = ctx.r4.u64 | 177;
	// b 0x82c121d8
	goto loc_82C121D8;
loc_82C123B4:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,178
	ctx.r4.u64 = ctx.r4.u64 | 178;
	// b 0x82c121d8
	goto loc_82C121D8;
loc_82C123C0:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,487
	ctx.r4.u64 = ctx.r4.u64 | 487;
	// b 0x82c121d8
	goto loc_82C121D8;
loc_82C123CC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C123D8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C123EC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C123F4;
	sub_8387E8E0(ctx, base);
	// b 0x82c121e0
	goto loc_82C121E0;
loc_82C123F8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82C123FC:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r4,r4,634
	ctx.r4.u64 = ctx.r4.u64 | 634;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d042a8
	ctx.lr = 0x82C12410;
	sub_82D042A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C12418;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x82c12444
	goto loc_82C12444;
loc_82C12420:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831a82a8
	ctx.lr = 0x82C1242C;
	sub_831A82A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cb28
	ctx.lr = 0x82C12440;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82C12444:
	// bl 0x8387e8e0
	ctx.lr = 0x82C12448;
	sub_8387E8E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C1245C;
	sub_82D291E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12464;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-112(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1247C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c124ec
	if (cr6.eq) goto loc_82C124EC;
	// bl 0x830ff290
	ctx.lr = 0x82C1248C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C12490;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82c124c8
	if (!cr6.eq) goto loc_82C124C8;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c124c8
	if (!cr6.eq) goto loc_82C124C8;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46613
	ctx.r10.u64 = ctx.r11.u64 | 46613;
	// lbzx r9,r21,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c124c8
	if (!cr6.eq) goto loc_82C124C8;
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// ori r10,r11,26340
	ctx.r10.u64 = ctx.r11.u64 | 26340;
	// lwzx r4,r21,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// b 0x82c124e4
	goto loc_82C124E4;
loc_82C124C8:
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83120738
	ctx.lr = 0x82C124E0;
	sub_83120738(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C124E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d39310
	ctx.lr = 0x82C124EC;
	sub_82D39310(ctx, base);
loc_82C124EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C124F4;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-108(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1250C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12568
	if (cr6.eq) goto loc_82C12568;
	// bl 0x830ff290
	ctx.lr = 0x82C1251C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C12520;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82c12558
	if (!cr6.eq) goto loc_82C12558;
	// ld r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 44);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82d8c868
	ctx.lr = 0x82C1253C;
	sub_82D8C868(ctx, base);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c12568
	goto loc_82C12568;
loc_82C12558:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C12568;
	sub_82D2AEC8(ctx, base);
loc_82C12568:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12570;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-24(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c125e8
	if (cr6.eq) goto loc_82C125E8;
	// bl 0x830ff290
	ctx.lr = 0x82C12598;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C1259C;
	sub_830FFAA8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82c125cc
	if (!cr6.eq) goto loc_82C125CC;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,120(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r3,104(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 104);
	// bl 0x83179518
	ctx.lr = 0x82C125C0;
	sub_83179518(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrldi r4,r3,56
	ctx.r4.u64 = ctx.r3.u64 & 0xFF;
	// b 0x82c125e0
	goto loc_82C125E0;
loc_82C125CC:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8314b1c8
	ctx.lr = 0x82C125DC;
	sub_8314B1C8(ctx, base);
	// clrldi r4,r3,56
	ctx.r4.u64 = ctx.r3.u64 & 0xFF;
loc_82C125E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82C125E8;
	sub_82D294D0(ctx, base);
loc_82C125E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C125F0;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1262c
	if (cr6.eq) goto loc_82C1262C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c10cd8
	ctx.lr = 0x82C1261C;
	sub_82C10CD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1262c
	if (cr6.eq) goto loc_82C1262C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a68ea0
	ctx.lr = 0x82C1262C;
	sub_82A68EA0(ctx, base);
loc_82C1262C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12634;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1264C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12670
	if (cr6.eq) goto loc_82C12670;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c10cd8
	ctx.lr = 0x82C12660;
	sub_82C10CD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12670
	if (cr6.eq) goto loc_82C12670;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a676d8
	ctx.lr = 0x82C12670;
	sub_82A676D8(ctx, base);
loc_82C12670:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12678;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12720
	if (cr6.eq) goto loc_82C12720;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c10cd8
	ctx.lr = 0x82C126A4;
	sub_82C10CD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12720
	if (cr6.eq) goto loc_82C12720;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a67800
	ctx.lr = 0x82C126BC;
	sub_82A67800(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b00d00
	ctx.lr = 0x82C126C4;
	sub_82B00D00(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b00b98
	ctx.lr = 0x82C126CC;
	sub_82B00B98(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r30,r28,112
	ctx.r30.s64 = ctx.r28.s64 + 112;
	// addi r4,r11,-23160
	ctx.r4.s64 = ctx.r11.s64 + -23160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a2298
	ctx.lr = 0x82C126E0;
	sub_825A2298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1270c
	if (cr6.eq) goto loc_82C1270C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82C126F8;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b1e0e8
	ctx.lr = 0x82C12704;
	sub_82B1E0E8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82c12710
	goto loc_82C12710;
loc_82C1270C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82C12710:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82a67800
	ctx.lr = 0x82C12720;
	sub_82A67800(ctx, base);
loc_82C12720:
	// bl 0x830ff290
	ctx.lr = 0x82C12724;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C12728;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82c1273c
	if (!cr6.eq) goto loc_82C1273C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 104);
	// bl 0x82c111d8
	ctx.lr = 0x82C1273C;
	sub_82C111D8(ctx, base);
loc_82C1273C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82C12744;
	sub_8387E8E0(ctx, base);
loc_82C12744:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1274C;
	sub_8387E8E0(ctx, base);
loc_82C1274C:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C12754"))) PPC_WEAK_FUNC(sub_82C12754);
PPC_FUNC_IMPL(__imp__sub_82C12754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C12758"))) PPC_WEAK_FUNC(sub_82C12758);
PPC_FUNC_IMPL(__imp__sub_82C12758) {
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
	// bl 0x82c11b58
	ctx.lr = 0x82C12770;
	sub_82C11B58(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82C12774;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C12778;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82c1278c
	if (!cr6.eq) goto loc_82C1278C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// bl 0x82c11098
	ctx.lr = 0x82C1278C;
	sub_82C11098(ctx, base);
loc_82C1278C:
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

__attribute__((alias("__imp__sub_82C127A0"))) PPC_WEAK_FUNC(sub_82C127A0);
PPC_FUNC_IMPL(__imp__sub_82C127A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C127A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c11b58
	ctx.lr = 0x82C127B4;
	sub_82C11B58(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82C127B8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c10cd8
	ctx.lr = 0x82C127C8;
	sub_82C10CD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c129f4
	if (cr6.eq) goto loc_82C129F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C127DC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r29,r11,-23300
	ctx.r29.s64 = ctx.r11.s64 + -23300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C127FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c129f4
	if (cr6.eq) goto loc_82C129F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831236a0
	ctx.lr = 0x82C12818;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82C12828;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C12838;
	sub_82D294D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12840;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C12858;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c129f4
	if (cr6.eq) goto loc_82C129F4;
	// addis r26,r25,236
	ctx.r26.s64 = ctx.r25.s64 + 15466496;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r26,r26,5128
	ctx.r26.s64 = ctx.r26.s64 + 5128;
	// addi r27,r11,-25468
	ctx.r27.s64 = ctx.r11.s64 + -25468;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c12894
	if (!cr6.eq) goto loc_82C12894;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// bl 0x837b0c10
	ctx.lr = 0x82C1288C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x82c128a8
	goto loc_82C128A8;
loc_82C12894:
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8319d480
	ctx.lr = 0x82C128A4;
	sub_8319D480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82C128A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C128B8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C128C0;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C128C8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C128E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c129f4
	if (cr6.eq) goto loc_82C129F4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c12908
	if (!cr6.eq) goto loc_82C12908;
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// bl 0x837b0c10
	ctx.lr = 0x82C12904;
	sub_837B0C10(ctx, base);
	// b 0x82c129d8
	goto loc_82C129D8;
loc_82C12908:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82C12910;
	sub_837B0C10(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82C12914;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C12918;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82c12950
	if (cr6.eq) goto loc_82C12950;
	// bl 0x830ff290
	ctx.lr = 0x82C12924;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C12928;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82c12950
	if (cr6.eq) goto loc_82C12950;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r4,r11,39,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 39) & 0x7FFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C12940;
	sub_82D294D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C12948;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C12950:
	// lwz r31,176(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13128
	ctx.r4.s64 = ctx.r11.s64 + -13128;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82b06c70
	ctx.lr = 0x82C12968;
	sub_82B06C70(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c129d8
	if (cr6.eq) goto loc_82C129D8;
	// ld r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// addis r3,r25,205
	ctx.r3.s64 = ctx.r25.s64 + 13434880;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-18420
	ctx.r3.s64 = ctx.r3.s64 + -18420;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82a67128
	ctx.lr = 0x82C1298C;
	sub_82A67128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c129bc
	if (cr6.eq) goto loc_82C129BC;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// rlwinm r10,r11,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82c129ac
	if (cr6.eq) goto loc_82C129AC;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82c129bc
	if (!cr6.eq) goto loc_82C129BC;
loc_82C129AC:
	// rlwinm r11,r11,29,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xF0000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwimi r11,r31,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82C129BC:
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// clrlwi r7,r31,24
	ctx.r7.u64 = ctx.r31.u32 & 0xFF;
	// rlwinm r6,r31,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r31,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// ori r4,r4,192
	ctx.r4.u64 = ctx.r4.u64 | 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C129D8;
	sub_82D042A8(ctx, base);
loc_82C129D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C129EC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C129F4;
	sub_8387E8E0(ctx, base);
loc_82C129F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C129FC"))) PPC_WEAK_FUNC(sub_82C129FC);
PPC_FUNC_IMPL(__imp__sub_82C129FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C12A00"))) PPC_WEAK_FUNC(sub_82C12A00);
PPC_FUNC_IMPL(__imp__sub_82C12A00) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23160
	ctx.r11.s64 = ctx.r11.s64 + -23160;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c12a3c
	if (!cr6.eq) goto loc_82C12A3C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c12a64
	goto loc_82C12A64;
loc_82C12A3C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c12a5c
	if (!cr6.eq) goto loc_82C12A5C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c12a60
	if (cr6.eq) goto loc_82C12A60;
loc_82C12A5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C12A60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C12A64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c12a74
	if (!cr6.eq) goto loc_82C12A74;
	// std r4,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r4.u64);
loc_82C12A74:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82c12ba4
	if (cr6.gt) goto loc_82C12BA4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c12b74
	if (cr6.eq) goto loc_82C12B74;
	// bdz 0x82c12b74
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C12B74;
	// bdz 0x82c12aac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C12AAC;
	// bdz 0x82c12af0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C12AF0;
	// bdz 0x82c12b34
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C12B34;
	// bdz 0x82c12b74
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C12B74;
	// bdz 0x82c12b74
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C12B74;
	// bdz 0x82c12b74
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82C12B74;
	// b 0x82c12b74
	goto loc_82C12B74;
loc_82C12AAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12AB4;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-23212
	ctx.r10.s64 = ctx.r11.s64 + -23212;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,-16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C12AD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c12758
	ctx.lr = 0x82C12ADC;
	sub_82C12758(ctx, base);
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
loc_82C12AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12AF8;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-23212
	ctx.r10.s64 = ctx.r11.s64 + -23212;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C12B18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c127a0
	ctx.lr = 0x82C12B20;
	sub_82C127A0(ctx, base);
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
loc_82C12B34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12B3C;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,-23212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23212);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C12B58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c127a0
	ctx.lr = 0x82C12B60;
	sub_82C127A0(ctx, base);
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
loc_82C12B74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12B7C;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-23212
	ctx.r10.s64 = ctx.r11.s64 + -23212;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,-16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C12B9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c11b58
	ctx.lr = 0x82C12BA4;
	sub_82C11B58(ctx, base);
loc_82C12BA4:
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

__attribute__((alias("__imp__sub_82C12BB8"))) PPC_WEAK_FUNC(sub_82C12BB8);
PPC_FUNC_IMPL(__imp__sub_82C12BB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12BD4;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82C12BE4;
	sub_82D2B608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12BEC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r30,r11,-23196
	ctx.r30.s64 = ctx.r11.s64 + -23196;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -176);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12C0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c12c9c
	if (cr6.eq) goto loc_82C12C9C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82c12c34
	if (cr6.eq) goto loc_82C12C34;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82c12c34
	if (cr6.eq) goto loc_82C12C34;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,166
	ctx.r4.u64 = ctx.r4.u64 | 166;
	// b 0x82c12c3c
	goto loc_82C12C3C;
loc_82C12C34:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,216
	ctx.r4.u64 = ctx.r4.u64 | 216;
loc_82C12C3C:
	// bl 0x82d303d0
	ctx.lr = 0x82C12C40;
	sub_82D303D0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82c12c6c
	if (cr6.eq) goto loc_82C12C6C;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82c12c6c
	if (cr6.eq) goto loc_82C12C6C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82c12c6c
	if (cr6.eq) goto loc_82C12C6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12C64;
	sub_82D19A68(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82c12c78
	goto loc_82C12C78;
loc_82C12C6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82C12C74;
	sub_82D19A68(ctx, base);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
loc_82C12C78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12C8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,-23160(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23160);
	// bl 0x82c12a00
	ctx.lr = 0x82C12C9C;
	sub_82C12A00(ctx, base);
loc_82C12C9C:
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

__attribute__((alias("__imp__sub_82C12CB8"))) PPC_WEAK_FUNC(sub_82C12CB8);
PPC_FUNC_IMPL(__imp__sub_82C12CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// std r4,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r4.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// ld r4,-23160(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -23160);
	// b 0x82c12a00
	sub_82C12A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C12CD4"))) PPC_WEAK_FUNC(sub_82C12CD4);
PPC_FUNC_IMPL(__imp__sub_82C12CD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C12CD8"))) PPC_WEAK_FUNC(sub_82C12CD8);
PPC_FUNC_IMPL(__imp__sub_82C12CD8) {
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
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2f988
	ctx.lr = 0x82C12CF8;
	sub_82D2F988(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24584
	ctx.r9.s64 = ctx.r11.s64 + -24584;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82C12D28"))) PPC_WEAK_FUNC(sub_82C12D28);
PPC_FUNC_IMPL(__imp__sub_82C12D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-24676
	ctx.r5.s64 = ctx.r11.s64 + -24676;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C12D38"))) PPC_WEAK_FUNC(sub_82C12D38);
PPC_FUNC_IMPL(__imp__sub_82C12D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82d26ed8
	ctx.lr = 0x82C12D50;
	sub_82D26ED8(ctx, base);
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x82d26b18
	ctx.lr = 0x82C12D58;
	sub_82D26B18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C12D6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C12D80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82C12D98"))) PPC_WEAK_FUNC(sub_82C12D98);
PPC_FUNC_IMPL(__imp__sub_82C12D98) {
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
	// bl 0x82d2fa18
	ctx.lr = 0x82C12DB8;
	sub_82D2FA18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c12dd0
	if (cr6.eq) goto loc_82C12DD0;
	// bl 0x82416268
	ctx.lr = 0x82C12DCC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C12DD0:
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

__attribute__((alias("__imp__sub_82C12DE8"))) PPC_WEAK_FUNC(sub_82C12DE8);
PPC_FUNC_IMPL(__imp__sub_82C12DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C12DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82c12e34
	if (!cr6.gt) goto loc_82C12E34;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C12E10:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82c12de8
	ctx.lr = 0x82C12E20;
	sub_82C12DE8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c12e10
	if (cr6.lt) goto loc_82C12E10;
loc_82C12E34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C12E3C"))) PPC_WEAK_FUNC(sub_82C12E3C);
PPC_FUNC_IMPL(__imp__sub_82C12E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C12E40"))) PPC_WEAK_FUNC(sub_82C12E40);
PPC_FUNC_IMPL(__imp__sub_82C12E40) {
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
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c12ec4
	if (!cr6.eq) goto loc_82C12EC4;
	// bl 0x82d19a78
	ctx.lr = 0x82C12E64;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C12E6C;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82C12E7C;
	sub_82D2B608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C12E8C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C12E9C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C12EAC;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C12EBC;
	sub_82D19788(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
loc_82C12EC4:
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

__attribute__((alias("__imp__sub_82C12ED8"))) PPC_WEAK_FUNC(sub_82C12ED8);
PPC_FUNC_IMPL(__imp__sub_82C12ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C12EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c12f78
	if (cr6.eq) goto loc_82C12F78;
	// bl 0x82d19a78
	ctx.lr = 0x82C12F00;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C12F08;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82C12F18;
	sub_82D2B608(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C12F28;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C12F38;
	sub_82D19788(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c12f54
	if (cr6.eq) goto loc_82C12F54;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C12F54;
	sub_82D19788(ctx, base);
loc_82C12F54:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c12f70
	if (cr6.eq) goto loc_82C12F70;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C12F70;
	sub_82D19788(ctx, base);
loc_82C12F70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
loc_82C12F78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C12F80"))) PPC_WEAK_FUNC(sub_82C12F80);
PPC_FUNC_IMPL(__imp__sub_82C12F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C12F90"))) PPC_WEAK_FUNC(sub_82C12F90);
PPC_FUNC_IMPL(__imp__sub_82C12F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C12FA0"))) PPC_WEAK_FUNC(sub_82C12FA0);
PPC_FUNC_IMPL(__imp__sub_82C12FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C12FA8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r26,r5,24
	ctx.r26.u64 = ctx.r5.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x82c13034
	if (cr6.eq) goto loc_82C13034;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
loc_82C12FE0:
	// rlwinm r31,r30,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82c12fa0
	ctx.lr = 0x82C12FFC;
	sub_82C12FA0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c13014
	if (cr6.eq) goto loc_82C13014;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82C13014:
	// lbz r10,29(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c13024
	if (cr6.eq) goto loc_82C13024;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82C13024:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// blt cr6,0x82c12fe0
	if (cr6.lt) goto loc_82C12FE0;
loc_82C13034:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1304C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c13068
	if (cr6.eq) goto loc_82C13068;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82c1306c
	if (!cr6.eq) goto loc_82C1306C;
loc_82C13068:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C1306C:
	// stb r11,29(r29)
	PPC_STORE_U8(ctx.r29.u32 + 29, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83166f20
	ctx.lr = 0x82C13078;
	sub_83166F20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c13094
	if (!cr6.eq) goto loc_82C13094;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82c13098
	if (cr6.eq) goto loc_82C13098;
loc_82C13094:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C13098:
	// stb r11,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C130A4"))) PPC_WEAK_FUNC(sub_82C130A4);
PPC_FUNC_IMPL(__imp__sub_82C130A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C130A8"))) PPC_WEAK_FUNC(sub_82C130A8);
PPC_FUNC_IMPL(__imp__sub_82C130A8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C130C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C130CC;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C130D4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c130e8
	if (cr6.eq) goto loc_82C130E8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C130E8;
	sub_82D2AEC8(ctx, base);
loc_82C130E8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82c130c4
	if (cr6.lt) goto loc_82C130C4;
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

__attribute__((alias("__imp__sub_82C1310C"))) PPC_WEAK_FUNC(sub_82C1310C);
PPC_FUNC_IMPL(__imp__sub_82C1310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C13110"))) PPC_WEAK_FUNC(sub_82C13110);
PPC_FUNC_IMPL(__imp__sub_82C13110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82C13118;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c13338
	if (cr6.eq) goto loc_82C13338;
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bge cr6,0x82c13338
	if (!cr6.lt) goto loc_82C13338;
	// lwz r30,24(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c13338
	if (cr6.eq) goto loc_82C13338;
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// blt cr6,0x82c13154
	if (cr6.lt) goto loc_82C13154;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82C13154:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r19,r31,7
	ctx.r19.s64 = ctx.r31.s64 + 7;
	// bl 0x82d19a78
	ctx.lr = 0x82C13160;
	sub_82D19A78(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C13168;
	sub_82D33DB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13338
	if (cr6.eq) goto loc_82C13338;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,13
	ctx.r10.s64 = ctx.r31.s64 + 13;
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// cmplwi cr6,r30,9
	cr6.compare<uint32_t>(ctx.r30.u32, 9, xer);
	// addi r24,r11,-22828
	ctx.r24.s64 = ctx.r11.s64 + -22828;
	// stw r27,100(r9)
	PPC_STORE_U32(ctx.r9.u32 + 100, ctx.r27.u32);
	// stwx r29,r8,r21
	PPC_STORE_U32(ctx.r8.u32 + ctx.r21.u32, ctx.r29.u32);
	// bge cr6,0x82c131bc
	if (!cr6.lt) goto loc_82C131BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r24,-80
	ctx.r10.s64 = ctx.r24.s64 + -80;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C131BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C131BC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r10,r24,-44
	ctx.r10.s64 = ctx.r24.s64 + -44;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C131E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C131E8;
	sub_82D33C10(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13338
	if (cr6.eq) goto loc_82C13338;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r22,r11,-24167
	ctx.r22.s64 = ctx.r11.s64 + -24167;
loc_82C13208:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C13214;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1332c
	if (cr6.eq) goto loc_82C1332C;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c132d8
	if (!cr6.lt) goto loc_82C132D8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,20(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1324C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13264
	if (cr6.eq) goto loc_82C13264;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d29598
	ctx.lr = 0x82C13264;
	sub_82D29598(ctx, base);
loc_82C13264:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82c132c0
	if (!cr6.eq) goto loc_82C132C0;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C13284:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82c132a8
	if (cr6.eq) goto loc_82C132A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c13284
	if (cr6.eq) goto loc_82C13284;
loc_82C132A8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c132c0
	if (cr6.eq) goto loc_82C132C0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82C132C0;
	sub_82D233B0(ctx, base);
loc_82C132C0:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// lbz r31,29(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
loc_82C132D8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c132ec
	if (cr6.eq) goto loc_82C132EC;
	// lwz r4,-4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// b 0x82c132f0
	goto loc_82C132F0;
loc_82C132EC:
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_82C132F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C13308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C1331C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1332C;
	sub_82D2AEC8(ctx, base);
loc_82C1332C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r20
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, xer);
	// blt cr6,0x82c13208
	if (cr6.lt) goto loc_82C13208;
loc_82C13338:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C13340"))) PPC_WEAK_FUNC(sub_82C13340);
PPC_FUNC_IMPL(__imp__sub_82C13340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C13364;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C13374"))) PPC_WEAK_FUNC(sub_82C13374);
PPC_FUNC_IMPL(__imp__sub_82C13374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C13378"))) PPC_WEAK_FUNC(sub_82C13378);
PPC_FUNC_IMPL(__imp__sub_82C13378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C13380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-23244
	ctx.r3.s64 = ctx.r11.s64 + -23244;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82C133A4;
	sub_82D2FA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c133c4
	if (cr6.eq) goto loc_82C133C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82C133B8;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82C133C4;
	sub_83103100(ctx, base);
loc_82C133C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C133CC"))) PPC_WEAK_FUNC(sub_82C133CC);
PPC_FUNC_IMPL(__imp__sub_82C133CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C133D0"))) PPC_WEAK_FUNC(sub_82C133D0);
PPC_FUNC_IMPL(__imp__sub_82C133D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C133D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-23228
	ctx.r3.s64 = ctx.r11.s64 + -23228;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82C13400;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13420
	if (cr6.eq) goto loc_82C13420;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82C13414;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82C13420;
	sub_83103100(ctx, base);
loc_82C13420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C13428"))) PPC_WEAK_FUNC(sub_82C13428);
PPC_FUNC_IMPL(__imp__sub_82C13428) {
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
	// bl 0x825d8390
	ctx.lr = 0x82C13440;
	sub_825D8390(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82C1344C;
	sub_8353B168(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C13454:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8353b168
	ctx.lr = 0x82C13460;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13470
	if (cr6.eq) goto loc_82C13470;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c1347c
	if (!cr6.eq) goto loc_82C1347C;
loc_82C13470:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x82c13454
	if (cr6.lt) goto loc_82C13454;
loc_82C1347C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c13490
	if (cr6.eq) goto loc_82C13490;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82c13494
	if (!cr6.eq) goto loc_82C13494;
loc_82C13490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C13494:
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

__attribute__((alias("__imp__sub_82C134AC"))) PPC_WEAK_FUNC(sub_82C134AC);
PPC_FUNC_IMPL(__imp__sub_82C134AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C134B0"))) PPC_WEAK_FUNC(sub_82C134B0);
PPC_FUNC_IMPL(__imp__sub_82C134B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C134B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C134C4;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82C134D4;
	sub_83126788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311bf90
	ctx.lr = 0x82C134E8;
	sub_8311BF90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13600
	if (cr6.eq) goto loc_82C13600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8311c148
	ctx.lr = 0x82C13500;
	sub_8311C148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8311c148
	ctx.lr = 0x82C13510;
	sub_8311C148(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83155800
	ctx.lr = 0x82C13530;
	sub_83155800(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c13544
	if (cr6.eq) goto loc_82C13544;
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// b 0x82c13568
	goto loc_82C13568;
loc_82C13544:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83155800
	ctx.lr = 0x82C13558;
	sub_83155800(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c13570
	if (cr6.eq) goto loc_82C13570;
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
loc_82C13568:
	// rlwinm r29,r11,15,24,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82C13570:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c13600
	if (cr6.eq) goto loc_82C13600;
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82c135c4
	if (cr6.eq) goto loc_82C135C4;
	// lwz r10,788(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// rlwinm r9,r10,15,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82c135c4
	if (cr6.eq) goto loc_82C135C4;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x82c135ec
	if (!cr6.eq) goto loc_82C135EC;
	// ori r4,r4,69
	ctx.r4.u64 = ctx.r4.u64 | 69;
	// bl 0x82c13378
	ctx.lr = 0x82C135B8;
	sub_82C13378(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C135C4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x82c135ec
	if (!cr6.eq) goto loc_82C135EC;
	// ori r4,r4,69
	ctx.r4.u64 = ctx.r4.u64 | 69;
	// bl 0x82c13378
	ctx.lr = 0x82C135E0;
	sub_82C13378(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C135EC:
	// ori r4,r4,70
	ctx.r4.u64 = ctx.r4.u64 | 70;
	// bl 0x82c13378
	ctx.lr = 0x82C135F4;
	sub_82C13378(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C13600:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1360C"))) PPC_WEAK_FUNC(sub_82C1360C);
PPC_FUNC_IMPL(__imp__sub_82C1360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C13610"))) PPC_WEAK_FUNC(sub_82C13610);
PPC_FUNC_IMPL(__imp__sub_82C13610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C13618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x82C13628;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82C13638;
	sub_83126788(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x8311bf90
	ctx.lr = 0x82C13648;
	sub_8311BF90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13744
	if (cr6.eq) goto loc_82C13744;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r4,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// lwz r10,-22708(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22708);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c13684
	if (!cr6.eq) goto loc_82C13684;
	// xor r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c13688
	if (cr6.eq) goto loc_82C13688;
loc_82C13684:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C13688:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c136cc
	if (!cr6.eq) goto loc_82C136CC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c136b8
	if (!cr6.eq) goto loc_82C136B8;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c136bc
	if (cr6.eq) goto loc_82C136BC;
loc_82C136B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C136BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82c136d0
	if (cr6.eq) goto loc_82C136D0;
loc_82C136CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C136D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c13744
	if (!cr6.eq) goto loc_82C13744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c148
	ctx.lr = 0x82C136E4;
	sub_8311C148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8311c148
	ctx.lr = 0x82C136F4;
	sub_8311C148(ctx, base);
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82c13744
	if (cr6.eq) goto loc_82C13744;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82c13744
	if (cr6.eq) goto loc_82C13744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c13428
	ctx.lr = 0x82C1371C;
	sub_82C13428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c13744
	if (!cr6.eq) goto loc_82C13744;
	// lis r4,275
	ctx.r4.s64 = 18022400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,97
	ctx.r4.u64 = ctx.r4.u64 | 97;
	// bl 0x82c13378
	ctx.lr = 0x82C13738;
	sub_82C13378(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C13744:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C13750"))) PPC_WEAK_FUNC(sub_82C13750);
PPC_FUNC_IMPL(__imp__sub_82C13750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C13758;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C13764;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82C1376C;
	sub_831156E8(ctx, base);
	// lis r11,194
	ctx.r11.s64 = 12713984;
	// li r10,23
	ctx.r10.s64 = 23;
	// ori r9,r11,52144
	ctx.r9.u64 = ctx.r11.u64 | 52144;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lwz r31,52(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x8314d470
	ctx.lr = 0x82C13798;
	sub_8314D470(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c137b4
	if (cr6.eq) goto loc_82C137B4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82C137A8:
	// stw r11,1532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1532, ctx.r11.u32);
loc_82C137AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82C137B4:
	// addis r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123768
	ctx.lr = 0x82C137C4;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82c137a8
	if (cr6.eq) goto loc_82C137A8;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,1532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1532, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123a08
	ctx.lr = 0x82C137EC;
	sub_83123A08(ctx, base);
	// lwz r10,796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r9,r10,0,16,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r9,8192
	cr6.compare<uint32_t>(ctx.r9.u32, 8192, xer);
	// bne cr6,0x82c137ac
	if (!cr6.eq) goto loc_82C137AC;
	// stb r29,188(r30)
	PPC_STORE_U8(ctx.r30.u32 + 188, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C13808"))) PPC_WEAK_FUNC(sub_82C13808);
PPC_FUNC_IMPL(__imp__sub_82C13808) {
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
	// bl 0x8308e078
	ctx.lr = 0x82C13824;
	sub_8308E078(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82C13830;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c138b4
	if (cr6.eq) goto loc_82C138B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,43
	ctx.r4.s64 = 43;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C13850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c13868
	if (cr6.eq) goto loc_82C13868;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// b 0x82c13894
	goto loc_82C13894;
loc_82C13868:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C13880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c138a0
	if (cr6.eq) goto loc_82C138A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
loc_82C13894:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C138A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C138A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C138B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C138B4:
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

__attribute__((alias("__imp__sub_82C138CC"))) PPC_WEAK_FUNC(sub_82C138CC);
PPC_FUNC_IMPL(__imp__sub_82C138CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C138D0"))) PPC_WEAK_FUNC(sub_82C138D0);
PPC_FUNC_IMPL(__imp__sub_82C138D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 & ctx.r8.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C1390C;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C1391C;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C1392C;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C1393C;
	sub_82D19788(ctx, base);
	// lwz r6,176(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r11,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c1396c
	if (!cr6.eq) goto loc_82C1396C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C13964;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c13988
	goto loc_82C13988;
loc_82C1396C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82c13994
	if (!cr6.gt) goto loc_82C13994;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C13984;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82C13988:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C13994;
	sub_82D19788(ctx, base);
loc_82C13994:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C139A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,138
	cr6.compare<uint32_t>(ctx.r3.u32, 138, xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x82c139c0
	if (!cr6.eq) goto loc_82C139C0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82C139C0:
	// bl 0x82d19788
	ctx.lr = 0x82C139C4;
	sub_82D19788(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82C139C8;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82C139CC;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c139e8
	if (!cr6.eq) goto loc_82C139E8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C139E8;
	sub_82D19788(ctx, base);
loc_82C139E8:
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

__attribute__((alias("__imp__sub_82C13A00"))) PPC_WEAK_FUNC(sub_82C13A00);
PPC_FUNC_IMPL(__imp__sub_82C13A00) {
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
	// lwz r11,1524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1524);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c13a34
	if (cr6.eq) goto loc_82C13A34;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c13a38
	goto loc_82C13A38;
loc_82C13A34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C13A38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c13a60
	if (cr6.eq) goto loc_82C13A60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c138d0
	ctx.lr = 0x82C13A50;
	sub_82C138D0(ctx, base);
	// lwz r3,1524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13a60
	if (cr6.eq) goto loc_82C13A60;
	// bl 0x82bd63f8
	ctx.lr = 0x82C13A60;
	sub_82BD63F8(ctx, base);
loc_82C13A60:
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

__attribute__((alias("__imp__sub_82C13A74"))) PPC_WEAK_FUNC(sub_82C13A74);
PPC_FUNC_IMPL(__imp__sub_82C13A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C13A78"))) PPC_WEAK_FUNC(sub_82C13A78);
PPC_FUNC_IMPL(__imp__sub_82C13A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C13A80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C13A8C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13b78
	if (cr6.eq) goto loc_82C13B78;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r28,52
	ctx.r27.s64 = ctx.r28.s64 + 52;
	// addi r26,r11,-22908
	ctx.r26.s64 = ctx.r11.s64 + -22908;
loc_82C13AA8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82c13ae4
	if (cr6.lt) goto loc_82C13AE4;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// bge cr6,0x82c13aec
	if (!cr6.lt) goto loc_82C13AEC;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x82c13acc
	if (cr6.lt) goto loc_82C13ACC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82C13ACC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c13b14
	if (!cr6.eq) goto loc_82C13B14;
	// lwz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82c13b14
	goto loc_82C13B14;
loc_82C13AE4:
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x82c13b14
	if (cr6.lt) goto loc_82C13B14;
loc_82C13AEC:
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82c13b14
	if (!cr6.lt) goto loc_82C13B14;
	// addi r11,r31,-7
	ctx.r11.s64 = ctx.r31.s64 + -7;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82c13b04
	if (cr6.lt) goto loc_82C13B04;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82C13B04:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c13b14
	if (!cr6.eq) goto loc_82C13B14;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82C13B14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C13B1C;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C13B24;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13b64
	if (cr6.eq) goto loc_82C13B64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c13b64
	if (cr6.eq) goto loc_82C13B64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bge cr6,0x82c13b64
	if (!cr6.lt) goto loc_82C13B64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c13b64
	if (cr6.eq) goto loc_82C13B64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r9,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C13B64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C13B64:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82c13aa8
	if (cr6.lt) goto loc_82C13AA8;
loc_82C13B78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C13B80"))) PPC_WEAK_FUNC(sub_82C13B80);
PPC_FUNC_IMPL(__imp__sub_82C13B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C13B88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C13B94;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13c2c
	if (cr6.eq) goto loc_82C13C2C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r31,7
	ctx.r31.s64 = 7;
	// addi r29,r27,104
	ctx.r29.s64 = ctx.r27.s64 + 104;
	// addi r28,r11,-22872
	ctx.r28.s64 = ctx.r11.s64 + -22872;
loc_82C13BAC:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x82c13be0
	if (cr6.lt) goto loc_82C13BE0;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82c13be0
	if (!cr6.lt) goto loc_82C13BE0;
	// addi r11,r31,-7
	ctx.r11.s64 = ctx.r31.s64 + -7;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82c13bd0
	if (cr6.lt) goto loc_82C13BD0;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82C13BD0:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c13be0
	if (!cr6.eq) goto loc_82C13BE0;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82C13BE0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C13BE8;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C13BF0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13c1c
	if (cr6.eq) goto loc_82C13C1C;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// bge cr6,0x82c13c1c
	if (!cr6.lt) goto loc_82C13C1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C13C1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C13C1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82c13bac
	if (cr6.lt) goto loc_82C13BAC;
loc_82C13C2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C13C34"))) PPC_WEAK_FUNC(sub_82C13C34);
PPC_FUNC_IMPL(__imp__sub_82C13C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C13C38"))) PPC_WEAK_FUNC(sub_82C13C38);
PPC_FUNC_IMPL(__imp__sub_82C13C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// addi r11,r3,140
	ctx.r11.s64 = ctx.r3.s64 + 140;
	// lwz r9,172(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r6,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82c13c90
	if (cr0.eq) goto loc_82C13C90;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82C13C58:
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82c13c98
	if (!cr6.lt) goto loc_82C13C98;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c13c98
	if (cr0.eq) goto loc_82C13C98;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x82c13c58
	if (cr6.lt) goto loc_82C13C58;
loc_82C13C90:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82C13C98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C13CA0"))) PPC_WEAK_FUNC(sub_82C13CA0);
PPC_FUNC_IMPL(__imp__sub_82C13CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C13CA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82eff1a8
	ctx.lr = 0x82C13CB4;
	sub_82EFF1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13d14
	if (cr6.eq) goto loc_82C13D14;
	// bl 0x830ff290
	ctx.lr = 0x82C13CC4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C13CC8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82c13ce0
	if (cr6.eq) goto loc_82C13CE0;
	// bl 0x830ff290
	ctx.lr = 0x82C13CD4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C13CD8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82c13d14
	if (!cr6.eq) goto loc_82C13D14;
loc_82C13CE0:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c13d14
	if (cr6.eq) goto loc_82C13D14;
	// lbz r11,1529(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1529);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c13d08
	if (!cr6.eq) goto loc_82C13D08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eff798
	ctx.lr = 0x82C13D00;
	sub_82EFF798(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1529(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1529, ctx.r11.u8);
loc_82C13D08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C13D14:
	// lbz r11,1504(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c13df4
	if (cr6.eq) goto loc_82C13DF4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c13c38
	ctx.lr = 0x82C13D28;
	sub_82C13C38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C13D30;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c13d08
	if (cr6.eq) goto loc_82C13D08;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r30,r10,-24232
	ctx.r30.s64 = ctx.r10.s64 + -24232;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x82C13D60;
	sub_831178A0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x82C13D7C;
	sub_831178A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8311bdf0
	ctx.lr = 0x82C13D88;
	sub_8311BDF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8311bdf0
	ctx.lr = 0x82C13D98;
	sub_8311BDF0(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r8,9
	cr6.compare<int32_t>(ctx.r8.s32, 9, xer);
	// bne cr6,0x82c13dcc
	if (!cr6.eq) goto loc_82C13DCC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c13db8
	if (cr6.eq) goto loc_82C13DB8;
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r10.u32);
loc_82C13DB8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13df4
	if (cr6.eq) goto loc_82C13DF4;
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// b 0x82c13df0
	goto loc_82C13DF0;
loc_82C13DCC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c13de0
	if (cr6.eq) goto loc_82C13DE0;
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 796, ctx.r10.u32);
loc_82C13DE0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13df4
	if (cr6.eq) goto loc_82C13DF4;
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82C13DF0:
	// stw r10,796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 796, ctx.r10.u32);
loc_82C13DF4:
	// lwz r3,1524(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1524);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13e04
	if (cr6.eq) goto loc_82C13E04;
	// bl 0x82bd6380
	ctx.lr = 0x82C13E04;
	sub_82BD6380(ctx, base);
loc_82C13E04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C13E10"))) PPC_WEAK_FUNC(sub_82C13E10);
PPC_FUNC_IMPL(__imp__sub_82C13E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C13E18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C13E24;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13ee0
	if (cr6.eq) goto loc_82C13EE0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C13E34;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C13E3C;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13ee0
	if (cr6.eq) goto loc_82C13EE0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-22840
	ctx.r29.s64 = ctx.r11.s64 + -22840;
loc_82C13E54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C13E60;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13e80
	if (cr6.eq) goto loc_82C13E80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C13E80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C13E80:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x82c13e54
	if (cr6.lt) goto loc_82C13E54;
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// lwz r10,176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82c13eb4
	if (!cr0.eq) goto loc_82C13EB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C13EB4;
	sub_831CC188(ctx, base);
loc_82C13EB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d33db0
	ctx.lr = 0x82C13EC0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c13ee0
	if (cr6.eq) goto loc_82C13EE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C13EE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C13EE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C13EE8"))) PPC_WEAK_FUNC(sub_82C13EE8);
PPC_FUNC_IMPL(__imp__sub_82C13EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi. r8,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// beq 0x82c13f38
	if (cr0.eq) goto loc_82C13F38;
loc_82C13F0C:
	// divw r7,r6,r11
	ctx.r7.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf. r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// twlgei r4,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82c13f0c
	if (!cr0.eq) goto loc_82C13F0C;
loc_82C13F38:
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x82c13fbc
	if (!cr6.lt) goto loc_82C13FBC;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82c13fbc
	if (!cr6.gt) goto loc_82C13FBC;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82C13F54:
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c13f68
	if (!cr6.eq) goto loc_82C13F68;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82C13F68:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// ld r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// bge cr6,0x82c13f9c
	if (!cr6.lt) goto loc_82C13F9C;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// b 0x82c13fa8
	goto loc_82C13FA8;
loc_82C13F9C:
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82C13FA8:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82c13f68
	if (!cr6.eq) goto loc_82C13F68;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// bgt 0x82c13f54
	if (cr0.gt) goto loc_82C13F54;
loc_82C13FBC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C13FC8"))) PPC_WEAK_FUNC(sub_82C13FC8);
PPC_FUNC_IMPL(__imp__sub_82C13FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x82c13e10
	sub_82C13E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C13FE4"))) PPC_WEAK_FUNC(sub_82C13FE4);
PPC_FUNC_IMPL(__imp__sub_82C13FE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C13FE8"))) PPC_WEAK_FUNC(sub_82C13FE8);
PPC_FUNC_IMPL(__imp__sub_82C13FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82C13FF0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c143ac
	if (cr6.eq) goto loc_82C143AC;
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bge cr6,0x82c143ac
	if (!cr6.lt) goto loc_82C143AC;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82c14050
	if (!cr6.eq) goto loc_82C14050;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 + 100;
loc_82C1402C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c14048
	if (cr6.eq) goto loc_82C14048;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82c1402c
	if (cr6.lt) goto loc_82C1402C;
loc_82C14048:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x82c143ac
	if (cr6.eq) goto loc_82C143AC;
loc_82C14050:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r24,r8,1
	ctx.r24.s64 = ctx.r8.s64 + 1;
	// addi r18,r11,-24198
	ctx.r18.s64 = ctx.r11.s64 + -24198;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// addi r16,r18,874
	ctx.r16.s64 = ctx.r18.s64 + 874;
	// lbzx r11,r24,r16
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r16.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c143ac
	if (cr6.eq) goto loc_82C143AC;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r20,15
	ctx.r20.s64 = 15;
	// li r14,2
	ctx.r14.s64 = 2;
	// addi r26,r11,-22828
	ctx.r26.s64 = ctx.r11.s64 + -22828;
loc_82C14088:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C14094;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14394
	if (cr6.eq) goto loc_82C14394;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C140A4;
	sub_82D33DB0(ctx, base);
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c14338
	if (!cr6.lt) goto loc_82C14338;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bge cr6,0x82c1410c
	if (!cr6.lt) goto loc_82C1410C;
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82c14104
	if (cr6.eq) goto loc_82C14104;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c140f4
	if (cr6.eq) goto loc_82C140F4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c141a8
	if (!cr6.eq) goto loc_82C141A8;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,7
	ctx.r10.s64 = 7;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// b 0x82c14174
	goto loc_82C14174;
loc_82C140F4:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// b 0x82c14174
	goto loc_82C14174;
loc_82C14104:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x82c14188
	goto loc_82C14188;
loc_82C1410C:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r11,r21,100
	ctx.r11.s64 = ctx.r21.s64 + 100;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82C1411C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x82c14138
	if (cr6.eq) goto loc_82C14138;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// blt cr6,0x82c1411c
	if (cr6.lt) goto loc_82C1411C;
loc_82C14138:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x82c141a8
	if (cr6.eq) goto loc_82C141A8;
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82c14104
	if (cr6.eq) goto loc_82C14104;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c14168
	if (cr6.eq) goto loc_82C14168;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c141a8
	if (!cr6.eq) goto loc_82C141A8;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82c14170
	goto loc_82C14170;
loc_82C14168:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82C14170:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
loc_82C14174:
	// blt cr6,0x82c1417c
	if (cr6.lt) goto loc_82C1417C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82C1417C:
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// beq cr6,0x82c141a8
	if (cr6.eq) goto loc_82C141A8;
loc_82C14188:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82c13fe8
	ctx.lr = 0x82C141A8;
	sub_82C13FE8(ctx, base);
loc_82C141A8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c14330
	if (cr6.eq) goto loc_82C14330;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r31,r27,100
	ctx.r31.s64 = ctx.r27.s64 + 100;
	// lwz r4,20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C141CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82d04220
	ctx.lr = 0x82C141F0;
	sub_82D04220(ctx, base);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// bne cr6,0x82c1424c
	if (!cr6.eq) goto loc_82C1424C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c14214
	if (cr6.eq) goto loc_82C14214;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C14214;
	sub_82D291E0(ctx, base);
loc_82C14214:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1422C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14244
	if (cr6.eq) goto loc_82C14244;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82C14244;
	sub_82D291E0(ctx, base);
loc_82C14244:
	// lwz r4,36(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// b 0x82c1426c
	goto loc_82C1426C;
loc_82C1424C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c14268
	if (cr6.eq) goto loc_82C14268;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C14268;
	sub_82D291E0(ctx, base);
loc_82C14268:
	// lwz r4,28(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
loc_82C1426C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C14280;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1429c
	if (cr6.eq) goto loc_82C1429C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// bl 0x82d2aec8
	ctx.lr = 0x82C1429C;
	sub_82D2AEC8(ctx, base);
loc_82C1429C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82c142f8
	if (!cr6.eq) goto loc_82C142F8;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C142BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82c142e0
	if (cr6.eq) goto loc_82C142E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c142bc
	if (cr6.eq) goto loc_82C142BC;
loc_82C142E0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82c142f8
	if (cr6.eq) goto loc_82C142F8;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82C142F8;
	sub_82D233B0(ctx, base);
loc_82C142F8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lbz r31,29(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 29);
	// blt cr6,0x82c14324
	if (cr6.lt) goto loc_82C14324;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C14324;
	sub_825952B8(ctx, base);
loc_82C14324:
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
loc_82C14330:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
loc_82C14338:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c14394
	if (cr6.eq) goto loc_82C14394;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c14354
	if (cr6.eq) goto loc_82C14354;
	// lwz r4,-4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// b 0x82c14358
	goto loc_82C14358;
loc_82C14354:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82C14358:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C14370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C14384;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C14394;
	sub_82D2AEC8(ctx, base);
loc_82C14394:
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// lbzx r10,r24,r16
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r16.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c14088
	if (cr6.lt) goto loc_82C14088;
loc_82C143AC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C143B4"))) PPC_WEAK_FUNC(sub_82C143B4);
PPC_FUNC_IMPL(__imp__sub_82C143B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C143B8"))) PPC_WEAK_FUNC(sub_82C143B8);
PPC_FUNC_IMPL(__imp__sub_82C143B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C143C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C143CC;
	sub_82D19BA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bge cr6,0x82c144f8
	if (!cr6.lt) goto loc_82C144F8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c144f8
	if (cr6.eq) goto loc_82C144F8;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r30,r31,172
	ctx.r30.s64 = ctx.r31.s64 + 172;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82c144f8
	if (!cr6.gt) goto loc_82C144F8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82c144f8
	if (cr6.gt) goto loc_82C144F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1440C;
	sub_82D19A78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C14414;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14440
	if (cr6.eq) goto loc_82C14440;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1442C;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C14440;
	sub_82D2B608(ctx, base);
loc_82C14440:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c14458
	if (cr6.eq) goto loc_82C14458;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82C14458:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r30,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 3;
	// bl 0x82d19a78
	ctx.lr = 0x82C14470;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,-22824
	ctx.r6.s64 = ctx.r8.s64 + -22824;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C14494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82d19a78
	ctx.lr = 0x82C144A4;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C144AC;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c144d8
	if (cr6.eq) goto loc_82C144D8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C144C4;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C144D8;
	sub_82D2B608(ctx, base);
loc_82C144D8:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82d1eac0
	ctx.lr = 0x82C144EC;
	sub_82D1EAC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c138d0
	ctx.lr = 0x82C144F8;
	sub_82C138D0(ctx, base);
loc_82C144F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C14500"))) PPC_WEAK_FUNC(sub_82C14500);
PPC_FUNC_IMPL(__imp__sub_82C14500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c14540
	if (cr6.eq) goto loc_82C14540;
loc_82C14520:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c14520
	if (!cr6.eq) goto loc_82C14520;
loc_82C14540:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C14548"))) PPC_WEAK_FUNC(sub_82C14548);
PPC_FUNC_IMPL(__imp__sub_82C14548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// addi r8,r3,408
	ctx.r8.s64 = ctx.r3.s64 + 408;
	// lwz r9,412(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c14588
	if (cr6.eq) goto loc_82C14588;
loc_82C14568:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c14568
	if (!cr6.eq) goto loc_82C14568;
loc_82C14588:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C14590"))) PPC_WEAK_FUNC(sub_82C14590);
PPC_FUNC_IMPL(__imp__sub_82C14590) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
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
	// lwz r4,172(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c145d8
	if (cr6.eq) goto loc_82C145D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C145D8;
	sub_825952B8(ctx, base);
loc_82C145D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82C145F0;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_82C14604"))) PPC_WEAK_FUNC(sub_82C14604);
PPC_FUNC_IMPL(__imp__sub_82C14604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C14608"))) PPC_WEAK_FUNC(sub_82C14608);
PPC_FUNC_IMPL(__imp__sub_82C14608) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bgt cr6,0x82c14664
	if (cr6.gt) goto loc_82C14664;
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x82d17da0
	ctx.lr = 0x82C1463C;
	sub_82D17DA0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-23308
	ctx.r5.s64 = ctx.r11.s64 + -23308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82C14650;
	sub_82D20DA8(ctx, base);
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
loc_82C14664:
	// bl 0x82c143b8
	ctx.lr = 0x82C14668;
	sub_82C143B8(ctx, base);
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

__attribute__((alias("__imp__sub_82C1467C"))) PPC_WEAK_FUNC(sub_82C1467C);
PPC_FUNC_IMPL(__imp__sub_82C1467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C14680"))) PPC_WEAK_FUNC(sub_82C14680);
PPC_FUNC_IMPL(__imp__sub_82C14680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C14688;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r30,r3,140
	ctx.r30.s64 = ctx.r3.s64 + 140;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c12fa0
	ctx.lr = 0x82C146A8;
	sub_82C12FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C146B0;
	sub_82D19A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c146e4
	if (cr6.eq) goto loc_82C146E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c13e10
	ctx.lr = 0x82C146C4;
	sub_82C13E10(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82c13fe8
	ctx.lr = 0x82C146E4;
	sub_82C13FE8(ctx, base);
loc_82C146E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C146EC"))) PPC_WEAK_FUNC(sub_82C146EC);
PPC_FUNC_IMPL(__imp__sub_82C146EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C146F0"))) PPC_WEAK_FUNC(sub_82C146F0);
PPC_FUNC_IMPL(__imp__sub_82C146F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22768
	ctx.r9.s64 = ctx.r11.s64 + -22768;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x82c14590
	sub_82C14590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1470C"))) PPC_WEAK_FUNC(sub_82C1470C);
PPC_FUNC_IMPL(__imp__sub_82C1470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C14710"))) PPC_WEAK_FUNC(sub_82C14710);
PPC_FUNC_IMPL(__imp__sub_82C14710) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c14744
	if (!cr6.eq) goto loc_82C14744;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83547fe8
	ctx.lr = 0x82C14744;
	sub_83547FE8(ctx, base);
loc_82C14744:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c14760
	if (cr6.eq) goto loc_82C14760;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82C14760:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C14784"))) PPC_WEAK_FUNC(sub_82C14784);
PPC_FUNC_IMPL(__imp__sub_82C14784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C14788"))) PPC_WEAK_FUNC(sub_82C14788);
PPC_FUNC_IMPL(__imp__sub_82C14788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C14790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x82C147A4;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82C147BC;
	sub_82D253F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-23112
	ctx.r9.s64 = ctx.r11.s64 + -23112;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stb r30,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r30.u8);
	// bl 0x82ae4800
	ctx.lr = 0x82C147FC;
	sub_82AE4800(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r30,1504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1504, ctx.r30.u8);
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stb r30,1520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1520, ctx.r30.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stb r30,1528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1528, ctx.r30.u8);
	// stb r30,1529(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1529, ctx.r30.u8);
loc_82C1482C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c1482c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C1482C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a689e8
	ctx.lr = 0x82C1483C;
	sub_82A689E8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82C14848:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c14848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C14848;
	// lis r30,-31776
	ctx.r30.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,-22928
	ctx.r29.s64 = ctx.r30.s64 + -22928;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82C14864;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82C14870;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82d20ae0
	ctx.lr = 0x82C1487C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82d20ae0
	ctx.lr = 0x82C14888;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-22928(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22928);
	// bl 0x82d23390
	ctx.lr = 0x82C14898;
	sub_82D23390(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82C1489C;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82C148A0;
	sub_82D25AB8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-23320
	ctx.r3.s64 = ctx.r11.s64 + -23320;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd6558
	ctx.lr = 0x82C148B8;
	sub_82BD6558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82c148d4
	if (cr6.eq) goto loc_82C148D4;
	// bl 0x83103100
	ctx.lr = 0x82C148D0;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C148D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C148DC"))) PPC_WEAK_FUNC(sub_82C148DC);
PPC_FUNC_IMPL(__imp__sub_82C148DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C148E0"))) PPC_WEAK_FUNC(sub_82C148E0);
PPC_FUNC_IMPL(__imp__sub_82C148E0) {
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
	// bl 0x82c14590
	ctx.lr = 0x82C14900;
	sub_82C14590(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c14918
	if (cr6.eq) goto loc_82C14918;
	// bl 0x82416268
	ctx.lr = 0x82C14914;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C14918:
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

__attribute__((alias("__imp__sub_82C14930"))) PPC_WEAK_FUNC(sub_82C14930);
PPC_FUNC_IMPL(__imp__sub_82C14930) {
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
	// bl 0x82c14788
	ctx.lr = 0x82C14948;
	sub_82C14788(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22768
	ctx.r9.s64 = ctx.r11.s64 + -22768;
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
	// stw r7,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r7.u32);
	// bl 0x82c13750
	ctx.lr = 0x82C14970;
	sub_82C13750(ctx, base);
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

__attribute__((alias("__imp__sub_82C14988"))) PPC_WEAK_FUNC(sub_82C14988);
PPC_FUNC_IMPL(__imp__sub_82C14988) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22768
	ctx.r9.s64 = ctx.r11.s64 + -22768;
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
	// bl 0x82c14590
	ctx.lr = 0x82C149C0;
	sub_82C14590(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c149d8
	if (cr6.eq) goto loc_82C149D8;
	// bl 0x82416268
	ctx.lr = 0x82C149D4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C149D8:
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

__attribute__((alias("__imp__sub_82C149F0"))) PPC_WEAK_FUNC(sub_82C149F0);
PPC_FUNC_IMPL(__imp__sub_82C149F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C149F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C14A04;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c14b08
	if (!cr6.eq) goto loc_82C14B08;
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// addi r3,r28,172
	ctx.r3.s64 = ctx.r28.s64 + 172;
	// lwz r10,176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82c14a50
	if (cr6.eq) goto loc_82C14A50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c14a60
	if (cr6.eq) goto loc_82C14A60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x82c14a60
	goto loc_82C14A60;
loc_82C14A50:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x83546fd8
	ctx.lr = 0x82C14A60;
	sub_83546FD8(ctx, base);
loc_82C14A60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c13c38
	ctx.lr = 0x82C14A68;
	sub_82C13C38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14af0
	if (cr6.eq) goto loc_82C14AF0;
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82d19a88
	ctx.lr = 0x82C14A80;
	sub_82D19A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14af0
	if (cr6.eq) goto loc_82C14AF0;
	// bl 0x82d33c10
	ctx.lr = 0x82C14A90;
	sub_82D33C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14af0
	if (cr6.eq) goto loc_82C14AF0;
loc_82C14A9C:
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82c14ab4
	if (cr6.lt) goto loc_82C14AB4;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_82C14AB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C14AC0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14ad8
	if (cr6.eq) goto loc_82C14AD8;
	// bl 0x82d2b038
	ctx.lr = 0x82C14ACC;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c14ae8
	if (!cr6.eq) goto loc_82C14AE8;
loc_82C14AD8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// blt cr6,0x82c14a9c
	if (cr6.lt) goto loc_82C14A9C;
	// b 0x82c14af0
	goto loc_82C14AF0;
loc_82C14AE8:
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
loc_82C14AF0:
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d1eac0
	ctx.lr = 0x82C14B08;
	sub_82D1EAC0(ctx, base);
loc_82C14B08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C14B10"))) PPC_WEAK_FUNC(sub_82C14B10);
PPC_FUNC_IMPL(__imp__sub_82C14B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C14B18;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82c130a8
	ctx.lr = 0x82C14B28;
	sub_82C130A8(ctx, base);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r31,r29,172
	ctx.r31.s64 = ctx.r29.s64 + 172;
	// lwz r10,176(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c14b54
	if (!cr6.eq) goto loc_82C14B54;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82C14B54;
	sub_83546FD8(ctx, base);
loc_82C14B54:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r28,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 3;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x82c14bb4
	if (!cr6.eq) goto loc_82C14BB4;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82c14b84
	if (!cr6.eq) goto loc_82C14B84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C14B84;
	sub_831CC188(ctx, base);
loc_82C14B84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,4(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82d19a78
	ctx.lr = 0x82C14B90;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C14B98;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14db4
	if (cr6.eq) goto loc_82C14DB4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82C14BB0;
	sub_82D2B608(ctx, base);
	// b 0x82c14db4
	goto loc_82C14DB4;
loc_82C14BB4:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// lwz r27,-8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r26,-4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// blt cr6,0x82c14d24
	if (cr6.lt) goto loc_82C14D24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c13c38
	ctx.lr = 0x82C14BD0;
	sub_82C13C38(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 + 100;
loc_82C14BDC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c14bf8
	if (cr6.eq) goto loc_82C14BF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82c14bdc
	if (cr6.lt) goto loc_82C14BDC;
loc_82C14BF8:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82c14d20
	if (!cr6.eq) goto loc_82C14D20;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// beq cr6,0x82c14c20
	if (cr6.eq) goto loc_82C14C20;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// beq cr6,0x82c14c18
	if (cr6.eq) goto loc_82C14C18;
	// li r9,11
	ctx.r9.s64 = 11;
	// b 0x82c14c28
	goto loc_82C14C28;
loc_82C14C18:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82c14c24
	goto loc_82C14C24;
loc_82C14C20:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C14C24:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82C14C28:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// beq cr6,0x82c14c4c
	if (cr6.eq) goto loc_82C14C4C;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// beq cr6,0x82c14c40
	if (cr6.eq) goto loc_82C14C40;
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x82c14c5c
	goto loc_82C14C5C;
loc_82C14C40:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82c14c54
	goto loc_82C14C54;
loc_82C14C4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82C14C54:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82C14C5C:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c14c74
	if (cr6.gt) goto loc_82C14C74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C14C74;
	sub_831CC188(ctx, base);
loc_82C14C74:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c14c94
	if (cr6.lt) goto loc_82C14C94;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82c14c94
	if (cr6.gt) goto loc_82C14C94;
	// subf r31,r9,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x82c14cf0
	goto loc_82C14CF0;
loc_82C14C94:
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r6,r11
	ctx.r31.u64 = ctx.r6.u64 & ctx.r11.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// beq cr6,0x82c14cd4
	if (cr6.eq) goto loc_82C14CD4;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// beq cr6,0x82c14cc8
	if (cr6.eq) goto loc_82C14CC8;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82c14cec
	goto loc_82C14CEC;
loc_82C14CC8:
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82c14cdc
	goto loc_82C14CDC;
loc_82C14CD4:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82C14CDC:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c14ce8
	if (cr6.lt) goto loc_82C14CE8;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82C14CE8:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C14CEC:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82C14CF0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82c14d04
	if (!cr6.eq) goto loc_82C14D04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C14D04;
	sub_831CC188(ctx, base);
loc_82C14D04:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// bl 0x82c13110
	ctx.lr = 0x82C14D18;
	sub_82C13110(ctx, base);
	// stw r31,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r31.u32);
	// b 0x82c14d24
	goto loc_82C14D24;
loc_82C14D20:
	// stw r10,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r10.u32);
loc_82C14D24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C14D2C;
	sub_82D19A78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-22824
	ctx.r9.s64 = ctx.r11.s64 + -22824;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C14D50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C14D58;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C14D60;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14d78
	if (cr6.eq) goto loc_82C14D78;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82C14D78;
	sub_82D2B608(ctx, base);
loc_82C14D78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C14D80;
	sub_82D19A78(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C14D88;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14db4
	if (cr6.eq) goto loc_82C14DB4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82C14DA4;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C14DB4;
	sub_82D2AEC8(ctx, base);
loc_82C14DB4:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c14dd0
	if (cr6.eq) goto loc_82C14DD0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C14DD0;
	sub_82D1EAC0(ctx, base);
loc_82C14DD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C14DD8"))) PPC_WEAK_FUNC(sub_82C14DD8);
PPC_FUNC_IMPL(__imp__sub_82C14DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C14DE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82C14DEC;
	sub_82D19BA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x82c15050
	if (cr6.gt) goto loc_82C15050;
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r27,r29,172
	ctx.r27.s64 = ctx.r29.s64 + 172;
	// lwz r10,176(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c15050
	if (cr0.eq) goto loc_82C15050;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82c15050
	if (!cr6.lt) goto loc_82C15050;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C14E20;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C14E28;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14e5c
	if (cr6.eq) goto loc_82C14E5C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82C14E44;
	sub_82D2B608(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c14e5c
	if (cr6.eq) goto loc_82C14E5C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C14E5C;
	sub_82D2AEC8(ctx, base);
loc_82C14E5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82C14E64;
	sub_82D19BB0(ctx, base);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
	// srawi r30,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 3;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82c14f04
	if (cr6.lt) goto loc_82C14F04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c13c38
	ctx.lr = 0x82C14E88;
	sub_82C13C38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,100
	ctx.r10.s64 = ctx.r29.s64 + 100;
loc_82C14E94:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c14eb0
	if (cr6.eq) goto loc_82C14EB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82c14e94
	if (cr6.lt) goto loc_82C14E94;
loc_82C14EB0:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x82c14f00
	if (!cr6.eq) goto loc_82C14F00;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r11
	ctx.r31.u64 = ctx.r7.u64 & ctx.r11.u64;
	// bne cr6,0x82c14ee4
	if (!cr6.eq) goto loc_82C14EE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C14EE4;
	sub_831CC188(ctx, base);
loc_82C14EE4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c13110
	ctx.lr = 0x82C14EF4;
	sub_82C13110(ctx, base);
	// stw r31,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82c14f04
	goto loc_82C14F04;
loc_82C14F00:
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
loc_82C14F04:
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82c14f50
	if (cr6.eq) goto loc_82C14F50;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x82c14f34
	if (cr6.eq) goto loc_82C14F34;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// beq cr6,0x82c14f28
	if (cr6.eq) goto loc_82C14F28;
	// li r28,11
	ctx.r28.s64 = 11;
	// b 0x82c14f54
	goto loc_82C14F54;
loc_82C14F28:
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82c14f3c
	goto loc_82C14F3C;
loc_82C14F34:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82C14F3C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c14f48
	if (cr6.lt) goto loc_82C14F48;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82C14F48:
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x82c14f54
	goto loc_82C14F54;
loc_82C14F50:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C14F54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C14F5C;
	sub_82D19A78(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-22824
	ctx.r9.s64 = ctx.r11.s64 + -22824;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C14F80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C14F88;
	sub_82D19A78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C14F90;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c15020
	if (cr6.eq) goto loc_82C15020;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82C14FB0;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C14FC0;
	sub_82D2AEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C14FC8;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c15008
	if (cr6.eq) goto loc_82C15008;
loc_82C14FD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C14FDC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c14ff4
	if (cr6.eq) goto loc_82C14FF4;
	// bl 0x82d2b038
	ctx.lr = 0x82C14FE8;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c15008
	if (!cr6.eq) goto loc_82C15008;
loc_82C14FF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82C15000;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82c14fd0
	if (cr6.lt) goto loc_82C14FD0;
loc_82C15008:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82C15010;
	sub_82D33C10(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_82C15020:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82C15034;
	sub_83546FD8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82C15044;
	sub_82D1EAC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c138d0
	ctx.lr = 0x82C15050;
	sub_82C138D0(ctx, base);
loc_82C15050:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C15058"))) PPC_WEAK_FUNC(sub_82C15058);
PPC_FUNC_IMPL(__imp__sub_82C15058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C15060;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-23212
	ctx.r3.s64 = ctx.r11.s64 + -23212;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82C15088;
	sub_82D2F6D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c150ec
	if (cr6.eq) goto loc_82C150EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C150A0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82C150AC;
	sub_82D2AAB0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c150cc
	if (cr6.lt) goto loc_82C150CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C150CC;
	sub_825952B8(ctx, base);
loc_82C150CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x83103100
	ctx.lr = 0x82C150EC;
	sub_83103100(ctx, base);
loc_82C150EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C150F4"))) PPC_WEAK_FUNC(sub_82C150F4);
PPC_FUNC_IMPL(__imp__sub_82C150F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C150F8"))) PPC_WEAK_FUNC(sub_82C150F8);
PPC_FUNC_IMPL(__imp__sub_82C150F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C15100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r30,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 3;
	// bl 0x82c14710
	ctx.lr = 0x82C15124;
	sub_82C14710(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r30,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r5,-8
	ctx.r4.s64 = ctx.r5.s64 + -8;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c15154
	if (cr6.eq) goto loc_82C15154;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82c15154
	if (cr6.eq) goto loc_82C15154;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82c13ee8
	ctx.lr = 0x82C15154;
	sub_82C13EE8(ctx, base);
loc_82C15154:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1516C"))) PPC_WEAK_FUNC(sub_82C1516C);
PPC_FUNC_IMPL(__imp__sub_82C1516C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C15170"))) PPC_WEAK_FUNC(sub_82C15170);
PPC_FUNC_IMPL(__imp__sub_82C15170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C15178;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1520(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1520);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c15198
	if (cr6.eq) goto loc_82C15198;
loc_82C1518C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C15198:
	// bl 0x82d34e50
	ctx.lr = 0x82C1519C;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82C151A0;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1518c
	if (cr6.eq) goto loc_82C1518C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C151C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,160(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c151d8
	if (!cr6.eq) goto loc_82C151D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82C151D8:
	// bl 0x830ff290
	ctx.lr = 0x82C151DC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C151E0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82c15260
	if (!cr6.eq) goto loc_82C15260;
	// bl 0x831156e8
	ctx.lr = 0x82C151EC;
	sub_831156E8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x8319dc20
	ctx.lr = 0x82C15204;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319df40
	ctx.lr = 0x82C15210;
	sub_8319DF40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82c15244
	if (cr6.eq) goto loc_82C15244;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82C1522C;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319df40
	ctx.lr = 0x82C15238;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82c15260
	if (!cr6.eq) goto loc_82C15260;
loc_82C15244:
	// addis r11,r31,222
	ctx.r11.s64 = ctx.r31.s64 + 14548992;
	// addi r11,r11,-8464
	ctx.r11.s64 = ctx.r11.s64 + -8464;
	// addis r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 458752;
	// addi r10,r10,1924
	ctx.r10.s64 = ctx.r10.s64 + 1924;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r9,64
	ctx.r8.u64 = ctx.r9.u64 | 64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82C15260:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C15274;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c13a78
	ctx.lr = 0x82C1527C;
	sub_82C13A78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c13b80
	ctx.lr = 0x82C15284;
	sub_82C13B80(ctx, base);
	// lwz r9,176(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// lwz r10,172(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r30,r29,172
	ctx.r30.s64 = ctx.r29.s64 + 172;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c152c8
	if (cr6.eq) goto loc_82C152C8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82c152c4
	if (cr6.eq) goto loc_82C152C4;
loc_82C152A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82c152a4
	if (!cr6.eq) goto loc_82C152A4;
loc_82C152C4:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82C152C8:
	// bl 0x8311e3d0
	ctx.lr = 0x82C152CC;
	sub_8311E3D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C152D4;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1536c
	if (cr6.eq) goto loc_82C1536C;
	// bl 0x82f06520
	ctx.lr = 0x82C152E8;
	sub_82F06520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1536c
	if (cr6.eq) goto loc_82C1536C;
	// bl 0x82f06520
	ctx.lr = 0x82C152F4;
	sub_82F06520(ctx, base);
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r11,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c1538c
	if (cr0.eq) goto loc_82C1538C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82C15310:
	// bl 0x82f06520
	ctx.lr = 0x82C15314;
	sub_82F06520(ctx, base);
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r8,128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ld r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + -8);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// beq cr6,0x82c1533c
	if (cr6.eq) goto loc_82C1533C;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82C1533C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82c150f8
	ctx.lr = 0x82C15360;
	sub_82C150F8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82c15310
	if (!cr0.eq) goto loc_82C15310;
	// b 0x82c1538c
	goto loc_82C1538C;
loc_82C1536C:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82C15380;
	sub_83546FD8(ctx, base);
	// bl 0x82f06520
	ctx.lr = 0x82C15384;
	sub_82F06520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c15394
	if (cr6.eq) goto loc_82C15394;
loc_82C1538C:
	// bl 0x82f06520
	ctx.lr = 0x82C15390;
	sub_82F06520(ctx, base);
	// bl 0x82c14500
	ctx.lr = 0x82C15394;
	sub_82C14500(ctx, base);
loc_82C15394:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C153A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c14b10
	ctx.lr = 0x82C153B4;
	sub_82C14B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c13c38
	ctx.lr = 0x82C153BC;
	sub_82C13C38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c15444
	if (cr6.eq) goto loc_82C15444;
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x82d19a88
	ctx.lr = 0x82C153D4;
	sub_82D19A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c15444
	if (cr6.eq) goto loc_82C15444;
	// bl 0x82d33c10
	ctx.lr = 0x82C153E4;
	sub_82D33C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c15444
	if (cr6.eq) goto loc_82C15444;
loc_82C153F0:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82c15408
	if (cr6.lt) goto loc_82C15408;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_82C15408:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C15414;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1542c
	if (cr6.eq) goto loc_82C1542C;
	// bl 0x82d2b038
	ctx.lr = 0x82C15420;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1543c
	if (!cr6.eq) goto loc_82C1543C;
loc_82C1542C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// blt cr6,0x82c153f0
	if (cr6.lt) goto loc_82C153F0;
	// b 0x82c15444
	goto loc_82C15444;
loc_82C1543C:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
loc_82C15444:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c13e10
	ctx.lr = 0x82C1544C;
	sub_82C13E10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c138d0
	ctx.lr = 0x82C15458;
	sub_82C138D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1546C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C15480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,138
	cr6.compare<uint32_t>(ctx.r3.u32, 138, xer);
	// beq cr6,0x82c154b8
	if (cr6.eq) goto loc_82C154B8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C15498;
	sub_82D19788(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C154AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82C154B8;
	sub_82D1A998(ctx, base);
loc_82C154B8:
	// bl 0x830ff290
	ctx.lr = 0x82C154BC;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82C154C0;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c154dc
	if (!cr6.eq) goto loc_82C154DC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82C154DC;
	sub_82D19788(ctx, base);
loc_82C154DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c14b10
	ctx.lr = 0x82C154E8;
	sub_82C14B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C154F0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-22796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22796);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C1550C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1553c
	if (cr6.eq) goto loc_82C1553C;
	// lwz r3,1524(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1524);
	// bl 0x82d19a68
	ctx.lr = 0x82C15520;
	sub_82D19A68(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82C15524;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x82C1553C;
	sub_83545640(ctx, base);
loc_82C1553C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82C15544;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1555c
	if (!cr6.eq) goto loc_82C1555C;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C1555C;
	sub_82D17DA0(ctx, base);
loc_82C1555C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C15570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C15578"))) PPC_WEAK_FUNC(sub_82C15578);
PPC_FUNC_IMPL(__imp__sub_82C15578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C15580;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82c13c38
	ctx.lr = 0x82C1558C;
	sub_82C13C38(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c15688
	if (cr6.eq) goto loc_82C15688;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82c155e4
	if (cr6.eq) goto loc_82C155E4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c155d4
	if (cr6.eq) goto loc_82C155D4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82c15688
	if (!cr6.eq) goto loc_82C15688;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C155CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C155D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c14dd8
	ctx.lr = 0x82C155DC;
	sub_82C14DD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C155E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C155F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,1504(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1504, ctx.r3.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c15688
	if (cr6.eq) goto loc_82C15688;
	// bl 0x82f06520
	ctx.lr = 0x82C1560C;
	sub_82F06520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1567c
	if (cr6.eq) goto loc_82C1567C;
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// addi r31,r28,172
	ctx.r31.s64 = ctx.r28.s64 + 172;
	// lwz r10,176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82c1567c
	if (cr0.eq) goto loc_82C1567C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C15634:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f06520
	ctx.lr = 0x82C15648;
	sub_82F06520(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x83546fd8
	ctx.lr = 0x82C1565C;
	sub_83546FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c15634
	if (cr6.lt) goto loc_82C15634;
loc_82C1567C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19858
	ctx.lr = 0x82C15688;
	sub_82D19858(ctx, base);
loc_82C15688:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C15690"))) PPC_WEAK_FUNC(sub_82C15690);
PPC_FUNC_IMPL(__imp__sub_82C15690) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82c156dc
	if (!cr6.gt) goto loc_82C156DC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82c156dc
	if (!cr6.gt) goto loc_82C156DC;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_82C156CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c143b8
	ctx.lr = 0x82C156D4;
	sub_82C143B8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82c156cc
	if (!cr0.eq) goto loc_82C156CC;
loc_82C156DC:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c15700
	if (!cr6.eq) goto loc_82C15700;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82c1570c
	goto loc_82C1570C;
loc_82C15700:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82C1570C:
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82d19aa8
	ctx.lr = 0x82C15728;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c157b4
	if (cr6.eq) goto loc_82C157B4;
	// bl 0x82d2b038
	ctx.lr = 0x82C15734;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c15790
	if (!cr6.eq) goto loc_82C15790;
loc_82C15740:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c15758
	if (!cr6.eq) goto loc_82C15758;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82c1575c
	goto loc_82C1575C;
loc_82C15758:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82C1575C:
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82d19aa8
	ctx.lr = 0x82C15778;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c157b4
	if (cr6.eq) goto loc_82C157B4;
	// bl 0x82d2b038
	ctx.lr = 0x82C15784;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c15740
	if (cr6.eq) goto loc_82C15740;
loc_82C15790:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c14b10
	ctx.lr = 0x82C1579C;
	sub_82C14B10(ctx, base);
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17de0
	ctx.lr = 0x82C157A8;
	sub_82D17DE0(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C157B4;
	sub_82D17DA0(ctx, base);
loc_82C157B4:
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

__attribute__((alias("__imp__sub_82C157CC"))) PPC_WEAK_FUNC(sub_82C157CC);
PPC_FUNC_IMPL(__imp__sub_82C157CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C157D0"))) PPC_WEAK_FUNC(sub_82C157D0);
PPC_FUNC_IMPL(__imp__sub_82C157D0) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82c1581c
	if (!cr6.gt) goto loc_82C1581C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82c1581c
	if (!cr6.gt) goto loc_82C1581C;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_82C1580C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c143b8
	ctx.lr = 0x82C15814;
	sub_82C143B8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82c1580c
	if (!cr0.eq) goto loc_82C1580C;
loc_82C1581C:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,6
	cr6.compare<uint32_t>(ctx.r8.u32, 6, xer);
	// blt cr6,0x82c15850
	if (cr6.lt) goto loc_82C15850;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82C15850:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d19aa8
	ctx.lr = 0x82C15864;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c158f4
	if (cr6.eq) goto loc_82C158F4;
	// bl 0x82d2b038
	ctx.lr = 0x82C15870;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c158d0
	if (!cr6.eq) goto loc_82C158D0;
loc_82C1587C:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,6
	cr6.compare<uint32_t>(ctx.r8.u32, 6, xer);
	// blt cr6,0x82c158a4
	if (cr6.lt) goto loc_82C158A4;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82C158A4:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d19aa8
	ctx.lr = 0x82C158B8;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c158f4
	if (cr6.eq) goto loc_82C158F4;
	// bl 0x82d2b038
	ctx.lr = 0x82C158C4;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1587c
	if (cr6.eq) goto loc_82C1587C;
loc_82C158D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c14b10
	ctx.lr = 0x82C158DC;
	sub_82C14B10(ctx, base);
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17de0
	ctx.lr = 0x82C158E8;
	sub_82D17DE0(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C158F4;
	sub_82D17DA0(ctx, base);
loc_82C158F4:
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

__attribute__((alias("__imp__sub_82C1590C"))) PPC_WEAK_FUNC(sub_82C1590C);
PPC_FUNC_IMPL(__imp__sub_82C1590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C15910"))) PPC_WEAK_FUNC(sub_82C15910);
PPC_FUNC_IMPL(__imp__sub_82C15910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82C15918;
	__savegprlr_17(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C15924;
	sub_831156E8(ctx, base);
	// lwz r18,48(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x82C1592C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C15930;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82c15ec4
	if (!cr6.eq) goto loc_82C15EC4;
	// lwz r11,1512(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1512);
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(ctx.r11.u32, 99, xer);
	// blt cr6,0x82c1595c
	if (cr6.lt) goto loc_82C1595C;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1595c
	if (cr6.eq) goto loc_82C1595C;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x82d84728
	ctx.lr = 0x82C1595C;
	sub_82D84728(ctx, base);
loc_82C1595C:
	// bl 0x82f06520
	ctx.lr = 0x82C15960;
	sub_82F06520(ctx, base);
	// lbz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 424);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r21,148
	ctx.r21.s64 = 148;
	// li r22,6
	ctx.r22.s64 = 6;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r19,-1
	ctx.r19.s64 = -1;
	// li r17,2
	ctx.r17.s64 = 2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r27,r11,-23252
	ctx.r27.s64 = ctx.r11.s64 + -23252;
	// addi r24,r10,-22544
	ctx.r24.s64 = ctx.r10.s64 + -22544;
	// beq cr6,0x82c15b54
	if (cr6.eq) goto loc_82C15B54;
	// bl 0x82f06520
	ctx.lr = 0x82C1599C;
	sub_82F06520(ctx, base);
	// stb r31,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r31.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82f06520
	ctx.lr = 0x82C159B0;
	sub_82F06520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,408
	ctx.r4.s64 = ctx.r11.s64 + 408;
	// bl 0x82af1ca8
	ctx.lr = 0x82C159C0;
	sub_82AF1CA8(ctx, base);
	// bl 0x82f06520
	ctx.lr = 0x82C159C4;
	sub_82F06520(ctx, base);
	// bl 0x82c14548
	ctx.lr = 0x82C159C8;
	sub_82C14548(ctx, base);
	// stw r25,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r25.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r31,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r21.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x8259cc28
	ctx.lr = 0x82C159E8;
	sub_8259CC28(ctx, base);
	// stw r22,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// addi r4,r27,-945
	ctx.r4.s64 = ctx.r27.s64 + -945;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82C159F8;
	sub_837B0C10(ctx, base);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c15ab0
	if (cr6.eq) goto loc_82C15AB0;
	// ori r4,r4,103
	ctx.r4.u64 = ctx.r4.u64 | 103;
	// bl 0x82d042a8
	ctx.lr = 0x82C15A18;
	sub_82D042A8(ctx, base);
	// addi r4,r27,-48
	ctx.r4.s64 = ctx.r27.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x82C15A28;
	sub_825A1EB8(ctx, base);
	// subf r11,r26,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r26.s64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// srawi r28,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82c15ab8
	if (cr6.eq) goto loc_82C15AB8;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c15aa4
	if (!cr6.gt) goto loc_82C15AA4;
loc_82C15A48:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82C15A54;
	sub_8311BF98(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C15A5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c15a5c
	if (!cr6.eq) goto loc_82C15A5C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C15A80;
	sub_825A1EB8(ctx, base);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x82C15A90;
	sub_825A1EB8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82c15a48
	if (cr6.gt) goto loc_82C15A48;
	// b 0x82c15ab8
	goto loc_82C15AB8;
loc_82C15AA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C15AB0;
	sub_831CC188(ctx, base);
loc_82C15AB0:
	// ori r4,r4,102
	ctx.r4.u64 = ctx.r4.u64 | 102;
	// bl 0x82d042a8
	ctx.lr = 0x82C15AB8;
	sub_82D042A8(ctx, base);
loc_82C15AB8:
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x8259cb28
	ctx.lr = 0x82C15AD0;
	sub_8259CB28(ctx, base);
	// addi r3,r27,-40
	ctx.r3.s64 = ctx.r27.s64 + -40;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bb4e80
	ctx.lr = 0x82C15AE0;
	sub_82BB4E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83103100
	ctx.lr = 0x82C15AEC;
	sub_83103100(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c15b08
	if (cr6.lt) goto loc_82C15B08;
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82C15B08;
	sub_825952B8(ctx, base);
loc_82C15B08:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x82c15b30
	if (cr6.lt) goto loc_82C15B30;
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x825952b8
	ctx.lr = 0x82C15B30;
	sub_825952B8(ctx, base);
loc_82C15B30:
	// stw r25,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r25.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stb r31,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r31.u8);
	// beq cr6,0x82c15b54
	if (cr6.eq) goto loc_82C15B54;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x82C15B54;
	sub_825952B8(ctx, base);
loc_82C15B54:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82C15B64;
	sub_8319DC20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319df40
	ctx.lr = 0x82C15B70;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,220
	ctx.r9.s64 = 14417920;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ori r30,r9,39024
	ctx.r30.u64 = ctx.r9.u64 | 39024;
	// beq cr6,0x82c15c44
	if (cr6.eq) goto loc_82C15C44;
	// add r11,r18,r30
	ctx.r11.u64 = ctx.r18.u64 + ctx.r30.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,13825
	ctx.r11.s64 = ctx.r11.s64 + 13825;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c15ba8
	if (!cr6.eq) goto loc_82C15BA8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// b 0x82c15bac
	goto loc_82C15BAC;
loc_82C15BA8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82C15BAC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c15c44
	if (cr6.eq) goto loc_82C15C44;
	// stw r25,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r25.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, ctx.r31.u8);
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// stw r21,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r21.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82C15BD8;
	sub_8259CC28(ctx, base);
	// stw r22,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r22.u32);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x837b0c10
	ctx.lr = 0x82C15BE8;
	sub_837B0C10(ctx, base);
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// ori r4,r4,94
	ctx.r4.u64 = ctx.r4.u64 | 94;
	// bl 0x82d042a8
	ctx.lr = 0x82C15BF8;
	sub_82D042A8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x8259cb28
	ctx.lr = 0x82C15C18;
	sub_8259CB28(ctx, base);
	// addi r3,r27,-24
	ctx.r3.s64 = ctx.r27.s64 + -24;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bb4e80
	ctx.lr = 0x82C15C28;
	sub_82BB4E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83103100
	ctx.lr = 0x82C15C34;
	sub_83103100(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8387e8e0
	ctx.lr = 0x82C15C3C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x838760e0
	ctx.lr = 0x82C15C44;
	sub_838760E0(ctx, base);
loc_82C15C44:
	// add r11,r18,r30
	ctx.r11.u64 = ctx.r18.u64 + ctx.r30.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,13822
	ctx.r11.s64 = ctx.r11.s64 + 13822;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c15c68
	if (!cr6.eq) goto loc_82C15C68;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// b 0x82c15c6c
	goto loc_82C15C6C;
loc_82C15C68:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82C15C6C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c15d3c
	if (cr6.eq) goto loc_82C15D3C;
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r25.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82C15C98;
	sub_8259CC28(ctx, base);
	// stw r22,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r22.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x837b0c10
	ctx.lr = 0x82C15CA8;
	sub_837B0C10(ctx, base);
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// ori r4,r4,90
	ctx.r4.u64 = ctx.r4.u64 | 90;
	// bl 0x82d042a8
	ctx.lr = 0x82C15CB8;
	sub_82D042A8(ctx, base);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8259cb28
	ctx.lr = 0x82C15CD0;
	sub_8259CB28(ctx, base);
	// addi r3,r27,-8
	ctx.r3.s64 = ctx.r27.s64 + -8;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bb4e80
	ctx.lr = 0x82C15CE0;
	sub_82BB4E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83103100
	ctx.lr = 0x82C15CEC;
	sub_83103100(ctx, base);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c15d08
	if (cr6.lt) goto loc_82C15D08;
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x82C15D08;
	sub_825952B8(ctx, base);
loc_82C15D08:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r25,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r25.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// blt cr6,0x82c15d30
	if (cr6.lt) goto loc_82C15D30;
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x825952b8
	ctx.lr = 0x82C15D30;
	sub_825952B8(ctx, base);
loc_82C15D30:
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r25.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
loc_82C15D3C:
	// addis r30,r18,222
	ctx.r30.s64 = ctx.r18.s64 + 14548992;
	// addi r30,r30,-12688
	ctx.r30.s64 = ctx.r30.s64 + -12688;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c15ec4
	if (!cr6.eq) goto loc_82C15EC4;
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addis r3,r18,222
	ctx.r3.s64 = ctx.r18.s64 + 14548992;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-8464
	ctx.r3.s64 = ctx.r3.s64 + -8464;
	// bl 0x82ae7270
	ctx.lr = 0x82C15D78;
	sub_82AE7270(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,36
	ctx.r10.s64 = 36;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r7,r29,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r29.s64;
	// divw r10,r7,r10
	ctx.r10.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c15dd8
	if (cr6.eq) goto loc_82C15DD8;
	// addi r9,r29,24
	ctx.r9.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82c15dc8
	if (!cr6.gt) goto loc_82C15DC8;
loc_82C15DA8:
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bne cr6,0x82c15dd4
	if (!cr6.eq) goto loc_82C15DD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c15da8
	if (cr6.gt) goto loc_82C15DA8;
	// b 0x82c15dd8
	goto loc_82C15DD8;
loc_82C15DC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C15DD4;
	sub_831CC188(ctx, base);
loc_82C15DD4:
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_82C15DD8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c15eac
	if (cr6.eq) goto loc_82C15EAC;
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r25,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// stw r21,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r21.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82C15E08;
	sub_8259CC28(ctx, base);
	// stw r22,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r22.u32);
	// stw r25,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r25.u32);
	// lis r4,225
	ctx.r4.s64 = 14745600;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// ori r4,r4,89
	ctx.r4.u64 = ctx.r4.u64 | 89;
	// bl 0x82d042a8
	ctx.lr = 0x82C15E28;
	sub_82D042A8(ctx, base);
	// stw r17,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r17.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x8259cb28
	ctx.lr = 0x82C15E40;
	sub_8259CB28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bb4e80
	ctx.lr = 0x82C15E50;
	sub_82BB4E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83103100
	ctx.lr = 0x82C15E5C;
	sub_83103100(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c15e78
	if (cr6.lt) goto loc_82C15E78;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82C15E78;
	sub_825952B8(ctx, base);
loc_82C15E78:
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stw r25,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r25.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x82c15ea0
	if (cr6.lt) goto loc_82C15EA0;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x825952b8
	ctx.lr = 0x82C15EA0;
	sub_825952B8(ctx, base);
loc_82C15EA0:
	// stw r25,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r25.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
loc_82C15EAC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c15ec4
	if (cr6.eq) goto loc_82C15EC4;
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82C15EC4;
	sub_825952B8(ctx, base);
loc_82C15EC4:
	// lwz r11,1524(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1524);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c15f0c
	if (cr6.eq) goto loc_82C15F0C;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lbz r8,1528(r20)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r20.u32 + 1528);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r11,1528(r20)
	PPC_STORE_U8(ctx.r20.u32 + 1528, ctx.r11.u8);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82c15f0c
	if (cr6.eq) goto loc_82C15F0C;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82c138d0
	ctx.lr = 0x82C15F00;
	sub_82C138D0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lbz r4,1528(r20)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r20.u32 + 1528);
	// bl 0x82d199d0
	ctx.lr = 0x82C15F0C;
	sub_82D199D0(ctx, base);
loc_82C15F0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C15F18"))) PPC_WEAK_FUNC(sub_82C15F18);
PPC_FUNC_IMPL(__imp__sub_82C15F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x82c15f34
	if (!cr6.eq) goto loc_82C15F34;
loc_82C15F20:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// blr 
	return;
loc_82C15F34:
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bgt cr6,0x82c15f20
	if (cr6.gt) goto loc_82C15F20;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// bne cr6,0x82c15f70
	if (!cr6.eq) goto loc_82C15F70;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// blr 
	return;
loc_82C15F70:
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bne cr6,0x82c15fac
	if (!cr6.eq) goto loc_82C15FAC;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbz r8,22(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// blr 
	return;
loc_82C15FAC:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C15FC4"))) PPC_WEAK_FUNC(sub_82C15FC4);
PPC_FUNC_IMPL(__imp__sub_82C15FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C15FC8"))) PPC_WEAK_FUNC(sub_82C15FC8);
PPC_FUNC_IMPL(__imp__sub_82C15FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r11,r11,-21808
	ctx.r11.s64 = ctx.r11.s64 + -21808;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c15fec
	if (!cr6.eq) goto loc_82C15FEC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c16014
	goto loc_82C16014;
loc_82C15FEC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c1600c
	if (!cr6.eq) goto loc_82C1600C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c16010
	if (cr6.eq) goto loc_82C16010;
loc_82C1600C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C16010:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C16014:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c16028
	if (cr6.eq) goto loc_82C16028;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// blr 
	return;
loc_82C16028:
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82C16034:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82C16038:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// ld r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// bne cr6,0x82c16068
	if (!cr6.eq) goto loc_82C16068;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x82c16090
	goto loc_82C16090;
loc_82C16068:
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82c16088
	if (!cr6.eq) goto loc_82C16088;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c1608c
	if (cr6.eq) goto loc_82C1608C;
loc_82C16088:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C1608C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C16090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c160c0
	if (!cr6.eq) goto loc_82C160C0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,17
	cr6.compare<uint32_t>(ctx.r9.u32, 17, xer);
	// blt cr6,0x82c16038
	if (cr6.lt) goto loc_82C16038;
	// addi r8,r8,17
	ctx.r8.s64 = ctx.r8.s64 + 17;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r8,34
	cr6.compare<uint32_t>(ctx.r8.u32, 34, xer);
	// blt cr6,0x82c16034
	if (cr6.lt) goto loc_82C16034;
	// addi r3,r3,572
	ctx.r3.s64 = ctx.r3.s64 + 572;
	// blr 
	return;
loc_82C160C0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C160C8"))) PPC_WEAK_FUNC(sub_82C160C8);
PPC_FUNC_IMPL(__imp__sub_82C160C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r11,r11,-21808
	ctx.r11.s64 = ctx.r11.s64 + -21808;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c160ec
	if (!cr6.eq) goto loc_82C160EC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c16114
	goto loc_82C16114;
loc_82C160EC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c1610c
	if (!cr6.eq) goto loc_82C1610C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c16110
	if (cr6.eq) goto loc_82C16110;
loc_82C1610C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C16110:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C16114:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c161a4
	if (!cr6.eq) goto loc_82C161A4;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82C16128:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C1612C:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 28);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// bne cr6,0x82c16158
	if (!cr6.eq) goto loc_82C16158;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82c16180
	goto loc_82C16180;
loc_82C16158:
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x82c16178
	if (!cr6.eq) goto loc_82C16178;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c1617c
	if (cr6.eq) goto loc_82C1617C;
loc_82C16178:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C1617C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C16180:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c161ac
	if (!cr6.eq) goto loc_82C161AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,17
	cr6.compare<uint32_t>(ctx.r10.u32, 17, xer);
	// blt cr6,0x82c1612c
	if (cr6.lt) goto loc_82C1612C;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// cmplwi cr6,r9,34
	cr6.compare<uint32_t>(ctx.r9.u32, 34, xer);
	// blt cr6,0x82c16128
	if (cr6.lt) goto loc_82C16128;
loc_82C161A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C161AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C161B4"))) PPC_WEAK_FUNC(sub_82C161B4);
PPC_FUNC_IMPL(__imp__sub_82C161B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C161B8"))) PPC_WEAK_FUNC(sub_82C161B8);
PPC_FUNC_IMPL(__imp__sub_82C161B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,60648
	ctx.r9.u64 = ctx.r11.u64 | 60648;
	// lwzx r9,r3,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c161f8
	if (cr6.eq) goto loc_82C161F8;
	// addis r11,r3,85
	ctx.r11.s64 = ctx.r3.s64 + 5570560;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r11,11904
	ctx.r11.s64 = ctx.r11.s64 + 11904;
loc_82C161DC:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x82c16200
	if (cr6.eq) goto loc_82C16200;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82c161dc
	if (cr6.lt) goto loc_82C161DC;
loc_82C161F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C16200:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C16208"))) PPC_WEAK_FUNC(sub_82C16208);
PPC_FUNC_IMPL(__imp__sub_82C16208) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C1622C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16254
	if (cr6.eq) goto loc_82C16254;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-18004
	ctx.r4.s64 = ctx.r11.s64 + -18004;
	// bl 0x82cdd6d8
	ctx.lr = 0x82C16244;
	sub_82CDD6D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C16254:
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
}

__attribute__((alias("__imp__sub_82C16268"))) PPC_WEAK_FUNC(sub_82C16268);
PPC_FUNC_IMPL(__imp__sub_82C16268) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C1628C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c162b0
	if (cr6.eq) goto loc_82C162B0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-17980
	ctx.r4.s64 = ctx.r11.s64 + -17980;
	// bl 0x82f08c08
	ctx.lr = 0x82C162A0;
	sub_82F08C08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C162B0:
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
}

__attribute__((alias("__imp__sub_82C162C4"))) PPC_WEAK_FUNC(sub_82C162C4);
PPC_FUNC_IMPL(__imp__sub_82C162C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C162C8"))) PPC_WEAK_FUNC(sub_82C162C8);
PPC_FUNC_IMPL(__imp__sub_82C162C8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16300
	if (cr6.eq) goto loc_82C16300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C162F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r9.u32);
loc_82C16300:
	// bl 0x8399f8b8
	ctx.lr = 0x82C16304;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16314
	if (cr6.eq) goto loc_82C16314;
	// bl 0x8399f8b8
	ctx.lr = 0x82C16310;
	sub_8399F8B8(ctx, base);
	// bl 0x839a04b8
	ctx.lr = 0x82C16314;
	sub_839A04B8(ctx, base);
loc_82C16314:
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

__attribute__((alias("__imp__sub_82C1632C"))) PPC_WEAK_FUNC(sub_82C1632C);
PPC_FUNC_IMPL(__imp__sub_82C1632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C16330"))) PPC_WEAK_FUNC(sub_82C16330);
PPC_FUNC_IMPL(__imp__sub_82C16330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// addi r4,r1,118
	ctx.r4.s64 = ctx.r1.s64 + 118;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e3c0
	ctx.lr = 0x82C1634C;
	sub_8314E3C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82c163cc
	if (cr6.gt) goto loc_82C163CC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c16390
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C16390;
	// bdzf 4*cr6+eq,0x82c163a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C163A4;
	// bdzf 4*cr6+eq,0x82c163cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C163CC;
	// bdzf 4*cr6+eq,0x82c163cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C163CC;
	// bdzf 4*cr6+eq,0x82c163cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C163CC;
	// bne cr6,0x82c163b8
	if (!cr6.eq) goto loc_82C163B8;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C16390:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C163A4:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C163B8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C163CC:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C163E0"))) PPC_WEAK_FUNC(sub_82C163E0);
PPC_FUNC_IMPL(__imp__sub_82C163E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C163E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c16414
	if (!cr6.eq) goto loc_82C16414;
	// bl 0x82d19a78
	ctx.lr = 0x82C16400;
	sub_82D19A78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d33db0
	ctx.lr = 0x82C16408;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c165a8
	if (cr6.eq) goto loc_82C165A8;
loc_82C16414:
	// bl 0x8399f8b8
	ctx.lr = 0x82C16418;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c16424
	if (!cr6.eq) goto loc_82C16424;
	// bl 0x839a1610
	ctx.lr = 0x82C16424;
	sub_839A1610(ctx, base);
loc_82C16424:
	// bl 0x8399f8b8
	ctx.lr = 0x82C16428;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c165a8
	if (cr6.eq) goto loc_82C165A8;
	// bl 0x8399f8b8
	ctx.lr = 0x82C16434;
	sub_8399F8B8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r28,96(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x82C16448;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x839a1aa8
	ctx.lr = 0x82C16454;
	sub_839A1AA8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-22452
	ctx.r31.s64 = ctx.r11.s64 + -22452;
	// lwz r26,524(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// bl 0x831156e8
	ctx.lr = 0x82C16464;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x839a3228
	ctx.lr = 0x82C16478;
	sub_839A3228(ctx, base);
	// lbz r9,1408(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1408);
	// addis r11,r27,222
	ctx.r11.s64 = ctx.r27.s64 + 14548992;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-8464
	ctx.r11.s64 = ctx.r11.s64 + -8464;
	// ori r9,r10,58091
	ctx.r9.u64 = ctx.r10.u64 | 58091;
	// bne cr6,0x82c1649c
	if (!cr6.eq) goto loc_82C1649C;
	// ori r9,r10,58090
	ctx.r9.u64 = ctx.r10.u64 | 58090;
loc_82C1649C:
	// lbzx r27,r11,r9
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r30,r29,100
	ctx.r30.s64 = ctx.r29.s64 + 100;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C164BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c164cc
	if (cr6.eq) goto loc_82C164CC;
	// clrldi r4,r28,32
	ctx.r4.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C164CC;
	sub_82D294D0(ctx, base);
loc_82C164CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C164D8;
	sub_82D2D580(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16594
	if (cr6.eq) goto loc_82C16594;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c16594
	if (cr6.eq) goto loc_82C16594;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C16508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16594
	if (cr6.eq) goto loc_82C16594;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// ble cr6,0x82c16528
	if (!cr6.gt) goto loc_82C16528;
	// lwz r26,516(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// b 0x82c16534
	goto loc_82C16534;
loc_82C16528:
	// bge cr6,0x82c16534
	if (!cr6.lt) goto loc_82C16534;
	// lwz r26,520(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// subf r29,r28,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r28.s64;
loc_82C16534:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1654C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1655c
	if (cr6.eq) goto loc_82C1655C;
	// clrldi r4,r29,32
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C1655C;
	sub_82D294D0(ctx, base);
loc_82C1655C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C16578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C16594;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C16594:
	// bl 0x8399f8b8
	ctx.lr = 0x82C16598;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c165a8
	if (cr6.eq) goto loc_82C165A8;
	// bl 0x8399f8b8
	ctx.lr = 0x82C165A4;
	sub_8399F8B8(ctx, base);
	// bl 0x839a04b8
	ctx.lr = 0x82C165A8;
	sub_839A04B8(ctx, base);
loc_82C165A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C165B0"))) PPC_WEAK_FUNC(sub_82C165B0);
PPC_FUNC_IMPL(__imp__sub_82C165B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C165B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c165e4
	if (!cr6.eq) goto loc_82C165E4;
	// bl 0x82d19a78
	ctx.lr = 0x82C165D0;
	sub_82D19A78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d33db0
	ctx.lr = 0x82C165D8;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1674c
	if (cr6.eq) goto loc_82C1674C;
loc_82C165E4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r11,-22452
	ctx.r31.s64 = ctx.r11.s64 + -22452;
	// lwz r26,524(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// bl 0x831156e8
	ctx.lr = 0x82C165F4;
	sub_831156E8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8315ed60
	ctx.lr = 0x82C16620;
	sub_8315ED60(ctx, base);
	// lbz r8,1408(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1408);
	// addis r11,r28,222
	ctx.r11.s64 = ctx.r28.s64 + 14548992;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r11,r11,-8464
	ctx.r11.s64 = ctx.r11.s64 + -8464;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ori r9,r10,58093
	ctx.r9.u64 = ctx.r10.u64 | 58093;
	// bne cr6,0x82c16644
	if (!cr6.eq) goto loc_82C16644;
	// ori r9,r10,58092
	ctx.r9.u64 = ctx.r10.u64 | 58092;
loc_82C16644:
	// lbzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r30,r29,100
	ctx.r30.s64 = ctx.r29.s64 + 100;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C16664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16674
	if (cr6.eq) goto loc_82C16674;
	// clrldi r4,r24,56
	ctx.r4.u64 = ctx.r24.u64 & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C16674;
	sub_82D294D0(ctx, base);
loc_82C16674:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C16680;
	sub_82D2D580(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1674c
	if (cr6.eq) goto loc_82C1674C;
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c1674c
	if (cr6.eq) goto loc_82C1674C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C166B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1674c
	if (cr6.eq) goto loc_82C1674C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x82c166dc
	if (!cr6.gt) goto loc_82C166DC;
	// lwz r26,516(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// b 0x82c166e8
	goto loc_82C166E8;
loc_82C166DC:
	// bge cr6,0x82c166ec
	if (!cr6.lt) goto loc_82C166EC;
	// lwz r26,520(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82C166E8:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
loc_82C166EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C16704;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16714
	if (cr6.eq) goto loc_82C16714;
	// clrldi r4,r29,56
	ctx.r4.u64 = ctx.r29.u64 & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C16714;
	sub_82D294D0(ctx, base);
loc_82C16714:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C16730;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C1674C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1674C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C16754"))) PPC_WEAK_FUNC(sub_82C16754);
PPC_FUNC_IMPL(__imp__sub_82C16754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C16758"))) PPC_WEAK_FUNC(sub_82C16758);
PPC_FUNC_IMPL(__imp__sub_82C16758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,-32
	ctx.r11.s64 = ctx.r4.s64 + -32;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82c167ac
	if (cr6.gt) goto loc_82C167AC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c16788
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C16788;
	// bdzf 4*cr6+eq,0x82c16794
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C16794;
	// bdzf 4*cr6+eq,0x82c16788
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C16788;
	// bdzf 4*cr6+eq,0x82c16794
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C16794;
	// bdzf 4*cr6+eq,0x82c16788
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C16788;
	// bdzf 4*cr6+eq,0x82c16794
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C16794;
	// bne cr6,0x82c167a0
	if (!cr6.eq) goto loc_82C167A0;
loc_82C16788:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82C16794:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82C167A0:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82C167AC:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,-21812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21812);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C167BC"))) PPC_WEAK_FUNC(sub_82C167BC);
PPC_FUNC_IMPL(__imp__sub_82C167BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C167C0"))) PPC_WEAK_FUNC(sub_82C167C0);
PPC_FUNC_IMPL(__imp__sub_82C167C0) {
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
	// lwz r11,1456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82c167fc
	if (cr6.eq) goto loc_82C167FC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x82c16804
	if (!cr6.gt) goto loc_82C16804;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgt cr6,0x82c16804
	if (cr6.gt) goto loc_82C16804;
	// bl 0x82d17d90
	ctx.lr = 0x82C167F4;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c16804
	if (!cr6.eq) goto loc_82C16804;
loc_82C167FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1460, ctx.r11.u8);
loc_82C16804:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C16824"))) PPC_WEAK_FUNC(sub_82C16824);
PPC_FUNC_IMPL(__imp__sub_82C16824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C16828"))) PPC_WEAK_FUNC(sub_82C16828);
PPC_FUNC_IMPL(__imp__sub_82C16828) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c16880
	if (cr6.eq) goto loc_82C16880;
	// lwz r11,1448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1448);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c16880
	if (cr6.eq) goto loc_82C16880;
	// bl 0x83a7d958
	ctx.lr = 0x82C16860;
	sub_83A7D958(ctx, base);
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r10,1448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r8.u32);
	// stw r9,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r9.u32);
	// b 0x82c16888
	goto loc_82C16888;
loc_82C16880:
	// bl 0x83a7d958
	ctx.lr = 0x82C16884;
	sub_83A7D958(ctx, base);
	// stw r3,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r3.u32);
loc_82C16888:
	// stb r30,1462(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1462, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82C168A4"))) PPC_WEAK_FUNC(sub_82C168A4);
PPC_FUNC_IMPL(__imp__sub_82C168A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C168A8"))) PPC_WEAK_FUNC(sub_82C168A8);
PPC_FUNC_IMPL(__imp__sub_82C168A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C168B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r31,-8224
	ctx.r31.s64 = -8224;
loc_82C168C4:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,25168
	ctx.r6.s64 = ctx.r11.s64 + 25168;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x82C168DC;
	sub_823FCA98(ctx, base);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// bl 0x82bb5b00
	ctx.lr = 0x82C168F8;
	sub_82BB5B00(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bge 0x82c168c4
	if (!cr0.lt) goto loc_82C168C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C16910"))) PPC_WEAK_FUNC(sub_82C16910);
PPC_FUNC_IMPL(__imp__sub_82C16910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r7,55
	ctx.r7.s64 = 55;
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82C16934:
	// lwz r5,-12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r9,r5,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,-12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwimi r9,r5,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lhz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// lhz r5,-2(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r5,22,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3F;
	// cmplwi cr6,r9,55
	cr6.compare<uint32_t>(ctx.r9.u32, 55, xer);
	// bne cr6,0x82c169ac
	if (!cr6.eq) goto loc_82C169AC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r7,10,16,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// b 0x82c169b8
	goto loc_82C169B8;
loc_82C169AC:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r5,r9,10,16,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0xFC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
loc_82C169B8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// bne cr6,0x82c169cc
	if (!cr6.eq) goto loc_82C169CC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82C169CC:
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82c169d8
	if (!cr6.eq) goto loc_82C169D8;
	// li r9,31
	ctx.r9.s64 = 31;
loc_82C169D8:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r5,r9,5,22,26
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x3E0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC1F);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r5,22,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3F;
	// cmplwi cr6,r9,55
	cr6.compare<uint32_t>(ctx.r9.u32, 55, xer);
	// bne cr6,0x82c16a0c
	if (!cr6.eq) goto loc_82C16A0C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r7,10,16,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x82c16a18
	goto loc_82C16A18;
loc_82C16A0C:
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r5,r9,10,16,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0xFC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_82C16A18:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// bne cr6,0x82c16a2c
	if (!cr6.eq) goto loc_82C16A2C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82C16A2C:
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82c16a38
	if (!cr6.eq) goto loc_82C16A38;
	// li r9,31
	ctx.r9.s64 = 31;
loc_82C16A38:
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r5,r9,5,22,26
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x3E0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC1F);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r5,22,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3F;
	// cmplwi cr6,r9,55
	cr6.compare<uint32_t>(ctx.r9.u32, 55, xer);
	// bne cr6,0x82c16a6c
	if (!cr6.eq) goto loc_82C16A6C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r7,10,16,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// b 0x82c16a78
	goto loc_82C16A78;
loc_82C16A6C:
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r5,r9,10,16,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0xFC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
loc_82C16A78:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// bne cr6,0x82c16a8c
	if (!cr6.eq) goto loc_82C16A8C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82C16A8C:
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82c16a98
	if (!cr6.eq) goto loc_82C16A98;
	// li r9,31
	ctx.r9.s64 = 31;
loc_82C16A98:
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r5,r9,5,22,26
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x3E0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC1F);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lhz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// sth r9,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r9.u16);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r5,22,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3F;
	// cmplwi cr6,r9,55
	cr6.compare<uint32_t>(ctx.r9.u32, 55, xer);
	// bne cr6,0x82c16acc
	if (!cr6.eq) goto loc_82C16ACC;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r7,10,16,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// b 0x82c16ad8
	goto loc_82C16AD8;
loc_82C16ACC:
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r5,r9,10,16,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0xFC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
loc_82C16AD8:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r9,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// bne cr6,0x82c16aec
	if (!cr6.eq) goto loc_82C16AEC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82C16AEC:
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82c16af8
	if (!cr6.eq) goto loc_82C16AF8;
	// li r9,31
	ctx.r9.s64 = 31;
loc_82C16AF8:
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r5,r9,5,22,26
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x3E0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC1F);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lhz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r9,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r9.u16);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r9,r5,22,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3F;
	// cmplwi cr6,r9,55
	cr6.compare<uint32_t>(ctx.r9.u32, 55, xer);
	// bne cr6,0x82c16b2c
	if (!cr6.eq) goto loc_82C16B2C;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r9,r7,10,16,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// b 0x82c16b38
	goto loc_82C16B38;
loc_82C16B2C:
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r5,r9,10,16,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0xFC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
loc_82C16B38:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r9,r9,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// bne cr6,0x82c16b4c
	if (!cr6.eq) goto loc_82C16B4C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82C16B4C:
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82c16b58
	if (!cr6.eq) goto loc_82C16B58;
	// li r9,31
	ctx.r9.s64 = 31;
loc_82C16B58:
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// rlwimi r5,r9,5,22,26
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x3E0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC1F);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82c16934
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C16934;
	// lwz r11,516(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// rlwimi r11,r10,0,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// lwz r8,516(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	// rlwimi r9,r8,0,26,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r9,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C16B94"))) PPC_WEAK_FUNC(sub_82C16B94);
PPC_FUNC_IMPL(__imp__sub_82C16B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C16B98"))) PPC_WEAK_FUNC(sub_82C16B98);
PPC_FUNC_IMPL(__imp__sub_82C16B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C16BA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82c16bc8
	if (!cr6.eq) goto loc_82C16BC8;
	// bl 0x82d19a78
	ctx.lr = 0x82C16BB4;
	sub_82D19A78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d33db0
	ctx.lr = 0x82C16BBC;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16c8c
	if (cr6.eq) goto loc_82C16C8C;
loc_82C16BC8:
	// bl 0x831156e8
	ctx.lr = 0x82C16BCC;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,57284
	ctx.r9.u64 = ctx.r11.u64 | 57284;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8319b460
	ctx.lr = 0x82C16BE4;
	sub_8319B460(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-22444
	ctx.r30.s64 = ctx.r11.s64 + -22444;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C16C0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16c40
	if (cr6.eq) goto loc_82C16C40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319d480
	ctx.lr = 0x82C16C24;
	sub_8319D480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82C16C38;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C16C40;
	sub_8387E8E0(ctx, base);
loc_82C16C40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C16C58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16c8c
	if (cr6.eq) goto loc_82C16C8C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319d480
	ctx.lr = 0x82C16C70;
	sub_8319D480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82C16C84;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C16C8C;
	sub_8387E8E0(ctx, base);
loc_82C16C8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C16C94"))) PPC_WEAK_FUNC(sub_82C16C94);
PPC_FUNC_IMPL(__imp__sub_82C16C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C16C98"))) PPC_WEAK_FUNC(sub_82C16C98);
PPC_FUNC_IMPL(__imp__sub_82C16C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C16CA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,60
	ctx.r30.s64 = ctx.r3.s64 + 60;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c16ccc
	if (cr6.lt) goto loc_82C16CCC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C16CCC;
	sub_825952B8(ctx, base);
loc_82C16CCC:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r31,r28,32
	ctx.r31.s64 = ctx.r28.s64 + 32;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c16d00
	if (cr6.lt) goto loc_82C16D00;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C16D00;
	sub_825952B8(ctx, base);
loc_82C16D00:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c16d2c
	if (cr6.lt) goto loc_82C16D2C;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C16D2C;
	sub_825952B8(ctx, base);
loc_82C16D2C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C16D40"))) PPC_WEAK_FUNC(sub_82C16D40);
PPC_FUNC_IMPL(__imp__sub_82C16D40) {
	PPC_FUNC_PROLOGUE();
	// li r9,26
	ctx.r9.s64 = 26;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// ld r10,-21808(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -21808);
	// std r10,92(r3)
	PPC_STORE_U64(ctx.r3.u32 + 92, ctx.r10.u64);
	// ld r10,-21808(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -21808);
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// stb r11,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
	// stb r11,110(r3)
	PPC_STORE_U8(ctx.r3.u32 + 110, ctx.r11.u8);
	// stb r11,111(r3)
	PPC_STORE_U8(ctx.r3.u32 + 111, ctx.r11.u8);
	// std r10,100(r3)
	PPC_STORE_U64(ctx.r3.u32 + 100, ctx.r10.u64);
	// lwz r10,-21760(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -21760);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r10,-21760(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -21760);
	// sth r5,120(r3)
	PPC_STORE_U16(ctx.r3.u32 + 120, ctx.r5.u16);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// ld r10,-21744(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + -21744);
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// std r10,124(r3)
	PPC_STORE_U64(ctx.r3.u32 + 124, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C16DD4"))) PPC_WEAK_FUNC(sub_82C16DD4);
PPC_FUNC_IMPL(__imp__sub_82C16DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C16DD8"))) PPC_WEAK_FUNC(sub_82C16DD8);
PPC_FUNC_IMPL(__imp__sub_82C16DD8) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82C16DF4;
	sub_82D19A78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82d33db0
	ctx.lr = 0x82C16DFC;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c16e48
	if (cr6.eq) goto loc_82C16E48;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-22472(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22472);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C16E24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c163e0
	ctx.lr = 0x82C16E30;
	sub_82C163E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c165b0
	ctx.lr = 0x82C16E3C;
	sub_82C165B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16b98
	ctx.lr = 0x82C16E48;
	sub_82C16B98(ctx, base);
loc_82C16E48:
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

__attribute__((alias("__imp__sub_82C16E60"))) PPC_WEAK_FUNC(sub_82C16E60);
PPC_FUNC_IMPL(__imp__sub_82C16E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C16E68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82C16EA8;
	sub_8259CB28(ctx, base);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82C16EC8;
	sub_8259CB28(ctx, base);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r29,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82C16EE8;
	sub_8259CB28(ctx, base);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// lbz r5,108(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 108);
	// stb r5,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r5.u8);
	// lbz r4,109(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 109);
	// stb r4,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r4.u8);
	// lbz r3,110(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 110);
	// stb r3,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r3.u8);
	// lbz r11,111(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 111);
	// stb r11,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r11.u8);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lhz r8,120(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// sth r8,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r8.u16);
	// lwz r7,124(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// lbz r5,132(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 132);
	// stb r5,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r5.u8);
	// lwz r4,136(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C16F7C"))) PPC_WEAK_FUNC(sub_82C16F7C);
PPC_FUNC_IMPL(__imp__sub_82C16F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C16F80"))) PPC_WEAK_FUNC(sub_82C16F80);
PPC_FUNC_IMPL(__imp__sub_82C16F80) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c16fb8
	if (cr6.eq) goto loc_82C16FB8;
loc_82C16FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16c98
	ctx.lr = 0x82C16FAC;
	sub_82C16C98(ctx, base);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82c16fa4
	if (!cr6.eq) goto loc_82C16FA4;
loc_82C16FB8:
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

__attribute__((alias("__imp__sub_82C16FD0"))) PPC_WEAK_FUNC(sub_82C16FD0);
PPC_FUNC_IMPL(__imp__sub_82C16FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C16FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82C17004;
	sub_8259CB28(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82C17018;
	sub_8259CB28(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82C1702C;
	sub_8259CB28(ctx, base);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// lbz r5,108(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 108);
	// stb r5,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r5.u8);
	// lbz r4,109(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 109);
	// stb r4,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r4.u8);
	// lbz r3,110(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 110);
	// stb r3,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r3.u8);
	// lbz r11,111(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 111);
	// stb r11,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r11.u8);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// rlwimi r9,r10,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,116(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// sth r11,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r11.u16);
	// lhz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// sth r10,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r10.u16);
	// lwz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// lbz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 132);
	// stb r8,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r8.u8);
	// lwz r7,136(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// lwz r6,140(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C170F0"))) PPC_WEAK_FUNC(sub_82C170F0);
PPC_FUNC_IMPL(__imp__sub_82C170F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x82C170F8;
	__savegprlr_15(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C1710C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r15,48(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x83153330
	ctx.lr = 0x82C17124;
	sub_83153330(ctx, base);
	// lwz r8,2116(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 2116);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c171a4
	if (cr6.eq) goto loc_82C171A4;
	// addi r7,r22,52
	ctx.r7.s64 = ctx.r22.s64 + 52;
	// rlwinm r6,r31,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82C17150:
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bge cr6,0x82c17160
	if (!cr6.lt) goto loc_82C17160;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82C17160:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r11,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// bne cr6,0x82c17184
	if (!cr6.eq) goto loc_82C17184;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c17188
	if (cr6.eq) goto loc_82C17188;
loc_82C17184:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82C17188:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c171e4
	if (!cr6.eq) goto loc_82C171E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c17150
	if (cr6.lt) goto loc_82C17150;
loc_82C171A4:
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// addi r21,r5,-2
	ctx.r21.s64 = ctx.r5.s64 + -2;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c171b8
	if (cr6.lt) goto loc_82C171B8;
	// addi r21,r8,-5
	ctx.r21.s64 = ctx.r8.s64 + -5;
loc_82C171B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C171C0;
	sub_82D19A78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82C171C8;
	sub_82D33DB0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c179e8
	if (cr6.eq) goto loc_82C179E8;
	// cmplwi cr6,r21,32
	cr6.compare<uint32_t>(ctx.r21.u32, 32, xer);
	// blt cr6,0x82c171f8
	if (cr6.lt) goto loc_82C171F8;
	// addi r11,r22,52
	ctx.r11.s64 = ctx.r22.s64 + 52;
	// b 0x82c1720c
	goto loc_82C1720C;
loc_82C171E4:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bge cr6,0x82c171a4
	if (!cr6.lt) goto loc_82C171A4;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// b 0x82c171b8
	goto loc_82C171B8;
loc_82C171F8:
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_82C1720C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c17414
	if (!cr6.eq) goto loc_82C17414;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// li r18,15
	ctx.r18.s64 = 15;
	// li r16,2
	ctx.r16.s64 = 2;
	// addi r28,r11,-22544
	ctx.r28.s64 = ctx.r11.s64 + -22544;
loc_82C17230:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C1723C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c173f8
	if (cr6.eq) goto loc_82C173F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,308(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C1727C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17290
	if (cr6.eq) goto loc_82C17290;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C17290;
	sub_82D294D0(ctx, base);
loc_82C17290:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,164(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C172A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17304
	if (cr6.eq) goto loc_82C17304;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82c172c0
	if (cr6.lt) goto loc_82C172C0;
	// addi r11,r22,52
	ctx.r11.s64 = ctx.r22.s64 + 52;
	// b 0x82c172d4
	goto loc_82C172D4;
loc_82C172C0:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_82C172D4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r20,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r20.u32);
	// beq cr6,0x82c172f4
	if (cr6.eq) goto loc_82C172F4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C172F4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x82d329f8
	ctx.lr = 0x82C17304;
	sub_82D329F8(ctx, base);
loc_82C17304:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1731C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c173cc
	if (cr6.eq) goto loc_82C173CC;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82c17338
	if (cr6.lt) goto loc_82C17338;
	// addi r11,r22,52
	ctx.r11.s64 = ctx.r22.s64 + 52;
	// b 0x82c1734c
	goto loc_82C1734C;
loc_82C17338:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_82C1734C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82C17358;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r20,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r20.u8);
loc_82C1736C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1736c
	if (!cr6.eq) goto loc_82C1736C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C17390;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C173A4;
	sub_82D291E0(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c173c0
	if (cr6.lt) goto loc_82C173C0;
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82C173C0;
	sub_825952B8(ctx, base);
loc_82C173C0:
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// stb r20,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r20.u8);
loc_82C173CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C173E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c173f8
	if (cr6.eq) goto loc_82C173F8;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,61
	ctx.r4.u64 = ctx.r4.u64 | 61;
	// bl 0x82d29598
	ctx.lr = 0x82C173F8;
	sub_82D29598(ctx, base);
loc_82C173F8:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82c17230
	if (cr6.lt) goto loc_82C17230;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_82C17414:
	// lwz r10,100(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 100);
	// addi r3,r17,100
	ctx.r3.s64 = ctx.r17.s64 + 100;
	// lwz r4,-22544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22544);
	// addi r27,r11,-22544
	ctx.r27.s64 = ctx.r11.s64 + -22544;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C17430;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r18,15
	ctx.r18.s64 = 15;
	// li r16,2
	ctx.r16.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c175d0
	if (cr6.eq) goto loc_82C175D0;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r20,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r20.u8);
	// addi r31,r11,-22295
	ctx.r31.s64 = ctx.r11.s64 + -22295;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,-31
	ctx.r4.s64 = ctx.r31.s64 + -31;
	// bl 0x8259cc28
	ctx.lr = 0x82C17468;
	sub_8259CC28(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82d04220
	ctx.lr = 0x82C17478;
	sub_82D04220(ctx, base);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// li r29,55
	ctx.r29.s64 = 55;
	// bl 0x83197440
	ctx.lr = 0x82C17488;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c174bc
	if (!cr6.eq) goto loc_82C174BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314e3c0
	ctx.lr = 0x82C174A0;
	sub_8314E3C0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83157820
	ctx.lr = 0x82C174AC;
	sub_83157820(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,55
	cr6.compare<int32_t>(ctx.r3.s32, 55, xer);
	// beq cr6,0x82c174bc
	if (cr6.eq) goto loc_82C174BC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82C174BC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c17594
	if (cr6.eq) goto loc_82C17594;
	// addi r4,r31,-30
	ctx.r4.s64 = ctx.r31.s64 + -30;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82C174D4;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82C174E0;
	sub_837B0C10(ctx, base);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d042a8
	ctx.lr = 0x82C174F4;
	sub_82D042A8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c17508
	if (!cr6.lt) goto loc_82C17508;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
loc_82C17508:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c1751c
	if (!cr6.lt) goto loc_82C1751C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82C1751C:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ori r4,r4,634
	ctx.r4.u64 = ctx.r4.u64 | 634;
	// bl 0x82d042a8
	ctx.lr = 0x82C1752C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C17540;
	sub_82D291E0(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1755c
	if (cr6.lt) goto loc_82C1755C;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82C1755C;
	sub_825952B8(ctx, base);
loc_82C1755C:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r18,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r18.u32);
	// stw r20,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r20.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r20,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r20.u8);
	// blt cr6,0x82c17584
	if (cr6.lt) goto loc_82C17584;
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82C17584;
	sub_825952B8(ctx, base);
loc_82C17584:
	// stw r18,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r18.u32);
	// stw r20,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r20.u32);
	// stb r20,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r20.u8);
	// b 0x82c175a8
	goto loc_82C175A8;
loc_82C17594:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C175A8;
	sub_82D291E0(ctx, base);
loc_82C175A8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c175c4
	if (cr6.lt) goto loc_82C175C4;
	// stw r16,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r16.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82C175C4;
	sub_825952B8(ctx, base);
loc_82C175C4:
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// stb r20,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r20.u8);
loc_82C175D0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x8311c338
	ctx.lr = 0x82C175DC;
	sub_8311C338(ctx, base);
	// lis r11,204
	ctx.r11.s64 = 13369344;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// ori r24,r11,46804
	ctx.r24.u64 = ctx.r11.u64 | 46804;
loc_82C175EC:
	// add r29,r25,r21
	ctx.r29.u64 = ctx.r25.u64 + ctx.r21.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmplwi cr6,r19,1
	cr6.compare<uint32_t>(ctx.r19.u32, 1, xer);
	// blt cr6,0x82c176e0
	if (cr6.lt) goto loc_82C176E0;
	// beq cr6,0x82c17630
	if (cr6.eq) goto loc_82C17630;
	// cmplwi cr6,r19,3
	cr6.compare<uint32_t>(ctx.r19.u32, 3, xer);
	// bge cr6,0x82c177bc
	if (!cr6.lt) goto loc_82C177BC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83195d30
	ctx.lr = 0x82C17618;
	sub_83195D30(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82c177bc
	if (cr6.eq) goto loc_82C177BC;
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bge cr6,0x82c177bc
	if (!cr6.lt) goto loc_82C177BC;
	// li r28,5
	ctx.r28.s64 = 5;
	// b 0x82c177bc
	goto loc_82C177BC;
loc_82C17630:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83195d30
	ctx.lr = 0x82C17640;
	sub_83195D30(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x83195d30
	ctx.lr = 0x82C17654;
	sub_83195D30(ctx, base);
	// subf r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subf r7,r10,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r5,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r4,6
	ctx.r4.s64 = 6;
	// and r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 & ctx.r31.u64;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x83195d30
	ctx.lr = 0x82C17688;
	sub_83195D30(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82c176b0
	if (!cr6.eq) goto loc_82C176B0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83195d30
	ctx.lr = 0x82C176A0;
	sub_83195D30(ctx, base);
	// subf r11,r3,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r3.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_82C176B0:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bge cr6,0x82c176c0
	if (!cr6.lt) goto loc_82C176C0;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x82c177bc
	goto loc_82C177BC;
loc_82C176C0:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bge cr6,0x82c176d0
	if (!cr6.lt) goto loc_82C176D0;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x82c177bc
	goto loc_82C177BC;
loc_82C176D0:
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bge cr6,0x82c177bc
	if (!cr6.lt) goto loc_82C177BC;
	// li r28,4
	ctx.r28.s64 = 4;
	// b 0x82c177bc
	goto loc_82C177BC;
loc_82C176E0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x8311c338
	ctx.lr = 0x82C176EC;
	sub_8311C338(ctx, base);
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82c17718
	if (!cr6.eq) goto loc_82C17718;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82a68678
	ctx.lr = 0x82C17708;
	sub_82A68678(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bge cr6,0x82c177bc
	if (!cr6.lt) goto loc_82C177BC;
	// li r28,6
	ctx.r28.s64 = 6;
	// b 0x82c177bc
	goto loc_82C177BC;
loc_82C17718:
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r15,r24
	ctx.r3.u64 = ctx.r15.u64 + ctx.r24.u64;
	// bl 0x82bab1d0
	ctx.lr = 0x82C1772C;
	sub_82BAB1D0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83195d30
	ctx.lr = 0x82C17740;
	sub_83195D30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// li r4,2
	ctx.r4.s64 = 2;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r11
	ctx.r31.u64 = ctx.r7.u64 & ctx.r11.u64;
	// bl 0x83195d30
	ctx.lr = 0x82C17764;
	sub_83195D30(ctx, base);
	// subf r6,r3,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r3.s64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// bge cr6,0x82c17784
	if (!cr6.lt) goto loc_82C17784;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82c17790
	goto loc_82C17790;
loc_82C17784:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c17790
	if (!cr6.lt) goto loc_82C17790;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82C17790:
	// lhz r11,86(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 86);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82c177bc
	if (cr6.eq) goto loc_82C177BC;
	// lwz r11,540(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 540);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r31,r11,23,25,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// bl 0x82a686f0
	ctx.lr = 0x82C177AC;
	sub_82A686F0(ctx, base);
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c177bc
	if (cr6.lt) goto loc_82C177BC;
	// li r28,7
	ctx.r28.s64 = 7;
loc_82C177BC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C177C8;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c179d4
	if (cr6.eq) goto loc_82C179D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r27,308
	ctx.r10.s64 = ctx.r27.s64 + 308;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C177F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// lwz r4,164(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C17810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1786c
	if (cr6.eq) goto loc_82C1786C;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82c17828
	if (cr6.lt) goto loc_82C17828;
	// addi r11,r22,52
	ctx.r11.s64 = ctx.r22.s64 + 52;
	// b 0x82c1783c
	goto loc_82C1783C;
loc_82C17828:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_82C1783C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r20,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r20.u32);
	// beq cr6,0x82c1785c
	if (cr6.eq) goto loc_82C1785C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C1785C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d329f8
	ctx.lr = 0x82C1786C;
	sub_82D329F8(ctx, base);
loc_82C1786C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c178bc
	if (cr6.eq) goto loc_82C178BC;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82c1789c
	if (cr6.lt) goto loc_82C1789C;
	// addi r11,r22,52
	ctx.r11.s64 = ctx.r22.s64 + 52;
	// b 0x82c178b0
	goto loc_82C178B0;
loc_82C1789C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_82C178B0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicl r4,r11,38,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 38) & 0x3FFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C178BC;
	sub_82D294D0(ctx, base);
loc_82C178BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C178D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17984
	if (cr6.eq) goto loc_82C17984;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82c178f0
	if (cr6.lt) goto loc_82C178F0;
	// addi r11,r22,52
	ctx.r11.s64 = ctx.r22.s64 + 52;
	// b 0x82c17904
	goto loc_82C17904;
loc_82C178F0:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_82C17904:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82C17910;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// stw r20,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r20.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r20,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r20.u8);
loc_82C17924:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c17924
	if (!cr6.eq) goto loc_82C17924;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82C17948;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C1795C;
	sub_82D291E0(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82c17978
	if (cr6.lt) goto loc_82C17978;
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82C17978;
	sub_825952B8(ctx, base);
loc_82C17978:
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// stw r20,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r20.u32);
	// stb r20,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r20.u8);
loc_82C17984:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1799C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c179d4
	if (cr6.eq) goto loc_82C179D4;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82c179b4
	if (cr6.lt) goto loc_82C179B4;
	// addi r11,r22,52
	ctx.r11.s64 = ctx.r22.s64 + 52;
	// b 0x82c179c8
	goto loc_82C179C8;
loc_82C179B4:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_82C179C8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r11,14,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C179D4;
	sub_82D294D0(ctx, base);
loc_82C179D4:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82c175ec
	if (cr6.lt) goto loc_82C175EC;
loc_82C179E8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C179F0"))) PPC_WEAK_FUNC(sub_82C179F0);
PPC_FUNC_IMPL(__imp__sub_82C179F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C179F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C17A08;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,820
	ctx.r31.s64 = ctx.r31.s64 + 820;
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d19a78
	ctx.lr = 0x82C17A1C;
	sub_82D19A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d33db0
	ctx.lr = 0x82C17A24;
	sub_82D33DB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17ca0
	if (cr6.eq) goto loc_82C17CA0;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r29,r11,-22376
	ctx.r29.s64 = ctx.r11.s64 + -22376;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,-152(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -152);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C17A50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17a64
	if (cr6.eq) goto loc_82C17A64;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,214
	ctx.r4.u64 = ctx.r4.u64 | 214;
	// bl 0x82d29598
	ctx.lr = 0x82C17A64;
	sub_82D29598(ctx, base);
loc_82C17A64:
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c17b70
	if (!cr6.eq) goto loc_82C17B70;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-18220
	ctx.r27.s64 = ctx.r11.s64 + -18220;
loc_82C17A80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C17A8C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17b5c
	if (cr6.eq) goto loc_82C17B5C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// lwz r4,-148(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17AB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17ac4
	if (cr6.eq) goto loc_82C17AC4;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82C17AC4;
	sub_82D294D0(ctx, base);
loc_82C17AC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-144(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -144);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17ADC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17b10
	if (cr6.eq) goto loc_82C17B10;
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C17AF4;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C17B08;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C17B10;
	sub_8387E8E0(ctx, base);
loc_82C17B10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-140(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17B28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17b5c
	if (cr6.eq) goto loc_82C17B5C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82C17B40;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C17B54;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C17B5C;
	sub_8387E8E0(ctx, base);
loc_82C17B5C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x82c17a80
	if (cr6.lt) goto loc_82C17A80;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C17B70:
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82C17B7C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C17B88;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17c90
	if (cr6.eq) goto loc_82C17C90;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17be4
	if (cr6.eq) goto loc_82C17BE4;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r26,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r26.u32);
	// beq cr6,0x82c17bd4
	if (cr6.eq) goto loc_82C17BD4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C17BD4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d329f8
	ctx.lr = 0x82C17BE4;
	sub_82D329F8(ctx, base);
loc_82C17BE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-148(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -148);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17BFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17c0c
	if (cr6.eq) goto loc_82C17C0C;
	// lhz r4,2(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// bl 0x82d294d0
	ctx.lr = 0x82C17C0C;
	sub_82D294D0(ctx, base);
loc_82C17C0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-144(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -144);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17C24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17c68
	if (cr6.eq) goto loc_82C17C68;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ld r4,-12(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + -12);
	// bl 0x8311bf98
	ctx.lr = 0x82C17C3C;
	sub_8311BF98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x837b0c10
	ctx.lr = 0x82C17C4C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C17C60;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C17C68;
	sub_8387E8E0(ctx, base);
loc_82C17C68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-140(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17C80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17c90
	if (cr6.eq) goto loc_82C17C90;
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bl 0x82d294d0
	ctx.lr = 0x82C17C90;
	sub_82D294D0(ctx, base);
loc_82C17C90:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// blt cr6,0x82c17b7c
	if (cr6.lt) goto loc_82C17B7C;
loc_82C17CA0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C17CA8"))) PPC_WEAK_FUNC(sub_82C17CA8);
PPC_FUNC_IMPL(__imp__sub_82C17CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82C17CB0;
	__savegprlr_20(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C17CBC;
	sub_82D19A78(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82d33db0
	ctx.lr = 0x82C17CC4;
	sub_82D33DB0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c181b8
	if (cr6.eq) goto loc_82C181B8;
	// bl 0x831156e8
	ctx.lr = 0x82C17CD4;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r25,r24,222
	ctx.r25.s64 = ctx.r24.s64 + 14548992;
	// addic. r25,r25,26340
	xer.ca = ctx.r25.u32 > 4294940955;
	ctx.r25.s64 = ctx.r25.s64 + 26340;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x82c181b8
	if (cr0.eq) goto loc_82C181B8;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// ldx r4,r24,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + ctx.r10.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82C17CF8;
	sub_8311BF98(ctx, base);
	// lwz r9,100(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 100);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r29,r20,100
	ctx.r29.s64 = ctx.r20.s64 + 100;
	// addi r22,r11,-22108
	ctx.r22.s64 = ctx.r11.s64 + -22108;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,-296(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -296);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C17D20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17d54
	if (cr6.eq) goto loc_82C17D54;
	// addi r4,r27,56
	ctx.r4.s64 = ctx.r27.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C17D38;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C17D4C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C17D54;
	sub_8387E8E0(ctx, base);
loc_82C17D54:
	// lwz r11,3928(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3928);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82c17d6c
	if (!cr6.lt) goto loc_82C17D6C;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// b 0x82c17d7c
	goto loc_82C17D7C;
loc_82C17D6C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x82c17d7c
	if (!cr6.gt) goto loc_82C17D7C;
	// li r30,100
	ctx.r30.s64 = 100;
loc_82C17D7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-316(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -316);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17D94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r26,r11,-18196
	ctx.r26.s64 = ctx.r11.s64 + -18196;
	// beq cr6,0x82c17de4
	if (cr6.eq) goto loc_82C17DE4;
	// addi r4,r26,-4079
	ctx.r4.s64 = ctx.r26.s64 + -4079;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C17DB4;
	sub_837B0C10(ctx, base);
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C17DC8;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C17DDC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C17DE4;
	sub_8387E8E0(ctx, base);
loc_82C17DE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-312(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -312);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17DFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17e10
	if (cr6.eq) goto loc_82C17E10;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// bl 0x82d29598
	ctx.lr = 0x82C17E10;
	sub_82D29598(ctx, base);
loc_82C17E10:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82C17E24;
	sub_83120738(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
	// bl 0x831156e8
	ctx.lr = 0x82C17E2C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123778
	ctx.lr = 0x82C17E40;
	sub_83123778(ctx, base);
	// addi r30,r27,120
	ctx.r30.s64 = ctx.r27.s64 + 120;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C17E50:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82c17ebc
	if (cr6.eq) goto loc_82C17EBC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82c17e50
	if (cr6.lt) goto loc_82C17E50;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82C17E70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c17edc
	if (cr6.eq) goto loc_82C17EDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123778
	ctx.lr = 0x82C17E84;
	sub_83123778(ctx, base);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82C17E90:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82c17ec4
	if (cr6.eq) goto loc_82C17EC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x82c17e90
	if (cr6.lt) goto loc_82C17E90;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// b 0x82c17ee0
	goto loc_82C17EE0;
loc_82C17EBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82c17e70
	goto loc_82C17E70;
loc_82C17EC4:
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// b 0x82c17ee0
	goto loc_82C17EE0;
loc_82C17EDC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82C17EE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c17ef4
	if (cr6.eq) goto loc_82C17EF4;
	// li r28,6
	ctx.r28.s64 = 6;
	// b 0x82c17f6c
	goto loc_82C17F6C;
loc_82C17EF4:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82C17F08;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c17f20
	if (cr6.eq) goto loc_82C17F20;
	// li r28,7
	ctx.r28.s64 = 7;
	// b 0x82c17f6c
	goto loc_82C17F6C;
loc_82C17F20:
	// ld r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 44);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// bl 0x831a1d50
	ctx.lr = 0x82C17F30;
	sub_831A1D50(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c17f44
	if (cr6.eq) goto loc_82C17F44;
	// li r28,5
	ctx.r28.s64 = 5;
	// b 0x82c17f6c
	goto loc_82C17F6C;
loc_82C17F44:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82C17F58;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x82c17f6c
	if (!cr6.lt) goto loc_82C17F6C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82C17F6C:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r10,r22,8
	ctx.r10.s64 = ctx.r22.s64 + 8;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C17F90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-304(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -304);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C17FA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c17fbc
	if (cr6.eq) goto loc_82C17FBC;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,550
	ctx.r4.u64 = ctx.r4.u64 | 550;
	// bl 0x82d29598
	ctx.lr = 0x82C17FBC;
	sub_82D29598(ctx, base);
loc_82C17FBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-300(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -300);
	// lwz r30,3932(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3932);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C17FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c18050
	if (cr6.eq) goto loc_82C18050;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x82c18040
	if (cr6.eq) goto loc_82C18040;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x82c18034
	if (cr6.eq) goto loc_82C18034;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x82c18028
	if (cr6.eq) goto loc_82C18028;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C18008;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C1801C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C18024;
	sub_8387E8E0(ctx, base);
	// b 0x82c18050
	goto loc_82C18050;
loc_82C18028:
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// ori r4,r4,270
	ctx.r4.u64 = ctx.r4.u64 | 270;
	// b 0x82c18048
	goto loc_82C18048;
loc_82C18034:
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,626
	ctx.r4.u64 = ctx.r4.u64 | 626;
	// b 0x82c18048
	goto loc_82C18048;
loc_82C18040:
	// lis r4,300
	ctx.r4.s64 = 19660800;
	// ori r4,r4,556
	ctx.r4.u64 = ctx.r4.u64 | 556;
loc_82C18048:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82C18050;
	sub_82D29598(ctx, base);
loc_82C18050:
	// lwz r4,4(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x82c181a0
	if (!cr6.eq) goto loc_82C181A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-220(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -220);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C18074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1819c
	if (cr6.eq) goto loc_82C1819C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,600(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + 600);
	// bl 0x8311c260
	ctx.lr = 0x82C1808C;
	sub_8311C260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82C180A0;
	sub_831CE980(ctx, base);
	// lhz r11,904(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 904);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c18184
	if (cr6.eq) goto loc_82C18184;
	// ld r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 44);
	// addi r3,r23,96
	ctx.r3.s64 = ctx.r23.s64 + 96;
	// lhz r10,904(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 904);
	// li r8,248
	ctx.r8.s64 = 248;
	// clrlwi r30,r10,25
	ctx.r30.u64 = ctx.r10.u32 & 0x7F;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// ld r5,-21808(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + -21808);
loc_82C180E0:
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bge cr6,0x82c180f4
	if (!cr6.lt) goto loc_82C180F4;
	// ldx r11,r8,r3
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r3.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82C180F4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1810c
	if (!cr6.eq) goto loc_82C1810C;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82c18130
	goto loc_82C18130;
loc_82C1810C:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r27,r29,16
	ctx.r27.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c18128
	if (!cr6.eq) goto loc_82C18128;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c1812c
	if (cr6.eq) goto loc_82C1812C;
loc_82C18128:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82C1812C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C18130:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18174
	if (cr6.eq) goto loc_82C18174;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82c18170
	if (!cr6.lt) goto loc_82C18170;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r10,r31,584
	ctx.r10.s64 = ctx.r31.s64 + 584;
loc_82C1814C:
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// beq cr6,0x82c18168
	if (cr6.eq) goto loc_82C18168;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82c1814c
	if (cr6.lt) goto loc_82C1814C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82C18168:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82c18174
	goto loc_82C18174;
loc_82C18170:
	// li r4,255
	ctx.r4.s64 = 255;
loc_82C18174:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82c180e0
	if (cr6.lt) goto loc_82C180E0;
loc_82C18184:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82acc960
	ctx.lr = 0x82C18190;
	sub_82ACC960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d39310
	ctx.lr = 0x82C1819C;
	sub_82D39310(ctx, base);
loc_82C1819C:
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
loc_82C181A0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C181B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C181B8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C181C0"))) PPC_WEAK_FUNC(sub_82C181C0);
PPC_FUNC_IMPL(__imp__sub_82C181C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82C181C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// stw r3,1460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1460, ctx.r3.u32);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// stw r4,1468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1468, ctx.r4.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r5,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r5.u32);
	// ori r9,r11,635
	ctx.r9.u64 = ctx.r11.u64 | 635;
	// ori r8,r10,636
	ctx.r8.u64 = ctx.r10.u64 | 636;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c18c70
	if (cr6.eq) goto loc_82C18C70;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r11,r11,-22500
	ctx.r11.s64 = ctx.r11.s64 + -22500;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C1822C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c18c70
	if (cr6.eq) goto loc_82C18C70;
	// lis r21,-31776
	ctx.r21.s64 = -2082471936;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// lwz r11,-21760(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -21760);
	// lwz r10,-21812(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21812);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x831156e8
	ctx.lr = 0x82C18260;
	sub_831156E8(ctx, base);
	// lwz r15,48(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,365
	cr6.compare<uint32_t>(ctx.r31.u32, 365, xer);
	// addis r11,r15,192
	ctx.r11.s64 = ctx.r15.s64 + 12582912;
	// addi r11,r11,-10964
	ctx.r11.s64 = ctx.r11.s64 + -10964;
	// bge cr6,0x82c1827c
	if (!cr6.lt) goto loc_82C1827C;
	// mulli r10,r31,532
	ctx.r10.s64 = ctx.r31.s64 * 532;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82C1827C:
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// li r5,532
	ctx.r5.s64 = 532;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1828C;
	sub_831CE980(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8319dc20
	ctx.lr = 0x82C18294;
	sub_8319DC20(ctx, base);
	// stw r20,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r20.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,-22360
	ctx.r5.s64 = ctx.r11.s64 + -22360;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r14,96(r30)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x831178a0
	ctx.lr = 0x82C182B4;
	sub_831178A0(ctx, base);
	// lhz r11,1152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18550
	if (cr6.eq) goto loc_82C18550;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// addi r23,r1,752
	ctx.r23.s64 = ctx.r1.s64 + 752;
loc_82C182C8:
	// lhz r4,752(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 752);
	// cmplwi cr6,r24,200
	cr6.compare<uint32_t>(ctx.r24.u32, 200, xer);
	// bge cr6,0x82c182d8
	if (!cr6.lt) goto loc_82C182D8;
	// lhz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
loc_82C182D8:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82C182E0;
	sub_8311C3D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r26,-21760(r21)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r21.u32 + -21760);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8319dab0
	ctx.lr = 0x82C18304;
	sub_8319DAB0(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r30,r31,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c18324
	if (cr6.eq) goto loc_82C18324;
	// subfc r11,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82c18358
	goto loc_82C18358;
loc_82C18324:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r10,r31,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c18344
	if (cr6.eq) goto loc_82C18344;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82c18358
	goto loc_82C18358;
loc_82C18344:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82C18358:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18538
	if (!cr6.eq) goto loc_82C18538;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8319edd8
	ctx.lr = 0x82C18370;
	sub_8319EDD8(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c1838c
	if (cr6.eq) goto loc_82C1838C;
	// subfc r11,r30,r11
	xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82c183c0
	goto loc_82C183C0;
loc_82C1838C:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r10,r31,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c183ac
	if (cr6.eq) goto loc_82C183AC;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82c183c0
	goto loc_82C183C0;
loc_82C183AC:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82C183C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18538
	if (!cr6.eq) goto loc_82C18538;
	// lwz r8,-21760(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + -21760);
	// rlwinm r10,r27,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 14) & 0x3FFF;
	// rlwinm r7,r8,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82c183f4
	if (!cr6.eq) goto loc_82C183F4;
	// xor r11,r8,r27
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r27.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c183f8
	if (cr6.eq) goto loc_82C183F8;
loc_82C183F4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C183F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18474
	if (!cr6.eq) goto loc_82C18474;
	// rlwinm r11,r14,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c18428
	if (!cr6.eq) goto loc_82C18428;
	// xor r11,r27,r14
	ctx.r11.u64 = ctx.r27.u64 ^ ctx.r14.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c1842c
	if (cr6.eq) goto loc_82C1842C;
loc_82C18428:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C1842C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18468
	if (!cr6.eq) goto loc_82C18468;
	// rlwinm r11,r9,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c18458
	if (!cr6.eq) goto loc_82C18458;
	// xor r11,r27,r9
	ctx.r11.u64 = ctx.r27.u64 ^ ctx.r9.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1845c
	if (cr6.eq) goto loc_82C1845C;
loc_82C18458:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C1845C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18474
	if (cr6.eq) goto loc_82C18474;
loc_82C18468:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// b 0x82c18508
	goto loc_82C18508;
loc_82C18474:
	// rlwinm r10,r28,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82c18494
	if (!cr6.eq) goto loc_82C18494;
	// xor r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r28.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c18498
	if (cr6.eq) goto loc_82C18498;
loc_82C18494:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C18498:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18508
	if (!cr6.eq) goto loc_82C18508;
	// rlwinm r11,r14,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c184c4
	if (!cr6.eq) goto loc_82C184C4;
	// xor r11,r28,r14
	ctx.r11.u64 = ctx.r28.u64 ^ ctx.r14.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c184c8
	if (cr6.eq) goto loc_82C184C8;
loc_82C184C4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C184C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18504
	if (!cr6.eq) goto loc_82C18504;
	// rlwinm r11,r9,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c184f4
	if (!cr6.eq) goto loc_82C184F4;
	// xor r11,r28,r9
	ctx.r11.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c184f8
	if (cr6.eq) goto loc_82C184F8;
loc_82C184F4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C184F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18508
	if (cr6.eq) goto loc_82C18508;
loc_82C18504:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82C18508:
	// rlwinm r11,r26,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82c18528
	if (!cr6.eq) goto loc_82C18528;
	// xor r11,r8,r26
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1852c
	if (cr6.eq) goto loc_82C1852C;
loc_82C18528:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C1852C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c185a0
	if (cr6.eq) goto loc_82C185A0;
loc_82C18538:
	// lhz r11,1152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1152);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c182c8
	if (cr6.lt) goto loc_82C182C8;
loc_82C18550:
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x8315ba88
	ctx.lr = 0x82C18558;
	sub_8315BA88(ctx, base);
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r31,r11,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82c185dc
	if (cr6.eq) goto loc_82C185DC;
	// cmpwi cr6,r31,50
	cr6.compare<int32_t>(ctx.r31.s32, 50, xer);
	// beq cr6,0x82c185dc
	if (cr6.eq) goto loc_82C185DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccb570
	ctx.lr = 0x82C1857C;
	sub_82CCB570(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82c185d4
	if (!cr6.eq) goto loc_82C185D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c16758
	ctx.lr = 0x82C18594;
	sub_82C16758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x82c189a8
	goto loc_82C189A8;
loc_82C185A0:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831bc350
	ctx.lr = 0x82C185C0;
	sub_831BC350(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// b 0x82c189a8
	goto loc_82C189A8;
loc_82C185D4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82c189a8
	if (!cr6.eq) goto loc_82C189A8;
loc_82C185DC:
	// addis r16,r15,96
	ctx.r16.s64 = ctx.r15.s64 + 6291456;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r16,r16,-4888
	ctx.r16.s64 = ctx.r16.s64 + -4888;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82c189a8
	if (!cr6.gt) goto loc_82C189A8;
	// addis r19,r15,85
	ctx.r19.s64 = ctx.r15.s64 + 5570560;
	// lwz r29,1476(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1476);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,99
	ctx.r10.s64 = 6488064;
	// addi r19,r19,11904
	ctx.r19.s64 = ctx.r19.s64 + 11904;
	// ori r18,r11,59456
	ctx.r18.u64 = ctx.r11.u64 | 59456;
	// li r21,12
	ctx.r21.s64 = 12;
	// li r17,2
	ctx.r17.s64 = 2;
	// ori r23,r10,11884
	ctx.r23.u64 = ctx.r10.u64 | 11884;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82C1861C:
	// cmplwi cr6,r20,300
	cr6.compare<uint32_t>(ctx.r20.u32, 300, xer);
	// add r28,r15,r18
	ctx.r28.u64 = ctx.r15.u64 + ctx.r18.u64;
	// bge cr6,0x82c1862c
	if (!cr6.lt) goto loc_82C1862C;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_82C1862C:
	// lhz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// bl 0x831c9500
	ctx.lr = 0x82C18648;
	sub_831C9500(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r10,r10,r21
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r21.s32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c18684
	if (cr6.eq) goto loc_82C18684;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C18668:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c18684
	if (cr6.eq) goto loc_82C18684;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c18668
	if (cr6.lt) goto loc_82C18668;
loc_82C18684:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c186a4
	if (!cr6.eq) goto loc_82C186A4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c18988
	if (cr6.eq) goto loc_82C18988;
	// stw r17,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825952b8
	ctx.lr = 0x82C186A0;
	sub_825952B8(ctx, base);
	// b 0x82c18988
	goto loc_82C18988;
loc_82C186A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83197440
	ctx.lr = 0x82C186AC;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18968
	if (!cr6.eq) goto loc_82C18968;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8315bd00
	ctx.lr = 0x82C186C4;
	sub_8315BD00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c186e8
	if (!cr6.eq) goto loc_82C186E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8315bd00
	ctx.lr = 0x82C186DC;
	sub_8315BD00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18968
	if (cr6.eq) goto loc_82C18968;
loc_82C186E8:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bl 0x82c168a8
	ctx.lr = 0x82C186F4;
	sub_82C168A8(ctx, base);
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// rlwinm r10,r11,0,19,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c18968
	if (cr6.eq) goto loc_82C18968;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r28,96
	ctx.r27.s64 = ctx.r28.s64 + 96;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C18714:
	// cmplwi cr6,r26,58
	cr6.compare<uint32_t>(ctx.r26.u32, 58, xer);
	// bge cr6,0x82c18728
	if (!cr6.lt) goto loc_82C18728;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1500
	cr6.compare<uint32_t>(ctx.r11.u32, 1500, xer);
	// blt cr6,0x82c18730
	if (cr6.lt) goto loc_82C18730;
loc_82C18728:
	// add r4,r15,r23
	ctx.r4.u64 = ctx.r15.u64 + ctx.r23.u64;
	// b 0x82c1873c
	goto loc_82C1873C;
loc_82C18730:
	// mulli r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 * 520;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_82C1873C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82c16910
	ctx.lr = 0x82C18744;
	sub_82C16910(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,740(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82c18950
	if (!cr6.eq) goto loc_82C18950;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// bl 0x83196f58
	ctx.lr = 0x82C1877C;
	sub_83196F58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c18950
	if (cr6.eq) goto loc_82C18950;
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c18944
	if (cr6.eq) goto loc_82C18944;
	// rlwinm r31,r14,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 14) & 0x3FFF;
	// addi r30,r1,228
	ctx.r30.s64 = ctx.r1.s64 + 228;
loc_82C187A4:
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// bge cr6,0x82c187b4
	if (!cr6.lt) goto loc_82C187B4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C187B4:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82C187C4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c187c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82C187C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8312db38
	ctx.lr = 0x82C187DC;
	sub_8312DB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82C187E8;
	sub_8311C3D8(ctx, base);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ori r22,r22,1
	ctx.r22.u64 = ctx.r22.u64 | 1;
	// rlwinm r11,r9,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82c18810
	if (!cr6.eq) goto loc_82C18810;
	// xor r10,r9,r14
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r14.u64;
	// clrlwi r8,r10,14
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82c18814
	if (cr6.eq) goto loc_82C18814;
loc_82C18810:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C18814:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c188c4
	if (!cr6.eq) goto loc_82C188C4;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r22,r22,2
	ctx.r22.u64 = ctx.r22.u64 | 2;
	// rlwinm r8,r7,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c18848
	if (!cr6.eq) goto loc_82C18848;
	// xor r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1884c
	if (cr6.eq) goto loc_82C1884C;
loc_82C18848:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C1884C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c188c4
	if (!cr6.eq) goto loc_82C188C4;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// ori r22,r22,4
	ctx.r22.u64 = ctx.r22.u64 | 4;
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x82c18880
	if (!cr6.eq) goto loc_82C18880;
	// xor r11,r9,r14
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r14.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c18884
	if (cr6.eq) goto loc_82C18884;
loc_82C18880:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C18884:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c188c4
	if (!cr6.eq) goto loc_82C188C4;
	// ori r22,r22,8
	ctx.r22.u64 = ctx.r22.u64 | 8;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c188b0
	if (!cr6.eq) goto loc_82C188B0;
	// xor r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c188b4
	if (cr6.eq) goto loc_82C188B4;
loc_82C188B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C188B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82c188c8
	if (cr6.eq) goto loc_82C188C8;
loc_82C188C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C188C8:
	// rlwinm r10,r22,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c188dc
	if (cr6.eq) goto loc_82C188DC;
	// rlwinm r22,r22,0,29,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_82C188DC:
	// rlwinm r10,r22,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c188ec
	if (cr6.eq) goto loc_82C188EC;
	// rlwinm r22,r22,0,30,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82C188EC:
	// rlwinm r10,r22,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c188fc
	if (cr6.eq) goto loc_82C188FC;
	// rlwinm r22,r22,0,31,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82C188FC:
	// clrlwi r10,r22,31
	ctx.r10.u64 = ctx.r22.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82c1890c
	if (cr6.eq) goto loc_82C1890C;
	// rlwinm r22,r22,0,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
loc_82C1890C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18934
	if (!cr6.eq) goto loc_82C18934;
	// lwz r11,740(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c187a4
	if (cr6.lt) goto loc_82C187A4;
	// b 0x82c18944
	goto loc_82C18944;
loc_82C18934:
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82C18944:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18968
	if (!cr6.eq) goto loc_82C18968;
loc_82C18950:
	// lwz r11,532(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 532);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// rlwinm r10,r11,25,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3F;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x82c18714
	if (cr6.lt) goto loc_82C18714;
loc_82C18968:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c18980
	if (cr6.eq) goto loc_82C18980;
	// stw r17,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x825952b8
	ctx.lr = 0x82C18980;
	sub_825952B8(ctx, base);
loc_82C18980:
	// lwz r29,1476(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1476);
	// li r26,0
	ctx.r26.s64 = 0;
loc_82C18988:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r19,r19,548
	ctx.r19.s64 = ctx.r19.s64 + 548;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c1861c
	if (cr6.lt) goto loc_82C1861C;
loc_82C189A8:
	// lwz r27,1468(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r30,r27,100
	ctx.r30.s64 = ctx.r27.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r4,156(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C189CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,388(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82c18b1c
	if (cr6.gt) goto loc_82C18B1C;
	// lis r12,-32062
	ctx.r12.s64 = -2101215232;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30216
	ctx.r12.s64 = ctx.r12.s64 + -30216;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82C18A20;
	case 1:
		goto loc_82C18A88;
	case 2:
		goto loc_82C18A88;
	case 3:
		goto loc_82C18A88;
	case 4:
		goto loc_82C18A88;
	case 5:
		goto loc_82C18A88;
	case 6:
		goto loc_82C18A88;
	case 7:
		goto loc_82C18A90;
	case 8:
		goto loc_82C18A90;
	case 9:
		goto loc_82C18A88;
	default:
		return;
	}
	// lwz r22,-30176(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30176);
	// lwz r22,-30072(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30072);
	// lwz r22,-30072(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30072);
	// lwz r22,-30072(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30072);
	// lwz r22,-30072(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30072);
	// lwz r22,-30072(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30072);
	// lwz r22,-30072(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30072);
	// lwz r22,-30064(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30064);
	// lwz r22,-30064(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30064);
	// lwz r22,-30072(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30072);
loc_82C18A20:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,-21812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21812);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c18b1c
	if (cr6.eq) goto loc_82C18B1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,132(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C18A4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c18a88
	if (cr6.eq) goto loc_82C18A88;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c18a6c
	if (!cr6.gt) goto loc_82C18A6C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82C18A6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82C18A74;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82C18A88;
	sub_82D32C58(ctx, base);
loc_82C18A88:
	// lwz r4,384(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// b 0x82c18b1c
	goto loc_82C18B1C;
loc_82C18A90:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,-21760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21760);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c18ac0
	if (!cr6.eq) goto loc_82C18AC0;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c18ac4
	if (cr6.eq) goto loc_82C18AC4;
loc_82C18AC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C18AC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18b1c
	if (!cr6.eq) goto loc_82C18B1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,128(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C18AE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c18b18
	if (cr6.eq) goto loc_82C18B18;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// beq cr6,0x82c18b08
	if (cr6.eq) goto loc_82C18B08;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C18B08:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d329f8
	ctx.lr = 0x82C18B18;
	sub_82D329F8(ctx, base);
loc_82C18B18:
	// lwz r4,380(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
loc_82C18B1C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C18B34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,156(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C18B4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c18c3c
	if (cr6.eq) goto loc_82C18C3C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c18c2c
	if (cr6.eq) goto loc_82C18C2C;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(ctx.r26.s32, 8, xer);
	// bne cr6,0x82c18c2c
	if (!cr6.eq) goto loc_82C18C2C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,-21760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21760);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82c18b9c
	if (!cr6.eq) goto loc_82C18B9C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c18ba0
	if (cr6.eq) goto loc_82C18BA0;
loc_82C18B9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C18BA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18c2c
	if (!cr6.eq) goto loc_82C18C2C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C18BBC;
	sub_82D2AEC8(ctx, base);
	// lwz r3,1460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1460);
	// bl 0x82d19a68
	ctx.lr = 0x82C18BC4;
	sub_82D19A68(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82C18BC8;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x82C18BDC;
	sub_83545640(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C18BF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c18c4c
	if (cr6.eq) goto loc_82C18C4C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C18C10;
	sub_82D2AEC8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d29598
	ctx.lr = 0x82C18C28;
	sub_82D29598(ctx, base);
	// b 0x82c18c4c
	goto loc_82C18C4C;
loc_82C18C2C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C18C3C;
	sub_82D2AEC8(ctx, base);
loc_82C18C3C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x82c18c70
	if (cr6.eq) goto loc_82C18C70;
	// cmpwi cr6,r26,11
	cr6.compare<int32_t>(ctx.r26.s32, 11, xer);
	// beq cr6,0x82c18c70
	if (cr6.eq) goto loc_82C18C70;
loc_82C18C4C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82ccb6a0
	ctx.lr = 0x82C18C58;
	sub_82CCB6A0(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C18C70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C18C70:
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C18C78"))) PPC_WEAK_FUNC(sub_82C18C78);
PPC_FUNC_IMPL(__imp__sub_82C18C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C18C80;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c19178
	if (cr6.eq) goto loc_82C19178;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82c18cb0
	if (cr6.eq) goto loc_82C18CB0;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82c19178
	if (!cr6.eq) goto loc_82C19178;
loc_82C18CB0:
	// bl 0x82f06520
	ctx.lr = 0x82C18CB4;
	sub_82F06520(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,-22244
	ctx.r31.s64 = ctx.r11.s64 + -22244;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// bl 0x837b0c10
	ctx.lr = 0x82C18CCC;
	sub_837B0C10(ctx, base);
	// addi r11,r31,364
	ctx.r11.s64 = ctx.r31.s64 + 364;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C18CDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c18cdc
	if (!cr6.eq) goto loc_82C18CDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C18D00;
	sub_825A1EB8(ctx, base);
	// lwz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C18D08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c18d08
	if (!cr6.eq) goto loc_82C18D08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C18D2C;
	sub_825A1EB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82C18D34;
	sub_82D19A10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19170
	if (cr6.eq) goto loc_82C19170;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c18d50
	if (!cr6.lt) goto loc_82C18D50;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C18D50:
	// bl 0x83815208
	ctx.lr = 0x82C18D54;
	sub_83815208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19170
	if (cr6.eq) goto loc_82C19170;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18e54
	if (!cr6.eq) goto loc_82C18E54;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bgt cr6,0x82c19090
	if (cr6.gt) goto loc_82C19090;
	// beq cr6,0x82c18fe4
	if (cr6.eq) goto loc_82C18FE4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c18eec
	if (cr6.lt) goto loc_82C18EEC;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x82c18e54
	if (!cr6.lt) goto loc_82C18E54;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82c18e54
	if (cr6.eq) goto loc_82C18E54;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82df16e0
	ctx.lr = 0x82C18D9C;
	sub_82DF16E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18e94
	if (cr6.eq) goto loc_82C18E94;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r29,r11,-22020
	ctx.r29.s64 = ctx.r11.s64 + -22020;
	// addi r4,r29,-253
	ctx.r4.s64 = ctx.r29.s64 + -253;
	// bl 0x837b0c10
	ctx.lr = 0x82C18DBC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f05ab8
	ctx.lr = 0x82C18DC8;
	sub_82F05AB8(ctx, base);
	// addi r4,r29,-183
	ctx.r4.s64 = ctx.r29.s64 + -183;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a64a88
	ctx.lr = 0x82C18DD4;
	sub_82A64A88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c18e4c
	if (cr6.eq) goto loc_82C18E4C;
	// lbz r11,1452(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18df4
	if (cr6.eq) goto loc_82C18DF4;
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// b 0x82c18df8
	goto loc_82C18DF8;
loc_82C18DF4:
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
loc_82C18DF8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C18E10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c18e24
	if (!cr6.lt) goto loc_82C18E24;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82C18E24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C18E2C;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C18E34;
	sub_83812C48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C18E3C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C18E44;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C18E4C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82C18E50:
	// bl 0x8387e8e0
	ctx.lr = 0x82C18E54;
	sub_8387E8E0(ctx, base);
loc_82C18E54:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,-16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C18E70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -316);
	// bl 0x83812ca8
	ctx.lr = 0x82C18E7C;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C18E84;
	sub_83812C48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C18E8C;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C18E94:
	// lwz r11,1504(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c18e54
	if (!cr6.eq) goto loc_82C18E54;
	// bl 0x82c16268
	ctx.lr = 0x82C18EA4;
	sub_82C16268(ctx, base);
	// stw r3,1504(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1504, ctx.r3.u32);
	// bl 0x831021a0
	ctx.lr = 0x82C18EAC;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82C18EB4;
	sub_82DA45F8(ctx, base);
	// lwz r11,1504(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1504);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18e54
	if (cr6.eq) goto loc_82C18E54;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c18e54
	if (cr6.eq) goto loc_82C18E54;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f07ba8
	ctx.lr = 0x82C18ED4;
	sub_82F07BA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1504(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1504);
	// bl 0x83103100
	ctx.lr = 0x82C18EE0;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1496(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1496, ctx.r11.u32);
	// b 0x82c18e54
	goto loc_82C18E54;
loc_82C18EEC:
	// lwz r11,1500(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18e54
	if (cr6.eq) goto loc_82C18E54;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c18e54
	if (cr6.eq) goto loc_82C18E54;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a3f8
	ctx.lr = 0x82C18F10;
	sub_8292A3F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r29,r11,-22020
	ctx.r29.s64 = ctx.r11.s64 + -22020;
	// addi r4,r29,-182
	ctx.r4.s64 = ctx.r29.s64 + -182;
	// bl 0x82a64a88
	ctx.lr = 0x82C18F24;
	sub_82A64A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c18fdc
	if (cr6.eq) goto loc_82C18FDC;
	// lwz r11,1492(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c18f44
	if (cr6.eq) goto loc_82C18F44;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1492, ctx.r11.u32);
loc_82C18F44:
	// lwz r11,1500(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1500);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r8,248(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r7,252(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82c18f88
	if (!cr6.lt) goto loc_82C18F88;
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
loc_82C18F88:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C18FA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c18fb4
	if (!cr6.lt) goto loc_82C18FB4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82C18FB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C18FBC;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C18FC4;
	sub_83812C48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82C18FCC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C18FD4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C18FDC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82c18e50
	goto loc_82C18E50;
loc_82C18FE4:
	// lhz r3,120(r25)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + 120);
	// addi r29,r25,120
	ctx.r29.s64 = ctx.r25.s64 + 120;
	// bl 0x82c16330
	ctx.lr = 0x82C18FF0;
	sub_82C16330(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-352
	ctx.r10.s64 = ctx.r31.s64 + -352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C19004;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1900C;
	sub_83812C48(ctx, base);
	// lbz r9,132(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 132);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c19088
	if (cr6.eq) goto loc_82C19088;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e3c0
	ctx.lr = 0x82C19024;
	sub_8314E3C0(ctx, base);
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,-11672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11672);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C19040;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19080
	if (cr6.eq) goto loc_82C19080;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c19064
	if (!cr6.gt) goto loc_82C19064;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82C19064:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82C1906C;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82C19080;
	sub_82D32C58(ctx, base);
loc_82C19080:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82c19158
	goto loc_82C19158;
loc_82C19088:
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// b 0x82c19158
	goto loc_82C19158;
loc_82C19090:
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// beq cr6,0x82c190f8
	if (cr6.eq) goto loc_82C190F8;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bne cr6,0x82c18e54
	if (!cr6.eq) goto loc_82C18E54;
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82c18e54
	if (!cr6.lt) goto loc_82C18E54;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C190C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,88(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r9,r31,-352
	ctx.r9.s64 = ctx.r31.s64 + -352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C190E0;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C190E8;
	sub_83812C48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C190F0;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C190F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -332);
	// bl 0x83812ca8
	ctx.lr = 0x82C19104;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1910C;
	sub_83812C48(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// lwz r4,-108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19124;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19154
	if (cr6.eq) goto loc_82C19154;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// beq cr6,0x82c19144
	if (cr6.eq) goto loc_82C19144;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C19144:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r25,112
	ctx.r4.s64 = ctx.r25.s64 + 112;
	// bl 0x82d329f8
	ctx.lr = 0x82C19154;
	sub_82D329F8(ctx, base);
loc_82C19154:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82C19158:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C19170:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C19178;
	sub_8387E8E0(ctx, base);
loc_82C19178:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C19180"))) PPC_WEAK_FUNC(sub_82C19180);
PPC_FUNC_IMPL(__imp__sub_82C19180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C19188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c192b4
	if (cr6.eq) goto loc_82C192B4;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82C191A4:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82C191C0;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82C191D4;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8259cb28
	ctx.lr = 0x82C191E8;
	sub_8259CB28(ctx, base);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lwz r8,92(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// lbz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 104);
	// stb r5,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r5.u8);
	// lbz r4,105(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 105);
	// stb r4,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r4.u8);
	// lbz r3,106(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 106);
	// stb r3,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r3.u8);
	// lbz r11,107(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 107);
	// stb r11,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r11.u8);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r8,108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// lhz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 116);
	// sth r11,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r11.u16);
	// lhz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// sth r10,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r10.u16);
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// lbz r8,128(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// stb r8,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r8.u8);
	// lwz r7,132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// lwz r6,136(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// cmplw cr6,r5,r28
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c191a4
	if (!cr6.eq) goto loc_82C191A4;
loc_82C192B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C192C0"))) PPC_WEAK_FUNC(sub_82C192C0);
PPC_FUNC_IMPL(__imp__sub_82C192C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82C192C8;
	__savegprlr_19(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C192D4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8319dc20
	ctx.lr = 0x82C192E4;
	sub_8319DC20(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82bb2908
	ctx.lr = 0x82C19300;
	sub_82BB2908(ctx, base);
	// lis r9,194
	ctx.r9.s64 = 12713984;
	// ori r8,r9,52144
	ctx.r8.u64 = ctx.r9.u64 | 52144;
	// lhzx r20,r30,r8
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// addi r19,r20,-1
	ctx.r19.s64 = ctx.r20.s64 + -1;
	// bne cr6,0x82c1931c
	if (!cr6.eq) goto loc_82C1931C;
	// li r19,364
	ctx.r19.s64 = 364;
loc_82C1931C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C19324;
	sub_82D19A78(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82d33db0
	ctx.lr = 0x82C1932C;
	sub_82D33DB0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1963c
	if (cr6.eq) goto loc_82C1963C;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r28,r11,-22504
	ctx.r28.s64 = ctx.r11.s64 + -22504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,-8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C1935C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19370
	if (cr6.eq) goto loc_82C19370;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,410
	ctx.r4.u64 = ctx.r4.u64 | 410;
	// bl 0x82d29598
	ctx.lr = 0x82C19370;
	sub_82D29598(ctx, base);
loc_82C19370:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r23,r11,-18192
	ctx.r23.s64 = ctx.r11.s64 + -18192;
	// beq cr6,0x82c1947c
	if (cr6.eq) goto loc_82C1947C;
	// addi r4,r23,-4082
	ctx.r4.s64 = ctx.r23.s64 + -4082;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C193A8;
	sub_837B0C10(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r10,r11,52996
	ctx.r10.u64 = ctx.r11.u64 | 52996;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addic r9,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// subfe r11,r9,r31
	temp.u8 = (~ctx.r9.u32 + ctx.r31.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// rlwinm r4,r11,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// beq cr6,0x82c1941c
	if (cr6.eq) goto loc_82C1941C;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8315fe20
	ctx.lr = 0x82C193DC;
	sub_8315FE20(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c193f0
	if (cr6.lt) goto loc_82C193F0;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c193f4
	goto loc_82C193F4;
loc_82C193F0:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82C193F4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfic r8,r31,24
	xer.ca = ctx.r31.u32 <= 24;
	ctx.r8.s64 = 24 - ctx.r31.s64;
	// clrlwi r7,r30,16
	ctx.r7.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// ori r4,r4,656
	ctx.r4.u64 = ctx.r4.u64 | 656;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82C19418;
	sub_82D042A8(ctx, base);
	// b 0x82c19458
	goto loc_82C19458;
loc_82C1941C:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8315fe20
	ctx.lr = 0x82C19424;
	sub_8315FE20(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c19438
	if (cr6.lt) goto loc_82C19438;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82c1943c
	goto loc_82C1943C;
loc_82C19438:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82C1943C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// clrlwi r7,r31,16
	ctx.r7.u64 = ctx.r31.u32 & 0xFFFF;
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// ori r4,r4,627
	ctx.r4.u64 = ctx.r4.u64 | 627;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82C19458;
	sub_82D042A8(ctx, base);
loc_82C19458:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82C19460;
	sub_8387E8E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C19474;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1947C;
	sub_8387E8E0(ctx, base);
loc_82C1947C:
	// lwz r24,92(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,26393
	ctx.r11.s64 = 1729691648;
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ori r27,r11,62305
	ctx.r27.u64 = ctx.r11.u64 | 62305;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
loc_82C1949C:
	// add r30,r29,r19
	ctx.r30.u64 = ctx.r29.u64 + ctx.r19.u64;
	// cmplwi cr6,r30,365
	cr6.compare<uint32_t>(ctx.r30.u32, 365, xer);
	// blt cr6,0x82c194c4
	if (cr6.lt) goto loc_82C194C4;
	// mulhwu r11,r30,r27
	ctx.r11.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r27.u32)) >> 32;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// mulli r7,r8,365
	ctx.r7.s64 = ctx.r8.s64 * 365;
	// subf r30,r7,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r7.s64;
loc_82C194C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82C194D0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1961c
	if (cr6.eq) goto loc_82C1961C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r20
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82c194fc
	if (!cr6.eq) goto loc_82C194FC;
	// lwz r4,376(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 376);
	// b 0x82c19500
	goto loc_82C19500;
loc_82C194FC:
	// lwz r4,380(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
loc_82C19500:
	// bctrl 
	ctx.lr = 0x82C19504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8319dab0
	ctx.lr = 0x82C19510;
	sub_8319DAB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bb07d8
	ctx.lr = 0x82C1951C;
	sub_82BB07D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c19560
	if (cr6.eq) goto loc_82C19560;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8319edd8
	ctx.lr = 0x82C19534;
	sub_8319EDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82acebe8
	ctx.lr = 0x82C19540;
	sub_82ACEBE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c19560
	if (cr6.eq) goto loc_82C19560;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82c181c0
	ctx.lr = 0x82C1955C;
	sub_82C181C0(ctx, base);
	// b 0x82c1958c
	goto loc_82C1958C;
loc_82C19560:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,160(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1958c
	if (cr6.eq) goto loc_82C1958C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1958C;
	sub_82D2AEC8(ctx, base);
loc_82C1958C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C195A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1961c
	if (cr6.eq) goto loc_82C1961C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82acef18
	ctx.lr = 0x82C195C8;
	sub_82ACEF18(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// sth r25,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r25.u16);
	// stb r25,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r25.u8);
	// bl 0x831d0b08
	ctx.lr = 0x82C195EC;
	sub_831D0B08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82c1961c
	if (cr6.eq) goto loc_82C1961C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82C19600;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C19614;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1961C;
	sub_8387E8E0(ctx, base);
loc_82C1961C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82acef18
	ctx.lr = 0x82C19630;
	sub_82ACEF18(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,10
	cr6.compare<uint32_t>(ctx.r26.u32, 10, xer);
	// blt cr6,0x82c1949c
	if (cr6.lt) goto loc_82C1949C;
loc_82C1963C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C19644"))) PPC_WEAK_FUNC(sub_82C19644);
PPC_FUNC_IMPL(__imp__sub_82C19644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C19648"))) PPC_WEAK_FUNC(sub_82C19648);
PPC_FUNC_IMPL(__imp__sub_82C19648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C19650;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17952
	ctx.r9.s64 = ctx.r11.s64 + -17952;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r4,1548(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c1968c
	if (cr6.eq) goto loc_82C1968C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82C1968C;
	sub_825952B8(ctx, base);
loc_82C1968C:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r28,1524
	ctx.r29.s64 = ctx.r28.s64 + 1524;
	// stw r31,1552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1552, ctx.r31.u32);
	// stw r31,1556(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1556, ctx.r31.u32);
	// stw r31,1548(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1548, ctx.r31.u32);
	// lwz r3,1524(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1524);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c196c8
	if (cr6.eq) goto loc_82C196C8;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82c16f80
	ctx.lr = 0x82C196B8;
	sub_82C16F80(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C196C8;
	sub_825952B8(ctx, base);
loc_82C196C8:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r30,r28,1508
	ctx.r30.s64 = ctx.r28.s64 + 1508;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r3,1508(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1508);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19704
	if (cr6.eq) goto loc_82C19704;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82C196F4;
	sub_838ADAB0(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C19704;
	sub_825952B8(ctx, base);
loc_82C19704:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r29,r28,1476
	ctx.r29.s64 = ctx.r28.s64 + 1476;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,1476(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1476);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19740
	if (cr6.eq) goto loc_82C19740;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82C19730;
	sub_838ADAB0(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C19740;
	sub_825952B8(ctx, base);
loc_82C19740:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// bl 0x82cddbe8
	ctx.lr = 0x82C19754;
	sub_82CDDBE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1975C"))) PPC_WEAK_FUNC(sub_82C1975C);
PPC_FUNC_IMPL(__imp__sub_82C1975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C19760"))) PPC_WEAK_FUNC(sub_82C19760);
PPC_FUNC_IMPL(__imp__sub_82C19760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C19768;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c19824
	if (cr6.eq) goto loc_82C19824;
	// lwz r11,1508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1508);
	// addi r28,r3,1508
	ctx.r28.s64 = ctx.r3.s64 + 1508;
	// lwz r10,1512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1512);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c19824
	if (cr6.eq) goto loc_82C19824;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r4,100
	ctx.r27.s64 = ctx.r4.s64 + 100;
	// addi r29,r11,-22400
	ctx.r29.s64 = ctx.r11.s64 + -22400;
	// li r26,5
	ctx.r26.s64 = 5;
loc_82C197A0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C197B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19818
	if (cr6.eq) goto loc_82C19818;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c19808
	if (cr6.eq) goto loc_82C19808;
	// lwz r11,1512(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1512);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c19808
	if (cr6.eq) goto loc_82C19808;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C197F0;
	sub_82D291E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8f570
	ctx.lr = 0x82C19800;
	sub_82B8F570(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c1980c
	goto loc_82C1980C;
loc_82C19808:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C1980C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C19818;
	sub_82D2AEC8(ctx, base);
loc_82C19818:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82c197a0
	if (!cr0.eq) goto loc_82C197A0;
loc_82C19824:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1982C"))) PPC_WEAK_FUNC(sub_82C1982C);
PPC_FUNC_IMPL(__imp__sub_82C1982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C19830"))) PPC_WEAK_FUNC(sub_82C19830);
PPC_FUNC_IMPL(__imp__sub_82C19830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C19838;
	__savegprlr_22(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C19844;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82C1984C;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a0d0
	if (cr6.eq) goto loc_82C1A0D0;
	// lwz r11,1524(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1524);
	// li r22,144
	ctx.r22.s64 = 144;
	// lwz r10,1528(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1528);
	// addi r25,r24,1524
	ctx.r25.s64 = ctx.r24.s64 + 1524;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c1a04c
	if (cr0.eq) goto loc_82C1A04C;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x82c198b8
	if (!cr6.gt) goto loc_82C198B8;
loc_82C1987C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c198a0
	if (cr6.eq) goto loc_82C198A0;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// bl 0x82c16c98
	ctx.lr = 0x82C19894;
	sub_82C16C98(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_82C198A0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82c1987c
	if (cr6.gt) goto loc_82C1987C;
loc_82C198B8:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,-22244
	ctx.r29.s64 = ctx.r10.s64 + -22244;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r7,r29,-60
	ctx.r7.s64 = ctx.r29.s64 + -60;
	// lwz r6,72(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C198E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// divw. r11,r3,r22
	ctx.r11.s32 = PPCDivide(ctx.r3.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c19998
	if (cr0.eq) goto loc_82C19998;
	// addi r28,r27,100
	ctx.r28.s64 = ctx.r27.s64 + 100;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C19900:
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C1990C;
	sub_82D2D580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19974
	if (cr6.eq) goto loc_82C19974;
	// lbz r11,1461(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1461);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c1992c
	if (!cr6.eq) goto loc_82C1992C;
	// lwz r4,-20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// b 0x82c19930
	goto loc_82C19930;
loc_82C1992C:
	// lwz r4,-24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
loc_82C19930:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,-308(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -308);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C19960;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19974
	if (cr6.eq) goto loc_82C19974;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x82d294d0
	ctx.lr = 0x82C19974;
	sub_82D294D0(ctx, base);
loc_82C19974:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// divw r6,r7,r22
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r22.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82c19900
	if (cr6.lt) goto loc_82C19900;
loc_82C19998:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r23,r27,100
	ctx.r23.s64 = ctx.r27.s64 + 100;
	// lwz r4,-304(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -304);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C199B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19a04
	if (cr6.eq) goto loc_82C19A04;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lbz r11,1461(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1461);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r22
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c199e4
	if (cr6.gt) goto loc_82C199E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C199E4;
	sub_831CC188(ctx, base);
loc_82C199E4:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82d291e0
	ctx.lr = 0x82C19A04;
	sub_82D291E0(ctx, base);
loc_82C19A04:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,-156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -156);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19A1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19b10
	if (cr6.eq) goto loc_82C19B10;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d04828
	ctx.lr = 0x82C19A30;
	sub_82D04828(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28370
	ctx.lr = 0x82C19A3C;
	sub_82D28370(ctx, base);
	// lwz r4,1512(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1512);
	// lwz r5,1508(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1508);
	// addi r31,r24,1508
	ctx.r31.s64 = ctx.r24.s64 + 1508;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c19a74
	if (cr6.eq) goto loc_82C19A74;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x82C19A5C;
	sub_83915A50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82C19A70;
	sub_838ADAB0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C19A74:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lbz r11,1461(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1461);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r22
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c19a9c
	if (cr6.gt) goto loc_82C19A9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C19A9C;
	sub_831CC188(ctx, base);
loc_82C19A9C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82d04d80
	ctx.lr = 0x82C19ABC;
	sub_82D04D80(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// subfic r5,r6,5
	xer.ca = ctx.r6.u32 <= 5;
	ctx.r5.s64 = 5 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stb r11,1540(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1540, ctx.r11.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c19b08
	if (cr6.eq) goto loc_82C19B08;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,628
	ctx.r5.u64 = ctx.r5.u64 | 628;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19B08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C19B08:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d04b60
	ctx.lr = 0x82C19B10;
	sub_82D04B60(ctx, base);
loc_82C19B10:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c19760
	ctx.lr = 0x82C19B1C;
	sub_82C19760(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C19B28;
	sub_82D2D580(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19fe4
	if (cr6.eq) goto loc_82C19FE4;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r11,1461(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1461);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r22
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82c19fe4
	if (!cr6.lt) goto loc_82C19FE4;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82f06520
	ctx.lr = 0x82C19B68;
	sub_82F06520(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,356(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C19B78;
	sub_837B0C10(ctx, base);
	// lwz r4,364(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C19B80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c19b80
	if (!cr6.eq) goto loc_82C19B80;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C19BA4;
	sub_825A1EB8(ctx, base);
	// lwz r4,360(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C19BAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c19bac
	if (!cr6.eq) goto loc_82C19BAC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C19BD0;
	sub_825A1EB8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82C19BD8;
	sub_82D19A10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19fdc
	if (cr6.eq) goto loc_82C19FDC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c19bf4
	if (!cr6.lt) goto loc_82C19BF4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C19BF4:
	// bl 0x83815208
	ctx.lr = 0x82C19BF8;
	sub_83815208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19fdc
	if (cr6.eq) goto loc_82C19FDC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bgt cr6,0x82c19f04
	if (cr6.gt) goto loc_82C19F04;
	// beq cr6,0x82c19e58
	if (cr6.eq) goto loc_82C19E58;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c19d6c
	if (cr6.lt) goto loc_82C19D6C;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x82c19ce0
	if (!cr6.lt) goto loc_82C19CE0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c19ce0
	if (cr6.eq) goto loc_82C19CE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82df16e0
	ctx.lr = 0x82C19C34;
	sub_82DF16E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c19d14
	if (cr6.eq) goto loc_82C19D14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,-22020
	ctx.r31.s64 = ctx.r11.s64 + -22020;
	// addi r4,r31,-253
	ctx.r4.s64 = ctx.r31.s64 + -253;
	// bl 0x837b0c10
	ctx.lr = 0x82C19C54;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f05ab8
	ctx.lr = 0x82C19C60;
	sub_82F05AB8(ctx, base);
	// addi r4,r31,-183
	ctx.r4.s64 = ctx.r31.s64 + -183;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a64a88
	ctx.lr = 0x82C19C6C;
	sub_82A64A88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c19cd8
	if (cr6.eq) goto loc_82C19CD8;
	// lbz r11,1452(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c19c8c
	if (cr6.eq) goto loc_82C19C8C;
	// lwz r4,-8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// b 0x82c19c90
	goto loc_82C19C90;
loc_82C19C8C:
	// lwz r4,-12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
loc_82C19C90:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19CA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c19cbc
	if (!cr6.lt) goto loc_82C19CBC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82C19CBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C19CC4;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C19CCC;
	sub_83812C48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C19CD4;
	sub_8387E8E0(ctx, base);
	// b 0x82c19fdc
	goto loc_82C19FDC;
loc_82C19CD8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82C19CDC:
	// bl 0x8387e8e0
	ctx.lr = 0x82C19CE0;
	sub_8387E8E0(ctx, base);
loc_82C19CE0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,-16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19CFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-316(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -316);
	// bl 0x83812ca8
	ctx.lr = 0x82C19D08;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C19D10;
	sub_83812C48(ctx, base);
	// b 0x82c19fdc
	goto loc_82C19FDC;
loc_82C19D14:
	// lwz r11,1504(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c19ce0
	if (!cr6.eq) goto loc_82C19CE0;
	// bl 0x82c16268
	ctx.lr = 0x82C19D24;
	sub_82C16268(ctx, base);
	// stw r3,1504(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1504, ctx.r3.u32);
	// bl 0x831021a0
	ctx.lr = 0x82C19D2C;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82C19D34;
	sub_82DA45F8(ctx, base);
	// lwz r11,1504(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1504);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c19ce0
	if (cr6.eq) goto loc_82C19CE0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19ce0
	if (cr6.eq) goto loc_82C19CE0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f07ba8
	ctx.lr = 0x82C19D54;
	sub_82F07BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1504(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1504);
	// bl 0x83103100
	ctx.lr = 0x82C19D60;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1496(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1496, ctx.r11.u32);
	// b 0x82c19ce0
	goto loc_82C19CE0;
loc_82C19D6C:
	// lwz r11,1500(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c19ce0
	if (cr6.eq) goto loc_82C19CE0;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c19ce0
	if (cr6.eq) goto loc_82C19CE0;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a3f8
	ctx.lr = 0x82C19D90;
	sub_8292A3F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,-22020
	ctx.r31.s64 = ctx.r11.s64 + -22020;
	// addi r4,r31,-182
	ctx.r4.s64 = ctx.r31.s64 + -182;
	// bl 0x82a64a88
	ctx.lr = 0x82C19DA4;
	sub_82A64A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c19e50
	if (cr6.eq) goto loc_82C19E50;
	// lwz r11,1492(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1492);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c19dc4
	if (cr6.eq) goto loc_82C19DC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1492(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1492, ctx.r11.u32);
loc_82C19DC4:
	// lwz r11,1500(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1500);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,-12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// lwz r8,248(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r7,252(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82c19e08
	if (!cr6.lt) goto loc_82C19E08;
	// lwz r4,-8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
loc_82C19E08:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c19e34
	if (!cr6.lt) goto loc_82C19E34;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82C19E34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C19E3C;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C19E44;
	sub_83812C48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82C19E4C;
	sub_8387E8E0(ctx, base);
	// b 0x82c19fdc
	goto loc_82C19FDC;
loc_82C19E50:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82c19cdc
	goto loc_82C19CDC;
loc_82C19E58:
	// lhz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 120);
	// addi r31,r28,120
	ctx.r31.s64 = ctx.r28.s64 + 120;
	// bl 0x82c16330
	ctx.lr = 0x82C19E64;
	sub_82C16330(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,-352
	ctx.r10.s64 = ctx.r29.s64 + -352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C19E78;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C19E80;
	sub_83812C48(ctx, base);
	// lbz r9,132(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 132);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c19efc
	if (cr6.eq) goto loc_82C19EFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314e3c0
	ctx.lr = 0x82C19E98;
	sub_8314E3C0(ctx, base);
	// lwz r10,100(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,-11672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11672);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C19EB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19ef4
	if (cr6.eq) goto loc_82C19EF4;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c19ed8
	if (!cr6.gt) goto loc_82C19ED8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82C19ED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82C19EE0;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82C19EF4;
	sub_82D32C58(ctx, base);
loc_82C19EF4:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82c19fc4
	goto loc_82C19FC4;
loc_82C19EFC:
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// b 0x82c19fc4
	goto loc_82C19FC4;
loc_82C19F04:
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// beq cr6,0x82c19f60
	if (cr6.eq) goto loc_82C19F60;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bne cr6,0x82c19ce0
	if (!cr6.eq) goto loc_82C19CE0;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82c19ce0
	if (!cr6.lt) goto loc_82C19CE0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19F3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,88(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r9,r29,-352
	ctx.r9.s64 = ctx.r29.s64 + -352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C19F54;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C19F5C;
	sub_83812C48(ctx, base);
	// b 0x82c19fdc
	goto loc_82C19FDC;
loc_82C19F60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -332);
	// bl 0x83812ca8
	ctx.lr = 0x82C19F6C;
	sub_83812CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C19F74;
	sub_83812C48(ctx, base);
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// lwz r4,-108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -108);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19F8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c19fc0
	if (cr6.eq) goto loc_82C19FC0;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c19fb0
	if (cr6.eq) goto loc_82C19FB0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C19FB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r28,112
	ctx.r4.s64 = ctx.r28.s64 + 112;
	// bl 0x82d329f8
	ctx.lr = 0x82C19FC0;
	sub_82D329F8(ctx, base);
loc_82C19FC0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82C19FC4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C19FDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C19FDC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C19FE4;
	sub_8387E8E0(ctx, base);
loc_82C19FE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C19FF0;
	sub_82D2D580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a0c8
	if (cr6.eq) goto loc_82C1A0C8;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r11,1461(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1461);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r22
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82c1a0c8
	if (!cr6.lt) goto loc_82C1A0C8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82c18c78
	ctx.lr = 0x82C1A03C;
	sub_82C18C78(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82C1A040;
	sub_83A7D958(ctx, base);
	// stw r3,1440(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1440, ctx.r3.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82C1A04C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-22244
	ctx.r30.s64 = ctx.r11.s64 + -22244;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,-56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -56);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C1A070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// bl 0x82d2d580
	ctx.lr = 0x82C1A07C;
	sub_82D2D580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a0c8
	if (cr6.eq) goto loc_82C1A0C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A0A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,-308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -308);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C1A0B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a0c8
	if (cr6.eq) goto loc_82C1A0C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d294d0
	ctx.lr = 0x82C1A0C8;
	sub_82D294D0(ctx, base);
loc_82C1A0C8:
	// bl 0x83a7d958
	ctx.lr = 0x82C1A0CC;
	sub_83A7D958(ctx, base);
	// stw r3,1440(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1440, ctx.r3.u32);
loc_82C1A0D0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1A0D8"))) PPC_WEAK_FUNC(sub_82C1A0D8);
PPC_FUNC_IMPL(__imp__sub_82C1A0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82C1A0E0;
	__savegprlr_20(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1A0F0;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82C1A0F8;
	sub_82D33DB0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a854
	if (cr6.eq) goto loc_82C1A854;
	// lbz r11,1461(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1461);
	// addi r23,r3,100
	ctx.r23.s64 = ctx.r3.s64 + 100;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82d2d580
	ctx.lr = 0x82C1A118;
	sub_82D2D580(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r26,r11,-22244
	ctx.r26.s64 = ctx.r11.s64 + -22244;
	// beq cr6,0x82c1a140
	if (cr6.eq) goto loc_82C1A140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1A140:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C1A14C;
	sub_82D2D580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r22,144
	ctx.r22.s64 = 144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a19c
	if (cr6.eq) goto loc_82C1A19C;
	// lwz r10,1528(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// lwz r9,1524(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// lbz r11,1461(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1461);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r22
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82c1a19c
	if (!cr6.lt) goto loc_82C1A19C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18c78
	ctx.lr = 0x82C1A19C;
	sub_82C18C78(ctx, base);
loc_82C1A19C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r24,r30,1524
	ctx.r24.s64 = ctx.r30.s64 + 1524;
	// bne cr6,0x82c1a1e0
	if (!cr6.eq) goto loc_82C1A1E0;
	// lbz r11,1461(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1461);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,1461(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1461, ctx.r10.u8);
	// lwz r9,1524(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// lwz r8,1528(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r6,r7,r22
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r22.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x82c1a210
	if (cr6.lt) goto loc_82C1A210;
	// stb r21,1461(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1461, ctx.r21.u8);
	// b 0x82c1a210
	goto loc_82C1A210;
loc_82C1A1E0:
	// lwz r11,1524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// lwz r10,1528(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c1a210
	if (cr0.eq) goto loc_82C1A210;
	// lbz r10,1461(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1461);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1a204
	if (!cr6.eq) goto loc_82C1A204;
	// stb r11,1461(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1461, ctx.r11.u8);
loc_82C1A204:
	// lbz r11,1461(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1461);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,1461(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1461, ctx.r11.u8);
loc_82C1A210:
	// lbz r11,1461(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1461);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82d2d580
	ctx.lr = 0x82C1A220;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a240
	if (cr6.eq) goto loc_82C1A240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1A240:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C1A24C;
	sub_82D2D580(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a708
	if (cr6.eq) goto loc_82C1A708;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r9,1461(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1461);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r7,r8,r22
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x82c1a708
	if (!cr6.lt) goto loc_82C1A708;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82f06520
	ctx.lr = 0x82C1A290;
	sub_82F06520(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,356(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 356);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C1A2A0;
	sub_837B0C10(ctx, base);
	// lwz r4,364(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 364);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C1A2A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1a2a8
	if (!cr6.eq) goto loc_82C1A2A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C1A2CC;
	sub_825A1EB8(ctx, base);
	// lwz r4,360(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 360);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C1A2D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1a2d4
	if (!cr6.eq) goto loc_82C1A2D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C1A2F8;
	sub_825A1EB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82C1A300;
	sub_82D19A10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a700
	if (cr6.eq) goto loc_82C1A700;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c1a31c
	if (!cr6.lt) goto loc_82C1A31C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C1A31C:
	// bl 0x83815208
	ctx.lr = 0x82C1A320;
	sub_83815208(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a700
	if (cr6.eq) goto loc_82C1A700;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bgt cr6,0x82c1a62c
	if (cr6.gt) goto loc_82C1A62C;
	// beq cr6,0x82c1a580
	if (cr6.eq) goto loc_82C1A580;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c1a494
	if (cr6.lt) goto loc_82C1A494;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x82c1a408
	if (!cr6.lt) goto loc_82C1A408;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c1a408
	if (cr6.eq) goto loc_82C1A408;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82df16e0
	ctx.lr = 0x82C1A35C;
	sub_82DF16E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1a43c
	if (cr6.eq) goto loc_82C1A43C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,-22020
	ctx.r31.s64 = ctx.r11.s64 + -22020;
	// addi r4,r31,-253
	ctx.r4.s64 = ctx.r31.s64 + -253;
	// bl 0x837b0c10
	ctx.lr = 0x82C1A37C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f05ab8
	ctx.lr = 0x82C1A388;
	sub_82F05AB8(ctx, base);
	// addi r4,r31,-183
	ctx.r4.s64 = ctx.r31.s64 + -183;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a64a88
	ctx.lr = 0x82C1A394;
	sub_82A64A88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1a400
	if (cr6.eq) goto loc_82C1A400;
	// lbz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1a3b4
	if (cr6.eq) goto loc_82C1A3B4;
	// lwz r4,-8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// b 0x82c1a3b8
	goto loc_82C1A3B8;
loc_82C1A3B4:
	// lwz r4,-12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
loc_82C1A3B8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A3D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c1a3e4
	if (!cr6.lt) goto loc_82C1A3E4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82C1A3E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C1A3EC;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1A3F4;
	sub_83812C48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1A3FC;
	sub_8387E8E0(ctx, base);
	// b 0x82c1a700
	goto loc_82C1A700;
loc_82C1A400:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82C1A404:
	// bl 0x8387e8e0
	ctx.lr = 0x82C1A408;
	sub_8387E8E0(ctx, base);
loc_82C1A408:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,-16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-316(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -316);
	// bl 0x83812ca8
	ctx.lr = 0x82C1A430;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1A438;
	sub_83812C48(ctx, base);
	// b 0x82c1a700
	goto loc_82C1A700;
loc_82C1A43C:
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1a408
	if (!cr6.eq) goto loc_82C1A408;
	// bl 0x82c16268
	ctx.lr = 0x82C1A44C;
	sub_82C16268(ctx, base);
	// stw r3,1504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1504, ctx.r3.u32);
	// bl 0x831021a0
	ctx.lr = 0x82C1A454;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82C1A45C;
	sub_82DA45F8(ctx, base);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1a408
	if (cr6.eq) goto loc_82C1A408;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a408
	if (cr6.eq) goto loc_82C1A408;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f07ba8
	ctx.lr = 0x82C1A47C;
	sub_82F07BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x83103100
	ctx.lr = 0x82C1A488;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1496, ctx.r11.u32);
	// b 0x82c1a408
	goto loc_82C1A408;
loc_82C1A494:
	// lwz r11,1500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1a408
	if (cr6.eq) goto loc_82C1A408;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1a408
	if (cr6.eq) goto loc_82C1A408;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292a3f8
	ctx.lr = 0x82C1A4B8;
	sub_8292A3F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,-22020
	ctx.r31.s64 = ctx.r11.s64 + -22020;
	// addi r4,r31,-182
	ctx.r4.s64 = ctx.r31.s64 + -182;
	// bl 0x82a64a88
	ctx.lr = 0x82C1A4CC;
	sub_82A64A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1a578
	if (cr6.eq) goto loc_82C1A578;
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c1a4ec
	if (cr6.eq) goto loc_82C1A4EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1492, ctx.r11.u32);
loc_82C1A4EC:
	// lwz r11,1500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,-12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// lwz r8,252(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r7,248(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82c1a530
	if (!cr6.lt) goto loc_82C1A530;
	// lwz r4,-8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
loc_82C1A530:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c1a55c
	if (!cr6.lt) goto loc_82C1A55C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82C1A55C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C1A564;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1A56C;
	sub_83812C48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1A574;
	sub_8387E8E0(ctx, base);
	// b 0x82c1a700
	goto loc_82C1A700;
loc_82C1A578:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82c1a404
	goto loc_82C1A404;
loc_82C1A580:
	// lhz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 120);
	// addi r31,r28,120
	ctx.r31.s64 = ctx.r28.s64 + 120;
	// bl 0x82c16330
	ctx.lr = 0x82C1A58C;
	sub_82C16330(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,-352
	ctx.r10.s64 = ctx.r26.s64 + -352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C1A5A0;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1A5A8;
	sub_83812C48(ctx, base);
	// lbz r9,132(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 132);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c1a624
	if (cr6.eq) goto loc_82C1A624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e3c0
	ctx.lr = 0x82C1A5C0;
	sub_8314E3C0(ctx, base);
	// lwz r10,100(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,-11672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11672);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C1A5DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a61c
	if (cr6.eq) goto loc_82C1A61C;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c1a600
	if (!cr6.gt) goto loc_82C1A600;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82C1A600:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82C1A608;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82C1A61C;
	sub_82D32C58(ctx, base);
loc_82C1A61C:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x82c1a6e8
	goto loc_82C1A6E8;
loc_82C1A624:
	// lwz r4,-4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// b 0x82c1a6e8
	goto loc_82C1A6E8;
loc_82C1A62C:
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// beq cr6,0x82c1a688
	if (cr6.eq) goto loc_82C1A688;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bne cr6,0x82c1a408
	if (!cr6.eq) goto loc_82C1A408;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82c1a408
	if (!cr6.lt) goto loc_82C1A408;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,-4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,88(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r9,r26,-352
	ctx.r9.s64 = ctx.r26.s64 + -352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C1A67C;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1A684;
	sub_83812C48(ctx, base);
	// b 0x82c1a700
	goto loc_82C1A700;
loc_82C1A688:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -332);
	// bl 0x83812ca8
	ctx.lr = 0x82C1A694;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1A69C;
	sub_83812C48(ctx, base);
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// lwz r4,-108(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -108);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A6B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a6e4
	if (cr6.eq) goto loc_82C1A6E4;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r21,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r21.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c1a6d4
	if (cr6.eq) goto loc_82C1A6D4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C1A6D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r28,112
	ctx.r4.s64 = ctx.r28.s64 + 112;
	// bl 0x82d329f8
	ctx.lr = 0x82C1A6E4;
	sub_82D329F8(ctx, base);
loc_82C1A6E4:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82C1A6E8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1A700:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1A708;
	sub_8387E8E0(ctx, base);
loc_82C1A708:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,-304(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -304);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A720;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a770
	if (cr6.eq) goto loc_82C1A770;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lbz r11,1461(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1461);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r22
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c1a750
	if (cr6.gt) goto loc_82C1A750;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C1A750;
	sub_831CC188(ctx, base);
loc_82C1A750:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82d291e0
	ctx.lr = 0x82C1A770;
	sub_82D291E0(ctx, base);
loc_82C1A770:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,-156(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -156);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1a828
	if (cr6.eq) goto loc_82C1A828;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d04828
	ctx.lr = 0x82C1A79C;
	sub_82D04828(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28370
	ctx.lr = 0x82C1A7A8;
	sub_82D28370(ctx, base);
	// addi r31,r30,1508
	ctx.r31.s64 = ctx.r30.s64 + 1508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fd60
	ctx.lr = 0x82C1A7B4;
	sub_8291FD60(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lbz r11,1461(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1461);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r22
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c1a7dc
	if (cr6.gt) goto loc_82C1A7DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C1A7DC;
	sub_831CC188(ctx, base);
loc_82C1A7DC:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82d04d80
	ctx.lr = 0x82C1A7FC;
	sub_82D04D80(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// subfic r5,r6,5
	xer.ca = ctx.r6.u32 <= 5;
	ctx.r5.s64 = 5 - ctx.r6.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stb r10,1540(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1540, ctx.r10.u8);
	// bl 0x82d04b60
	ctx.lr = 0x82C1A828;
	sub_82D04B60(ctx, base);
loc_82C1A828:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c19760
	ctx.lr = 0x82C1A834;
	sub_82C19760(ctx, base);
	// stw r21,1544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1544, ctx.r21.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-64(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -64);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1A854;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1A854:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1A85C"))) PPC_WEAK_FUNC(sub_82C1A85C);
PPC_FUNC_IMPL(__imp__sub_82C1A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1A860"))) PPC_WEAK_FUNC(sub_82C1A860);
PPC_FUNC_IMPL(__imp__sub_82C1A860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82C1A868;
	__savegprlr_18(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f06520
	ctx.lr = 0x82C1A874;
	sub_82F06520(ctx, base);
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r19,1
	ctx.r19.s64 = 1;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r18,0
	ctx.r18.s64 = 0;
	// lis r22,-31760
	ctx.r22.s64 = -2081423360;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r23,r11,-22020
	ctx.r23.s64 = ctx.r11.s64 + -22020;
	// addi r26,r10,-22244
	ctx.r26.s64 = ctx.r10.s64 + -22244;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82c1adf0
	if (!cr6.eq) goto loc_82C1ADF0;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1adf0
	if (cr6.eq) goto loc_82C1ADF0;
	// lbz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1adf0
	if (cr6.eq) goto loc_82C1ADF0;
	// lbz r11,1461(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1461);
	// lwz r9,1524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82c1adec
	if (!cr6.eq) goto loc_82C1ADEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1A8E8;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82C1A8F0;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1adec
	if (cr6.eq) goto loc_82C1ADEC;
	// lbz r11,1461(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1461);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// lwz r9,1524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C1A924;
	sub_82D2D580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82c18c78
	ctx.lr = 0x82C1A93C;
	sub_82C18C78(ctx, base);
	// lbz r11,1461(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1461);
	// lwz r9,1524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C1A960;
	sub_82D2D580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1adc8
	if (cr6.eq) goto loc_82C1ADC8;
	// bl 0x82f06520
	ctx.lr = 0x82C1A970;
	sub_82F06520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,356(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 356);
	// bl 0x837b0c10
	ctx.lr = 0x82C1A980;
	sub_837B0C10(ctx, base);
	// lwz r4,364(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 364);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C1A988:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1a988
	if (!cr6.eq) goto loc_82C1A988;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C1A9AC;
	sub_825A1EB8(ctx, base);
	// lwz r4,360(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 360);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C1A9B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1a9b4
	if (!cr6.eq) goto loc_82C1A9B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C1A9D8;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82C1A9E0;
	sub_82D19A10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1adc0
	if (cr6.eq) goto loc_82C1ADC0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c1a9fc
	if (!cr6.lt) goto loc_82C1A9FC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82C1A9FC:
	// bl 0x83815208
	ctx.lr = 0x82C1AA00;
	sub_83815208(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1adc0
	if (cr6.eq) goto loc_82C1ADC0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bgt cr6,0x82c1acec
	if (cr6.gt) goto loc_82C1ACEC;
	// beq cr6,0x82c1ac48
	if (cr6.eq) goto loc_82C1AC48;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c1ab68
	if (cr6.lt) goto loc_82C1AB68;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x82c1aae0
	if (!cr6.lt) goto loc_82C1AAE0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c1aae0
	if (cr6.eq) goto loc_82C1AAE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df16e0
	ctx.lr = 0x82C1AA3C;
	sub_82DF16E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1ab14
	if (cr6.eq) goto loc_82C1AB14;
	// addi r4,r23,-253
	ctx.r4.s64 = ctx.r23.s64 + -253;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82C1AA54;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f05ab8
	ctx.lr = 0x82C1AA60;
	sub_82F05AB8(ctx, base);
	// addi r4,r23,-183
	ctx.r4.s64 = ctx.r23.s64 + -183;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a64a88
	ctx.lr = 0x82C1AA6C;
	sub_82A64A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1aad8
	if (cr6.eq) goto loc_82C1AAD8;
	// lbz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1aa8c
	if (cr6.eq) goto loc_82C1AA8C;
	// lwz r4,-8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// b 0x82c1aa90
	goto loc_82C1AA90;
loc_82C1AA8C:
	// lwz r4,-12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
loc_82C1AA90:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1AAA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c1aabc
	if (!cr6.lt) goto loc_82C1AABC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82C1AABC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C1AAC4;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1AACC;
	sub_83812C48(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1AAD4;
	sub_8387E8E0(ctx, base);
	// b 0x82c1adc0
	goto loc_82C1ADC0;
loc_82C1AAD8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_82C1AADC:
	// bl 0x8387e8e0
	ctx.lr = 0x82C1AAE0;
	sub_8387E8E0(ctx, base);
loc_82C1AAE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1AAFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-316(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -316);
	// bl 0x83812ca8
	ctx.lr = 0x82C1AB08;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1AB10;
	sub_83812C48(ctx, base);
	// b 0x82c1adc0
	goto loc_82C1ADC0;
loc_82C1AB14:
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1aae0
	if (!cr6.eq) goto loc_82C1AAE0;
	// bl 0x82c16268
	ctx.lr = 0x82C1AB24;
	sub_82C16268(ctx, base);
	// stw r3,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r3.u32);
	// bl 0x831021a0
	ctx.lr = 0x82C1AB2C;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82C1AB34;
	sub_82DA45F8(ctx, base);
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1aae0
	if (cr6.eq) goto loc_82C1AAE0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1aae0
	if (cr6.eq) goto loc_82C1AAE0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f07ba8
	ctx.lr = 0x82C1AB54;
	sub_82F07BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// bl 0x83103100
	ctx.lr = 0x82C1AB60;
	sub_83103100(ctx, base);
	// stw r19,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r19.u32);
	// b 0x82c1aae0
	goto loc_82C1AAE0;
loc_82C1AB68:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1aae0
	if (cr6.eq) goto loc_82C1AAE0;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1aae0
	if (cr6.eq) goto loc_82C1AAE0;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292a3f8
	ctx.lr = 0x82C1AB8C;
	sub_8292A3F8(ctx, base);
	// addi r4,r23,-182
	ctx.r4.s64 = ctx.r23.s64 + -182;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82a64a88
	ctx.lr = 0x82C1AB98;
	sub_82A64A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1ac40
	if (cr6.eq) goto loc_82C1AC40;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c1abb4
	if (cr6.eq) goto loc_82C1ABB4;
	// stw r20,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r20.u32);
loc_82C1ABB4:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,-12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// lwz r8,248(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// lwz r7,252(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82c1abf8
	if (!cr6.lt) goto loc_82C1ABF8;
	// lwz r4,-8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
loc_82C1ABF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1AC10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c1ac24
	if (!cr6.lt) goto loc_82C1AC24;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82C1AC24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C1AC2C;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1AC34;
	sub_83812C48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1AC3C;
	sub_8387E8E0(ctx, base);
	// b 0x82c1adc0
	goto loc_82C1ADC0;
loc_82C1AC40:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x82c1aadc
	goto loc_82C1AADC;
loc_82C1AC48:
	// lhz r3,120(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 120);
	// addi r30,r27,120
	ctx.r30.s64 = ctx.r27.s64 + 120;
	// bl 0x82c16330
	ctx.lr = 0x82C1AC54;
	sub_82C16330(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,-352
	ctx.r10.s64 = ctx.r26.s64 + -352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C1AC68;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1AC70;
	sub_83812C48(ctx, base);
	// lbz r9,132(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 132);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c1ace4
	if (cr6.eq) goto loc_82C1ACE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e3c0
	ctx.lr = 0x82C1AC88;
	sub_8314E3C0(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r4,-11672(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -11672);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1ACA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1acdc
	if (cr6.eq) goto loc_82C1ACDC;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r21
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, xer);
	// ble cr6,0x82c1acc0
	if (!cr6.gt) goto loc_82C1ACC0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82C1ACC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82C1ACC8;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82C1ACDC;
	sub_82D32C58(ctx, base);
loc_82C1ACDC:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x82c1ada8
	goto loc_82C1ADA8;
loc_82C1ACE4:
	// lwz r4,-4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// b 0x82c1ada8
	goto loc_82C1ADA8;
loc_82C1ACEC:
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// beq cr6,0x82c1ad48
	if (cr6.eq) goto loc_82C1AD48;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bne cr6,0x82c1aae0
	if (!cr6.eq) goto loc_82C1AAE0;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82c1aae0
	if (!cr6.lt) goto loc_82C1AAE0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1AD24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,88(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// addi r9,r26,-352
	ctx.r9.s64 = ctx.r26.s64 + -352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C1AD3C;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1AD44;
	sub_83812C48(ctx, base);
	// b 0x82c1adc0
	goto loc_82C1ADC0;
loc_82C1AD48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -332);
	// bl 0x83812ca8
	ctx.lr = 0x82C1AD54;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1AD5C;
	sub_83812C48(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r4,-108(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -108);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1AD74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1ada4
	if (cr6.eq) goto loc_82C1ADA4;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r18,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r18.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c1ad94
	if (cr6.eq) goto loc_82C1AD94;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82C1AD94:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r27,112
	ctx.r4.s64 = ctx.r27.s64 + 112;
	// bl 0x82d329f8
	ctx.lr = 0x82C1ADA4;
	sub_82D329F8(ctx, base);
loc_82C1ADA4:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82C1ADA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1ADC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1ADC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1ADC8;
	sub_8387E8E0(ctx, base);
loc_82C1ADC8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,-64(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -64);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1ADE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82C1ADE8;
	sub_83A7D958(ctx, base);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
loc_82C1ADEC:
	// stw r20,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r20.u32);
loc_82C1ADF0:
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82c1b364
	if (!cr6.eq) goto loc_82C1B364;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82c1b364
	if (cr6.eq) goto loc_82C1B364;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82df16e0
	ctx.lr = 0x82C1AE0C;
	sub_82DF16E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b364
	if (cr6.eq) goto loc_82C1B364;
	// lbz r11,1461(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1461);
	// lwz r9,1524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82c1ae44
	if (!cr6.gt) goto loc_82C1AE44;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// ble cr6,0x82c1ae48
	if (!cr6.gt) goto loc_82C1AE48;
loc_82C1AE44:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82C1AE48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b360
	if (cr6.eq) goto loc_82C1B360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1AE5C;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82C1AE64;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b360
	if (cr6.eq) goto loc_82C1B360;
	// lbz r11,1461(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1461);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// lwz r9,1524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C1AE98;
	sub_82D2D580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82c18c78
	ctx.lr = 0x82C1AEB0;
	sub_82C18C78(ctx, base);
	// lbz r11,1461(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1461);
	// lwz r10,1524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82C1AED4;
	sub_82D2D580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b33c
	if (cr6.eq) goto loc_82C1B33C;
	// bl 0x82f06520
	ctx.lr = 0x82C1AEE4;
	sub_82F06520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,356(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 356);
	// bl 0x837b0c10
	ctx.lr = 0x82C1AEF4;
	sub_837B0C10(ctx, base);
	// lwz r4,364(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 364);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C1AEFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1aefc
	if (!cr6.eq) goto loc_82C1AEFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C1AF20;
	sub_825A1EB8(ctx, base);
	// lwz r4,360(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 360);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82C1AF28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1af28
	if (!cr6.eq) goto loc_82C1AF28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82C1AF4C;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82C1AF54;
	sub_82D19A10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b334
	if (cr6.eq) goto loc_82C1B334;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82c1af70
	if (!cr6.lt) goto loc_82C1AF70;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82C1AF70:
	// bl 0x83815208
	ctx.lr = 0x82C1AF74;
	sub_83815208(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b334
	if (cr6.eq) goto loc_82C1B334;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bgt cr6,0x82c1b260
	if (cr6.gt) goto loc_82C1B260;
	// beq cr6,0x82c1b1bc
	if (cr6.eq) goto loc_82C1B1BC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c1b0dc
	if (cr6.lt) goto loc_82C1B0DC;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x82c1b054
	if (!cr6.lt) goto loc_82C1B054;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c1b054
	if (cr6.eq) goto loc_82C1B054;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df16e0
	ctx.lr = 0x82C1AFB0;
	sub_82DF16E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b088
	if (cr6.eq) goto loc_82C1B088;
	// addi r4,r23,-253
	ctx.r4.s64 = ctx.r23.s64 + -253;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82C1AFC8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f05ab8
	ctx.lr = 0x82C1AFD4;
	sub_82F05AB8(ctx, base);
	// addi r4,r23,-183
	ctx.r4.s64 = ctx.r23.s64 + -183;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a64a88
	ctx.lr = 0x82C1AFE0;
	sub_82A64A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b04c
	if (cr6.eq) goto loc_82C1B04C;
	// lbz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b000
	if (cr6.eq) goto loc_82C1B000;
	// lwz r4,-8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	// b 0x82c1b004
	goto loc_82C1B004;
loc_82C1B000:
	// lwz r4,-12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
loc_82C1B004:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B01C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c1b030
	if (!cr6.lt) goto loc_82C1B030;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82C1B030:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C1B038;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1B040;
	sub_83812C48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1B048;
	sub_8387E8E0(ctx, base);
	// b 0x82c1b334
	goto loc_82C1B334;
loc_82C1B04C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_82C1B050:
	// bl 0x8387e8e0
	ctx.lr = 0x82C1B054;
	sub_8387E8E0(ctx, base);
loc_82C1B054:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-316(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -316);
	// bl 0x83812ca8
	ctx.lr = 0x82C1B07C;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1B084;
	sub_83812C48(ctx, base);
	// b 0x82c1b334
	goto loc_82C1B334;
loc_82C1B088:
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1b054
	if (!cr6.eq) goto loc_82C1B054;
	// bl 0x82c16268
	ctx.lr = 0x82C1B098;
	sub_82C16268(ctx, base);
	// stw r3,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r3.u32);
	// bl 0x831021a0
	ctx.lr = 0x82C1B0A0;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82C1B0A8;
	sub_82DA45F8(ctx, base);
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b054
	if (cr6.eq) goto loc_82C1B054;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b054
	if (cr6.eq) goto loc_82C1B054;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f07ba8
	ctx.lr = 0x82C1B0C8;
	sub_82F07BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// bl 0x83103100
	ctx.lr = 0x82C1B0D4;
	sub_83103100(ctx, base);
	// stw r19,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r19.u32);
	// b 0x82c1b054
	goto loc_82C1B054;
loc_82C1B0DC:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b054
	if (cr6.eq) goto loc_82C1B054;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1b054
	if (cr6.eq) goto loc_82C1B054;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292a3f8
	ctx.lr = 0x82C1B100;
	sub_8292A3F8(ctx, base);
	// addi r4,r23,-182
	ctx.r4.s64 = ctx.r23.s64 + -182;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a64a88
	ctx.lr = 0x82C1B10C;
	sub_82A64A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b1b4
	if (cr6.eq) goto loc_82C1B1B4;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82c1b128
	if (cr6.eq) goto loc_82C1B128;
	// stw r20,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r20.u32);
loc_82C1B128:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,-12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// lwz r8,252(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r7,248(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82c1b16c
	if (!cr6.lt) goto loc_82C1B16C;
	// lwz r4,-8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8);
loc_82C1B16C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82c1b198
	if (!cr6.lt) goto loc_82C1B198;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_82C1B198:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812ca8
	ctx.lr = 0x82C1B1A0;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1B1A8;
	sub_83812C48(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1B1B0;
	sub_8387E8E0(ctx, base);
	// b 0x82c1b334
	goto loc_82C1B334;
loc_82C1B1B4:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// b 0x82c1b050
	goto loc_82C1B050;
loc_82C1B1BC:
	// lhz r3,120(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 120);
	// addi r30,r27,120
	ctx.r30.s64 = ctx.r27.s64 + 120;
	// bl 0x82c16330
	ctx.lr = 0x82C1B1C8;
	sub_82C16330(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,-352
	ctx.r10.s64 = ctx.r26.s64 + -352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C1B1DC;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1B1E4;
	sub_83812C48(ctx, base);
	// lbz r9,132(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 132);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c1b258
	if (cr6.eq) goto loc_82C1B258;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e3c0
	ctx.lr = 0x82C1B1FC;
	sub_8314E3C0(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r4,-11672(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + -11672);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b250
	if (cr6.eq) goto loc_82C1B250;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r21
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, xer);
	// ble cr6,0x82c1b234
	if (!cr6.gt) goto loc_82C1B234;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82C1B234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82C1B23C;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82C1B250;
	sub_82D32C58(ctx, base);
loc_82C1B250:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// b 0x82c1b31c
	goto loc_82C1B31C;
loc_82C1B258:
	// lwz r4,-4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// b 0x82c1b31c
	goto loc_82C1B31C;
loc_82C1B260:
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// beq cr6,0x82c1b2bc
	if (cr6.eq) goto loc_82C1B2BC;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bne cr6,0x82c1b054
	if (!cr6.eq) goto loc_82C1B054;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82c1b054
	if (!cr6.lt) goto loc_82C1B054;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,-4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B298;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,88(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// addi r9,r26,-352
	ctx.r9.s64 = ctx.r26.s64 + -352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x83812ca8
	ctx.lr = 0x82C1B2B0;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1B2B8;
	sub_83812C48(ctx, base);
	// b 0x82c1b334
	goto loc_82C1B334;
loc_82C1B2BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -332);
	// bl 0x83812ca8
	ctx.lr = 0x82C1B2C8;
	sub_83812CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83812c48
	ctx.lr = 0x82C1B2D0;
	sub_83812C48(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwz r4,-108(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -108);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B2E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b318
	if (cr6.eq) goto loc_82C1B318;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r18,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r18.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c1b308
	if (cr6.eq) goto loc_82C1B308;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82C1B308:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r27,112
	ctx.r4.s64 = ctx.r27.s64 + 112;
	// bl 0x82d329f8
	ctx.lr = 0x82C1B318;
	sub_82D329F8(ctx, base);
loc_82C1B318:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82C1B31C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B334;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1B334:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1B33C;
	sub_8387E8E0(ctx, base);
loc_82C1B33C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,-64(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -64);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82C1B35C;
	sub_83A7D958(ctx, base);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
loc_82C1B360:
	// stw r20,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r20.u32);
loc_82C1B364:
	// lbz r11,1462(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1462);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b3ec
	if (cr6.eq) goto loc_82C1B3EC;
	// bl 0x83a7d958
	ctx.lr = 0x82C1B374;
	sub_83A7D958(ctx, base);
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82C1B380;
	sub_83524138(ctx, base);
	// ld r10,1424(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1424);
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// cmpld cr6,r3,r9
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, xer);
	// blt cr6,0x82c1b3ec
	if (cr6.lt) goto loc_82C1B3EC;
	// lwz r11,1512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,1508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82c1b3dc
	if (cr0.eq) goto loc_82C1B3DC;
	// bl 0x82d19a78
	ctx.lr = 0x82C1B3B0;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82C1B3B8;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b3e4
	if (cr6.eq) goto loc_82C1B3E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c19760
	ctx.lr = 0x82C1B3CC;
	sub_82C19760(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// b 0x82c1b3e4
	goto loc_82C1B3E4;
loc_82C1B3DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c1a0d8
	ctx.lr = 0x82C1B3E4;
	sub_82C1A0D8(ctx, base);
loc_82C1B3E4:
	// bl 0x83a7d958
	ctx.lr = 0x82C1B3E8;
	sub_83A7D958(ctx, base);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
loc_82C1B3EC:
	// bl 0x83a7d958
	ctx.lr = 0x82C1B3F0;
	sub_83A7D958(ctx, base);
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82C1B3FC;
	sub_83524138(ctx, base);
	// ld r10,1432(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1432);
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// cmpld cr6,r3,r9
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, xer);
	// blt cr6,0x82c1b460
	if (cr6.lt) goto loc_82C1B460;
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c1b428
	if (cr6.lt) goto loc_82C1B428;
	// bne cr6,0x82c1b458
	if (!cr6.eq) goto loc_82C1B458;
	// lwz r30,332(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 332);
	// stw r18,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r18.u32);
	// b 0x82c1b430
	goto loc_82C1B430;
loc_82C1B428:
	// lwz r30,324(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 324);
	// stw r19,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r19.u32);
loc_82C1B430:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c1b458
	if (cr6.eq) goto loc_82C1B458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1B440;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B458;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1B458:
	// bl 0x83a7d958
	ctx.lr = 0x82C1B45C;
	sub_83A7D958(ctx, base);
	// stw r3,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r3.u32);
loc_82C1B460:
	// lwz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// addi r3,r31,1548
	ctx.r3.s64 = ctx.r31.s64 + 1548;
	// lwz r10,1552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c1b488
	if (cr6.eq) goto loc_82C1B488;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,1568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82d32fb8
	ctx.lr = 0x82C1B488;
	sub_82D32FB8(ctx, base);
loc_82C1B488:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1B490"))) PPC_WEAK_FUNC(sub_82C1B490);
PPC_FUNC_IMPL(__imp__sub_82C1B490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C1B498;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1B4A8;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82C1B4B0;
	sub_82D33DB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b674
	if (cr6.eq) goto loc_82C1B674;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r29,r11,-22400
	ctx.r29.s64 = ctx.r11.s64 + -22400;
	// lwz r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// bl 0x82d2bb40
	ctx.lr = 0x82C1B4CC;
	sub_82D2BB40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b674
	if (cr6.eq) goto loc_82C1B674;
	// lwz r11,1524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// li r27,144
	ctx.r27.s64 = 144;
	// lwz r10,1528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// addi r28,r31,1524
	ctx.r28.s64 = ctx.r31.s64 + 1524;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bgt cr6,0x82c1b504
	if (cr6.gt) goto loc_82C1B504;
	// lbz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1540);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b674
	if (cr6.eq) goto loc_82C1B674;
loc_82C1B504:
	// bl 0x83a7d958
	ctx.lr = 0x82C1B508;
	sub_83A7D958(ctx, base);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C1B518;
	sub_82D17DA0(ctx, base);
	// lwz r10,1512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// lwz r9,1508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// li r11,28
	ctx.r11.s64 = 28;
	// addi r30,r31,1508
	ctx.r30.s64 = ctx.r31.s64 + 1508;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82c1b578
	if (cr0.eq) goto loc_82C1B578;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1b578
	if (!cr6.eq) goto loc_82C1B578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1B548;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82C1B550;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b674
	if (cr6.eq) goto loc_82C1B674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c19760
	ctx.lr = 0x82C1B564;
	sub_82C19760(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1B578:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b668
	if (cr6.eq) goto loc_82C1B668;
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82c1b668
	if (!cr6.gt) goto loc_82C1B668;
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B5A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b654
	if (cr6.eq) goto loc_82C1B654;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04828
	ctx.lr = 0x82C1B5BC;
	sub_82D04828(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d28370
	ctx.lr = 0x82C1B5C8;
	sub_82D28370(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291fd60
	ctx.lr = 0x82C1B5D0;
	sub_8291FD60(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r11,1461(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1461);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82c1b5f8
	if (cr6.gt) goto loc_82C1B5F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C1B5F8;
	sub_831CC188(ctx, base);
loc_82C1B5F8:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82d04d80
	ctx.lr = 0x82C1B618;
	sub_82D04D80(ctx, base);
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82c1b64c
	if (cr0.eq) goto loc_82C1B64C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82C1B634:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b8f570
	ctx.lr = 0x82C1B644;
	sub_82B8F570(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x82c1b634
	if (!cr0.eq) goto loc_82C1B634;
loc_82C1B64C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04b60
	ctx.lr = 0x82C1B654;
	sub_82D04B60(ctx, base);
loc_82C1B654:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c19760
	ctx.lr = 0x82C1B660;
	sub_82C19760(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1B668:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1a0d8
	ctx.lr = 0x82C1B674;
	sub_82C1A0D8(ctx, base);
loc_82C1B674:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1B67C"))) PPC_WEAK_FUNC(sub_82C1B67C);
PPC_FUNC_IMPL(__imp__sub_82C1B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1B680"))) PPC_WEAK_FUNC(sub_82C1B680);
PPC_FUNC_IMPL(__imp__sub_82C1B680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C1B688;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,455
	ctx.r11.s64 = 29818880;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,7281
	ctx.r10.u64 = ctx.r11.u64 | 7281;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c1b6ac
	if (!cr6.gt) goto loc_82C1B6AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82C1B6AC;
	sub_831CC150(ctx, base);
loc_82C1B6AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,144
	ctx.r24.s64 = 144;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82c1b778
	if (!cr6.lt) goto loc_82C1B778;
	// li r25,2
	ctx.r25.s64 = 2;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r26,r11,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82595718
	ctx.lr = 0x82C1B6EC;
	sub_82595718(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82c1b728
	if (cr6.eq) goto loc_82C1B728;
loc_82C1B704:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c1b718
	if (cr6.eq) goto loc_82C1B718;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16e60
	ctx.lr = 0x82C1B718;
	sub_82C16E60(ctx, base);
loc_82C1B718:
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c1b704
	if (!cr6.eq) goto loc_82C1B704;
loc_82C1B728:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x82c1b758
	if (cr6.eq) goto loc_82C1B758;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x82c16f80
	ctx.lr = 0x82C1B748;
	sub_82C16F80(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82C1B758;
	sub_825952B8(ctx, base);
loc_82C1B758:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82C1B778:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1B780"))) PPC_WEAK_FUNC(sub_82C1B780);
PPC_FUNC_IMPL(__imp__sub_82C1B780) {
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
	// bl 0x82c19648
	ctx.lr = 0x82C1B7A0;
	sub_82C19648(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b7b8
	if (cr6.eq) goto loc_82C1B7B8;
	// bl 0x82416268
	ctx.lr = 0x82C1B7B4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C1B7B8:
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

__attribute__((alias("__imp__sub_82C1B7D0"))) PPC_WEAK_FUNC(sub_82C1B7D0);
PPC_FUNC_IMPL(__imp__sub_82C1B7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C1B7D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82d34e50
	ctx.lr = 0x82C1B7E8;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82C1B7EC;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1b804
	if (!cr6.eq) goto loc_82C1B804;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C1B804:
	// bl 0x831156e8
	ctx.lr = 0x82C1B808;
	sub_831156E8(ctx, base);
	// lbz r11,1408(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1408);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b838
	if (cr6.eq) goto loc_82C1B838;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-22360
	ctx.r5.s64 = ctx.r11.s64 + -22360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x831178a0
	ctx.lr = 0x82C1B834;
	sub_831178A0(ctx, base);
	// b 0x82c1b844
	goto loc_82C1B844;
loc_82C1B838:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82C1B844:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8316fb10
	ctx.lr = 0x82C1B85C;
	sub_8316FB10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831949c8
	ctx.lr = 0x82C1B864;
	sub_831949C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1b988
	if (cr6.eq) goto loc_82C1B988;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82C1B87C;
	sub_8311C338(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x83195918
	ctx.lr = 0x82C1B88C;
	sub_83195918(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8311c338
	ctx.lr = 0x82C1B89C;
	sub_8311C338(ctx, base);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,1500
	cr6.compare<uint32_t>(ctx.r11.u32, 1500, xer);
	// blt cr6,0x82c1b8b0
	if (cr6.lt) goto loc_82C1B8B0;
	// addis r11,r30,99
	ctx.r11.s64 = ctx.r30.s64 + 6488064;
	// b 0x82c1b8bc
	goto loc_82C1B8BC;
loc_82C1B8B0:
	// mulli r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 * 520;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addis r11,r11,99
	ctx.r11.s64 = ctx.r11.s64 + 6488064;
loc_82C1B8BC:
	// addi r11,r11,11884
	ctx.r11.s64 = ctx.r11.s64 + 11884;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312dc08
	ctx.lr = 0x82C1B8CC;
	sub_8312DC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 & ctx.r10.u64;
	// bl 0x8312db38
	ctx.lr = 0x82C1B8E8;
	sub_8312DB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82C1B8F0;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82C1B8FC;
	sub_8311C3D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,8(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// bl 0x8319dc20
	ctx.lr = 0x82C1B90C;
	sub_8319DC20(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r31,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r9,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c1b930
	if (cr6.eq) goto loc_82C1B930;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82c1b964
	goto loc_82C1B964;
loc_82C1B930:
	// rlwinm r11,r9,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r31,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c1b950
	if (cr6.eq) goto loc_82C1B950;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82c1b964
	goto loc_82C1B964;
loc_82C1B950:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82C1B964:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1b984
	if (cr6.eq) goto loc_82C1B984;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// bl 0x83195918
	ctx.lr = 0x82C1B97C;
	sub_83195918(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82c1b988
	goto loc_82C1B988;
loc_82C1B984:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82C1B988:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831177a0
	ctx.lr = 0x82C1B994;
	sub_831177A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1B9A0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C1B9A8;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1b9c8
	if (cr6.eq) goto loc_82C1B9C8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1B9C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1B9C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c19830
	ctx.lr = 0x82C1B9D0;
	sub_82C19830(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c170f0
	ctx.lr = 0x82C1B9E0;
	sub_82C170F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1B9E8;
	sub_82D19A78(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-22320
	ctx.r31.s64 = ctx.r11.s64 + -22320;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1BA08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c179f0
	ctx.lr = 0x82C1BA14;
	sub_82C179F0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82C1BA18;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82C1BA1C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82c1ba50
	if (!cr6.eq) goto loc_82C1BA50;
	// bl 0x82d19a78
	ctx.lr = 0x82C1BA2C;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1BA44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c17ca8
	ctx.lr = 0x82C1BA4C;
	sub_82C17CA8(ctx, base);
	// b 0x82c1ba74
	goto loc_82C1BA74;
loc_82C1BA50:
	// bl 0x82d19a78
	ctx.lr = 0x82C1BA54;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1BA6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16dd8
	ctx.lr = 0x82C1BA74;
	sub_82C16DD8(ctx, base);
loc_82C1BA74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c192c0
	ctx.lr = 0x82C1BA7C;
	sub_82C192C0(ctx, base);
	// stw r26,1588(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1588, ctx.r26.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82C1BA84;
	sub_83A7D958(ctx, base);
	// stw r3,1444(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1444, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1BA94"))) PPC_WEAK_FUNC(sub_82C1BA94);
PPC_FUNC_IMPL(__imp__sub_82C1BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1BA98"))) PPC_WEAK_FUNC(sub_82C1BA98);
PPC_FUNC_IMPL(__imp__sub_82C1BA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,455
	ctx.r10.s64 = 29818880;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,144
	ctx.r9.s64 = 144;
	// ori r8,r10,7281
	ctx.r8.u64 = ctx.r10.u64 | 7281;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c1bacc
	if (!cr6.lt) goto loc_82C1BACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82C1BACC:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c1bafc
	if (cr6.lt) goto loc_82C1BAFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82C1BAFC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c1bb08
	if (!cr6.lt) goto loc_82C1BB08;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82C1BB08:
	// b 0x82c1b680
	sub_82C1B680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1BB0C"))) PPC_WEAK_FUNC(sub_82C1BB0C);
PPC_FUNC_IMPL(__imp__sub_82C1BB0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C1BB10"))) PPC_WEAK_FUNC(sub_82C1BB10);
PPC_FUNC_IMPL(__imp__sub_82C1BB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82C1BB18;
	__savegprlr_18(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c1c0ec
	if (cr6.eq) goto loc_82C1C0EC;
	// bl 0x82f06520
	ctx.lr = 0x82C1BB30;
	sub_82F06520(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x82f05440
	ctx.lr = 0x82C1BB38;
	sub_82F05440(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c0ec
	if (cr6.eq) goto loc_82C1C0EC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// bl 0x82ad5e38
	ctx.lr = 0x82C1BB60;
	sub_82AD5E38(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq cr6,0x82c1bbb4
	if (cr6.eq) goto loc_82C1BBB4;
loc_82C1BB70:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8314d550
	ctx.lr = 0x82C1BB88;
	sub_8314D550(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d64540
	ctx.lr = 0x82C1BBA4;
	sub_82D64540(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// blt cr6,0x82c1bb70
	if (cr6.lt) goto loc_82C1BB70;
loc_82C1BBB4:
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// addi r27,r11,-18140
	ctx.r27.s64 = ctx.r11.s64 + -18140;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// addi r4,r27,-4061
	ctx.r4.s64 = ctx.r27.s64 + -4061;
	// bl 0x8259cc28
	ctx.lr = 0x82C1BBE8;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(ctx.r29.u32, 9, xer);
	// blt cr6,0x82c1bbf4
	if (cr6.lt) goto loc_82C1BBF4;
	// li r29,9
	ctx.r29.s64 = 9;
loc_82C1BBF4:
	// lwz r18,176(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r19,2
	ctx.r19.s64 = 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c1bde0
	if (cr6.eq) goto loc_82C1BDE0;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// subf r10,r18,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r18.s64;
	// srawi r24,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 2;
loc_82C1BC1C:
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// addi r4,r27,-4051
	ctx.r4.s64 = ctx.r27.s64 + -4051;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82C1BC38;
	sub_8259CC28(ctx, base);
	// cmplw cr6,r24,r26
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r26.u32, xer);
	// ble cr6,0x82c1beb8
	if (!cr6.gt) goto loc_82C1BEB8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f05458
	ctx.lr = 0x82C1BC4C;
	sub_82F05458(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c1bc70
	if (!cr6.eq) goto loc_82C1BC70;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1bdc4
	if (cr6.lt) goto loc_82C1BDC4;
	// stw r19,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r19.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// b 0x82c1bdbc
	goto loc_82C1BDBC;
loc_82C1BC70:
	// stw r23,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r23.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cb28
	ctx.lr = 0x82C1BC90;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x82C1BCA4;
	sub_825A1DA8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1bcc0
	if (cr6.lt) goto loc_82C1BCC0;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82C1BCC0;
	sub_825952B8(ctx, base);
loc_82C1BCC0:
	// stw r23,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r23.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
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
	// beq cr6,0x82c1bd50
	if (cr6.eq) goto loc_82C1BD50;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x82C1BCF4;
	sub_825A1EB8(ctx, base);
	// stw r23,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r23.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cb28
	ctx.lr = 0x82C1BD14;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x82C1BD28;
	sub_825A1DA8(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1bd44
	if (cr6.lt) goto loc_82C1BD44;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82C1BD44;
	sub_825952B8(ctx, base);
loc_82C1BD44:
	// stw r23,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r23.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
loc_82C1BD50:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// ble cr6,0x82c1bd88
	if (!cr6.gt) goto loc_82C1BD88;
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x82C1BD68;
	sub_825A1EB8(ctx, base);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x82C1BD78;
	sub_825A1EB8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x82C1BD88;
	sub_825A1EB8(ctx, base);
loc_82C1BD88:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291fdc8
	ctx.lr = 0x82C1BD94;
	sub_8291FDC8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825a1da8
	ctx.lr = 0x82C1BDA8;
	sub_825A1DA8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1bdc4
	if (cr6.lt) goto loc_82C1BDC4;
	// stw r19,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r19.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
loc_82C1BDBC:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82C1BDC4;
	sub_825952B8(ctx, base);
loc_82C1BDC4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, xer);
	// blt cr6,0x82c1bc1c
	if (cr6.lt) goto loc_82C1BC1C;
loc_82C1BDE0:
	// addi r27,r21,100
	ctx.r27.s64 = ctx.r21.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C1BDF8;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1be2c
	if (cr6.eq) goto loc_82C1BE2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82d291e0
	ctx.lr = 0x82C1BE14;
	sub_82D291E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d285f8
	ctx.lr = 0x82C1BE1C;
	sub_82D285F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1be2c
	if (!cr6.eq) goto loc_82C1BE2C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C1BE2C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1bec4
	if (cr6.eq) goto loc_82C1BEC4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c1bec4
	if (cr6.eq) goto loc_82C1BEC4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d281d0
	ctx.lr = 0x82C1BE4C;
	sub_82D281D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C1BE60;
	sub_82D291E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d28248
	ctx.lr = 0x82C1BE68;
	sub_82D28248(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C1BE7C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c074
	if (cr6.eq) goto loc_82C1C074;
loc_82C1BE84:
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c1be98
	if (cr6.eq) goto loc_82C1BE98;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1BE98;
	sub_82D2AEC8(ctx, base);
loc_82C1BE98:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C1BEAC;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c1be84
	if (!cr6.eq) goto loc_82C1BE84;
	// b 0x82c1c074
	goto loc_82C1C074;
loc_82C1BEB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82C1BEC4;
	sub_831CC188(ctx, base);
loc_82C1BEC4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82d2d510
	ctx.lr = 0x82C1BEF0;
	sub_82D2D510(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1bf40
	if (cr6.eq) goto loc_82C1BF40;
loc_82C1BEFC:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x82c1bf14
	if (!cr6.lt) goto loc_82C1BF14;
	// addi r3,r20,1548
	ctx.r3.s64 = ctx.r20.s64 + 1548;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x835977d8
	ctx.lr = 0x82C1BF10;
	sub_835977D8(ctx, base);
	// b 0x82c1bf20
	goto loc_82C1BF20;
loc_82C1BF14:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1BF20;
	sub_82D2AEC8(ctx, base);
loc_82C1BF20:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C1BF34;
	sub_82D2D510(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c1befc
	if (!cr6.eq) goto loc_82C1BEFC;
loc_82C1BF40:
	// lwz r11,1548(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1548);
	// addi r28,r20,1548
	ctx.r28.s64 = ctx.r20.s64 + 1548;
	// lwz r10,1552(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1552);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x82c1bf9c
	if (!cr6.gt) goto loc_82C1BF9C;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c1bf9c
	if (cr6.eq) goto loc_82C1BF9C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x82C1BF84;
	sub_83915A50(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x838adab0
	ctx.lr = 0x82C1BF98;
	sub_838ADAB0(ctx, base);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
loc_82C1BF9C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c1c074
	if (cr6.eq) goto loc_82C1C074;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82c1c074
	if (cr6.eq) goto loc_82C1C074;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82d2d510
	ctx.lr = 0x82C1BFE4;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// beq cr6,0x82c1c020
	if (cr6.eq) goto loc_82C1C020;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1C004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C1C01C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c1c054
	goto loc_82C1C054;
loc_82C1C020:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C1C038;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x830ff290
	ctx.lr = 0x82C1C03C;
	sub_830FF290(ctx, base);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// std r7,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r7.u64);
	// lfd f0,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_82C1C054:
	// lfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fadds f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f2,1568(r20)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r20.u32 + 1568, temp.u32);
	// stfs f1,1564(r20)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + 1564, temp.u32);
	// bl 0x82d337c0
	ctx.lr = 0x82C1C074;
	sub_82D337C0(ctx, base);
loc_82C1C074:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1c090
	if (cr6.lt) goto loc_82C1C090;
	// stw r19,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82C1C090;
	sub_825952B8(ctx, base);
loc_82C1C090:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// beq cr6,0x82c1c0c8
	if (cr6.eq) goto loc_82C1C0C8;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x838adab0
	ctx.lr = 0x82C1C0B8;
	sub_838ADAB0(ctx, base);
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C1C0C8;
	sub_825952B8(ctx, base);
loc_82C1C0C8:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// beq cr6,0x82c1c0ec
	if (cr6.eq) goto loc_82C1C0EC;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825952b8
	ctx.lr = 0x82C1C0EC;
	sub_825952B8(ctx, base);
loc_82C1C0EC:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1C0F4"))) PPC_WEAK_FUNC(sub_82C1C0F4);
PPC_FUNC_IMPL(__imp__sub_82C1C0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1C0F8"))) PPC_WEAK_FUNC(sub_82C1C0F8);
PPC_FUNC_IMPL(__imp__sub_82C1C0F8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c1c130
	if (!cr6.lt) goto loc_82C1C130;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82c1c134
	if (!cr6.gt) goto loc_82C1C134;
loc_82C1C130:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C1C134:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1c18c
	if (cr6.eq) goto loc_82C1C18C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,144
	ctx.r9.s64 = 144;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82c1c168
	if (!cr6.eq) goto loc_82C1C168;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1ba98
	ctx.lr = 0x82C1C168;
	sub_82C1BA98(ctx, base);
loc_82C1C168:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c1b8
	if (cr6.eq) goto loc_82C1C1B8;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82c1c1b4
	goto loc_82C1C1B4;
loc_82C1C18C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c1c1a4
	if (!cr6.eq) goto loc_82C1C1A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1ba98
	ctx.lr = 0x82C1C1A4;
	sub_82C1BA98(ctx, base);
loc_82C1C1A4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c1b8
	if (cr6.eq) goto loc_82C1C1B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82C1C1B4:
	// bl 0x82c16e60
	ctx.lr = 0x82C1C1B8;
	sub_82C16E60(ctx, base);
loc_82C1C1B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C1C1DC"))) PPC_WEAK_FUNC(sub_82C1C1DC);
PPC_FUNC_IMPL(__imp__sub_82C1C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1C1E0"))) PPC_WEAK_FUNC(sub_82C1C1E0);
PPC_FUNC_IMPL(__imp__sub_82C1C1E0) {
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
	ctx.lr = 0x82C1C1E8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,273
	ctx.r10.s64 = 17891328;
	// lis r11,641
	ctx.r11.s64 = 42008576;
	// lis r9,279
	ctx.r9.s64 = 18284544;
	// lis r8,274
	ctx.r8.s64 = 17956864;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// ori r11,r11,178
	ctx.r11.u64 = ctx.r11.u64 | 178;
	// ori r9,r9,243
	ctx.r9.u64 = ctx.r9.u64 | 243;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// ori r8,r8,862
	ctx.r8.u64 = ctx.r8.u64 | 862;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r7,660
	ctx.r7.s64 = 43253760;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lis r5,230
	ctx.r5.s64 = 15073280;
	// ori r10,r7,470
	ctx.r10.u64 = ctx.r7.u64 | 470;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r9,r6,106
	ctx.r9.u64 = ctx.r6.u64 | 106;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// ori r8,r5,133
	ctx.r8.u64 = ctx.r5.u64 | 133;
	// lis r4,660
	ctx.r4.s64 = 43253760;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lis r3,277
	ctx.r3.s64 = 18153472;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r7,16
	ctx.r7.s64 = 16;
	// lis r30,278
	ctx.r30.s64 = 18219008;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r29,29
	ctx.r29.s64 = 1900544;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// lis r27,29
	ctx.r27.s64 = 1900544;
	// lis r26,660
	ctx.r26.s64 = 43253760;
	// lis r25,231
	ctx.r25.s64 = 15138816;
	// ori r6,r4,433
	ctx.r6.u64 = ctx.r4.u64 | 433;
	// ori r5,r3,158
	ctx.r5.u64 = ctx.r3.u64 | 158;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// ori r4,r30,423
	ctx.r4.u64 = ctx.r30.u64 | 423;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r3,19
	ctx.r3.s64 = 19;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// ori r11,r29,603
	ctx.r11.u64 = ctx.r29.u64 | 603;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// ori r9,r27,245
	ctx.r9.u64 = ctx.r27.u64 | 245;
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// ori r8,r26,403
	ctx.r8.u64 = ctx.r26.u64 | 403;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// ori r7,r25,7
	ctx.r7.u64 = ctx.r25.u64 | 7;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// li r16,-1
	ctx.r16.s64 = -1;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// bl 0x82f06520
	ctx.lr = 0x82C1C2E0;
	sub_82F06520(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r15,r11,-22636
	ctx.r15.s64 = ctx.r11.s64 + -22636;
	// beq cr6,0x82c1c4d0
	if (cr6.eq) goto loc_82C1C4D0;
	// bl 0x82f05490
	ctx.lr = 0x82C1C2F8;
	sub_82F05490(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c4d0
	if (cr6.eq) goto loc_82C1C4D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f05490
	ctx.lr = 0x82C1C308;
	sub_82F05490(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c8bc
	if (cr6.eq) goto loc_82C1C8BC;
	// li r14,1
	ctx.r14.s64 = 1;
loc_82C1C31C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f054a8
	ctx.lr = 0x82C1C328;
	sub_82F054A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c4a8
	if (cr6.eq) goto loc_82C1C4A8;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82c16e60
	ctx.lr = 0x82C1C33C;
	sub_82C16E60(ctx, base);
	// lwz r11,972(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
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
	// beq cr6,0x82c1c368
	if (cr6.eq) goto loc_82C1C368;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,956
	ctx.r4.s64 = ctx.r1.s64 + 956;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x825a1da8
	ctx.lr = 0x82C1C368;
	sub_825A1DA8(ctx, base);
loc_82C1C368:
	// lwz r11,896(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bgt cr6,0x82c1c43c
	if (cr6.gt) goto loc_82C1C43C;
	// beq cr6,0x82c1c41c
	if (cr6.eq) goto loc_82C1C41C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82c1c3ec
	if (cr6.lt) goto loc_82C1C3EC;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x82c1c44c
	if (!cr6.lt) goto loc_82C1C44C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df16e0
	ctx.lr = 0x82C1C390;
	sub_82DF16E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1c3e4
	if (!cr6.eq) goto loc_82C1C3E4;
	// bl 0x82c16268
	ctx.lr = 0x82C1C3A0;
	sub_82C16268(ctx, base);
	// stw r3,1504(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1504, ctx.r3.u32);
	// bl 0x831021a0
	ctx.lr = 0x82C1C3A8;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82C1C3B0;
	sub_82DA45F8(ctx, base);
	// lwz r11,1504(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1504);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1c494
	if (cr6.eq) goto loc_82C1C494;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c494
	if (cr6.eq) goto loc_82C1C494;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f07ba8
	ctx.lr = 0x82C1C3D0;
	sub_82F07BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1504(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1504);
	// bl 0x83103100
	ctx.lr = 0x82C1C3DC;
	sub_83103100(ctx, base);
	// stw r14,1496(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1496, ctx.r14.u32);
	// b 0x82c1c494
	goto loc_82C1C494;
loc_82C1C3E4:
	// stw r28,1496(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1496, ctx.r28.u32);
	// b 0x82c1c494
	goto loc_82C1C494;
loc_82C1C3EC:
	// lwz r11,1500(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1c494
	if (!cr6.eq) goto loc_82C1C494;
	// bl 0x82c16208
	ctx.lr = 0x82C1C3FC;
	sub_82C16208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,1500(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1500, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c494
	if (cr6.eq) goto loc_82C1C494;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83103100
	ctx.lr = 0x82C1C414;
	sub_83103100(ctx, base);
	// stw r14,1492(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1492, ctx.r14.u32);
	// b 0x82c1c494
	goto loc_82C1C494;
loc_82C1C41C:
	// lhz r3,1016(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1016);
	// bl 0x82c16330
	ctx.lr = 0x82C1C424;
	sub_82C16330(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x82c1c430
	if (!cr6.eq) goto loc_82C1C430;
	// stb r14,1028(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1028, ctx.r14.u8);
loc_82C1C430:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r15
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// b 0x82c1c48c
	goto loc_82C1C48C;
loc_82C1C43C:
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// beq cr6,0x82c1c488
	if (cr6.eq) goto loc_82C1C488;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// beq cr6,0x82c1c470
	if (cr6.eq) goto loc_82C1C470;
loc_82C1C44C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82a672c8
	ctx.lr = 0x82C1C454;
	sub_82A672C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r15
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// bl 0x82d20ae0
	ctx.lr = 0x82C1C468;
	sub_82D20AE0(ctx, base);
	// stw r31,984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 984, ctx.r31.u32);
	// b 0x82c1c494
	goto loc_82C1C494;
loc_82C1C470:
	// lwz r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 984);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82c1c494
	if (!cr6.lt) goto loc_82C1C494;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r15
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// b 0x82c1c48c
	goto loc_82C1C48C;
loc_82C1C488:
	// lwz r4,20(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
loc_82C1C48C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82C1C494;
	sub_82D20AE0(ctx, base);
loc_82C1C494:
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// addi r3,r23,1524
	ctx.r3.s64 = ctx.r23.s64 + 1524;
	// bl 0x82c1c0f8
	ctx.lr = 0x82C1C4A0;
	sub_82C1C0F8(ctx, base);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82c16c98
	ctx.lr = 0x82C1C4A8;
	sub_82C16C98(ctx, base);
loc_82C1C4A8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x82c1c31c
	if (cr6.lt) goto loc_82C1C31C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,36(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 36);
	// bl 0x82d20ae0
	ctx.lr = 0x82C1C4C8;
	sub_82D20AE0(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82C1C4D0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// stb r31,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r31.u8);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// ld r11,-21808(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -21808);
	// li r7,26
	ctx.r7.s64 = 26;
	// ld r8,-21744(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -21744);
	// ori r9,r6,65535
	ctx.r9.u64 = ctx.r6.u64 | 65535;
	// lwz r10,-21760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21760);
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// std r11,316(r1)
	PPC_STORE_U64(ctx.r1.u32 + 316, ctx.r11.u64);
	// std r11,324(r1)
	PPC_STORE_U64(ctx.r1.u32 + 324, ctx.r11.u64);
	// std r8,348(r1)
	PPC_STORE_U64(ctx.r1.u32 + 348, ctx.r8.u64);
	// std r11,460(r1)
	PPC_STORE_U64(ctx.r1.u32 + 460, ctx.r11.u64);
	// std r11,468(r1)
	PPC_STORE_U64(ctx.r1.u32 + 468, ctx.r11.u64);
	// std r8,492(r1)
	PPC_STORE_U64(ctx.r1.u32 + 492, ctx.r8.u64);
	// std r11,604(r1)
	PPC_STORE_U64(ctx.r1.u32 + 604, ctx.r11.u64);
	// std r11,612(r1)
	PPC_STORE_U64(ctx.r1.u32 + 612, ctx.r11.u64);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stb r31,284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 284, ctx.r31.u8);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r31,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r31.u8);
	// stb r31,334(r1)
	PPC_STORE_U8(ctx.r1.u32 + 334, ctx.r31.u8);
	// stb r31,335(r1)
	PPC_STORE_U8(ctx.r1.u32 + 335, ctx.r31.u8);
	// stw r10,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// sth r9,344(r1)
	PPC_STORE_U16(ctx.r1.u32 + 344, ctx.r9.u16);
	// stb r31,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, ctx.r31.u8);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r31.u32);
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// stb r31,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, ctx.r31.u8);
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r31.u32);
	// stb r31,428(r1)
	PPC_STORE_U8(ctx.r1.u32 + 428, ctx.r31.u8);
	// stw r31,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r31.u32);
	// stb r31,476(r1)
	PPC_STORE_U8(ctx.r1.u32 + 476, ctx.r31.u8);
	// stb r31,477(r1)
	PPC_STORE_U8(ctx.r1.u32 + 477, ctx.r31.u8);
	// stb r31,478(r1)
	PPC_STORE_U8(ctx.r1.u32 + 478, ctx.r31.u8);
	// stw r10,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r10.u32);
	// stb r31,479(r1)
	PPC_STORE_U8(ctx.r1.u32 + 479, ctx.r31.u8);
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// sth r9,488(r1)
	PPC_STORE_U16(ctx.r1.u32 + 488, ctx.r9.u16);
	// stb r31,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, ctx.r31.u8);
	// stw r31,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r31.u32);
	// stw r31,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r31.u32);
	// stw r7,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r7.u32);
	// stw r30,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r30.u32);
	// stw r31,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r31.u32);
	// stb r31,516(r1)
	PPC_STORE_U8(ctx.r1.u32 + 516, ctx.r31.u8);
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// stw r30,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r30.u32);
	// stw r31,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r31.u32);
	// stb r31,572(r1)
	PPC_STORE_U8(ctx.r1.u32 + 572, ctx.r31.u8);
	// stw r31,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r31.u32);
	// stb r31,620(r1)
	PPC_STORE_U8(ctx.r1.u32 + 620, ctx.r31.u8);
	// stb r31,621(r1)
	PPC_STORE_U8(ctx.r1.u32 + 621, ctx.r31.u8);
	// stb r31,622(r1)
	PPC_STORE_U8(ctx.r1.u32 + 622, ctx.r31.u8);
	// stb r31,623(r1)
	PPC_STORE_U8(ctx.r1.u32 + 623, ctx.r31.u8);
	// stw r10,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r10.u32);
	// stw r10,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r10.u32);
	// sth r9,632(r1)
	PPC_STORE_U16(ctx.r1.u32 + 632, ctx.r9.u16);
	// std r8,636(r1)
	PPC_STORE_U64(ctx.r1.u32 + 636, ctx.r8.u64);
	// stb r31,644(r1)
	PPC_STORE_U8(ctx.r1.u32 + 644, ctx.r31.u8);
	// stw r31,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r31.u32);
	// std r11,748(r1)
	PPC_STORE_U64(ctx.r1.u32 + 748, ctx.r11.u64);
	// addi r21,r23,1524
	ctx.r21.s64 = ctx.r23.s64 + 1524;
	// std r11,756(r1)
	PPC_STORE_U64(ctx.r1.u32 + 756, ctx.r11.u64);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r31.u32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r7,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r7.u32);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r30.u32);
	// addi r25,r1,132
	ctx.r25.s64 = ctx.r1.s64 + 132;
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// li r14,1
	ctx.r14.s64 = 1;
	// stb r31,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r31.u8);
	// li r17,27
	ctx.r17.s64 = 27;
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// li r19,25
	ctx.r19.s64 = 25;
	// stw r31,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r31.u32);
	// li r20,23
	ctx.r20.s64 = 23;
	// stb r31,688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 688, ctx.r31.u8);
	// addi r18,r11,-18004
	ctx.r18.s64 = ctx.r11.s64 + -18004;
	// stw r30,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r30.u32);
	// stw r31,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r31.u32);
	// stb r31,716(r1)
	PPC_STORE_U8(ctx.r1.u32 + 716, ctx.r31.u8);
	// stw r31,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r31.u32);
	// stw r10,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r10.u32);
	// stw r10,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r10.u32);
	// stb r31,764(r1)
	PPC_STORE_U8(ctx.r1.u32 + 764, ctx.r31.u8);
	// stb r31,765(r1)
	PPC_STORE_U8(ctx.r1.u32 + 765, ctx.r31.u8);
	// stb r31,766(r1)
	PPC_STORE_U8(ctx.r1.u32 + 766, ctx.r31.u8);
	// stb r31,767(r1)
	PPC_STORE_U8(ctx.r1.u32 + 767, ctx.r31.u8);
	// sth r9,776(r1)
	PPC_STORE_U16(ctx.r1.u32 + 776, ctx.r9.u16);
	// std r8,780(r1)
	PPC_STORE_U64(ctx.r1.u32 + 780, ctx.r8.u64);
	// stb r31,788(r1)
	PPC_STORE_U8(ctx.r1.u32 + 788, ctx.r31.u8);
	// stw r31,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r31.u32);
	// stw r31,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r31.u32);
loc_82C1C6A0:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// stw r30,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r30.u32);
	// stw r31,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r31.u32);
	// stb r31,828(r1)
	PPC_STORE_U8(ctx.r1.u32 + 828, ctx.r31.u8);
	// stw r30,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r30.u32);
	// stw r31,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r31.u32);
	// stb r31,856(r1)
	PPC_STORE_U8(ctx.r1.u32 + 856, ctx.r31.u8);
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82d04220
	ctx.lr = 0x82C1C6DC;
	sub_82D04220(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// add r26,r24,r11
	ctx.r26.u64 = ctx.r24.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r27,r26,88
	ctx.r27.s64 = ctx.r26.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,-84
	ctx.r3.s64 = ctx.r27.s64 + -84;
	// bl 0x8259cb28
	ctx.lr = 0x82C1C6FC;
	sub_8259CB28(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r29,r1,800
	ctx.r29.s64 = ctx.r1.s64 + 800;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
loc_82C1C708:
	// add r10,r22,r28
	ctx.r10.u64 = ctx.r22.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c1c73c
	if (cr6.eq) goto loc_82C1C73C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d04220
	ctx.lr = 0x82C1C724;
	sub_82D04220(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r24,r11
	ctx.r3.u64 = ctx.r24.u64 + ctx.r11.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82C1C73C;
	sub_825A1DA8(ctx, base);
loc_82C1C73C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// blt cr6,0x82c1c708
	if (cr6.lt) goto loc_82C1C708;
	// lwz r11,-4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82c1c818
	if (cr6.gt) goto loc_82C1C818;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82c1c7d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C1C7D0;
	// bdzf 4*cr6+eq,0x82c1c7f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82C1C7F4;
	// bne cr6,0x82c1c7f0
	if (!cr6.eq) goto loc_82C1C7F0;
	// lwz r11,1500(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1500);
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1c818
	if (!cr6.eq) goto loc_82C1C818;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82C1C794;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1c7b0
	if (cr6.eq) goto loc_82C1C7B0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82cdd6d8
	ctx.lr = 0x82C1C7A8;
	sub_82CDD6D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82c1c7b4
	goto loc_82C1C7B4;
loc_82C1C7B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82C1C7B4:
	// stw r4,1500(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1500, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82c1c818
	if (cr6.eq) goto loc_82C1C818;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83103100
	ctx.lr = 0x82C1C7C8;
	sub_83103100(ctx, base);
	// stw r14,1492(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1492, ctx.r14.u32);
	// b 0x82c1c818
	goto loc_82C1C818;
loc_82C1C7D0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r19,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r19.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bge cr6,0x82c1c818
	if (!cr6.lt) goto loc_82C1C818;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r15
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// b 0x82c1c810
	goto loc_82C1C810;
loc_82C1C7F0:
	// stb r14,44(r27)
	PPC_STORE_U8(ctx.r27.u32 + 44, ctx.r14.u8);
loc_82C1C7F4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r20,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r20.u32);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r3,32(r27)
	PPC_STORE_U16(ctx.r27.u32 + 32, ctx.r3.u16);
	// bl 0x82c16330
	ctx.lr = 0x82C1C808;
	sub_82C16330(ctx, base);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r15
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r15.u32);
loc_82C1C810:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d20ae0
	ctx.lr = 0x82C1C818;
	sub_82D20AE0(ctx, base);
loc_82C1C818:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82c1c0f8
	ctx.lr = 0x82C1C824;
	sub_82C1C0F8(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r29,r1,884
	ctx.r29.s64 = ctx.r1.s64 + 884;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82C1C830:
	// addi r29,r29,-28
	ctx.r29.s64 = ctx.r29.s64 + -28;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1c850
	if (cr6.lt) goto loc_82C1C850;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C1C850;
	sub_825952B8(ctx, base);
loc_82C1C850:
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bge 0x82c1c830
	if (!cr0.lt) goto loc_82C1C830;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1c880
	if (cr6.lt) goto loc_82C1C880;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82C1C880;
	sub_825952B8(ctx, base);
loc_82C1C880:
	// addi r22,r22,6
	ctx.r22.s64 = ctx.r22.s64 + 6;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r24,r24,144
	ctx.r24.s64 = ctx.r24.s64 + 144;
	// cmplwi cr6,r22,24
	cr6.compare<uint32_t>(ctx.r22.u32, 24, xer);
	// blt cr6,0x82c1c6a0
	if (cr6.lt) goto loc_82C1C6A0;
	// addi r31,r1,800
	ctx.r31.s64 = ctx.r1.s64 + 800;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82C1C8A8:
	// addi r31,r31,-144
	ctx.r31.s64 = ctx.r31.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16c98
	ctx.lr = 0x82C1C8B4;
	sub_82C16C98(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82c1c8a8
	if (!cr0.lt) goto loc_82C1C8A8;
loc_82C1C8BC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,36(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 36);
	// bl 0x82d20ae0
	ctx.lr = 0x82C1C8C8;
	sub_82D20AE0(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1C8D0"))) PPC_WEAK_FUNC(sub_82C1C8D0);
PPC_FUNC_IMPL(__imp__sub_82C1C8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C1C8D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cddca0
	ctx.lr = 0x82C1C8E8;
	sub_82CDDCA0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-17952
	ctx.r9.s64 = ctx.r11.s64 + -17952;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x8242a638
	ctx.lr = 0x82C1C904;
	sub_8242A638(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r3.u32);
	// std r11,1424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1424, ctx.r11.u64);
	// li r7,-1
	ctx.r7.s64 = -1;
	// std r11,1432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1432, ctx.r11.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r30,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// addi r11,r31,1468
	ctx.r11.s64 = ctx.r31.s64 + 1468;
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// addi r29,r31,1524
	ctx.r29.s64 = ctx.r31.s64 + 1524;
	// sth r7,1454(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1454, ctx.r7.u16);
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// stb r30,1460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1460, ctx.r30.u8);
	// lfs f0,9008(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,1461(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1461, ctx.r30.u8);
	// stb r6,1462(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1462, ctx.r6.u8);
	// stw r30,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r30.u32);
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
	// stw r30,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r30.u32);
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r30,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stw r30,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stw r30,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r30.u32);
	// stw r30,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r30.u32);
	// stb r30,1540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1540, ctx.r30.u8);
	// stw r30,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r30.u32);
	// stw r30,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r30.u32);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// stw r30,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r30.u32);
	// stfs f0,1564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// stfs f0,1568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1568, temp.u32);
	// stb r30,1572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1572, ctx.r30.u8);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// lwz r4,1528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// lwz r5,1524(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c1c9e8
	if (cr6.eq) goto loc_82C1C9E8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c19180
	ctx.lr = 0x82C1C9D4;
	sub_82C19180(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82c16f80
	ctx.lr = 0x82C1C9E4;
	sub_82C16F80(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_82C1C9E8:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-22648
	ctx.r29.s64 = ctx.r11.s64 + -22648;
	// lwz r4,-22648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22648);
	// bl 0x82d20ae0
	ctx.lr = 0x82C1C9FC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82C1CA08;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d23390
	ctx.lr = 0x82C1CA18;
	sub_82D23390(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82C1CA1C;
	sub_830FF290(ctx, base);
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x830ff290
	ctx.lr = 0x82C1CA24;
	sub_830FF290(ctx, base);
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f0,-22020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -22020);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x82c1ca64
	if (!cr6.lt) goto loc_82C1CA64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82C1CA64:
	// stb r30,1452(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1452, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1c1e0
	ctx.lr = 0x82C1CA70;
	sub_82C1C1E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1CA7C"))) PPC_WEAK_FUNC(sub_82C1CA7C);
PPC_FUNC_IMPL(__imp__sub_82C1CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1CA80"))) PPC_WEAK_FUNC(sub_82C1CA80);
PPC_FUNC_IMPL(__imp__sub_82C1CA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C1CA88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1592
	ctx.r4.s64 = 1592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82C1CAB4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1cad8
	if (cr6.eq) goto loc_82C1CAD8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c1c8d0
	ctx.lr = 0x82C1CAD0;
	sub_82C1C8D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C1CAD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1CAE4"))) PPC_WEAK_FUNC(sub_82C1CAE4);
PPC_FUNC_IMPL(__imp__sub_82C1CAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1CAE8"))) PPC_WEAK_FUNC(sub_82C1CAE8);
PPC_FUNC_IMPL(__imp__sub_82C1CAE8) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82C1CAF8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1cb04
	if (cr6.eq) goto loc_82C1CB04;
	// bl 0x83763ea8
	ctx.lr = 0x82C1CB04;
	sub_83763EA8(ctx, base);
loc_82C1CB04:
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

__attribute__((alias("__imp__sub_82C1CB18"))) PPC_WEAK_FUNC(sub_82C1CB18);
PPC_FUNC_IMPL(__imp__sub_82C1CB18) {
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
	// li r11,27
	ctx.r11.s64 = 27;
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
	ctx.lr = 0x82C1CB48;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1cb94
	if (cr6.eq) goto loc_82C1CB94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83103328
	ctx.lr = 0x82C1CB5C;
	sub_83103328(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-17184
	ctx.r8.s64 = ctx.r10.s64 + -17184;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r11,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r11.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x83768598
	ctx.lr = 0x82C1CB8C;
	sub_83768598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c1cb98
	goto loc_82C1CB98;
loc_82C1CB94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C1CB98:
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

__attribute__((alias("__imp__sub_82C1CBB0"))) PPC_WEAK_FUNC(sub_82C1CBB0);
PPC_FUNC_IMPL(__imp__sub_82C1CBB0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1cbe0
	if (cr6.eq) goto loc_82C1CBE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1CBE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1CBE0:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,-17292
	ctx.r3.s64 = ctx.r10.s64 + -17292;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8377e380
	ctx.lr = 0x82C1CC14;
	sub_8377E380(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C1CC24;
	sub_83103100(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82C1CC40"))) PPC_WEAK_FUNC(sub_82C1CC40);
PPC_FUNC_IMPL(__imp__sub_82C1CC40) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-17184
	ctx.r10.s64 = ctx.r11.s64 + -17184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x82C1CC6C;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c1cc84
	if (cr6.eq) goto loc_82C1CC84;
	// bl 0x82416268
	ctx.lr = 0x82C1CC80;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C1CC84:
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

__attribute__((alias("__imp__sub_82C1CC9C"))) PPC_WEAK_FUNC(sub_82C1CC9C);
PPC_FUNC_IMPL(__imp__sub_82C1CC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1CCA0"))) PPC_WEAK_FUNC(sub_82C1CCA0);
PPC_FUNC_IMPL(__imp__sub_82C1CCA0) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82c1cdd4
	if (cr6.gt) goto loc_82C1CDD4;
	// lis r12,-32062
	ctx.r12.s64 = -2101215232;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13088
	ctx.r12.s64 = ctx.r12.s64 + -13088;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82C1CD08;
	case 1:
		goto loc_82C1CD58;
	case 2:
		goto loc_82C1CD1C;
	case 3:
		goto loc_82C1CD44;
	case 4:
		goto loc_82C1CDD4;
	case 5:
		goto loc_82C1CDD4;
	case 6:
		goto loc_82C1CDD4;
	case 7:
		goto loc_82C1CDD4;
	case 8:
		goto loc_82C1CDD4;
	case 9:
		goto loc_82C1CD98;
	default:
		return;
	}
	// lwz r22,-13048(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13048);
	// lwz r22,-12968(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12968);
	// lwz r22,-13028(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13028);
	// lwz r22,-12988(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12988);
	// lwz r22,-12844(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12844);
	// lwz r22,-12844(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12844);
	// lwz r22,-12844(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12844);
	// lwz r22,-12844(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12844);
	// lwz r22,-12844(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12844);
	// lwz r22,-12904(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12904);
loc_82C1CD08:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r11.u8);
	// bl 0x82c1cbb0
	ctx.lr = 0x82C1CD18;
	sub_82C1CBB0(ctx, base);
	// b 0x82c1cdd4
	goto loc_82C1CDD4;
loc_82C1CD1C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-17308
	ctx.r11.s64 = ctx.r11.s64 + -17308;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f8b8
	ctx.lr = 0x82C1CD38;
	sub_82D2F8B8(ctx, base);
	// lis r4,230
	ctx.r4.s64 = 15073280;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// b 0x82c1cdb8
	goto loc_82C1CDB8;
loc_82C1CD44:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// b 0x82c1cdd4
	goto loc_82C1CDD4;
loc_82C1CD58:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,-17308
	ctx.r11.s64 = ctx.r11.s64 + -17308;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f8b8
	ctx.lr = 0x82C1CD74;
	sub_82D2F8B8(ctx, base);
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,632
	ctx.r4.u64 = ctx.r4.u64 | 632;
	// bl 0x82d2ada8
	ctx.lr = 0x82C1CD84;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C1CD90;
	sub_83103100(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x82c1cdd0
	goto loc_82C1CDD0;
loc_82C1CD98:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-17308
	ctx.r3.s64 = ctx.r11.s64 + -17308;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f8b8
	ctx.lr = 0x82C1CDB0;
	sub_82D2F8B8(ctx, base);
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// ori r4,r4,637
	ctx.r4.u64 = ctx.r4.u64 | 637;
loc_82C1CDB8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82C1CDC0;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82C1CDCC;
	sub_83103100(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
loc_82C1CDD0:
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_82C1CDD4:
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

__attribute__((alias("__imp__sub_82C1CDEC"))) PPC_WEAK_FUNC(sub_82C1CDEC);
PPC_FUNC_IMPL(__imp__sub_82C1CDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1CDF0"))) PPC_WEAK_FUNC(sub_82C1CDF0);
PPC_FUNC_IMPL(__imp__sub_82C1CDF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C1CDF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82C1CE04;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83763fa0
	ctx.lr = 0x82C1CE14;
	sub_83763FA0(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r11,r11,-21660
	ctx.r11.s64 = ctx.r11.s64 + -21660;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1ce38
	if (!cr6.eq) goto loc_82C1CE38;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82c1ce60
	goto loc_82C1CE60;
loc_82C1CE38:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c1ce58
	if (!cr6.eq) goto loc_82C1CE58;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82c1ce5c
	if (cr6.eq) goto loc_82C1CE5C;
loc_82C1CE58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C1CE5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82C1CE60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1ce80
	if (cr6.eq) goto loc_82C1CE80;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C1CE80:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831cdcf0
	ctx.lr = 0x82C1CE90;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x82C1CEA0;
	sub_831CDCF0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82C1CEA4;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82C1CEAC;
	sub_831156E8(ctx, base);
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r30,60(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ldx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r10.u32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x8311bd68
	ctx.lr = 0x82C1CED0;
	sub_8311BD68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c1ceec
	if (!cr6.eq) goto loc_82C1CEEC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C1CEEC:
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837739f0
	ctx.lr = 0x82C1CF04;
	sub_837739F0(ctx, base);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// bl 0x8311d1d0
	ctx.lr = 0x82C1CF14;
	sub_8311D1D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a78580
	ctx.lr = 0x82C1CF24;
	sub_82A78580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825a10c0
	ctx.lr = 0x82C1CF34;
	sub_825A10C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x83777a60
	ctx.lr = 0x82C1CF44;
	sub_83777A60(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1CF4C"))) PPC_WEAK_FUNC(sub_82C1CF4C);
PPC_FUNC_IMPL(__imp__sub_82C1CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1CF50"))) PPC_WEAK_FUNC(sub_82C1CF50);
PPC_FUNC_IMPL(__imp__sub_82C1CF50) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82c1d010
	if (!cr6.eq) goto loc_82C1D010;
	// bl 0x82c1cdf0
	ctx.lr = 0x82C1CF74;
	sub_82C1CDF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d020
	if (cr6.eq) goto loc_82C1D020;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1cf9c
	if (cr6.eq) goto loc_82C1CF9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1CF9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82C1CF9C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,-17360
	ctx.r3.s64 = ctx.r11.s64 + -17360;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8377e968
	ctx.lr = 0x82C1CFB8;
	sub_8377E968(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x82C1CFCC;
	sub_83103100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// li r7,84
	ctx.r7.s64 = 84;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stb r8,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r8.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x8314cbe8
	ctx.lr = 0x82C1CFFC;
	sub_8314CBE8(ctx, base);
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
loc_82C1D010:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82c1d020
	if (!cr6.eq) goto loc_82C1D020;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82C1D020:
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

__attribute__((alias("__imp__sub_82C1D034"))) PPC_WEAK_FUNC(sub_82C1D034);
PPC_FUNC_IMPL(__imp__sub_82C1D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1D038"))) PPC_WEAK_FUNC(sub_82C1D038);
PPC_FUNC_IMPL(__imp__sub_82C1D038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,265
	ctx.r9.s64 = 17367040;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82c1d104
	if (cr6.gt) goto loc_82C1D104;
	// beq cr6,0x82c1d0b0
	if (cr6.eq) goto loc_82C1D0B0;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r8,r9,9
	ctx.r8.u64 = ctx.r9.u64 | 9;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82c1d0f4
	if (!cr6.eq) goto loc_82C1D0F4;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,-9
	ctx.r10.s64 = ctx.r10.s64 + -9;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r8,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r8.u8);
	// subfic r6,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// stb r7,77(r11)
	PPC_STORE_U8(ctx.r11.u32 + 77, ctx.r7.u8);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 & ctx.r9.u64;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C1D0B0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x82c1d0e0
	if (cr6.eq) goto loc_82C1D0E0;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82c1d0f4
	if (!cr6.eq) goto loc_82C1D0F4;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C1D0E0:
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// bl 0x82c1cf50
	ctx.lr = 0x82C1D0F0;
	sub_82C1CF50(ctx, base);
loc_82C1D0F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C1D0F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C1D104:
	// lis r9,265
	ctx.r9.s64 = 17367040;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82c1d0f0
	if (cr6.lt) goto loc_82C1D0F0;
	// lis r9,265
	ctx.r9.s64 = 17367040;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r8,r9,3
	ctx.r8.u64 = ctx.r9.u64 | 3;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82c1d0f4
	if (cr6.gt) goto loc_82C1D0F4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C1D140"))) PPC_WEAK_FUNC(sub_82C1D140);
PPC_FUNC_IMPL(__imp__sub_82C1D140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C1D148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1d214
	if (cr6.eq) goto loc_82C1D214;
	// bl 0x82d2aff8
	ctx.lr = 0x82C1D168;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// beq cr6,0x82c1d194
	if (cr6.eq) goto loc_82C1D194;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d18c
	if (cr6.eq) goto loc_82C1D18C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d1b8
	if (cr6.eq) goto loc_82C1D1B8;
loc_82C1D18C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c1d1ac
	goto loc_82C1D1AC;
loc_82C1D194:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1d1a8
	if (!cr6.eq) goto loc_82C1D1A8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d1b8
	if (cr6.eq) goto loc_82C1D1B8;
loc_82C1D1A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C1D1AC:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1D1B8;
	sub_82D2AEC8(ctx, base);
loc_82C1D1B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b038
	ctx.lr = 0x82C1D1C0;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// beq cr6,0x82c1d1ec
	if (cr6.eq) goto loc_82C1D1EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d1e4
	if (cr6.eq) goto loc_82C1D1E4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d214
	if (cr6.eq) goto loc_82C1D214;
loc_82C1D1E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c1d204
	goto loc_82C1D204;
loc_82C1D1EC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1d200
	if (!cr6.eq) goto loc_82C1D200;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d214
	if (cr6.eq) goto loc_82C1D214;
loc_82C1D200:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C1D204:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82C1D214;
	sub_82D2B608(ctx, base);
loc_82C1D214:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1D21C"))) PPC_WEAK_FUNC(sub_82C1D21C);
PPC_FUNC_IMPL(__imp__sub_82C1D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1D220"))) PPC_WEAK_FUNC(sub_82C1D220);
PPC_FUNC_IMPL(__imp__sub_82C1D220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c1d250
	if (!cr6.eq) goto loc_82C1D250;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// rlwinm r9,r11,0,0,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF800000;
	// rlwinm r8,r10,0,0,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF800000;
	// subfc r7,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
loc_82C1D250:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C1D260"))) PPC_WEAK_FUNC(sub_82C1D260);
PPC_FUNC_IMPL(__imp__sub_82C1D260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d274
	if (cr6.eq) goto loc_82C1D274;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C1D274:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r4,4
	xer.ca = ctx.r4.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r4.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C1D284"))) PPC_WEAK_FUNC(sub_82C1D284);
PPC_FUNC_IMPL(__imp__sub_82C1D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1D288"))) PPC_WEAK_FUNC(sub_82C1D288);
PPC_FUNC_IMPL(__imp__sub_82C1D288) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-257
	ctx.r11.s64 = ctx.r4.s64 + -257;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C1D298"))) PPC_WEAK_FUNC(sub_82C1D298);
PPC_FUNC_IMPL(__imp__sub_82C1D298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C1D2A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b34b90
	ctx.lr = 0x82C1D2AC;
	sub_82B34B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d310
	if (cr6.eq) goto loc_82C1D310;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b36228
	ctx.lr = 0x82C1D2C4;
	sub_82B36228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b34b90
	ctx.lr = 0x82C1D2CC;
	sub_82B34B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1d398
	if (!cr6.eq) goto loc_82C1D398;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82C1D308;
	sub_83103068(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C1D310:
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b35518
	ctx.lr = 0x82C1D31C;
	sub_82B35518(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1d398
	if (cr6.eq) goto loc_82C1D398;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lbz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r30,-21440(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21440);
	// beq cr6,0x82c1d344
	if (cr6.eq) goto loc_82C1D344;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c1d354
	goto loc_82C1D354;
loc_82C1D344:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82C1D354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d368
	if (cr6.eq) goto loc_82C1D368;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82c1d388
	goto loc_82C1D388;
loc_82C1D368:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b35d88
	ctx.lr = 0x82C1D378;
	sub_82B35D88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1d388
	if (cr6.eq) goto loc_82C1D388;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r29,60(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
loc_82C1D388:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b35168
	ctx.lr = 0x82C1D398;
	sub_82B35168(ctx, base);
loc_82C1D398:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1D3A0"))) PPC_WEAK_FUNC(sub_82C1D3A0);
PPC_FUNC_IMPL(__imp__sub_82C1D3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C1D3A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x82c1d440
	if (!cr6.lt) goto loc_82C1D440;
loc_82C1D3D4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82C1D3F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1d440
	if (cr6.eq) goto loc_82C1D440;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D428;
	sub_831CE980(ctx, base);
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, xer);
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x82c1d3d4
	if (cr6.lt) goto loc_82C1D3D4;
loc_82C1D440:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D468;
	sub_831CE980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1D470"))) PPC_WEAK_FUNC(sub_82C1D470);
PPC_FUNC_IMPL(__imp__sub_82C1D470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C1D478;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82c1d520
	if (!cr6.lt) goto loc_82C1D520;
loc_82C1D4A4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r3,-80
	ctx.r4.s64 = ctx.r3.s64 + -80;
	// bctrl 
	ctx.lr = 0x82C1D4C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1d4d0
	if (cr6.eq) goto loc_82C1D4D0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82C1D4D0:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// li r5,76
	ctx.r5.s64 = 76;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D508;
	sub_831CE980(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82c1d4a4
	if (cr6.lt) goto loc_82C1D4A4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82C1D520:
	// bne cr6,0x82c1d564
	if (!cr6.eq) goto loc_82C1D564;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r11,-80
	ctx.r9.s64 = ctx.r11.s64 + -80;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// lwz r8,-80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D560;
	sub_831CE980(ctx, base);
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_82C1D564:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c1d3a0
	ctx.lr = 0x82C1D57C;
	sub_82C1D3A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1D584"))) PPC_WEAK_FUNC(sub_82C1D584);
PPC_FUNC_IMPL(__imp__sub_82C1D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1D588"))) PPC_WEAK_FUNC(sub_82C1D588);
PPC_FUNC_IMPL(__imp__sub_82C1D588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C1D590;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c1d5d4
	if (cr6.eq) goto loc_82C1D5D4;
	// addi r31,r5,4
	ctx.r31.s64 = ctx.r5.s64 + 4;
	// subf r28,r5,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_82C1D5B0:
	// lwzu r11,-80(r29)
	ea = -80 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r31,r31,-80
	ctx.r31.s64 = ctx.r31.s64 + -80;
	// li r5,76
	ctx.r5.s64 = 76;
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r11,-80(r30)
	ea = -80 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// bl 0x831ce980
	ctx.lr = 0x82C1D5CC;
	sub_831CE980(ctx, base);
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bne cr6,0x82c1d5b0
	if (!cr6.eq) goto loc_82C1D5B0;
loc_82C1D5D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1D5E0"))) PPC_WEAK_FUNC(sub_82C1D5E0);
PPC_FUNC_IMPL(__imp__sub_82C1D5E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C1D5E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c1d630
	if (cr6.eq) goto loc_82C1D630;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C1D600:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82c1d620
	if (cr6.eq) goto loc_82C1D620;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D620;
	sub_831CE980(ctx, base);
loc_82C1D620:
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82c1d600
	if (!cr6.eq) goto loc_82C1D600;
loc_82C1D630:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1D63C"))) PPC_WEAK_FUNC(sub_82C1D63C);
PPC_FUNC_IMPL(__imp__sub_82C1D63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1D640"))) PPC_WEAK_FUNC(sub_82C1D640);
PPC_FUNC_IMPL(__imp__sub_82C1D640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C1D648;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,80
	ctx.r10.s64 = 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r27,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x82c1d794
	if (!cr0.gt) goto loc_82C1D794;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r11,r3
	ctx.r24.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82C1D684:
	// lwzu r11,-80(r24)
	ea = -80 + ctx.r24.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r24.u32 = ea;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r24,4
	ctx.r4.s64 = ctx.r24.s64 + 4;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r26,r26,-2
	ctx.r26.s64 = ctx.r26.s64 + -2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D6A4;
	sub_831CE980(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bge cr6,0x82c1d72c
	if (!cr6.lt) goto loc_82C1D72C;
loc_82C1D6B4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r3,-80
	ctx.r4.s64 = ctx.r3.s64 + -80;
	// bctrl 
	ctx.lr = 0x82C1D6D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1d6e0
	if (cr6.eq) goto loc_82C1D6E0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82C1D6E0:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// li r5,76
	ctx.r5.s64 = 76;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D718;
	sub_831CE980(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82c1d6b4
	if (cr6.lt) goto loc_82C1D6B4;
loc_82C1D72C:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bne cr6,0x82c1d774
	if (!cr6.eq) goto loc_82C1D774;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r11,-80
	ctx.r9.s64 = ctx.r11.s64 + -80;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// lwz r8,-80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D770;
	sub_831CE980(ctx, base);
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_82C1D774:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c1d3a0
	ctx.lr = 0x82C1D78C;
	sub_82C1D3A0(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x82c1d684
	if (cr6.gt) goto loc_82C1D684;
loc_82C1D794:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1D79C"))) PPC_WEAK_FUNC(sub_82C1D79C);
PPC_FUNC_IMPL(__imp__sub_82C1D79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1D7A0"))) PPC_WEAK_FUNC(sub_82C1D7A0);
PPC_FUNC_IMPL(__imp__sub_82C1D7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C1D7A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c1d8b4
	if (cr6.eq) goto loc_82C1D8B4;
	// addi r27,r3,80
	ctx.r27.s64 = ctx.r3.s64 + 80;
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c1d8b4
	if (cr6.eq) goto loc_82C1D8B4;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
loc_82C1D7D0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D7EC;
	sub_831CE980(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x82C1D7FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1d828
	if (cr6.eq) goto loc_82C1D828;
	// addi r5,r28,76
	ctx.r5.s64 = ctx.r28.s64 + 76;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c1d588
	ctx.lr = 0x82C1D818;
	sub_82C1D588(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x82c1d898
	goto loc_82C1D898;
loc_82C1D828:
	// addi r4,r28,-84
	ctx.r4.s64 = ctx.r28.s64 + -84;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82C1D83C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1d88c
	if (cr6.eq) goto loc_82C1D88C;
	// addi r30,r28,-80
	ctx.r30.s64 = ctx.r28.s64 + -80;
loc_82C1D84C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D864;
	sub_831CE980(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,-80
	ctx.r31.s64 = ctx.r31.s64 + -80;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r30,-80
	ctx.r30.s64 = ctx.r30.s64 + -80;
	// bctrl 
	ctx.lr = 0x82C1D880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1d84c
	if (!cr6.eq) goto loc_82C1D84C;
loc_82C1D88C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82C1D898:
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x831ce980
	ctx.lr = 0x82C1D8A4;
	sub_831CE980(ctx, base);
	// addi r27,r27,80
	ctx.r27.s64 = ctx.r27.s64 + 80;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, xer);
	// bne cr6,0x82c1d7d0
	if (!cr6.eq) goto loc_82C1D7D0;
loc_82C1D8B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1D8BC"))) PPC_WEAK_FUNC(sub_82C1D8BC);
PPC_FUNC_IMPL(__imp__sub_82C1D8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1D8C0"))) PPC_WEAK_FUNC(sub_82C1D8C0);
PPC_FUNC_IMPL(__imp__sub_82C1D8C0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82c1d92c
	if (cr6.eq) goto loc_82C1D92C;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D90C;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1D91C;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1D92C;
	sub_831CE980(ctx, base);
loc_82C1D92C:
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

__attribute__((alias("__imp__sub_82C1D944"))) PPC_WEAK_FUNC(sub_82C1D944);
PPC_FUNC_IMPL(__imp__sub_82C1D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1D948"))) PPC_WEAK_FUNC(sub_82C1D948);
PPC_FUNC_IMPL(__imp__sub_82C1D948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C1D950;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,80
	ctx.r29.s64 = 80;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r10,r11,r29
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x82c1d9e0
	if (!cr6.gt) goto loc_82C1D9E0;
	// subfic r28,r3,-4
	xer.ca = ctx.r3.u32 <= 4294967292;
	ctx.r28.s64 = -4 - ctx.r3.s64;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// addi r31,r4,-76
	ctx.r31.s64 = ctx.r4.s64 + -76;
	// subfic r26,r3,76
	xer.ca = ctx.r3.u32 <= 76;
	ctx.r26.s64 = 76 - ctx.r3.s64;
loc_82C1D980:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D998;
	sub_831CE980(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1D9B0;
	sub_831CE980(ctx, base);
	// add r9,r28,r31
	ctx.r9.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// divw r5,r9,r29
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c1d470
	ctx.lr = 0x82C1D9CC;
	sub_82C1D470(ctx, base);
	// addi r31,r31,-80
	ctx.r31.s64 = ctx.r31.s64 + -80;
	// add r8,r26,r31
	ctx.r8.u64 = ctx.r26.u64 + ctx.r31.u64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bgt cr6,0x82c1d980
	if (cr6.gt) goto loc_82C1D980;
loc_82C1D9E0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1D9E8"))) PPC_WEAK_FUNC(sub_82C1D9E8);
PPC_FUNC_IMPL(__imp__sub_82C1D9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C1D9F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C1DA14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1da2c
	if (cr6.eq) goto loc_82C1DA2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1d8c0
	ctx.lr = 0x82C1DA2C;
	sub_82C1D8C0(ctx, base);
loc_82C1DA2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82C1DA3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1da54
	if (cr6.eq) goto loc_82C1DA54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c1d8c0
	ctx.lr = 0x82C1DA54;
	sub_82C1D8C0(ctx, base);
loc_82C1DA54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C1DA64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1da7c
	if (cr6.eq) goto loc_82C1DA7C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1d8c0
	ctx.lr = 0x82C1DA7C;
	sub_82C1D8C0(ctx, base);
loc_82C1DA7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1DA84"))) PPC_WEAK_FUNC(sub_82C1DA84);
PPC_FUNC_IMPL(__imp__sub_82C1DA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1DA88"))) PPC_WEAK_FUNC(sub_82C1DA88);
PPC_FUNC_IMPL(__imp__sub_82C1DA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82C1DA90;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,819
	ctx.r11.s64 = 53673984;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,13107
	ctx.r10.u64 = ctx.r11.u64 | 13107;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82c1dab4
	if (!cr6.gt) goto loc_82C1DAB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82C1DAB4;
	sub_831CC150(ctx, base);
loc_82C1DAB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,80
	ctx.r28.s64 = 80;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82c1db58
	if (!cr6.lt) goto loc_82C1DB58;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82595718
	ctx.lr = 0x82C1DAF4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c1d5e0
	ctx.lr = 0x82C1DB14;
	sub_82C1D5E0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r28,r9,r28
	ctx.r28.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// beq cr6,0x82c1db38
	if (cr6.eq) goto loc_82C1DB38;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82C1DB38;
	sub_825952B8(ctx, base);
loc_82C1DB38:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82C1DB58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1DB60"))) PPC_WEAK_FUNC(sub_82C1DB60);
PPC_FUNC_IMPL(__imp__sub_82C1DB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C1DB68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,80
	ctx.r10.s64 = 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82c1dc08
	if (!cr6.gt) goto loc_82C1DC08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r7,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c1d9e8
	ctx.lr = 0x82C1DBC0;
	sub_82C1D9E8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82c1d9e8
	ctx.lr = 0x82C1DBD4;
	sub_82C1D9E8(ctx, base);
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82c1d9e8
	ctx.lr = 0x82C1DBEC;
	sub_82C1D9E8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1d9e8
	ctx.lr = 0x82C1DC00;
	sub_82C1D9E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C1DC08:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c1d9e8
	ctx.lr = 0x82C1DC14;
	sub_82C1D9E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1DC1C"))) PPC_WEAK_FUNC(sub_82C1DC1C);
PPC_FUNC_IMPL(__imp__sub_82C1DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1DC20"))) PPC_WEAK_FUNC(sub_82C1DC20);
PPC_FUNC_IMPL(__imp__sub_82C1DC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,819
	ctx.r10.s64 = 53673984;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,80
	ctx.r9.s64 = 80;
	// ori r8,r10,13107
	ctx.r8.u64 = ctx.r10.u64 | 13107;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c1dc54
	if (!cr6.lt) goto loc_82C1DC54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82C1DC54:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c1dc84
	if (cr6.lt) goto loc_82C1DC84;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82C1DC84:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c1dc90
	if (!cr6.lt) goto loc_82C1DC90;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82C1DC90:
	// b 0x82c1da88
	sub_82C1DA88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1DC94"))) PPC_WEAK_FUNC(sub_82C1DC94);
PPC_FUNC_IMPL(__imp__sub_82C1DC94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C1DC98"))) PPC_WEAK_FUNC(sub_82C1DC98);
PPC_FUNC_IMPL(__imp__sub_82C1DC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82C1DCA0;
	__savegprlr_22(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,80
	ctx.r10.s64 = 80;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-80
	ctx.r5.s64 = ctx.r5.s64 + -80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c1db60
	ctx.lr = 0x82C1DCE8;
	sub_82C1DB60(ctx, base);
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
	// cmplw cr6,r24,r31
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r31.u32, xer);
	// bge cr6,0x82c1dd3c
	if (!cr6.lt) goto loc_82C1DD3C;
loc_82C1DCF4:
	// addi r30,r31,-80
	ctx.r30.s64 = ctx.r31.s64 + -80;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82C1DD08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1dd3c
	if (!cr6.eq) goto loc_82C1DD3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C1DD24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1dd3c
	if (!cr6.eq) goto loc_82C1DD3C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r24,r30
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, xer);
	// blt cr6,0x82c1dcf4
	if (cr6.lt) goto loc_82C1DCF4;
loc_82C1DD3C:
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, xer);
	// bge cr6,0x82c1dd88
	if (!cr6.lt) goto loc_82C1DD88;
loc_82C1DD44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82C1DD54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1dd88
	if (!cr6.eq) goto loc_82C1DD88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C1DD70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1dd88
	if (!cr6.eq) goto loc_82C1DD88;
	// addi r27,r27,80
	ctx.r27.s64 = ctx.r27.s64 + 80;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, xer);
	// blt cr6,0x82c1dd44
	if (cr6.lt) goto loc_82C1DD44;
loc_82C1DD88:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82C1DD90:
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// bge cr6,0x82c1de30
	if (!cr6.lt) goto loc_82C1DE30;
loc_82C1DD98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C1DDA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1de24
	if (!cr6.eq) goto loc_82C1DE24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82C1DDC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1de30
	if (!cr6.eq) goto loc_82C1DE30;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r27,r27,80
	ctx.r27.s64 = ctx.r27.s64 + 80;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c1de24
	if (cr6.eq) goto loc_82C1DE24;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1DE04;
	sub_831CE980(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1DE14;
	sub_831CE980(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x831ce980
	ctx.lr = 0x82C1DE24;
	sub_831CE980(ctx, base);
loc_82C1DE24:
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// blt cr6,0x82c1dd98
	if (cr6.lt) goto loc_82C1DD98;
loc_82C1DE30:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// ble cr6,0x82c1ded8
	if (!cr6.gt) goto loc_82C1DED8;
	// addi r30,r26,-80
	ctx.r30.s64 = ctx.r26.s64 + -80;
loc_82C1DE3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82C1DE4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1dec0
	if (!cr6.eq) goto loc_82C1DEC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C1DE68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1ded4
	if (!cr6.eq) goto loc_82C1DED4;
	// addi r31,r31,-80
	ctx.r31.s64 = ctx.r31.s64 + -80;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82c1dec0
	if (cr6.eq) goto loc_82C1DEC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// li r5,76
	ctx.r5.s64 = 76;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1DEA0;
	sub_831CE980(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x831ce980
	ctx.lr = 0x82C1DEB0;
	sub_831CE980(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x831ce980
	ctx.lr = 0x82C1DEC0;
	sub_831CE980(ctx, base);
loc_82C1DEC0:
	// addi r11,r26,-80
	ctx.r11.s64 = ctx.r26.s64 + -80;
	// addi r30,r30,-80
	ctx.r30.s64 = ctx.r30.s64 + -80;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x82c1de3c
	if (cr6.lt) goto loc_82C1DE3C;
loc_82C1DED4:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
loc_82C1DED8:
	// bne cr6,0x82c1dfa4
	if (!cr6.eq) goto loc_82C1DFA4;
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// beq cr6,0x82c1e0bc
	if (cr6.eq) goto loc_82C1E0BC;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// beq cr6,0x82c1df3c
	if (cr6.eq) goto loc_82C1DF3C;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// beq cr6,0x82c1df3c
	if (cr6.eq) goto loc_82C1DF3C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1DF1C;
	sub_831CE980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1DF2C;
	sub_831CE980(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1DF3C;
	sub_831CE980(ctx, base);
loc_82C1DF3C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r27,r27,80
	ctx.r27.s64 = ctx.r27.s64 + 80;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c1dd90
	if (cr6.eq) goto loc_82C1DD90;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1DF80;
	sub_831CE980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1DF90;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1DFA0;
	sub_831CE980(ctx, base);
	// b 0x82c1dd90
	goto loc_82C1DD90;
loc_82C1DFA4:
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// bne cr6,0x82c1e060
	if (!cr6.eq) goto loc_82C1E060;
	// addi r11,r26,-80
	ctx.r11.s64 = ctx.r26.s64 + -80;
	// addi r31,r31,-80
	ctx.r31.s64 = ctx.r31.s64 + -80;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82c1e008
	if (cr6.eq) goto loc_82C1E008;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1DFE8;
	sub_831CE980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1DFF8;
	sub_831CE980(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1E008;
	sub_831CE980(ctx, base);
loc_82C1E008:
	// addi r27,r27,-80
	ctx.r27.s64 = ctx.r27.s64 + -80;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// beq cr6,0x82c1dd90
	if (cr6.eq) goto loc_82C1DD90;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1E03C;
	sub_831CE980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1E04C;
	sub_831CE980(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1E05C;
	sub_831CE980(ctx, base);
	// b 0x82c1dd90
	goto loc_82C1DD90;
loc_82C1E060:
	// addi r26,r26,-80
	ctx.r26.s64 = ctx.r26.s64 + -80;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// beq cr6,0x82c1e0b4
	if (cr6.eq) goto loc_82C1E0B4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1E094;
	sub_831CE980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1E0A4;
	sub_831CE980(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82C1E0B4;
	sub_831CE980(ctx, base);
loc_82C1E0B4:
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// b 0x82c1dd90
	goto loc_82C1DD90;
loc_82C1E0BC:
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r27,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r27.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1E0D0"))) PPC_WEAK_FUNC(sub_82C1E0D0);
PPC_FUNC_IMPL(__imp__sub_82C1E0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C1E0D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b34b90
	ctx.lr = 0x82C1E0E4;
	sub_82B34B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1e1c4
	if (!cr6.eq) goto loc_82C1E1C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1E0F8;
	sub_82D19A78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r30,r10,-16832
	ctx.r30.s64 = ctx.r10.s64 + -16832;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C1E11C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-274
	ctx.r4.s64 = ctx.r30.s64 + -274;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82C1E12C;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c1e1a4
	if (cr6.eq) goto loc_82C1E1A4;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82b35518
	ctx.lr = 0x82C1E148;
	sub_82B35518(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1e170
	if (cr6.eq) goto loc_82C1E170;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1E164;
	sub_82D2AEC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a6a508
	ctx.lr = 0x82C1E170;
	sub_82A6A508(ctx, base);
loc_82C1E170:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// bne cr6,0x82c1e190
	if (!cr6.eq) goto loc_82C1E190;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// li r5,2016
	ctx.r5.s64 = 2016;
	// ori r4,r4,179
	ctx.r4.u64 = ctx.r4.u64 | 179;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82C1E190;
	sub_82D042A8(ctx, base);
loc_82C1E190:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C1E1A4;
	sub_82D291E0(ctx, base);
loc_82C1E1A4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82c1e1c4
	if (cr6.lt) goto loc_82C1E1C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C1E1C4;
	sub_825952B8(ctx, base);
loc_82C1E1C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1E1CC"))) PPC_WEAK_FUNC(sub_82C1E1CC);
PPC_FUNC_IMPL(__imp__sub_82C1E1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1E1D0"))) PPC_WEAK_FUNC(sub_82C1E1D0);
PPC_FUNC_IMPL(__imp__sub_82C1E1D0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c1e208
	if (!cr6.lt) goto loc_82C1E208;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82c1e20c
	if (!cr6.gt) goto loc_82C1E20C;
loc_82C1E208:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C1E20C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1e270
	if (cr6.eq) goto loc_82C1E270;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,80
	ctx.r9.s64 = 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82c1e240
	if (!cr6.eq) goto loc_82C1E240;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1dc20
	ctx.lr = 0x82C1E240;
	sub_82C1DC20(ctx, base);
loc_82C1E240:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x82c1e2ac
	if (cr6.eq) goto loc_82C1E2AC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82c1e2a0
	goto loc_82C1E2A0;
loc_82C1E270:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c1e288
	if (!cr6.eq) goto loc_82C1E288;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1dc20
	ctx.lr = 0x82C1E288;
	sub_82C1DC20(ctx, base);
loc_82C1E288:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1e2ac
	if (cr6.eq) goto loc_82C1E2AC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C1E2A0:
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce980
	ctx.lr = 0x82C1E2AC;
	sub_831CE980(ctx, base);
loc_82C1E2AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C1E2D0"))) PPC_WEAK_FUNC(sub_82C1E2D0);
PPC_FUNC_IMPL(__imp__sub_82C1E2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C1E2D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,80
	ctx.r25.s64 = 80;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82c1e38c
	if (!cr6.gt) goto loc_82C1E38C;
loc_82C1E300:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82c1e3b0
	if (!cr6.gt) goto loc_82C1E3B0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c1dc98
	ctx.lr = 0x82C1E31C;
	sub_82C1DC98(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// divw r6,r8,r25
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82c1e36c
	if (!cr6.lt) goto loc_82C1E36C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c1e2d0
	ctx.lr = 0x82C1E364;
	sub_82C1E2D0(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82c1e37c
	goto loc_82C1E37C;
loc_82C1E36C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c1e2d0
	ctx.lr = 0x82C1E378;
	sub_82C1E2D0(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82C1E37C:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82c1e300
	if (cr6.gt) goto loc_82C1E300;
loc_82C1E38C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82c1e3a8
	if (!cr6.gt) goto loc_82C1E3A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c1d7a0
	ctx.lr = 0x82C1E3A8;
	sub_82C1D7A0(ctx, base);
loc_82C1E3A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1E3B0:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82c1e38c
	if (!cr6.gt) goto loc_82C1E38C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82c1e3d8
	if (!cr6.gt) goto loc_82C1E3D8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c1d640
	ctx.lr = 0x82C1E3D8;
	sub_82C1D640(ctx, base);
loc_82C1E3D8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c1d948
	ctx.lr = 0x82C1E3E8;
	sub_82C1D948(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1E3F0"))) PPC_WEAK_FUNC(sub_82C1E3F0);
PPC_FUNC_IMPL(__imp__sub_82C1E3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C1E3F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r25,r5,12
	ctx.r25.s64 = ctx.r5.s64 + 12;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1e480
	if (!cr6.eq) goto loc_82C1E480;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82C1E434:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82c1e450
	if (cr6.eq) goto loc_82C1E450;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82c1e45c
	goto loc_82C1E45C;
loc_82C1E450:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82C1E45C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1e470
	if (cr6.eq) goto loc_82C1E470;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82c1e474
	goto loc_82C1E474;
loc_82C1E470:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82C1E474:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1e434
	if (cr6.eq) goto loc_82C1E434;
loc_82C1E480:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1e4e0
	if (cr6.eq) goto loc_82C1E4E0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82c1e4d8
	if (!cr6.eq) goto loc_82C1E4D8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82e59f08
	ctx.lr = 0x82C1E4BC;
	sub_82E59F08(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C1E4D8:
	// bl 0x82ff8298
	ctx.lr = 0x82C1E4DC;
	sub_82FF8298(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C1E4E0:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c1e524
	if (!cr6.lt) goto loc_82C1E524;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e59f08
	ctx.lr = 0x82C1E508;
	sub_82E59F08(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82C1E524:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,13
	ctx.r3.s64 = ctx.r27.s64 + 13;
	// bl 0x82b68198
	ctx.lr = 0x82C1E530;
	sub_82B68198(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82C1E544;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1E55C"))) PPC_WEAK_FUNC(sub_82C1E55C);
PPC_FUNC_IMPL(__imp__sub_82C1E55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1E560"))) PPC_WEAK_FUNC(sub_82C1E560);
PPC_FUNC_IMPL(__imp__sub_82C1E560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C1E568;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1e5a4
	if (!cr6.eq) goto loc_82C1E5A4;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e59f08
	ctx.lr = 0x82C1E598;
	sub_82E59F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1E5A4:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82c1e5e8
	if (!cr6.eq) goto loc_82C1E5E8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c1e6e4
	if (!cr6.lt) goto loc_82C1E6E4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e59f08
	ctx.lr = 0x82C1E5DC;
	sub_82E59F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1E5E8:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82c1e624
	if (!cr6.eq) goto loc_82C1E624;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c1e6e4
	if (!cr6.lt) goto loc_82C1E6E4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e59f08
	ctx.lr = 0x82C1E618;
	sub_82E59F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1E624:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82c1e688
	if (!cr6.gt) goto loc_82C1E688;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff8298
	ctx.lr = 0x82C1E640;
	sub_82FF8298(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82c1e684
	if (!cr6.lt) goto loc_82C1E684;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1e6d0
	if (!cr6.eq) goto loc_82C1E6D0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82C1E670:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e59f08
	ctx.lr = 0x82C1E678;
	sub_82E59F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1E684:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82C1E688:
	// bge cr6,0x82c1e6e4
	if (!cr6.lt) goto loc_82C1E6E4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x82C1E698;
	sub_83456C38(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82c1e6b0
	if (cr6.eq) goto loc_82C1E6B0;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c1e6e4
	if (!cr6.lt) goto loc_82C1E6E4;
loc_82C1E6B0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82c1e670
	if (cr6.eq) goto loc_82C1E670;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82C1E6D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e59f08
	ctx.lr = 0x82C1E6D8;
	sub_82E59F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1E6E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c1e3f0
	ctx.lr = 0x82C1E6F8;
	sub_82C1E3F0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1E710"))) PPC_WEAK_FUNC(sub_82C1E710);
PPC_FUNC_IMPL(__imp__sub_82C1E710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82C1E718;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82C1E73C;
	sub_82595718(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// beq 0x82c1e780
	if (cr0.eq) goto loc_82C1E780;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82a45e18
	ctx.lr = 0x82C1E780;
	sub_82A45E18(ctx, base);
loc_82C1E780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1E78C"))) PPC_WEAK_FUNC(sub_82C1E78C);
PPC_FUNC_IMPL(__imp__sub_82C1E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1E790"))) PPC_WEAK_FUNC(sub_82C1E790);
PPC_FUNC_IMPL(__imp__sub_82C1E790) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1e7e8
	if (!cr6.eq) goto loc_82C1E7E8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82C1E7C0:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c1e7d4
	if (!cr6.lt) goto loc_82C1E7D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82c1e7dc
	goto loc_82C1E7DC;
loc_82C1E7D4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82C1E7DC:
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82c1e7c0
	if (cr6.eq) goto loc_82C1E7C0;
loc_82C1E7E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82c1e804
	if (cr6.eq) goto loc_82C1E804;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82c1e868
	if (!cr6.lt) goto loc_82C1E868;
loc_82C1E804:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82a45e18
	ctx.lr = 0x82C1E828;
	sub_82A45E18(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c1e710
	ctx.lr = 0x82C1E834;
	sub_82C1E710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c1e560
	ctx.lr = 0x82C1E848;
	sub_82C1E560(ctx, base);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82c1e868
	if (cr6.eq) goto loc_82C1E868;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82C1E868;
	sub_825952B8(ctx, base);
loc_82C1E868:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
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

__attribute__((alias("__imp__sub_82C1E884"))) PPC_WEAK_FUNC(sub_82C1E884);
PPC_FUNC_IMPL(__imp__sub_82C1E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1E888"))) PPC_WEAK_FUNC(sub_82C1E888);
PPC_FUNC_IMPL(__imp__sub_82C1E888) {
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
	// bl 0x82b35518
	ctx.lr = 0x82C1E8A0;
	sub_82B35518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c1e908
	if (!cr6.eq) goto loc_82C1E908;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r31,r11,-11296
	ctx.r31.s64 = ctx.r11.s64 + -11296;
	// lwz r11,-11280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11280);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82c1e8f0
	if (!cr6.eq) goto loc_82C1E8F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-11280(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11280, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r10,31008
	ctx.r3.s64 = ctx.r10.s64 + 31008;
	// bl 0x831cdcc8
	ctx.lr = 0x82C1E8F0;
	sub_831CDCC8(ctx, base);
loc_82C1E8F0:
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
loc_82C1E908:
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x82c1e790
	ctx.lr = 0x82C1E910;
	sub_82C1E790(ctx, base);
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

__attribute__((alias("__imp__sub_82C1E924"))) PPC_WEAK_FUNC(sub_82C1E924);
PPC_FUNC_IMPL(__imp__sub_82C1E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1E928"))) PPC_WEAK_FUNC(sub_82C1E928);
PPC_FUNC_IMPL(__imp__sub_82C1E928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82C1E930;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82b35518
	ctx.lr = 0x82C1E948;
	sub_82B35518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c1e960
	if (!cr6.eq) goto loc_82C1E960;
loc_82C1E954:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82C1E960:
	// lbz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1e974
	if (cr6.eq) goto loc_82C1E974;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c1e984
	goto loc_82C1E984;
loc_82C1E974:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82C1E984:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1e954
	if (cr6.eq) goto loc_82C1E954;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82c1e9a8
	if (!cr6.eq) goto loc_82C1E9A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b35d18
	ctx.lr = 0x82C1E9A4;
	sub_82B35D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C1E9A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,272
	ctx.r3.s64 = ctx.r30.s64 + 272;
	// bl 0x82c1e790
	ctx.lr = 0x82C1E9B4;
	sub_82C1E790(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1E9C8"))) PPC_WEAK_FUNC(sub_82C1E9C8);
PPC_FUNC_IMPL(__imp__sub_82C1E9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82C1E9D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r24,r4,16
	ctx.r24.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r24,65535
	cr6.compare<uint32_t>(ctx.r24.u32, 65535, xer);
	// beq cr6,0x82c1eb1c
	if (cr6.eq) goto loc_82C1EB1C;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r10,92
	ctx.r10.s64 = 92;
	// lwz r9,192(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r19,r8,r10
	ctx.r19.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// beq 0x82c1ead4
	if (cr0.eq) goto loc_82C1EAD4;
	// li r20,-1
	ctx.r20.s64 = -1;
loc_82C1EA10:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b35518
	ctx.lr = 0x82C1EA1C;
	sub_82B35518(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1eb1c
	if (cr6.eq) goto loc_82C1EB1C;
	// lbz r11,288(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1ea3c
	if (cr6.eq) goto loc_82C1EA3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c1ea48
	goto loc_82C1EA48;
loc_82C1EA3C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subfic r11,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// subfze r11,r20
	temp.u8 = ~ctx.r20.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r20.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82C1EA48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1eabc
	if (cr6.eq) goto loc_82C1EABC;
	// addi r29,r26,272
	ctx.r29.s64 = ctx.r26.s64 + 272;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c1e790
	ctx.lr = 0x82C1EA64;
	sub_82C1E790(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r27,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x82c1eabc
	if (cr0.eq) goto loc_82C1EABC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C1EA80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c1e790
	ctx.lr = 0x82C1EA8C;
	sub_82C1E790(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// beq cr6,0x82c1eab0
	if (cr6.eq) goto loc_82C1EAB0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x82c1ea80
	if (cr6.lt) goto loc_82C1EA80;
	// b 0x82c1eabc
	goto loc_82C1EABC;
loc_82C1EAB0:
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// li r22,1
	ctx.r22.s64 = 1;
loc_82C1EABC:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1ead4
	if (!cr6.eq) goto loc_82C1EAD4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r19
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, xer);
	// blt cr6,0x82c1ea10
	if (cr6.lt) goto loc_82C1EA10;
loc_82C1EAD4:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1eb1c
	if (cr6.eq) goto loc_82C1EB1C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b35470
	ctx.lr = 0x82C1EAF0;
	sub_82B35470(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b35cb0
	ctx.lr = 0x82C1EB04;
	sub_82B35CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b35730
	ctx.lr = 0x82C1EB10;
	sub_82B35730(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b36228
	ctx.lr = 0x82C1EB1C;
	sub_82B36228(ctx, base);
loc_82C1EB1C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1EB24"))) PPC_WEAK_FUNC(sub_82C1EB24);
PPC_FUNC_IMPL(__imp__sub_82C1EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1EB28"))) PPC_WEAK_FUNC(sub_82C1EB28);
PPC_FUNC_IMPL(__imp__sub_82C1EB28) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16560
	ctx.r9.s64 = ctx.r11.s64 + -16560;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r4,r3,272
	ctx.r4.s64 = ctx.r3.s64 + 272;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r6,276(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e5a698
	ctx.lr = 0x82C1EB68;
	sub_82E5A698(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x825952b8
	ctx.lr = 0x82C1EB7C;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b38d80
	ctx.lr = 0x82C1EB84;
	sub_82B38D80(ctx, base);
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

__attribute__((alias("__imp__sub_82C1EB98"))) PPC_WEAK_FUNC(sub_82C1EB98);
PPC_FUNC_IMPL(__imp__sub_82C1EB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82C1EBA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r9,288(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bne cr6,0x82c1ed4c
	if (!cr6.eq) goto loc_82C1ED4C;
	// bl 0x831156e8
	ctx.lr = 0x82C1EC08;
	sub_831156E8(ctx, base);
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// ori r10,r11,10776
	ctx.r10.u64 = ctx.r11.u64 | 10776;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lwzx r29,r30,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82c1ec94
	if (cr6.eq) goto loc_82C1EC94;
loc_82C1EC38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83117fa8
	ctx.lr = 0x82C1EC44;
	sub_83117FA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x831ce980
	ctx.lr = 0x82C1EC58;
	sub_831CE980(ctx, base);
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// rlwinm r10,r11,22,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FF;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82C1EC74;
	sub_831CE980(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c1e1d0
	ctx.lr = 0x82C1EC80;
	sub_82C1E1D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82c1ec38
	if (cr6.lt) goto loc_82C1EC38;
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82C1EC94:
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// subf r10,r27,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r27.s64;
	// li r9,80
	ctx.r9.s64 = 80;
	// addi r6,r11,-11744
	ctx.r6.s64 = ctx.r11.s64 + -11744;
	// divw r5,r10,r9
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c1e2d0
	ctx.lr = 0x82C1ECB4;
	sub_82C1E2D0(ctx, base);
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// beq cr6,0x82c1ed34
	if (cr6.eq) goto loc_82C1ED34;
	// addi r31,r27,76
	ctx.r31.s64 = ctx.r27.s64 + 76;
loc_82C1ECC0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r9,9,23,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1FF;
	// rlwinm r9,r9,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7;
loc_82C1ECD4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// beq cr6,0x82c1ecf4
	if (cr6.eq) goto loc_82C1ECF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x82c1ecd4
	if (cr6.lt) goto loc_82C1ECD4;
	// b 0x82c1ed24
	goto loc_82C1ED24;
loc_82C1ECF4:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82c1ed24
	if (cr6.lt) goto loc_82C1ED24;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r25,272
	ctx.r3.s64 = ctx.r25.s64 + 272;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// bl 0x82c1e790
	ctx.lr = 0x82C1ED1C;
	sub_82C1E790(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82badd90
	ctx.lr = 0x82C1ED24;
	sub_82BADD90(ctx, base);
loc_82C1ED24:
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// addi r11,r31,-76
	ctx.r11.s64 = ctx.r31.s64 + -76;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82c1ecc0
	if (!cr6.eq) goto loc_82C1ECC0;
loc_82C1ED34:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82c1ed4c
	if (cr6.eq) goto loc_82C1ED4C;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82C1ED4C;
	sub_825952B8(ctx, base);
loc_82C1ED4C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b36950
	ctx.lr = 0x82C1ED54;
	sub_82B36950(ctx, base);
	// lbz r11,288(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1edac
	if (!cr6.eq) goto loc_82C1EDAC;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r31,r11,27816
	ctx.r31.s64 = ctx.r11.s64 + 27816;
	// lwz r11,27908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27908);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82c1ed98
	if (!cr6.eq) goto loc_82C1ED98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,27908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27908, ctx.r11.u32);
	// bl 0x82be5108
	ctx.lr = 0x82C1ED8C;
	sub_82BE5108(ctx, base);
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31064
	ctx.r3.s64 = ctx.r11.s64 + -31064;
	// bl 0x831cdcc8
	ctx.lr = 0x82C1ED98;
	sub_831CDCC8(ctx, base);
loc_82C1ED98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be4ea8
	ctx.lr = 0x82C1EDA0;
	sub_82BE4EA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c1e9c8
	ctx.lr = 0x82C1EDAC;
	sub_82C1E9C8(ctx, base);
loc_82C1EDAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1EDB8"))) PPC_WEAK_FUNC(sub_82C1EDB8);
PPC_FUNC_IMPL(__imp__sub_82C1EDB8) {
	PPC_FUNC_PROLOGUE();
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82c1e928
	sub_82C1E928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1EDC4"))) PPC_WEAK_FUNC(sub_82C1EDC4);
PPC_FUNC_IMPL(__imp__sub_82C1EDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1EDC8"))) PPC_WEAK_FUNC(sub_82C1EDC8);
PPC_FUNC_IMPL(__imp__sub_82C1EDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82C1EDD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82C1EDDC;
	sub_82D19A78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82b34b90
	ctx.lr = 0x82C1EDF0;
	sub_82B34B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1ee18
	if (cr6.eq) goto loc_82C1EE18;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r10,92
	ctx.r10.s64 = 92;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r25,208(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r28,r8,r10
	ctx.r28.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// b 0x82c1ee9c
	goto loc_82C1EE9C;
loc_82C1EE18:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b35518
	ctx.lr = 0x82C1EE24;
	sub_82B35518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1ee9c
	if (cr6.eq) goto loc_82C1EE9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b354a0
	ctx.lr = 0x82C1EE38;
	sub_82B354A0(ctx, base);
	// lbz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// lwz r25,80(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1ee54
	if (cr6.eq) goto loc_82C1EE54;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c1ee64
	goto loc_82C1EE64;
loc_82C1EE54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82C1EE64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1ee8c
	if (cr6.eq) goto loc_82C1EE8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1e888
	ctx.lr = 0x82C1EE78;
	sub_82C1E888(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 1;
	// b 0x82c1ee9c
	goto loc_82C1EE9C;
loc_82C1EE8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 6;
loc_82C1EE9C:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r30,r27,100
	ctx.r30.s64 = ctx.r27.s64 + 100;
	// addi r29,r10,-16660
	ctx.r29.s64 = ctx.r10.s64 + -16660;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r26,r28,-1
	ctx.r26.s64 = ctx.r28.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C1EEC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C1EEE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a00
	ctx.lr = 0x82C1EEEC;
	sub_82D19A00(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82c1ef40
	if (cr6.eq) goto loc_82C1EF40;
	// lbz r11,159(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1ef40
	if (!cr6.eq) goto loc_82C1EF40;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82c1ef1c
	if (!cr6.eq) goto loc_82C1EF1C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C1EF1C:
	// bl 0x82d2aec8
	ctx.lr = 0x82C1EF20;
	sub_82D2AEC8(ctx, base);
	// cmpw cr6,r25,r26
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r26.s32, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82c1ef58
	if (cr6.eq) goto loc_82C1EF58;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1EF38;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82C1EF40:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1EF50;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C1EF58:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1EF60;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1EF68"))) PPC_WEAK_FUNC(sub_82C1EF68);
PPC_FUNC_IMPL(__imp__sub_82C1EF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82C1EF70;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82b35518
	ctx.lr = 0x82C1EF80;
	sub_82B35518(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1f1fc
	if (cr6.eq) goto loc_82C1F1FC;
	// lbz r11,288(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 288);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1efa4
	if (cr6.eq) goto loc_82C1EFA4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82c1efb4
	goto loc_82C1EFB4;
loc_82C1EFA4:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82C1EFB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82c1efd0
	if (!cr6.eq) goto loc_82C1EFD0;
	// bl 0x82b37858
	ctx.lr = 0x82C1EFC8;
	sub_82B37858(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82C1EFD0:
	// lwz r4,188(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// bl 0x82d19a88
	ctx.lr = 0x82C1EFD8;
	sub_82D19A88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82C1EFE0;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1f1fc
	if (cr6.eq) goto loc_82C1F1FC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b354a0
	ctx.lr = 0x82C1EFF4;
	sub_82B354A0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82c1e888
	ctx.lr = 0x82C1F004;
	sub_82C1E888(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r18,r31,100
	ctx.r18.s64 = ctx.r31.s64 + 100;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// srawi r20,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r9.s32 >> 1;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r17,r11,-16816
	ctx.r17.s64 = ctx.r11.s64 + -16816;
	// addi r19,r10,-21556
	ctx.r19.s64 = ctx.r10.s64 + -21556;
loc_82C1F030:
	// lbz r11,102(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 102);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c1f044
	if (!cr6.eq) goto loc_82C1F044;
	// subfic r27,r22,8
	xer.ca = ctx.r22.u32 <= 8;
	ctx.r27.s64 = 8 - ctx.r22.s64;
loc_82C1F044:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwzx r4,r11,r19
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// bl 0x82d2e228
	ctx.lr = 0x82C1F054;
	sub_82D2E228(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1f1f0
	if (cr6.eq) goto loc_82C1F1F0;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C1F074;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1f1f0
	if (cr6.eq) goto loc_82C1F1F0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b34b90
	ctx.lr = 0x82C1F088;
	sub_82B34B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82c1f09c
	if (!cr6.eq) goto loc_82C1F09C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c1f1e4
	goto loc_82C1F1E4;
loc_82C1F09C:
	// lwz r11,80(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 80);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r30,r20
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, xer);
	// bge cr6,0x82c1f1cc
	if (!cr6.lt) goto loc_82C1F1CC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82c1f1cc
	if (cr6.lt) goto loc_82C1F1CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C1F0C8;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1f1f0
	if (cr6.eq) goto loc_82C1F1F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82C1F0E4;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1f1f0
	if (cr6.eq) goto loc_82C1F1F0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c1e928
	ctx.lr = 0x82C1F100;
	sub_82C1E928(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be2738
	ctx.lr = 0x82C1F10C;
	sub_82BE2738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82C1F118;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82C1F12C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82C1F134;
	sub_8387E8E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1F144;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1F154;
	sub_82D2AEC8(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stb r23,317(r31)
	PPC_STORE_U8(ctx.r31.u32 + 317, ctx.r23.u8);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r21,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r21.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82c1f170
	if (cr6.eq) goto loc_82C1F170;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82C1F170:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d32b60
	ctx.lr = 0x82C1F180;
	sub_82D32B60(ctx, base);
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// bne cr6,0x82c1f198
	if (!cr6.eq) goto loc_82C1F198;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1F198;
	sub_82D2AEC8(ctx, base);
loc_82C1F198:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c1d140
	ctx.lr = 0x82C1F1AC;
	sub_82C1D140(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C1F1C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82c1f1f0
	goto loc_82C1F1F0;
loc_82C1F1CC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c1d140
	ctx.lr = 0x82C1F1E0;
	sub_82C1D140(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82C1F1E4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82C1F1F0;
	sub_82D2AEC8(ctx, base);
loc_82C1F1F0:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r22,8
	cr6.compare<uint32_t>(ctx.r22.u32, 8, xer);
	// ble cr6,0x82c1f030
	if (!cr6.gt) goto loc_82C1F030;
loc_82C1F1FC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1F204"))) PPC_WEAK_FUNC(sub_82C1F204);
PPC_FUNC_IMPL(__imp__sub_82C1F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1F208"))) PPC_WEAK_FUNC(sub_82C1F208);
PPC_FUNC_IMPL(__imp__sub_82C1F208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C1F210;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r4,24
	ctx.r28.u64 = ctx.r4.u32 & 0xFF;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// subfic r11,r28,0
	xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// bl 0x82b35518
	ctx.lr = 0x82C1F238;
	sub_82B35518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82c1f250
	if (!cr6.eq) goto loc_82C1F250;
loc_82C1F244:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C1F250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b34b90
	ctx.lr = 0x82C1F258;
	sub_82B34B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1f280
	if (cr6.eq) goto loc_82C1F280;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r10,92
	ctx.r10.s64 = 92;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// b 0x82c1f2ec
	goto loc_82C1F2EC;
loc_82C1F280:
	// lbz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1f298
	if (cr6.eq) goto loc_82C1F298;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c1f2a8
	goto loc_82C1F2A8;
loc_82C1F298:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82C1F2A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1f2dc
	if (cr6.eq) goto loc_82C1F2DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b354a0
	ctx.lr = 0x82C1F2BC;
	sub_82B354A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c1e888
	ctx.lr = 0x82C1F2C8;
	sub_82C1E888(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// b 0x82c1f2ec
	goto loc_82C1F2EC;
loc_82C1F2DC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
loc_82C1F2EC:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bgt cr6,0x82c1f2fc
	if (cr6.gt) goto loc_82C1F2FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C1F2FC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82c1f318
	if (cr6.eq) goto loc_82C1F318;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82c1f244
	if (!cr6.lt) goto loc_82C1F244;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82c1f324
	if (!cr6.eq) goto loc_82C1F324;
loc_82C1F318:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82c1f244
	if (!cr6.gt) goto loc_82C1F244;
loc_82C1F324:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82b34b90
	ctx.lr = 0x82C1F338;
	sub_82B34B90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lbz r11,101(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 101);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// bne cr6,0x82c1f350
	if (!cr6.eq) goto loc_82C1F350;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
loc_82C1F350:
	// stb r10,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r10.u8);
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82c1f364
	if (cr6.eq) goto loc_82C1F364;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C1F364:
	// stb r11,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r11.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b35040
	ctx.lr = 0x82C1F374;
	sub_82B35040(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82C1F380;
	sub_82D17DA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1F38C"))) PPC_WEAK_FUNC(sub_82C1F38C);
PPC_FUNC_IMPL(__imp__sub_82C1F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1F390"))) PPC_WEAK_FUNC(sub_82C1F390);
PPC_FUNC_IMPL(__imp__sub_82C1F390) {
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
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b38ea0
	ctx.lr = 0x82C1F3B4;
	sub_82B38EA0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-16560
	ctx.r9.s64 = ctx.r11.s64 + -16560;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x82b629b0
	ctx.lr = 0x82C1F3DC;
	sub_82B629B0(ctx, base);
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// stb r30,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82c1f400
	if (!cr6.eq) goto loc_82C1F400;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,35
	ctx.r10.s64 = 2293760;
	// stb r11,163(r31)
	PPC_STORE_U8(ctx.r31.u32 + 163, ctx.r11.u8);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
loc_82C1F400:
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

__attribute__((alias("__imp__sub_82C1F418"))) PPC_WEAK_FUNC(sub_82C1F418);
PPC_FUNC_IMPL(__imp__sub_82C1F418) {
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
	// bl 0x82c1eb28
	ctx.lr = 0x82C1F438;
	sub_82C1EB28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82c1f450
	if (cr6.eq) goto loc_82C1F450;
	// bl 0x82416268
	ctx.lr = 0x82C1F44C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C1F450:
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

__attribute__((alias("__imp__sub_82C1F468"))) PPC_WEAK_FUNC(sub_82C1F468);
PPC_FUNC_IMPL(__imp__sub_82C1F468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82C1F470;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,296
	ctx.r4.s64 = 296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x82C1F4A4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82c1f4d0
	if (cr6.eq) goto loc_82C1F4D0;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c1f390
	ctx.lr = 0x82C1F4C8;
	sub_82C1F390(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82C1F4D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C1F4DC"))) PPC_WEAK_FUNC(sub_82C1F4DC);
PPC_FUNC_IMPL(__imp__sub_82C1F4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1F4E0"))) PPC_WEAK_FUNC(sub_82C1F4E0);
PPC_FUNC_IMPL(__imp__sub_82C1F4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// bne cr6,0x82c1f4f8
	if (!cr6.eq) goto loc_82C1F4F8;
	// addi r11,r11,-16184
	ctx.r11.s64 = ctx.r11.s64 + -16184;
	// addi r3,r11,468
	ctx.r3.s64 = ctx.r11.s64 + 468;
	// blr 
	return;
loc_82C1F4F8:
	// addi r8,r11,-16184
	ctx.r8.s64 = ctx.r11.s64 + -16184;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
loc_82C1F508:
	// lwz r7,-32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x82c1f53c
	if (cr6.eq) goto loc_82C1F53C;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x82c1f53c
	if (cr6.eq) goto loc_82C1F53C;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r9,468
	cr6.compare<uint32_t>(ctx.r9.u32, 468, xer);
	// blt cr6,0x82c1f508
	if (cr6.lt) goto loc_82C1F508;
	// addi r3,r8,468
	ctx.r3.s64 = ctx.r8.s64 + 468;
	// blr 
	return;
loc_82C1F53C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C1F550"))) PPC_WEAK_FUNC(sub_82C1F550);
PPC_FUNC_IMPL(__imp__sub_82C1F550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C1F564"))) PPC_WEAK_FUNC(sub_82C1F564);
PPC_FUNC_IMPL(__imp__sub_82C1F564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C1F568"))) PPC_WEAK_FUNC(sub_82C1F568);
PPC_FUNC_IMPL(__imp__sub_82C1F568) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82c1f584
	if (cr6.eq) goto loc_82C1F584;
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
loc_82C1F584:
	// lwz r31,76(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x82d35198
	ctx.lr = 0x82C1F58C;
	sub_82D35198(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82C1F598;
	sub_82D36760(ctx, base);
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

__attribute__((alias("__imp__sub_82C1F5AC"))) PPC_WEAK_FUNC(sub_82C1F5AC);
PPC_FUNC_IMPL(__imp__sub_82C1F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

