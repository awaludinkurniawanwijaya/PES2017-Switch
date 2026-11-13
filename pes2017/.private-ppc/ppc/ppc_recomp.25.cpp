#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824F4924"))) PPC_WEAK_FUNC(sub_824F4924);
PPC_FUNC_IMPL(__imp__sub_824F4924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4928"))) PPC_WEAK_FUNC(sub_824F4928);
PPC_FUNC_IMPL(__imp__sub_824F4928) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824e2e20
	ctx.lr = 0x824F494C;
	sub_824E2E20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824f496c
	if (!cr6.eq) goto loc_824F496C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x824f4988
	goto loc_824F4988;
loc_824F496C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_824F4988:
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

__attribute__((alias("__imp__sub_824F49A0"))) PPC_WEAK_FUNC(sub_824F49A0);
PPC_FUNC_IMPL(__imp__sub_824F49A0) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f49ec
	if (cr6.eq) goto loc_824F49EC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4788
	ctx.lr = 0x824F49D4;
	sub_824F4788(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824f47e0
	ctx.lr = 0x824F49E8;
	sub_824F47E0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_824F49EC:
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

__attribute__((alias("__imp__sub_824F4A04"))) PPC_WEAK_FUNC(sub_824F4A04);
PPC_FUNC_IMPL(__imp__sub_824F4A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4A08"))) PPC_WEAK_FUNC(sub_824F4A08);
PPC_FUNC_IMPL(__imp__sub_824F4A08) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 5;
	// bl 0x824f46f8
	ctx.lr = 0x824F4A48;
	sub_824F46F8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824f4a70
	if (cr6.eq) goto loc_824F4A70;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824f48c8
	ctx.lr = 0x824F4A6C;
	sub_824F48C8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_824F4A70:
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

__attribute__((alias("__imp__sub_824F4A8C"))) PPC_WEAK_FUNC(sub_824F4A8C);
PPC_FUNC_IMPL(__imp__sub_824F4A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4A90"))) PPC_WEAK_FUNC(sub_824F4A90);
PPC_FUNC_IMPL(__imp__sub_824F4A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F4A98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824f4abc
	if (!cr6.gt) goto loc_824F4ABC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x824F4ABC;
	sub_831CC150(ctx, base);
loc_824F4ABC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x824f4b48
	if (!cr6.lt) goto loc_824F4B48;
	// rlwinm r28,r4,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82534518
	ctx.lr = 0x824F4AE0;
	sub_82534518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824f48c8
	ctx.lr = 0x824F4B04;
	sub_824F48C8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r27,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 5;
	// beq cr6,0x824f4b30
	if (cr6.eq) goto loc_824F4B30;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f47e0
	ctx.lr = 0x824F4B28;
	sub_824F47E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824F4B30;
	sub_8386D088(ctx, base);
loc_824F4B30:
	// rlwinm r11,r27,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_824F4B48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F4B50"))) PPC_WEAK_FUNC(sub_824F4B50);
PPC_FUNC_IMPL(__imp__sub_824F4B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F4B58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f4c90
	if (cr6.eq) goto loc_824F4C90;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// srawi. r9,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x824f4b94
	if (!cr0.eq) goto loc_824F4B94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f49a0
	ctx.lr = 0x824F4B88;
	sub_824F49A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_824F4B94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x824f4bf8
	if (cr6.gt) goto loc_824F4BF8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x824f4788
	ctx.lr = 0x824F4BBC;
	sub_824F4788(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824f47e0
	ctx.lr = 0x824F4BCC;
	sub_824F47E0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_824F4BF8:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r6,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bgt cr6,0x824f4c30
	if (cr6.gt) goto loc_824F4C30;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824f4788
	ctx.lr = 0x824F4C24;
	sub_824F4788(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x824f4c7c
	goto loc_824F4C7C;
loc_824F4C30:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f4c50
	if (cr6.eq) goto loc_824F4C50;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f47e0
	ctx.lr = 0x824F4C48;
	sub_824F47E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824F4C50;
	sub_8386D088(ctx, base);
loc_824F4C50:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 5;
	// bl 0x824f46f8
	ctx.lr = 0x824F4C68;
	sub_824F46F8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824f4c90
	if (cr6.eq) goto loc_824F4C90;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_824F4C7C:
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824f48c8
	ctx.lr = 0x824F4C8C;
	sub_824F48C8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_824F4C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F4C9C"))) PPC_WEAK_FUNC(sub_824F4C9C);
PPC_FUNC_IMPL(__imp__sub_824F4C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4CA0"))) PPC_WEAK_FUNC(sub_824F4CA0);
PPC_FUNC_IMPL(__imp__sub_824F4CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 5;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x824f4cd0
	if (!cr6.lt) goto loc_824F4CD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_824F4CD0:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 5;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x824f4d00
	if (cr6.lt) goto loc_824F4D00;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824F4D00:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x824f4d0c
	if (!cr6.lt) goto loc_824F4D0C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_824F4D0C:
	// b 0x824f4a90
	sub_824F4A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F4D10"))) PPC_WEAK_FUNC(sub_824F4D10);
PPC_FUNC_IMPL(__imp__sub_824F4D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F4D14"))) PPC_WEAK_FUNC(sub_824F4D14);
PPC_FUNC_IMPL(__imp__sub_824F4D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4D18"))) PPC_WEAK_FUNC(sub_824F4D18);
PPC_FUNC_IMPL(__imp__sub_824F4D18) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82534518
	ctx.lr = 0x824F4D44;
	sub_82534518(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,32(r7)
	PPC_STORE_U8(ctx.r7.u32 + 32, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,33(r6)
	PPC_STORE_U8(ctx.r6.u32 + 33, ctx.r11.u8);
	// bl 0x82480ba8
	ctx.lr = 0x824F4D80;
	sub_82480BA8(ctx, base);
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

__attribute__((alias("__imp__sub_824F4D9C"))) PPC_WEAK_FUNC(sub_824F4D9C);
PPC_FUNC_IMPL(__imp__sub_824F4D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4DA0"))) PPC_WEAK_FUNC(sub_824F4DA0);
PPC_FUNC_IMPL(__imp__sub_824F4DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F4DA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82534518
	ctx.lr = 0x824F4DC0;
	sub_82534518(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,32(r7)
	PPC_STORE_U8(ctx.r7.u32 + 32, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,33(r6)
	PPC_STORE_U8(ctx.r6.u32 + 33, ctx.r11.u8);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x82434c50
	ctx.lr = 0x824F4E10;
	sub_82434C50(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r4,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f4e60
	if (cr6.eq) goto loc_824F4E60;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f4788
	ctx.lr = 0x824F4E48;
	sub_824F4788(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824f47e0
	ctx.lr = 0x824F4E5C;
	sub_824F47E0(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_824F4E60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F4E6C"))) PPC_WEAK_FUNC(sub_824F4E6C);
PPC_FUNC_IMPL(__imp__sub_824F4E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4E70"))) PPC_WEAK_FUNC(sub_824F4E70);
PPC_FUNC_IMPL(__imp__sub_824F4E70) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f4eb0
	if (cr6.eq) goto loc_824F4EB0;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824f47e0
	ctx.lr = 0x824F4EA8;
	sub_824F47E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824F4EB0;
	sub_8386D088(ctx, base);
loc_824F4EB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8247c3f8
	ctx.lr = 0x824F4ED4;
	sub_8247C3F8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x824F4EDC;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_824F4EF4"))) PPC_WEAK_FUNC(sub_824F4EF4);
PPC_FUNC_IMPL(__imp__sub_824F4EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4EF8"))) PPC_WEAK_FUNC(sub_824F4EF8);
PPC_FUNC_IMPL(__imp__sub_824F4EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F4F00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x824f4f28
	if (!cr6.lt) goto loc_824F4F28;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x824f4f2c
	if (!cr6.gt) goto loc_824F4F2C;
loc_824F4F28:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824F4F2C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f4f6c
	if (cr6.eq) goto loc_824F4F6C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 5;
	// bne cr6,0x824f4f5c
	if (!cr6.eq) goto loc_824F4F5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f4ca0
	ctx.lr = 0x824F4F5C;
	sub_824F4CA0(ctx, base);
loc_824F4F5C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x824f4f84
	goto loc_824F4F84;
loc_824F4F6C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824f4f84
	if (!cr6.eq) goto loc_824F4F84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f4ca0
	ctx.lr = 0x824F4F84;
	sub_824F4CA0(ctx, base);
loc_824F4F84:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x824f4fa8
	if (cr6.eq) goto loc_824F4FA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82421388
	ctx.lr = 0x824F4F9C;
	sub_82421388(ctx, base);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82421388
	ctx.lr = 0x824F4FA8;
	sub_82421388(ctx, base);
loc_824F4FA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F4FBC"))) PPC_WEAK_FUNC(sub_824F4FBC);
PPC_FUNC_IMPL(__imp__sub_824F4FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F4FC0"))) PPC_WEAK_FUNC(sub_824F4FC0);
PPC_FUNC_IMPL(__imp__sub_824F4FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F4FC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82421388
	ctx.lr = 0x824F4FE0;
	sub_82421388(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82421388
	ctx.lr = 0x824F4FEC;
	sub_82421388(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r29,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 5;
	// bl 0x824f4ef8
	ctx.lr = 0x824F500C;
	sub_824F4EF8(ctx, base);
	// ld r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bl 0x834fa708
	ctx.lr = 0x824F5024;
	sub_834FA708(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82468448
	ctx.lr = 0x824F5038;
	sub_82468448(ctx, base);
	// lbz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x824f504c
	if (!cr6.eq) goto loc_824F504C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f4850
	ctx.lr = 0x824F504C;
	sub_824F4850(ctx, base);
loc_824F504C:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f5064
	if (cr6.eq) goto loc_824F5064;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x824F5064;
	sub_82573040(ctx, base);
loc_824F5064:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f507c
	if (cr6.eq) goto loc_824F507C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x824F507C;
	sub_82573040(ctx, base);
loc_824F507C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5088"))) PPC_WEAK_FUNC(sub_824F5088);
PPC_FUNC_IMPL(__imp__sub_824F5088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F5090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f5128
	if (cr6.eq) goto loc_824F5128;
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r30,0
	ctx.r30.s64 = 0;
loc_824F50AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f50d4
	if (cr6.eq) goto loc_824F50D4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x824f47e0
	ctx.lr = 0x824F50CC;
	sub_824F47E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824F50D4;
	sub_8386D088(ctx, base);
loc_824F50D4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8247c3f8
	ctx.lr = 0x824F50F4;
	sub_8247C3F8(ctx, base);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x8386d088
	ctx.lr = 0x824F50FC;
	sub_8386D088(ctx, base);
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f5118
	if (cr6.eq) goto loc_824F5118;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x824F5114;
	sub_82573040(ctx, base);
	// stw r30,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r30.u32);
loc_824F5118:
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x824f50ac
	if (!cr6.eq) goto loc_824F50AC;
loc_824F5128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5130"))) PPC_WEAK_FUNC(sub_824F5130);
PPC_FUNC_IMPL(__imp__sub_824F5130) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x824f5190
	if (cr6.eq) goto loc_824F5190;
	// addi r31,r11,-48
	ctx.r31.s64 = ctx.r11.s64 + -48;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x824f4e70
	ctx.lr = 0x824F5164;
	sub_824F4E70(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f5184
	if (cr6.eq) goto loc_824F5184;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x824F517C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_824F5184:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_824F5190:
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

__attribute__((alias("__imp__sub_824F51A8"))) PPC_WEAK_FUNC(sub_824F51A8);
PPC_FUNC_IMPL(__imp__sub_824F51A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F51B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f5224
	if (cr6.eq) goto loc_824F5224;
	// addi r30,r5,16
	ctx.r30.s64 = ctx.r5.s64 + 16;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
loc_824F51CC:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f348
	ctx.lr = 0x824F51D8;
	sub_8241F348(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x824f5200
	if (cr6.eq) goto loc_824F5200;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8247c3f8
	ctx.lr = 0x824F51F4;
	sub_8247C3F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82480ba8
	ctx.lr = 0x824F5200;
	sub_82480BA8(ctx, base);
loc_824F5200:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x824f4b50
	ctx.lr = 0x824F520C;
	sub_824F4B50(ctx, base);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x824f51cc
	if (!cr6.eq) goto loc_824F51CC;
loc_824F5224:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5230"))) PPC_WEAK_FUNC(sub_824F5230);
PPC_FUNC_IMPL(__imp__sub_824F5230) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824f5280
	if (cr6.eq) goto loc_824F5280;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82421388
	ctx.lr = 0x824F5260;
	sub_82421388(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f4d18
	ctx.lr = 0x824F5274;
	sub_824F4D18(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x824f4a08
	ctx.lr = 0x824F5280;
	sub_824F4A08(ctx, base);
loc_824F5280:
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

__attribute__((alias("__imp__sub_824F5298"))) PPC_WEAK_FUNC(sub_824F5298);
PPC_FUNC_IMPL(__imp__sub_824F5298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x824F52A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f5390
	if (cr6.eq) goto loc_824F5390;
	// lbz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r5,20
	ctx.r31.s64 = ctx.r5.s64 + 20;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
loc_824F52C8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x824f5378
	if (cr6.eq) goto loc_824F5378;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82421388
	ctx.lr = 0x824F52DC;
	sub_82421388(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// bl 0x82534518
	ctx.lr = 0x824F52EC;
	sub_82534518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r24,32(r8)
	PPC_STORE_U8(ctx.r8.u32 + 32, ctx.r24.u8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r24,33(r7)
	PPC_STORE_U8(ctx.r7.u32 + 33, ctx.r24.u8);
	// bl 0x82480ba8
	ctx.lr = 0x824F5324;
	sub_82480BA8(ctx, base);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r4,r4,5
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// bl 0x824f46f8
	ctx.lr = 0x824F5350;
	sub_824F46F8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f5378
	if (cr6.eq) goto loc_824F5378;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x824f48c8
	ctx.lr = 0x824F5374;
	sub_824F48C8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_824F5378:
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// addi r25,r25,48
	ctx.r25.s64 = ctx.r25.s64 + 48;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bne cr6,0x824f52c8
	if (!cr6.eq) goto loc_824F52C8;
loc_824F5390:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F539C"))) PPC_WEAK_FUNC(sub_824F539C);
PPC_FUNC_IMPL(__imp__sub_824F539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F53A0"))) PPC_WEAK_FUNC(sub_824F53A0);
PPC_FUNC_IMPL(__imp__sub_824F53A0) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f53e0
	if (cr6.eq) goto loc_824F53E0;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824f5088
	ctx.lr = 0x824F53D8;
	sub_824F5088(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824F53E0;
	sub_8386D088(ctx, base);
loc_824F53E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8247c3f8
	ctx.lr = 0x824F5404;
	sub_8247C3F8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x824F540C;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_824F5424"))) PPC_WEAK_FUNC(sub_824F5424);
PPC_FUNC_IMPL(__imp__sub_824F5424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F5428"))) PPC_WEAK_FUNC(sub_824F5428);
PPC_FUNC_IMPL(__imp__sub_824F5428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F5430;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824f5454
	if (!cr6.gt) goto loc_824F5454;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x824F5454;
	sub_831CC150(ctx, base);
loc_824F5454:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,48
	ctx.r27.s64 = 48;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x824f54f4
	if (!cr6.lt) goto loc_824F54F4;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82534518
	ctx.lr = 0x824F5484;
	sub_82534518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824f5298
	ctx.lr = 0x824F54A8;
	sub_824F5298(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r27,r10,r27
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x824f54d4
	if (cr6.eq) goto loc_824F54D4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f5088
	ctx.lr = 0x824F54CC;
	sub_824F5088(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824F54D4;
	sub_8386D088(ctx, base);
loc_824F54D4:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_824F54F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F54FC"))) PPC_WEAK_FUNC(sub_824F54FC);
PPC_FUNC_IMPL(__imp__sub_824F54FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F5500"))) PPC_WEAK_FUNC(sub_824F5500);
PPC_FUNC_IMPL(__imp__sub_824F5500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1365
	ctx.r10.s64 = 89456640;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,48
	ctx.r9.s64 = 48;
	// ori r8,r10,21845
	ctx.r8.u64 = ctx.r10.u64 | 21845;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x824f5534
	if (!cr6.lt) goto loc_824F5534;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_824F5534:
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
	// blt cr6,0x824f5564
	if (cr6.lt) goto loc_824F5564;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_824F5564:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x824f5570
	if (!cr6.lt) goto loc_824F5570;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_824F5570:
	// b 0x824f5428
	sub_824F5428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5574"))) PPC_WEAK_FUNC(sub_824F5574);
PPC_FUNC_IMPL(__imp__sub_824F5574) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F5578"))) PPC_WEAK_FUNC(sub_824F5578);
PPC_FUNC_IMPL(__imp__sub_824F5578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F5580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82534518
	ctx.lr = 0x824F559C;
	sub_82534518(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,32(r7)
	PPC_STORE_U8(ctx.r7.u32 + 32, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,33(r6)
	PPC_STORE_U8(ctx.r6.u32 + 33, ctx.r11.u8);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x82434c50
	ctx.lr = 0x824F55EC;
	sub_82434C50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x824f5428
	ctx.lr = 0x824F5614;
	sub_824F5428(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f5648
	if (cr6.eq) goto loc_824F5648;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x824f51a8
	ctx.lr = 0x824F5630;
	sub_824F51A8(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824f5088
	ctx.lr = 0x824F5644;
	sub_824F5088(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_824F5648:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5654"))) PPC_WEAK_FUNC(sub_824F5654);
PPC_FUNC_IMPL(__imp__sub_824F5654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F5658"))) PPC_WEAK_FUNC(sub_824F5658);
PPC_FUNC_IMPL(__imp__sub_824F5658) {
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
	// bge cr6,0x824f5690
	if (!cr6.lt) goto loc_824F5690;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x824f5694
	if (!cr6.gt) goto loc_824F5694;
loc_824F5690:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824F5694:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f56f8
	if (cr6.eq) goto loc_824F56F8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,48
	ctx.r9.s64 = 48;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x824f56c8
	if (!cr6.eq) goto loc_824F56C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5500
	ctx.lr = 0x824F56C8;
	sub_824F5500(ctx, base);
loc_824F56C8:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824f5230
	ctx.lr = 0x824F56E8;
	sub_824F5230(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x824f572c
	goto loc_824F572C;
loc_824F56F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824f5710
	if (!cr6.eq) goto loc_824F5710;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5500
	ctx.lr = 0x824F5710;
	sub_824F5500(ctx, base);
loc_824F5710:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x824f5230
	ctx.lr = 0x824F5720;
	sub_824F5230(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_824F572C:
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

__attribute__((alias("__imp__sub_824F5744"))) PPC_WEAK_FUNC(sub_824F5744);
PPC_FUNC_IMPL(__imp__sub_824F5744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F5748"))) PPC_WEAK_FUNC(sub_824F5748);
PPC_FUNC_IMPL(__imp__sub_824F5748) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824f53a0
	ctx.lr = 0x824F576C;
	sub_824F53A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82467108
	ctx.lr = 0x824F5774;
	sub_82467108(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f578c
	if (cr6.eq) goto loc_824F578C;
	// bl 0x8248b818
	ctx.lr = 0x824F5788;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824F578C:
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

__attribute__((alias("__imp__sub_824F57A4"))) PPC_WEAK_FUNC(sub_824F57A4);
PPC_FUNC_IMPL(__imp__sub_824F57A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F57A8"))) PPC_WEAK_FUNC(sub_824F57A8);
PPC_FUNC_IMPL(__imp__sub_824F57A8) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r30,r11,20348
	ctx.r30.s64 = ctx.r11.s64 + 20348;
	// lwz r3,20348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824f5828
	if (!cr6.eq) goto loc_824F5828;
	// bl 0x82467738
	ctx.lr = 0x824F57D4;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x824F57E8;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f5818
	if (cr6.eq) goto loc_824F5818;
	// bl 0x82455560
	ctx.lr = 0x824F57F8;
	sub_82455560(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-25096
	ctx.r10.s64 = ctx.r11.s64 + -25096;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824f5578
	ctx.lr = 0x824F5810;
	sub_824F5578(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x824f581c
	goto loc_824F581C;
loc_824F5818:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824F581C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f2bb8
	ctx.lr = 0x824F5824;
	sub_824F2BB8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_824F5828:
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

__attribute__((alias("__imp__sub_824F5840"))) PPC_WEAK_FUNC(sub_824F5840);
PPC_FUNC_IMPL(__imp__sub_824F5840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x824F5848;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8241f7e0
	ctx.lr = 0x824F5854;
	sub_8241F7E0(ctx, base);
	// bl 0x824f57a8
	ctx.lr = 0x824F5858;
	sub_824F57A8(ctx, base);
	// addi r24,r3,32
	ctx.r24.s64 = ctx.r3.s64 + 32;
	// lwz r25,16(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// beq cr6,0x824f5958
	if (cr6.eq) goto loc_824F5958;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r26,8
	ctx.r26.s64 = 8;
	// li r27,16
	ctx.r27.s64 = 16;
	// addi r29,r11,8980
	ctx.r29.s64 = ctx.r11.s64 + 8980;
	// addi r28,r10,9080
	ctx.r28.s64 = ctx.r10.s64 + 9080;
loc_824F5888:
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824F5890:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824f5890
	if (!cr6.eq) goto loc_824F5890;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8241f0d0
	ctx.lr = 0x824F58B4;
	sub_8241F0D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x824f5918
	if (cr6.lt) goto loc_824F5918;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824f5908
	if (!cr6.gt) goto loc_824F5908;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x8247b270
	ctx.lr = 0x824F5900;
	sub_8247B270(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x824f590c
	goto loc_824F590C;
loc_824F5908:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824F590C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f5940
	if (cr6.eq) goto loc_824F5940;
loc_824F5918:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824f5934
	if (cr0.eq) goto loc_824F5934;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f130
	ctx.lr = 0x824F5934;
	sub_8241F130(ctx, base);
loc_824F5934:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824F5940:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x824F5948;
	sub_82573C50(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// addi r25,r25,48
	ctx.r25.s64 = ctx.r25.s64 + 48;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x824f5888
	if (!cr6.eq) goto loc_824F5888;
loc_824F5958:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5960"))) PPC_WEAK_FUNC(sub_824F5960);
PPC_FUNC_IMPL(__imp__sub_824F5960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F5968;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241f7e0
	ctx.lr = 0x824F5978;
	sub_8241F7E0(ctx, base);
	// bl 0x824f57a8
	ctx.lr = 0x824F597C;
	sub_824F57A8(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824f4928
	ctx.lr = 0x824F598C;
	sub_824F4928(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824f57a8
	ctx.lr = 0x824F5994;
	sub_824F57A8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x824f5a48
	if (cr6.eq) goto loc_824F5A48;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x824f5a48
	if (cr6.eq) goto loc_824F5A48;
loc_824F59B4:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824F59BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824f59bc
	if (!cr6.eq) goto loc_824F59BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8241f0d0
	ctx.lr = 0x824F59E0;
	sub_8241F0D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x824f5a08
	if (cr6.lt) goto loc_824F5A08;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f6d8
	ctx.lr = 0x824F59FC;
	sub_8241F6D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f5a30
	if (cr6.eq) goto loc_824F5A30;
loc_824F5A08:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824f5a24
	if (cr0.eq) goto loc_824F5A24;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f130
	ctx.lr = 0x824F5A24;
	sub_8241F130(ctx, base);
loc_824F5A24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824F5A30:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x824F5A38;
	sub_82573C50(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x824f59b4
	if (!cr6.eq) goto loc_824F59B4;
loc_824F5A48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5A50"))) PPC_WEAK_FUNC(sub_824F5A50);
PPC_FUNC_IMPL(__imp__sub_824F5A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F5A58;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// std r27,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r27.u64);
	// bl 0x8241f6d8
	ctx.lr = 0x824F5A7C;
	sub_8241F6D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824f5840
	ctx.lr = 0x824F5A84;
	sub_824F5840(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b8b8
	ctx.lr = 0x824F5A94;
	sub_8253B8B8(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824f5ad8
	if (cr6.eq) goto loc_824F5AD8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_824F5AA8:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8248b870
	ctx.lr = 0x824F5AB8;
	sub_8248B870(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x824F5ACC;
	sub_8253BBB8(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x824f5aa8
	if (cr6.lt) goto loc_824F5AA8;
loc_824F5AD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r11,9080
	ctx.r9.s64 = ctx.r11.s64 + 9080;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8247b7d8
	ctx.lr = 0x824F5B18;
	sub_8247B7D8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f5b34
	if (cr6.eq) goto loc_824F5B34;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x824F5B34;
	sub_8247B268(ctx, base);
loc_824F5B34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5B40"))) PPC_WEAK_FUNC(sub_824F5B40);
PPC_FUNC_IMPL(__imp__sub_824F5B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F5B48;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82488fa8
	ctx.lr = 0x824F5B60;
	sub_82488FA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f1b0
	ctx.lr = 0x824F5B6C;
	sub_8241F1B0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// std r27,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r27.u64);
	// bl 0x8241f6d8
	ctx.lr = 0x824F5B88;
	sub_8241F6D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x824F5B90;
	sub_83102DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824f5960
	ctx.lr = 0x824F5B9C;
	sub_824F5960(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b8b8
	ctx.lr = 0x824F5BAC;
	sub_8253B8B8(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824f5bf0
	if (cr6.eq) goto loc_824F5BF0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_824F5BC0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8248b870
	ctx.lr = 0x824F5BD0;
	sub_8248B870(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x824F5BE4;
	sub_8253BBB8(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x824f5bc0
	if (cr6.lt) goto loc_824F5BC0;
loc_824F5BF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r11,9080
	ctx.r9.s64 = ctx.r11.s64 + 9080;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8247b7d8
	ctx.lr = 0x824F5C30;
	sub_8247B7D8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f5c54
	if (cr6.eq) goto loc_824F5C54;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x824F5C4C;
	sub_8247B268(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
loc_824F5C54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,8980
	ctx.r10.s64 = ctx.r11.s64 + 8980;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82573c50
	ctx.lr = 0x824F5C68;
	sub_82573C50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5C74"))) PPC_WEAK_FUNC(sub_824F5C74);
PPC_FUNC_IMPL(__imp__sub_824F5C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F5C78"))) PPC_WEAK_FUNC(sub_824F5C78);
PPC_FUNC_IMPL(__imp__sub_824F5C78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824f4668
	ctx.lr = 0x824F5C90;
	sub_824F4668(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824890e0
	ctx.lr = 0x824F5CA0;
	sub_824890E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r31,r11,-25116
	ctx.r31.s64 = ctx.r11.s64 + -25116;
	// addi r5,r10,23120
	ctx.r5.s64 = ctx.r10.s64 + 23120;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489138
	ctx.lr = 0x824F5CBC;
	sub_82489138(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r9,23360
	ctx.r5.s64 = ctx.r9.s64 + 23360;
	// bl 0x82489138
	ctx.lr = 0x824F5CCC;
	sub_82489138(ctx, base);
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

__attribute__((alias("__imp__sub_824F5CE0"))) PPC_WEAK_FUNC(sub_824F5CE0);
PPC_FUNC_IMPL(__imp__sub_824F5CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F5CE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82421388
	ctx.lr = 0x824F5D00;
	sub_82421388(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824f4d18
	ctx.lr = 0x824F5D0C;
	sub_824F4D18(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824f4a08
	ctx.lr = 0x824F5D18;
	sub_824F4A08(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// li r11,48
	ctx.r11.s64 = 48;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r28,r8,r11
	ctx.r28.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// bl 0x824f5658
	ctx.lr = 0x824F5D3C;
	sub_824F5658(ctx, base);
	// ld r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x834fa708
	ctx.lr = 0x824F5D54;
	sub_834FA708(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82468448
	ctx.lr = 0x824F5D68;
	sub_82468448(ctx, base);
	// lbz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x824f5d7c
	if (!cr6.eq) goto loc_824F5D7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5130
	ctx.lr = 0x824F5D7C;
	sub_824F5130(ctx, base);
loc_824F5D7C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824f4e70
	ctx.lr = 0x824F5D84;
	sub_824F4E70(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f5d9c
	if (cr6.eq) goto loc_824F5D9C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x824F5D9C;
	sub_82573040(ctx, base);
loc_824F5D9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F5DA8"))) PPC_WEAK_FUNC(sub_824F5DA8);
PPC_FUNC_IMPL(__imp__sub_824F5DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489b30
	ctx.lr = 0x824F5DC4;
	sub_82489B30(ctx, base);
	// bl 0x824f4668
	ctx.lr = 0x824F5DC8;
	sub_824F4668(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824890e0
	ctx.lr = 0x824F5DD8;
	sub_824890E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r31,r11,-25116
	ctx.r31.s64 = ctx.r11.s64 + -25116;
	// addi r5,r10,23120
	ctx.r5.s64 = ctx.r10.s64 + 23120;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489138
	ctx.lr = 0x824F5DF4;
	sub_82489138(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r9,23360
	ctx.r5.s64 = ctx.r9.s64 + 23360;
	// bl 0x82489138
	ctx.lr = 0x824F5E04;
	sub_82489138(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r7,r8,12828
	ctx.r7.s64 = ctx.r8.s64 + 12828;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// bl 0x82465ee8
	ctx.lr = 0x824F5E18;
	sub_82465EE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8257f3f0
	ctx.lr = 0x824F5E20;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489378
	ctx.lr = 0x824F5E28;
	sub_82489378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F5E40"))) PPC_WEAK_FUNC(sub_824F5E40);
PPC_FUNC_IMPL(__imp__sub_824F5E40) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e2e20
	ctx.lr = 0x824F5E6C;
	sub_824E2E20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x824f5e9c
	if (!cr6.eq) goto loc_824F5E9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824f4da0
	ctx.lr = 0x824F5E84;
	sub_824F4DA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5ce0
	ctx.lr = 0x824F5E94;
	sub_824F5CE0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824f4e70
	ctx.lr = 0x824F5E9C;
	sub_824F4E70(ctx, base);
loc_824F5E9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824762f0
	ctx.lr = 0x824F5EA8;
	sub_824762F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
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

__attribute__((alias("__imp__sub_824F5EDC"))) PPC_WEAK_FUNC(sub_824F5EDC);
PPC_FUNC_IMPL(__imp__sub_824F5EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F5EE0"))) PPC_WEAK_FUNC(sub_824F5EE0);
PPC_FUNC_IMPL(__imp__sub_824F5EE0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824f57a8
	ctx.lr = 0x824F5F00;
	sub_824F57A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x824f5e40
	ctx.lr = 0x824F5F0C;
	sub_824F5E40(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f4fc0
	ctx.lr = 0x824F5F18;
	sub_824F4FC0(ctx, base);
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

__attribute__((alias("__imp__sub_824F5F30"))) PPC_WEAK_FUNC(sub_824F5F30);
PPC_FUNC_IMPL(__imp__sub_824F5F30) {
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
	// bl 0x824f4668
	ctx.lr = 0x824F5F44;
	sub_824F4668(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-25156
	ctx.r4.s64 = ctx.r11.s64 + -25156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x824F5F5C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x824F5F68;
	sub_8246BE10(ctx, base);
	// bl 0x82467738
	ctx.lr = 0x824F5F6C;
	sub_82467738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x824F5F78;
	sub_8246BE18(ctx, base);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,23672
	ctx.r4.s64 = ctx.r10.s64 + 23672;
	// bl 0x8246be38
	ctx.lr = 0x824F5F88;
	sub_8246BE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x824F5F90;
	sub_824894A0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,23976
	ctx.r4.s64 = ctx.r9.s64 + 23976;
	// bl 0x8253b5e8
	ctx.lr = 0x824F5FA8;
	sub_8253B5E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be88
	ctx.lr = 0x824F5FBC;
	sub_8253BE88(ctx, base);
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

__attribute__((alias("__imp__sub_824F5FD0"))) PPC_WEAK_FUNC(sub_824F5FD0);
PPC_FUNC_IMPL(__imp__sub_824F5FD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F5FDC"))) PPC_WEAK_FUNC(sub_824F5FDC);
PPC_FUNC_IMPL(__imp__sub_824F5FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F5FE0"))) PPC_WEAK_FUNC(sub_824F5FE0);
PPC_FUNC_IMPL(__imp__sub_824F5FE0) {
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
	// bl 0x8258c0f8
	ctx.lr = 0x824F5FF8;
	sub_8258C0F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r9,r11,-24996
	ctx.r9.s64 = ctx.r11.s64 + -24996;
	// addi r8,r10,20356
	ctx.r8.s64 = ctx.r10.s64 + 20356;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8258b308
	ctx.lr = 0x824F601C;
	sub_8258B308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8258b310
	ctx.lr = 0x824F6028;
	sub_8258B310(ctx, base);
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

__attribute__((alias("__imp__sub_824F6040"))) PPC_WEAK_FUNC(sub_824F6040);
PPC_FUNC_IMPL(__imp__sub_824F6040) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e4b10
	sub_824E4B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F6044"))) PPC_WEAK_FUNC(sub_824F6044);
PPC_FUNC_IMPL(__imp__sub_824F6044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6048"))) PPC_WEAK_FUNC(sub_824F6048);
PPC_FUNC_IMPL(__imp__sub_824F6048) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8258c0f8
	ctx.lr = 0x824F6068;
	sub_8258C0F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r9,r11,-24960
	ctx.r9.s64 = ctx.r11.s64 + -24960;
	// addi r8,r10,20356
	ctx.r8.s64 = ctx.r10.s64 + 20356;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8258b308
	ctx.lr = 0x824F6098;
	sub_8258B308(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8258b310
	ctx.lr = 0x824F60A4;
	sub_8258B310(ctx, base);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,20368
	ctx.r4.s64 = ctx.r7.s64 + 20368;
	// bl 0x824ef4f8
	ctx.lr = 0x824F60B4;
	sub_824EF4F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ef778
	ctx.lr = 0x824F60BC;
	sub_824EF778(ctx, base);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x824F60CC;
	sub_82572FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8258b340
	ctx.lr = 0x824F60DC;
	sub_8258B340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x824F60E8;
	sub_82572FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824f2290
	ctx.lr = 0x824F60F0;
	sub_824F2290(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x824F6104;
	sub_82572FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8258b340
	ctx.lr = 0x824F6114;
	sub_8258B340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x824F6120;
	sub_82572FA0(ctx, base);
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20352(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20352);
	// bl 0x8258b348
	ctx.lr = 0x824F6134;
	sub_8258B348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_824F6150"))) PPC_WEAK_FUNC(sub_824F6150);
PPC_FUNC_IMPL(__imp__sub_824F6150) {
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
	// lwz r31,76(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x824f61ec
	if (cr6.eq) goto loc_824F61EC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x824f61d8
	if (cr6.lt) goto loc_824F61D8;
	// bne cr6,0x824f61ec
	if (!cr6.eq) goto loc_824F61EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F6198;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f61c8
	if (cr6.eq) goto loc_824F61C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824F61C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x824f61ec
	goto loc_824F61EC;
loc_824F61C8:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// b 0x824f61ec
	goto loc_824F61EC;
loc_824F61D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F61EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824F61EC:
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

__attribute__((alias("__imp__sub_824F6204"))) PPC_WEAK_FUNC(sub_824F6204);
PPC_FUNC_IMPL(__imp__sub_824F6204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6208"))) PPC_WEAK_FUNC(sub_824F6208);
PPC_FUNC_IMPL(__imp__sub_824F6208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F6210;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r30.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F6228;
	sub_82572FA0(ctx, base);
	// std r30,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r30.u64);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F623C;
	sub_82572FA0(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20368
	ctx.r4.s64 = ctx.r11.s64 + 20368;
	// bl 0x824ef4f8
	ctx.lr = 0x824F624C;
	sub_824EF4F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ef778
	ctx.lr = 0x824F6254;
	sub_824EF778(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ef828
	ctx.lr = 0x824F6260;
	sub_824EF828(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8258bf90
	ctx.lr = 0x824F626C;
	sub_8258BF90(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x824F627C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82572fa0
	ctx.lr = 0x824F6288;
	sub_82572FA0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x825730a8
	ctx.lr = 0x824F629C;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f62b0
	if (cr6.eq) goto loc_824F62B0;
	// bl 0x824f5fe0
	ctx.lr = 0x824F62A8;
	sub_824F5FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824f62b4
	goto loc_824F62B4;
loc_824F62B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_824F62B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F62BC;
	sub_82572FA0(ctx, base);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x824F62D0;
	sub_82572FA0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258b340
	ctx.lr = 0x824F62E0;
	sub_8258B340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x824F62EC;
	sub_82572FA0(ctx, base);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x824F6300;
	sub_82572FA0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258b340
	ctx.lr = 0x824F6310;
	sub_8258B340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x824F631C;
	sub_82572FA0(ctx, base);
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x824F6330;
	sub_82572FA0(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258b348
	ctx.lr = 0x824F6340;
	sub_8258B348(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x824F634C;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x824f2290
	ctx.lr = 0x824F6354;
	sub_824F2290(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x824F636C;
	sub_82572FA0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258b348
	ctx.lr = 0x824F637C;
	sub_8258B348(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x824F6388;
	sub_82572FA0(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824f02f0
	ctx.lr = 0x824F6390;
	sub_824F02F0(ctx, base);
	// std r30,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82572fa0
	ctx.lr = 0x824F63A0;
	sub_82572FA0(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8258b348
	ctx.lr = 0x824F63B0;
	sub_8258B348(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82572fa0
	ctx.lr = 0x824F63BC;
	sub_82572FA0(ctx, base);
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x824F63CC;
	sub_82572FA0(ctx, base);
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-17544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17544);
	// bl 0x82580028
	ctx.lr = 0x824F63E0;
	sub_82580028(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82572fa0
	ctx.lr = 0x824F63EC;
	sub_82572FA0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x825730a8
	ctx.lr = 0x824F6400;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f6430
	if (cr6.eq) goto loc_824F6430;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,-24972
	ctx.r10.s64 = ctx.r11.s64 + -24972;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,-17544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17544);
	// bl 0x825817f0
	ctx.lr = 0x824F6424;
	sub_825817F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_824F6430:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-17544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17544);
	// bl 0x825817f0
	ctx.lr = 0x824F643C;
	sub_825817F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F6448"))) PPC_WEAK_FUNC(sub_824F6448);
PPC_FUNC_IMPL(__imp__sub_824F6448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F6450;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r9,r11,-24936
	ctx.r9.s64 = ctx.r11.s64 + -24936;
	// addi r29,r10,20384
	ctx.r29.s64 = ctx.r10.s64 + 20384;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257f080
	ctx.lr = 0x824F6474;
	sub_8257F080(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x824F6480;
	sub_83102DB0(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r8,5496
	ctx.r3.s64 = ctx.r8.s64 + 5496;
	// bl 0x824e2740
	ctx.lr = 0x824F6490;
	sub_824E2740(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257f158
	ctx.lr = 0x824F6498;
	sub_8257F158(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824f64b8
	if (cr6.eq) goto loc_824F64B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r11.u32);
	// bl 0x8258b050
	ctx.lr = 0x824F64B8;
	sub_8258B050(ctx, base);
loc_824F64B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F64C4;
	sub_82572FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82573c50
	ctx.lr = 0x824F64CC;
	sub_82573C50(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F64E0"))) PPC_WEAK_FUNC(sub_824F64E0);
PPC_FUNC_IMPL(__imp__sub_824F64E0) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x825730a8
	ctx.lr = 0x824F6500;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f6524
	if (cr6.eq) goto loc_824F6524;
	// bl 0x824f6208
	ctx.lr = 0x824F650C;
	sub_824F6208(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r3,20352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824F6524:
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20352, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6540"))) PPC_WEAK_FUNC(sub_824F6540);
PPC_FUNC_IMPL(__imp__sub_824F6540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F6548;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83102db0
	ctx.lr = 0x824F6560;
	sub_83102DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424320
	ctx.lr = 0x824F6570;
	sub_82424320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x824f658c
	if (!cr6.eq) goto loc_824F658C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824f6590
	if (cr6.eq) goto loc_824F6590;
loc_824F658C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F6590:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f65b4
	if (cr6.eq) goto loc_824F65B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241f130
	ctx.lr = 0x824F65A8;
	sub_8241F130(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_824F65B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252e3c0
	ctx.lr = 0x824F65BC;
	sub_8252E3C0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f660c
	if (cr6.eq) goto loc_824F660C;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_824F65DC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,48
	cr6.compare<int32_t>(ctx.r8.s32, 48, xer);
	// blt cr6,0x824f6608
	if (cr6.lt) goto loc_824F6608;
	// cmpwi cr6,r8,57
	cr6.compare<int32_t>(ctx.r8.s32, 57, xer);
	// bgt cr6,0x824f6608
	if (cr6.gt) goto loc_824F6608;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x824f65dc
	if (cr6.lt) goto loc_824F65DC;
	// b 0x824f660c
	goto loc_824F660C;
loc_824F6608:
	// subf r30,r9,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_824F660C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x824f6628
	if (cr6.eq) goto loc_824F6628;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// bl 0x825731c0
	ctx.lr = 0x824F6624;
	sub_825731C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824F6628:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574880
	ctx.lr = 0x824F663C;
	sub_82574880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f130
	ctx.lr = 0x824F6648;
	sub_8241F130(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x824F6650;
	sub_82573C50(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f130
	ctx.lr = 0x824F665C;
	sub_8241F130(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-25004
	ctx.r30.s64 = ctx.r11.s64 + -25004;
loc_824F6664:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573d70
	ctx.lr = 0x824F6670;
	sub_82573D70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574628
	ctx.lr = 0x824F6680;
	sub_82574628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574980
	ctx.lr = 0x824F668C;
	sub_82574980(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x824F6694;
	sub_82573C50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x83102db0
	ctx.lr = 0x824F66A0;
	sub_83102DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424320
	ctx.lr = 0x824F66B0;
	sub_82424320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x824f66cc
	if (!cr6.eq) goto loc_824F66CC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x824f66d0
	if (cr6.eq) goto loc_824F66D0;
loc_824F66CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824F66D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f6664
	if (!cr6.eq) goto loc_824F6664;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241f130
	ctx.lr = 0x824F66E8;
	sub_8241F130(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x824F66F0;
	sub_82573C50(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x824F66F8;
	sub_82573C50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F6704"))) PPC_WEAK_FUNC(sub_824F6704);
PPC_FUNC_IMPL(__imp__sub_824F6704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6708"))) PPC_WEAK_FUNC(sub_824F6708);
PPC_FUNC_IMPL(__imp__sub_824F6708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F6710;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x825730a8
	ctx.lr = 0x824F6738;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f6750
	if (cr6.eq) goto loc_824F6750;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f6048
	ctx.lr = 0x824F6748;
	sub_824F6048(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824f6754
	goto loc_824F6754;
loc_824F6750:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_824F6754:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82572fa0
	ctx.lr = 0x824F6760;
	sub_82572FA0(ctx, base);
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,-17544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17544);
	// bl 0x82572fa0
	ctx.lr = 0x824F6778;
	sub_82572FA0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82580028
	ctx.lr = 0x824F6788;
	sub_82580028(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x824F6794;
	sub_82572FA0(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r31,r11,20384
	ctx.r31.s64 = ctx.r11.s64 + 20384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257f080
	ctx.lr = 0x824F67A4;
	sub_8257F080(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f130
	ctx.lr = 0x824F67B0;
	sub_8241F130(ctx, base);
	// lis r10,-16618
	ctx.r10.s64 = -1089077248;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ori r8,r10,40856
	ctx.r8.u64 = ctx.r10.u64 | 40856;
	// ori r7,r9,47264
	ctx.r7.u64 = ctx.r9.u64 | 47264;
	// li r11,1
	ctx.r11.s64 = 1;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r6,r8
	cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, xer);
	// beq cr6,0x824f67d8
	if (cr6.eq) goto loc_824F67D8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_824F67D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f67f4
	if (cr6.eq) goto loc_824F67F4;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,20392
	ctx.r4.s64 = ctx.r11.s64 + 20392;
	// bl 0x82573d70
	ctx.lr = 0x824F67F4;
	sub_82573D70(ctx, base);
loc_824F67F4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r27,r11,5496
	ctx.r27.s64 = ctx.r11.s64 + 5496;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x824f6540
	ctx.lr = 0x824F680C;
	sub_824F6540(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82573d70
	ctx.lr = 0x824F6818;
	sub_82573D70(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82509e50
	ctx.lr = 0x824F6830;
	sub_82509E50(ctx, base);
	// lis r10,-16618
	ctx.r10.s64 = -1089077248;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ld r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ori r8,r10,40856
	ctx.r8.u64 = ctx.r10.u64 | 40856;
	// ori r7,r9,47264
	ctx.r7.u64 = ctx.r9.u64 | 47264;
	// li r11,1
	ctx.r11.s64 = 1;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r6,r8
	cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, xer);
	// beq cr6,0x824f6858
	if (cr6.eq) goto loc_824F6858;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_824F6858:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f6870
	if (!cr6.eq) goto loc_824F6870;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573280
	ctx.lr = 0x824F6870;
	sub_82573280(ctx, base);
loc_824F6870:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x824F6878;
	sub_82573C50(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x824F6880;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257f158
	ctx.lr = 0x824F6888;
	sub_8257F158(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F6890"))) PPC_WEAK_FUNC(sub_824F6890);
PPC_FUNC_IMPL(__imp__sub_824F6890) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-24936
	ctx.r10.s64 = ctx.r11.s64 + -24936;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8241f278
	ctx.lr = 0x824F68C0;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241f130
	ctx.lr = 0x824F68CC;
	sub_8241F130(ctx, base);
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x824F68E4;
	sub_82572FA0(ctx, base);
	// bl 0x8241f278
	ctx.lr = 0x824F68E8;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f6708
	ctx.lr = 0x824F68F4;
	sub_824F6708(ctx, base);
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

__attribute__((alias("__imp__sub_824F6910"))) PPC_WEAK_FUNC(sub_824F6910);
PPC_FUNC_IMPL(__imp__sub_824F6910) {
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
	// bl 0x824f6448
	ctx.lr = 0x824F6930;
	sub_824F6448(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f6950
	if (cr6.eq) goto loc_824F6950;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x824F694C;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824F6950:
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

__attribute__((alias("__imp__sub_824F6968"))) PPC_WEAK_FUNC(sub_824F6968);
PPC_FUNC_IMPL(__imp__sub_824F6968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F6970;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-24936
	ctx.r10.s64 = ctx.r11.s64 + -24936;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241f278
	ctx.lr = 0x824F6994;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241f130
	ctx.lr = 0x824F69A0;
	sub_8241F130(ctx, base);
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x824F69B8;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824f6708
	ctx.lr = 0x824F69C4;
	sub_824F6708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F69D0"))) PPC_WEAK_FUNC(sub_824F69D0);
PPC_FUNC_IMPL(__imp__sub_824F69D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F69D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31767
	ctx.r30.s64 = -2081882112;
	// lwz r31,20352(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20352);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x824f6a24
	if (cr6.eq) goto loc_824F6A24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x8258b050
	ctx.lr = 0x824F69FC;
	sub_8258B050(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F6A08;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F6A14;
	sub_82572FA0(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x824F6A24;
	sub_82573040(ctx, base);
loc_824F6A24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20352, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F6A34"))) PPC_WEAK_FUNC(sub_824F6A34);
PPC_FUNC_IMPL(__imp__sub_824F6A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6A38"))) PPC_WEAK_FUNC(sub_824F6A38);
PPC_FUNC_IMPL(__imp__sub_824F6A38) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-24884
	ctx.r9.s64 = ctx.r11.s64 + -24884;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x824f6a6c
	if (cr6.eq) goto loc_824F6A6C;
	// bl 0x82416268
	ctx.lr = 0x824F6A68;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824F6A6C:
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

__attribute__((alias("__imp__sub_824F6A80"))) PPC_WEAK_FUNC(sub_824F6A80);
PPC_FUNC_IMPL(__imp__sub_824F6A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8258c138
	ctx.lr = 0x824F6A90;
	sub_8258C138(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r11,5576
	ctx.r10.s64 = ctx.r11.s64 + 5576;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6AAC"))) PPC_WEAK_FUNC(sub_824F6AAC);
PPC_FUNC_IMPL(__imp__sub_824F6AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6AB0"))) PPC_WEAK_FUNC(sub_824F6AB0);
PPC_FUNC_IMPL(__imp__sub_824F6AB0) {
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
	// bl 0x824f0300
	ctx.lr = 0x824F6AC4;
	sub_824F0300(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// addi r31,r11,5576
	ctx.r31.s64 = ctx.r11.s64 + 5576;
	// blt cr6,0x824f6ae0
	if (cr6.lt) goto loc_824F6AE0;
	// bne cr6,0x824f6ae8
	if (!cr6.eq) goto loc_824F6AE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824f6ae4
	goto loc_824F6AE4;
loc_824F6AE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F6AE4:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_824F6AE8:
	// bl 0x82490188
	ctx.lr = 0x824F6AEC;
	sub_82490188(ctx, base);
	// lfd f0,48(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// lfd f13,40(r3)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f0.u64);
	// lfd f0,40(r3)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// stfd f0,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// lfd f0,48(r3)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// stfd f0,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.f0.u64);
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

__attribute__((alias("__imp__sub_824F6B20"))) PPC_WEAK_FUNC(sub_824F6B20);
PPC_FUNC_IMPL(__imp__sub_824F6B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825891b8
	ctx.lr = 0x824F6B34;
	sub_825891B8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6B48"))) PPC_WEAK_FUNC(sub_824F6B48);
PPC_FUNC_IMPL(__imp__sub_824F6B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82589210
	ctx.lr = 0x824F6B64;
	sub_82589210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x824F6B70;
	sub_831CE710(ctx, base);
	// fmul f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 * ctx.f1.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6B8C"))) PPC_WEAK_FUNC(sub_824F6B8C);
PPC_FUNC_IMPL(__imp__sub_824F6B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6B90"))) PPC_WEAK_FUNC(sub_824F6B90);
PPC_FUNC_IMPL(__imp__sub_824F6B90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82589200
	sub_82589200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F6B94"))) PPC_WEAK_FUNC(sub_824F6B94);
PPC_FUNC_IMPL(__imp__sub_824F6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6B98"))) PPC_WEAK_FUNC(sub_824F6B98);
PPC_FUNC_IMPL(__imp__sub_824F6B98) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82522688
	sub_82522688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F6BA0"))) PPC_WEAK_FUNC(sub_824F6BA0);
PPC_FUNC_IMPL(__imp__sub_824F6BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6BC0"))) PPC_WEAK_FUNC(sub_824F6BC0);
PPC_FUNC_IMPL(__imp__sub_824F6BC0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r4.u32);
	// stw r5,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6BCC"))) PPC_WEAK_FUNC(sub_824F6BCC);
PPC_FUNC_IMPL(__imp__sub_824F6BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6BD0"))) PPC_WEAK_FUNC(sub_824F6BD0);
PPC_FUNC_IMPL(__imp__sub_824F6BD0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6BDC"))) PPC_WEAK_FUNC(sub_824F6BDC);
PPC_FUNC_IMPL(__imp__sub_824F6BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6BE0"))) PPC_WEAK_FUNC(sub_824F6BE0);
PPC_FUNC_IMPL(__imp__sub_824F6BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// addi r11,r4,42
	ctx.r11.s64 = ctx.r4.s64 + 42;
	// ble cr6,0x824f6c04
	if (!cr6.gt) goto loc_824F6C04;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,4
	ctx.r10.s64 = 4;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
loc_824F6C04:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6C10"))) PPC_WEAK_FUNC(sub_824F6C10);
PPC_FUNC_IMPL(__imp__sub_824F6C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,46
	ctx.r11.s64 = ctx.r4.s64 + 46;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6C28"))) PPC_WEAK_FUNC(sub_824F6C28);
PPC_FUNC_IMPL(__imp__sub_824F6C28) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// bl 0x8241fb80
	ctx.lr = 0x824F6C4C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F6C58;
	sub_8241FA70(ctx, base);
	// li r11,32767
	ctx.r11.s64 = 32767;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_824F6CA0"))) PPC_WEAK_FUNC(sub_824F6CA0);
PPC_FUNC_IMPL(__imp__sub_824F6CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r6,r3,384
	ctx.r6.s64 = ctx.r3.s64 + 384;
loc_824F6CAC:
	// lwz r5,-160(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + -160);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824f6cfc
	if (cr6.eq) goto loc_824F6CFC;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
loc_824F6CC8:
	// ldx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r7
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r7.u64, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x824f6ce0
	if (cr6.eq) goto loc_824F6CE0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824F6CE0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824f6d10
	if (!cr6.eq) goto loc_824F6D10;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x824f6cc8
	if (cr6.lt) goto loc_824F6CC8;
loc_824F6CFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x824f6cac
	if (cr6.lt) goto loc_824F6CAC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F6D10:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6D18"))) PPC_WEAK_FUNC(sub_824F6D18);
PPC_FUNC_IMPL(__imp__sub_824F6D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824f6d60
	if (cr6.eq) goto loc_824F6D60;
	// addi r9,r4,96
	ctx.r9.s64 = ctx.r4.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
loc_824F6D40:
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x824f6d40
	if (cr6.lt) goto loc_824F6D40;
loc_824F6D60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6D68"))) PPC_WEAK_FUNC(sub_824F6D68);
PPC_FUNC_IMPL(__imp__sub_824F6D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824f6db8
	if (cr6.eq) goto loc_824F6DB8;
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
loc_824F6D90:
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x824f6d90
	if (cr6.lt) goto loc_824F6D90;
loc_824F6DB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6DC0"))) PPC_WEAK_FUNC(sub_824F6DC0);
PPC_FUNC_IMPL(__imp__sub_824F6DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mullw. r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x824f6e2c
	if (cr0.eq) goto loc_824F6E2C;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
loc_824F6DE4:
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bne cr6,0x824f6e0c
	if (!cr6.eq) goto loc_824F6E0C;
	// lhz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x824f6e10
	if (cr6.eq) goto loc_824F6E10;
loc_824F6E0C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824F6E10:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x824f6de4
	if (cr6.lt) goto loc_824F6DE4;
loc_824F6E2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6E34"))) PPC_WEAK_FUNC(sub_824F6E34);
PPC_FUNC_IMPL(__imp__sub_824F6E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6E38"))) PPC_WEAK_FUNC(sub_824F6E38);
PPC_FUNC_IMPL(__imp__sub_824F6E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,268(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mullw. r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x824f6e74
	if (cr0.eq) goto loc_824F6E74;
	// lwz r9,400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F6E54:
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x824f6e54
	if (cr6.lt) goto loc_824F6E54;
loc_824F6E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6E7C"))) PPC_WEAK_FUNC(sub_824F6E7C);
PPC_FUNC_IMPL(__imp__sub_824F6E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6E80"))) PPC_WEAK_FUNC(sub_824F6E80);
PPC_FUNC_IMPL(__imp__sub_824F6E80) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// bl 0x824f6dc0
	ctx.lr = 0x824F6E9C;
	sub_824F6DC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824f6eb4
	if (!cr6.eq) goto loc_824F6EB4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824F6EB4:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6ED8"))) PPC_WEAK_FUNC(sub_824F6ED8);
PPC_FUNC_IMPL(__imp__sub_824F6ED8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 208);
	// lhz r10,210(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 210);
	// lwz r9,212(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r7,216(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lwz r10,164(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r4,168(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// mullw r31,r11,r7
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r10,r4,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r4.s64;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r8,r8,r9
	ctx.r8.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// divw r6,r6,r7
	ctx.r6.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// andc r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// andc r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// sth r6,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// twllei r9,0
	// twllei r7,0
	// twlgei r5,-1
	// twlgei r4,-1
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F6F54"))) PPC_WEAK_FUNC(sub_824F6F54);
PPC_FUNC_IMPL(__imp__sub_824F6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F6F58"))) PPC_WEAK_FUNC(sub_824F6F58);
PPC_FUNC_IMPL(__imp__sub_824F6F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x824F6F60;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r6,r7,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subf r5,r29,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r29.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F6F98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r5,r28,r29
	ctx.r5.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824F6FB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// extsh r25,r6
	ctx.r25.s64 = ctx.r6.s16;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, xer);
	// bgt cr6,0x824f7034
	if (cr6.gt) goto loc_824F7034;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
loc_824F6FE0:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bgt cr6,0x824f7028
	if (cr6.gt) goto loc_824F7028;
	// addi r30,r27,-48
	ctx.r30.s64 = ctx.r27.s64 + -48;
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
loc_824F6FF4:
	// sth r31,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r31.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f6dc0
	ctx.lr = 0x824F7004;
	sub_824F6DC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f7040
	if (cr6.eq) goto loc_824F7040;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x824f7040
	if (!cr6.eq) goto loc_824F7040;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// ble cr6,0x824f6ff4
	if (!cr6.gt) goto loc_824F6FF4;
loc_824F7028:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, xer);
	// ble cr6,0x824f6fe0
	if (!cr6.gt) goto loc_824F6FE0;
loc_824F7034:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_824F7040:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F704C"))) PPC_WEAK_FUNC(sub_824F704C);
PPC_FUNC_IMPL(__imp__sub_824F704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F7050"))) PPC_WEAK_FUNC(sub_824F7050);
PPC_FUNC_IMPL(__imp__sub_824F7050) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lhz r7,38(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 38);
	// lhz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 208);
	// lhz r9,210(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 210);
	// lhz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 36);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lwz r31,212(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lwz r7,216(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// lwz r9,168(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mullw r10,r6,r31
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// mullw r8,r5,r7
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F70B8"))) PPC_WEAK_FUNC(sub_824F70B8);
PPC_FUNC_IMPL(__imp__sub_824F70B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824f70d4
	if (cr6.eq) goto loc_824F70D4;
	// lhz r11,412(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 412);
	// addi r10,r3,412
	ctx.r10.s64 = ctx.r3.s64 + 412;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r9,414(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 414);
	// sth r9,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r9.u16);
loc_824F70D4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// lhz r9,412(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 412);
	// lhz r7,414(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 414);
	// lwz r8,220(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r4,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r4.u16);
	// sth r6,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r6.u16);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F7108"))) PPC_WEAK_FUNC(sub_824F7108);
PPC_FUNC_IMPL(__imp__sub_824F7108) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,412(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 412);
	// lhz r10,208(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 208);
	// lhz r9,414(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 414);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,210(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 210);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lwz r31,212(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lwz r7,216(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// subf r6,r6,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r6.s64;
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lwz r9,168(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// mullw r10,r6,r31
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// lwz r30,220(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// lwz r4,224(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// mullw r8,r5,r7
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r30,r31
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mullw r8,r4,r7
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F7184"))) PPC_WEAK_FUNC(sub_824F7184);
PPC_FUNC_IMPL(__imp__sub_824F7184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F7188"))) PPC_WEAK_FUNC(sub_824F7188);
PPC_FUNC_IMPL(__imp__sub_824F7188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x824F7190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lwz r6,260(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// twllei r6,0
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r30,264(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lhz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// lhz r8,258(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 258);
	// lwz r7,288(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r29,212(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subf r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mullw r27,r9,r6
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r8,r30
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// subf r10,r3,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r3.s64;
	// subf r8,r29,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r29.s64;
	// subf r3,r10,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r9,r29,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r29.s64;
	// subf r7,r11,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r11,r29,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r29.s64;
	// subf r7,r29,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r29.s64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rotlwi r8,r7,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r28,r3,r6
	ctx.r28.s32 = PPCDivide(ctx.r3.s32, ctx.r6.s32);
	// andc r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// andc r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 & ~ctx.r8.u64;
	// andc r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r10.u64;
	// divw r29,r4,r6
	ctx.r29.s32 = PPCDivide(ctx.r4.s32, ctx.r6.s32);
	// andc r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// twllei r6,0
	// divw r26,r7,r30
	ctx.r26.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	// twllei r30,0
	// twlgei r8,-1
	// twlgei r3,-1
	// divw r27,r5,r30
	ctx.r27.s32 = PPCDivide(ctx.r5.s32, ctx.r30.s32);
	// twllei r30,0
	// twlgei r10,-1
	// twlgei r9,-1
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// bgt cr6,0x824f730c
	if (cr6.gt) goto loc_824F730C;
loc_824F728C:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// bgt cr6,0x824f7300
	if (cr6.gt) goto loc_824F7300;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
loc_824F729C:
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f6dc0
	ctx.lr = 0x824F72AC;
	sub_824F6DC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f7318
	if (cr6.eq) goto loc_824F7318;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f72d4
	if (cr6.eq) goto loc_824F72D4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824f72d8
	if (cr6.eq) goto loc_824F72D8;
loc_824F72D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F72D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f72f4
	if (!cr6.eq) goto loc_824F72F4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x824f7318
	if (!cr6.eq) goto loc_824F7318;
loc_824F72F4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// ble cr6,0x824f729c
	if (!cr6.gt) goto loc_824F729C;
loc_824F7300:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// ble cr6,0x824f728c
	if (!cr6.gt) goto loc_824F728C;
loc_824F730C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_824F7318:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F7324"))) PPC_WEAK_FUNC(sub_824F7324);
PPC_FUNC_IMPL(__imp__sub_824F7324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F7328"))) PPC_WEAK_FUNC(sub_824F7328);
PPC_FUNC_IMPL(__imp__sub_824F7328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F7330;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_824F7348:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x824f7360
	if (cr6.eq) goto loc_824F7360;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r28,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r28.u64);
	// bl 0x82572fa0
	ctx.lr = 0x824F7360;
	sub_82572FA0(ctx, base);
loc_824F7360:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x824f7348
	if (!cr0.eq) goto loc_824F7348;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F7378"))) PPC_WEAK_FUNC(sub_824F7378);
PPC_FUNC_IMPL(__imp__sub_824F7378) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f73cc
	if (cr6.eq) goto loc_824F73CC;
	// bl 0x82510270
	ctx.lr = 0x824F739C;
	sub_82510270(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F73B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x824F73BC;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824f73d0
	if (!cr6.eq) goto loc_824F73D0;
loc_824F73CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F73D0:
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

__attribute__((alias("__imp__sub_824F73E8"))) PPC_WEAK_FUNC(sub_824F73E8);
PPC_FUNC_IMPL(__imp__sub_824F73E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x824F73F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x824f746c
	if (!cr6.lt) goto loc_824F746C;
loc_824F741C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bctrl 
	ctx.lr = 0x824F7434;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f7444
	if (cr6.eq) goto loc_824F7444;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_824F7444:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
	// blt cr6,0x824f741c
	if (cr6.lt) goto loc_824F741C;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_824F746C:
	// bne cr6,0x824f7488
	if (!cr6.eq) goto loc_824F7488;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
loc_824F7488:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x824f74e4
	if (!cr6.lt) goto loc_824F74E4;
loc_824F74A0:
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x824F74B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f74e4
	if (cr6.eq) goto loc_824F74E4;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, xer);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x824f74a0
	if (cr6.lt) goto loc_824F74A0;
loc_824F74E4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F74F8"))) PPC_WEAK_FUNC(sub_824F74F8);
PPC_FUNC_IMPL(__imp__sub_824F74F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x824F7500;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f75cc
	if (cr6.eq) goto loc_824F75CC;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f75cc
	if (cr6.eq) goto loc_824F75CC;
	// subfic r25,r3,4
	xer.ca = ctx.r3.u32 <= 4;
	ctx.r25.s64 = 4 - ctx.r3.s64;
loc_824F7528:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x824F7540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f7574
	if (cr6.eq) goto loc_824F7574;
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r5.s64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce420
	ctx.lr = 0x824F756C;
	sub_831CE420(ctx, base);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// b 0x824f75c0
	goto loc_824F75C0;
loc_824F7574:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x824F7588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f75bc
	if (cr6.eq) goto loc_824F75BC;
loc_824F7594:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwzu r4,-4(r31)
	ea = -4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bctrl 
	ctx.lr = 0x824F75B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824f7594
	if (!cr6.eq) goto loc_824F7594;
loc_824F75BC:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_824F75C0:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// bne cr6,0x824f7528
	if (!cr6.eq) goto loc_824F7528;
loc_824F75CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F75D4"))) PPC_WEAK_FUNC(sub_824F75D4);
PPC_FUNC_IMPL(__imp__sub_824F75D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F75D8"))) PPC_WEAK_FUNC(sub_824F75D8);
PPC_FUNC_IMPL(__imp__sub_824F75D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F75E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,20440
	ctx.r29.s64 = ctx.r11.s64 + 20440;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8257f190
	ctx.lr = 0x824F7604;
	sub_8257F190(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r10,r11,20448
	ctx.r10.s64 = ctx.r11.s64 + 20448;
	// lwz r11,20448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20448);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824f7638
	if (cr6.eq) goto loc_824F7638;
loc_824F761C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x824f767c
	if (!cr6.eq) goto loc_824F767C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824f761c
	if (!cr6.eq) goto loc_824F761C;
loc_824F7638:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x824f7648
	if (cr6.eq) goto loc_824F7648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824F7648:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x824f7654
	if (cr6.eq) goto loc_824F7654;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_824F7654:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824f7660
	if (cr6.eq) goto loc_824F7660;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_824F7660:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_824F7664:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257f158
	ctx.lr = 0x824F7670;
	sub_8257F158(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_824F767C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x824f768c
	if (cr6.eq) goto loc_824F768C;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824F768C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x824f769c
	if (cr6.eq) goto loc_824F769C;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_824F769C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824f76ac
	if (cr6.eq) goto loc_824F76AC;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_824F76AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824f7664
	goto loc_824F7664;
}

__attribute__((alias("__imp__sub_824F76B4"))) PPC_WEAK_FUNC(sub_824F76B4);
PPC_FUNC_IMPL(__imp__sub_824F76B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F76B8"))) PPC_WEAK_FUNC(sub_824F76B8);
PPC_FUNC_IMPL(__imp__sub_824F76B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F76C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r31,20408(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x824f7704
	if (cr6.eq) goto loc_824F7704;
loc_824F76E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F76F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x824f76e0
	if (!cr6.eq) goto loc_824F76E0;
loc_824F7704:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F770C"))) PPC_WEAK_FUNC(sub_824F770C);
PPC_FUNC_IMPL(__imp__sub_824F770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F7710"))) PPC_WEAK_FUNC(sub_824F7710);
PPC_FUNC_IMPL(__imp__sub_824F7710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F7718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r31,20408(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x824f775c
	if (cr6.eq) goto loc_824F775C;
loc_824F7738:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F7750;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x824f7738
	if (!cr6.eq) goto loc_824F7738;
loc_824F775C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F7764"))) PPC_WEAK_FUNC(sub_824F7764);
PPC_FUNC_IMPL(__imp__sub_824F7764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F7768"))) PPC_WEAK_FUNC(sub_824F7768);
PPC_FUNC_IMPL(__imp__sub_824F7768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F7770;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x824f79a0
	if (cr6.gt) goto loc_824F79A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824f79a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F79A0;
	// bdzf 4*cr6+eq,0x824f7824
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7824;
	// bdzf 4*cr6+eq,0x824f78e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F78E0;
	// bne cr6,0x824f7994
	if (!cr6.eq) goto loc_824F7994;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f79a0
	if (!cr6.eq) goto loc_824F79A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// lwz r30,444(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x824f77dc
	if (cr6.eq) goto loc_824F77DC;
	// addi r4,r28,428
	ctx.r4.s64 = ctx.r28.s64 + 428;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x824F77D8;
	sub_831CEE08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_824F77DC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f77f8
	if (cr6.eq) goto loc_824F77F8;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_824F77F8:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e2b40
	ctx.lr = 0x824F7808;
	sub_824E2B40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x824e23f8
	ctx.lr = 0x824F7818;
	sub_824E23F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824F7824:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824e2158
	ctx.lr = 0x824F782C;
	sub_824E2158(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824f7844
	if (cr6.eq) goto loc_824F7844;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F7844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f78c4
	if (cr6.eq) goto loc_824F78C4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824e3230
	ctx.lr = 0x824F785C;
	sub_824E3230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f79a0
	if (cr6.eq) goto loc_824F79A0;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r30,20408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x824f78b8
	if (cr6.eq) goto loc_824F78B8;
loc_824F7888:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F78AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x824f7888
	if (!cr6.eq) goto loc_824F7888;
loc_824F78B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824F78C4:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824e2548
	ctx.lr = 0x824F78CC;
	sub_824E2548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824F78E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824e2158
	ctx.lr = 0x824F78E8;
	sub_824E2158(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824f7900
	if (cr6.eq) goto loc_824F7900;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F7900:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f78b8
	if (!cr6.eq) goto loc_824F78B8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x824e3300
	ctx.lr = 0x824F7918;
	sub_824E3300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f79a0
	if (cr6.eq) goto loc_824F79A0;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r30,20408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x824f7974
	if (cr6.eq) goto loc_824F7974;
loc_824F7944:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F7968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x824f7944
	if (!cr6.eq) goto loc_824F7944;
loc_824F7974:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x824e2548
	ctx.lr = 0x824F7980;
	sub_824E2548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824F7994:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_824F79A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F79AC"))) PPC_WEAK_FUNC(sub_824F79AC);
PPC_FUNC_IMPL(__imp__sub_824F79AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F79B0"))) PPC_WEAK_FUNC(sub_824F79B0);
PPC_FUNC_IMPL(__imp__sub_824F79B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F79B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x824f7a44
	if (!cr6.eq) goto loc_824F7A44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e3300
	ctx.lr = 0x824F79DC;
	sub_824E3300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f7a44
	if (cr6.eq) goto loc_824F7A44;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r31,20408(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x824f7a38
	if (cr6.eq) goto loc_824F7A38;
loc_824F7A08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F7A2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x824f7a08
	if (!cr6.eq) goto loc_824F7A08;
loc_824F7A38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824F7A44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F7A50"))) PPC_WEAK_FUNC(sub_824F7A50);
PPC_FUNC_IMPL(__imp__sub_824F7A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F7A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x824f7b3c
	if (cr6.gt) goto loc_824F7B3C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824f7b3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7B3C;
	// bdzf 4*cr6+eq,0x824f7a98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7A98;
	// bdzf 4*cr6+eq,0x824f7aac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7AAC;
	// bne cr6,0x824f7b30
	if (!cr6.eq) goto loc_824F7B30;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824F7A98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e2548
	ctx.lr = 0x824F7AA0;
	sub_824E2548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824F7AAC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824e3300
	ctx.lr = 0x824F7AB4;
	sub_824E3300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f7b3c
	if (cr6.eq) goto loc_824F7B3C;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r31,20408(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x824f7b10
	if (cr6.eq) goto loc_824F7B10;
loc_824F7AE0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F7B04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x824f7ae0
	if (!cr6.eq) goto loc_824F7AE0;
loc_824F7B10:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x824e2548
	ctx.lr = 0x824F7B1C;
	sub_824E2548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824F7B30:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_824F7B3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F7B48"))) PPC_WEAK_FUNC(sub_824F7B48);
PPC_FUNC_IMPL(__imp__sub_824F7B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x824F7B50;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,44(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x824f7d9c
	if (cr6.gt) goto loc_824F7D9C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824f7d9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7D9C;
	// bdzf 4*cr6+eq,0x824f7c28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7C28;
	// bdzf 4*cr6+eq,0x824f7cdc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7CDC;
	// bne cr6,0x824f7d90
	if (!cr6.eq) goto loc_824F7D90;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f7d9c
	if (!cr6.eq) goto loc_824F7D9C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
	// lwz r30,444(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 444);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x824f7bb8
	if (cr6.eq) goto loc_824F7BB8;
	// addi r4,r27,428
	ctx.r4.s64 = ctx.r27.s64 + 428;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x824F7BB4;
	sub_831CEE08(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824F7BB8:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r28,r1,120
	ctx.r28.s64 = ctx.r1.s64 + 120;
	// lwz r27,40(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r26,r1,124
	ctx.r26.s64 = ctx.r1.s64 + 124;
	// addi r25,r1,128
	ctx.r25.s64 = ctx.r1.s64 + 128;
	// stwx r9,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r6,r11,5
	ctx.r6.s64 = ctx.r11.s64 + 5;
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stwx r4,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r4.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwx r30,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r27,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r27.u32);
	// bl 0x824e2b40
	ctx.lr = 0x824F7C0C;
	sub_824E2B40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x824e23f8
	ctx.lr = 0x824F7C1C;
	sub_824E23F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_824F7C28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824e2158
	ctx.lr = 0x824F7C30;
	sub_824E2158(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824f7c48
	if (cr6.eq) goto loc_824F7C48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F7C48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f7cc8
	if (cr6.eq) goto loc_824F7CC8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824e3230
	ctx.lr = 0x824F7C60;
	sub_824E3230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f7d9c
	if (cr6.eq) goto loc_824F7D9C;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r30,20408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x824f7cbc
	if (cr6.eq) goto loc_824F7CBC;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
loc_824F7C90:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F7CB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x824f7c90
	if (!cr6.eq) goto loc_824F7C90;
loc_824F7CBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_824F7CC8:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824e2548
	ctx.lr = 0x824F7CD0;
	sub_824E2548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_824F7CDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824e2158
	ctx.lr = 0x824F7CE4;
	sub_824E2158(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824f7cfc
	if (cr6.eq) goto loc_824F7CFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F7CFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f7cbc
	if (!cr6.eq) goto loc_824F7CBC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x824e3300
	ctx.lr = 0x824F7D14;
	sub_824E3300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f7d9c
	if (cr6.eq) goto loc_824F7D9C;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r30,20408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x824f7d70
	if (cr6.eq) goto loc_824F7D70;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
loc_824F7D44:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F7D64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x824f7d44
	if (!cr6.eq) goto loc_824F7D44;
loc_824F7D70:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x824e2548
	ctx.lr = 0x824F7D7C;
	sub_824E2548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_824F7D90:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_824F7D9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F7DA8"))) PPC_WEAK_FUNC(sub_824F7DA8);
PPC_FUNC_IMPL(__imp__sub_824F7DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F7DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x824f7e94
	if (cr6.gt) goto loc_824F7E94;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824f7e94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7E94;
	// bdzf 4*cr6+eq,0x824f7df0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7DF0;
	// bdzf 4*cr6+eq,0x824f7e04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7E04;
	// bne cr6,0x824f7e88
	if (!cr6.eq) goto loc_824F7E88;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_824F7DF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e2548
	ctx.lr = 0x824F7DF8;
	sub_824E2548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_824F7E04:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824e3300
	ctx.lr = 0x824F7E0C;
	sub_824E3300(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f7e94
	if (cr6.eq) goto loc_824F7E94;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r31,20408(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x824f7e68
	if (cr6.eq) goto loc_824F7E68;
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
loc_824F7E3C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F7E5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x824f7e3c
	if (!cr6.eq) goto loc_824F7E3C;
loc_824F7E68:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,44(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x824e2548
	ctx.lr = 0x824F7E74;
	sub_824E2548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_824F7E88:
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r11.u32);
loc_824F7E94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F7EA0"))) PPC_WEAK_FUNC(sub_824F7EA0);
PPC_FUNC_IMPL(__imp__sub_824F7EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F7EA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r31,20408(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x824f7eec
	if (cr6.eq) goto loc_824F7EEC;
loc_824F7EC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824F7EE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x824f7ec8
	if (!cr6.eq) goto loc_824F7EC8;
loc_824F7EEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824f5fd0
	ctx.lr = 0x824F7EF4;
	sub_824F5FD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F7EFC"))) PPC_WEAK_FUNC(sub_824F7EFC);
PPC_FUNC_IMPL(__imp__sub_824F7EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F7F00"))) PPC_WEAK_FUNC(sub_824F7F00);
PPC_FUNC_IMPL(__imp__sub_824F7F00) {
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
	ctx.lr = 0x824F7F08;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// li r25,1
	ctx.r25.s64 = 1;
	// mullw. r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x824f7f74
	if (cr0.eq) goto loc_824F7F74;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_824F7F2C:
	// lwz r11,400(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 400);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824f7f68
	if (!cr6.eq) goto loc_824F7F68;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f7da8
	ctx.lr = 0x824F7F4C;
	sub_824F7DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f7f64
	if (cr6.eq) goto loc_824F7F64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f6c28
	ctx.lr = 0x824F7F60;
	sub_824F6C28(ctx, base);
	// b 0x824f7f68
	goto loc_824F7F68;
loc_824F7F64:
	// li r25,0
	ctx.r25.s64 = 0;
loc_824F7F68:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// bne 0x824f7f2c
	if (!cr0.eq) goto loc_824F7F2C;
loc_824F7F74:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f7f8c
	if (!cr6.eq) goto loc_824F7F8C;
loc_824F7F80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_824F7F8C:
	// addi r27,r24,344
	ctx.r27.s64 = ctx.r24.s64 + 344;
	// li r26,4
	ctx.r26.s64 = 4;
loc_824F7F94:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824f802c
	if (cr6.eq) goto loc_824F802C;
	// lwz r29,28(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x824f802c
	if (cr6.eq) goto loc_824F802C;
loc_824F7FB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824e2308
	ctx.lr = 0x824F7FBC;
	sub_824E2308(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x824f800c
	if (cr6.gt) goto loc_824F800C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824f800c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F800C;
	// bdzf 4*cr6+eq,0x824f7fec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7FEC;
	// bdzf 4*cr6+eq,0x824f7ff4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F7FF4;
	// bne cr6,0x824f800c
	if (!cr6.eq) goto loc_824F800C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824f8010
	goto loc_824F8010;
loc_824F7FEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x824f8004
	goto loc_824F8004;
loc_824F7FF4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824e3300
	ctx.lr = 0x824F8000;
	sub_824E3300(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_824F8004:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824e2548
	ctx.lr = 0x824F800C;
	sub_824E2548(ctx, base);
loc_824F800C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F8010:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r25,r8,r25
	ctx.r25.u64 = ctx.r8.u64 & ctx.r25.u64;
	// blt cr6,0x824f7fb0
	if (cr6.lt) goto loc_824F7FB0;
loc_824F802C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x824f7f94
	if (!cr0.eq) goto loc_824F7F94;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f7f80
	if (cr6.eq) goto loc_824F7F80;
	// lwz r11,336(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f80e4
	if (cr6.eq) goto loc_824F80E4;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x824f80e4
	if (cr6.eq) goto loc_824F80E4;
loc_824F8060:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,336(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 336);
	// bl 0x824e2308
	ctx.lr = 0x824F806C;
	sub_824E2308(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x824f80c4
	if (cr6.gt) goto loc_824F80C4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824f80c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F80C4;
	// bdzf 4*cr6+eq,0x824f809c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F809C;
	// bdzf 4*cr6+eq,0x824f80a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F80A4;
	// bne cr6,0x824f80c4
	if (!cr6.eq) goto loc_824F80C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824f80c8
	goto loc_824F80C8;
loc_824F809C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x824f80bc
	goto loc_824F80BC;
loc_824F80A4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824f7710
	ctx.lr = 0x824F80AC;
	sub_824F7710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824e3300
	ctx.lr = 0x824F80B8;
	sub_824E3300(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_824F80BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824e2548
	ctx.lr = 0x824F80C4;
	sub_824E2548(ctx, base);
loc_824F80C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F80C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r25,r8,r25
	ctx.r25.u64 = ctx.r8.u64 & ctx.r25.u64;
	// blt cr6,0x824f8060
	if (cr6.lt) goto loc_824F8060;
loc_824F80E4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F80F0"))) PPC_WEAK_FUNC(sub_824F80F0);
PPC_FUNC_IMPL(__imp__sub_824F80F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824f75d8
	ctx.lr = 0x824F8104;
	sub_824F75D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F8114"))) PPC_WEAK_FUNC(sub_824F8114);
PPC_FUNC_IMPL(__imp__sub_824F8114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F8118"))) PPC_WEAK_FUNC(sub_824F8118);
PPC_FUNC_IMPL(__imp__sub_824F8118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F8120;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8246ace8
	ctx.lr = 0x824F8130;
	sub_8246ACE8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f040
	ctx.lr = 0x824F8148;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F814C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241fa28
	ctx.lr = 0x824F8158;
	sub_8241FA28(ctx, base);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83323038
	ctx.lr = 0x824F8168;
	sub_83323038(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83308d20
	ctx.lr = 0x824F8170;
	sub_83308D20(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824f81d4
	if (!cr6.eq) goto loc_824F81D4;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x824F818C;
	sub_8241F040(ctx, base);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x824F8194;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x824F81A0;
	sub_8241FA28(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x824F81B0;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F81B4;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F81C0;
	sub_8241FA70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83308d20
	ctx.lr = 0x824F81C8;
	sub_83308D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_824F81D4:
	// bl 0x824f7378
	ctx.lr = 0x824F81D8;
	sub_824F7378(ctx, base);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x824F81E8;
	sub_8241F040(ctx, base);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x824F81F8;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F81FC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241fa28
	ctx.lr = 0x824F8208;
	sub_8241FA28(ctx, base);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83323038
	ctx.lr = 0x824F8218;
	sub_83323038(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x824F8224;
	sub_8241F040(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x824f8278
	if (!cr6.eq) goto loc_824F8278;
	// bl 0x8241f040
	ctx.lr = 0x824F8240;
	sub_8241F040(ctx, base);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x824F8248;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x824F8254;
	sub_8241FA28(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x824F8264;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F8268;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F8274;
	sub_8241FA70(ctx, base);
	// b 0x824f829c
	goto loc_824F829C;
loc_824F8278:
	// bl 0x8241f040
	ctx.lr = 0x824F827C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F8280;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fa28
	ctx.lr = 0x824F828C;
	sub_8241FA28(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83323038
	ctx.lr = 0x824F829C;
	sub_83323038(ctx, base);
loc_824F829C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83308d20
	ctx.lr = 0x824F82A4;
	sub_83308D20(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83308d20
	ctx.lr = 0x824F82AC;
	sub_83308D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F82B8"))) PPC_WEAK_FUNC(sub_824F82B8);
PPC_FUNC_IMPL(__imp__sub_824F82B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F82C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r9,r10,-24632
	ctx.r9.s64 = ctx.r10.s64 + -24632;
	// addi r29,r11,20440
	ctx.r29.s64 = ctx.r11.s64 + 20440;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257f080
	ctx.lr = 0x824F82E4;
	sub_8257F080(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r31,r11,20448
	ctx.r31.s64 = ctx.r11.s64 + 20448;
	// lwz r3,20448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20448);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x824f8340
	if (cr6.eq) goto loc_824F8340;
loc_824F82FC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x824f8318
	if (cr6.eq) goto loc_824F8318;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x824f82fc
	if (!cr6.eq) goto loc_824F82FC;
	// b 0x824f8340
	goto loc_824F8340;
loc_824F8318:
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x824f8340
	if (cr6.eq) goto loc_824F8340;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x824F8334;
	sub_831CE420(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_824F8340:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257f158
	ctx.lr = 0x824F8348;
	sub_8257F158(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F835C"))) PPC_WEAK_FUNC(sub_824F835C);
PPC_FUNC_IMPL(__imp__sub_824F835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F8360"))) PPC_WEAK_FUNC(sub_824F8360);
PPC_FUNC_IMPL(__imp__sub_824F8360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,20424
	ctx.r4.s64 = ctx.r11.s64 + 20424;
	// bl 0x8241f130
	ctx.lr = 0x824F8384;
	sub_8241F130(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r30,r10,-24797
	ctx.r30.s64 = ctx.r10.s64 + -24797;
	// addi r4,r30,-2
	ctx.r4.s64 = ctx.r30.s64 + -2;
	// bl 0x82576848
	ctx.lr = 0x824F8398;
	sub_82576848(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F839C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8241fa28
	ctx.lr = 0x824F83A8;
	sub_8241FA28(ctx, base);
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82576848
	ctx.lr = 0x824F83B4;
	sub_82576848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82576848
	ctx.lr = 0x824F83C0;
	sub_82576848(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// li r8,64
	ctx.r8.s64 = 64;
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r6.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// sth r11,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r8,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
	// addi r8,r31,184
	ctx.r8.s64 = ctx.r31.s64 + 184;
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r6,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r6.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
loc_824F8428:
	// stw r11,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r11.u32);
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x824f8428
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824F8428;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_824F8458"))) PPC_WEAK_FUNC(sub_824F8458);
PPC_FUNC_IMPL(__imp__sub_824F8458) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241f130
	ctx.lr = 0x824F8478;
	sub_8241F130(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x825767c8
	ctx.lr = 0x824F8484;
	sub_825767C8(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// bl 0x8241fa28
	ctx.lr = 0x824F8490;
	sub_8241FA28(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// bl 0x825767c8
	ctx.lr = 0x824F849C;
	sub_825767C8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// bl 0x825767c8
	ctx.lr = 0x824F84A8;
	sub_825767C8(ctx, base);
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// lbz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// lwz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// lwz r8,164(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// ld r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 168);
	// std r7,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r7.u64);
	// ld r6,176(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 176);
	// std r6,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r6.u64);
	// ld r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 184);
	// std r5,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r5.u64);
	// ld r4,192(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 192);
	// std r4,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r4.u64);
	// lhz r3,200(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 200);
	// sth r3,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r3.u16);
	// lhz r11,202(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 202);
	// sth r11,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// lwz r9,208(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// lwz r8,212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// lwz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r6,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r6.u32);
	// lwz r5,224(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r5,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r5.u32);
	// lwz r4,228(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r4,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r4.u32);
	// lwz r3,232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// lwz r9,244(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_824F8574"))) PPC_WEAK_FUNC(sub_824F8574);
PPC_FUNC_IMPL(__imp__sub_824F8574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F8578"))) PPC_WEAK_FUNC(sub_824F8578);
PPC_FUNC_IMPL(__imp__sub_824F8578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824F8580;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r3,120
	ctx.r28.s64 = ctx.r3.s64 + 120;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824f85a0
	if (cr6.lt) goto loc_824F85A0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824F85A0;
	sub_8386D088(ctx, base);
loc_824F85A0:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// addi r31,r29,80
	ctx.r31.s64 = ctx.r29.s64 + 80;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824f85cc
	if (cr6.lt) goto loc_824F85CC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824F85CC;
	sub_8386D088(ctx, base);
loc_824F85CC:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x8241fb00
	ctx.lr = 0x824F85E0;
	sub_8241FB00(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824f85f8
	if (cr6.lt) goto loc_824F85F8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824F85F8;
	sub_8386D088(ctx, base);
loc_824F85F8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x82573c50
	ctx.lr = 0x824F860C;
	sub_82573C50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F8614"))) PPC_WEAK_FUNC(sub_824F8614);
PPC_FUNC_IMPL(__imp__sub_824F8614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F8618"))) PPC_WEAK_FUNC(sub_824F8618);
PPC_FUNC_IMPL(__imp__sub_824F8618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F8620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8690
	if (cr6.eq) goto loc_824F8690;
loc_824F8638:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f8684
	if (cr6.eq) goto loc_824F8684;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x824f8660
	if (cr6.gt) goto loc_824F8660;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_824F8660:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8241fb00
	ctx.lr = 0x824F8670;
	sub_8241FB00(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x824f8684
	if (!cr0.eq) goto loc_824F8684;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_824F8684:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f8638
	if (!cr6.eq) goto loc_824F8638;
loc_824F8690:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x824f86c8
	if (cr6.eq) goto loc_824F86C8;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_824F86A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f86c0
	if (cr6.eq) goto loc_824F86C0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8386d088
	ctx.lr = 0x824F86C0;
	sub_8386D088(ctx, base);
loc_824F86C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x824f86a0
	if (!cr6.eq) goto loc_824F86A0;
loc_824F86C8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f86d8
	if (cr6.eq) goto loc_824F86D8;
	// bl 0x8386d088
	ctx.lr = 0x824F86D8;
	sub_8386D088(ctx, base);
loc_824F86D8:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F86E8"))) PPC_WEAK_FUNC(sub_824F86E8);
PPC_FUNC_IMPL(__imp__sub_824F86E8) {
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
	// bl 0x824f82b8
	ctx.lr = 0x824F8708;
	sub_824F82B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8728
	if (cr6.eq) goto loc_824F8728;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x824F8724;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824F8728:
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

__attribute__((alias("__imp__sub_824F8740"))) PPC_WEAK_FUNC(sub_824F8740);
PPC_FUNC_IMPL(__imp__sub_824F8740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F8748;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x824f8778
	if (!cr6.lt) goto loc_824F8778;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15820
	ctx.r3.s64 = ctx.r11.s64 + 15820;
	// bl 0x831cc150
	ctx.lr = 0x824F8778;
	sub_831CC150(ctx, base);
loc_824F8778:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x824f8788
	if (!cr6.lt) goto loc_824F8788;
	// li r10,8
	ctx.r10.s64 = 8;
loc_824F8788:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x824f87a0
	if (!cr6.lt) goto loc_824F87A0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x824f87a0
	if (cr6.gt) goto loc_824F87A0;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_824F87A0:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82534518
	ctx.lr = 0x824F87B0;
	sub_82534518(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x824f87f8
	if (cr6.eq) goto loc_824F87F8;
loc_824F87D8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f87e8
	if (cr6.eq) goto loc_824F87E8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_824F87E8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x824f87d8
	if (!cr6.eq) goto loc_824F87D8;
loc_824F87F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bgt cr6,0x824f887c
	if (cr6.gt) goto loc_824F887C;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x824f8830
	if (cr6.eq) goto loc_824F8830;
loc_824F8810:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f8820
	if (cr6.eq) goto loc_824F8820;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_824F8820:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x824f8810
	if (!cr6.eq) goto loc_824F8810;
loc_824F8830:
	// subf. r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x824f8854
	if (cr0.eq) goto loc_824F8854;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_824F8840:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f884c
	if (cr6.eq) goto loc_824F884C;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_824F884C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824f8840
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824F8840;
loc_824F8854:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x824f8908
	if (cr6.eq) goto loc_824F8908;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_824F8864:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8870
	if (cr6.eq) goto loc_824F8870;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_824F8870:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824f8864
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824F8864;
	// b 0x824f8908
	goto loc_824F8908;
loc_824F887C:
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x824f88ac
	if (cr6.eq) goto loc_824F88AC;
loc_824F888C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f889c
	if (cr6.eq) goto loc_824F889C;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_824F889C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x824f888c
	if (!cr6.eq) goto loc_824F888C;
loc_824F88AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x824f88e4
	if (cr6.eq) goto loc_824F88E4;
loc_824F88C4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f88d4
	if (cr6.eq) goto loc_824F88D4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_824F88D4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x824f88c4
	if (!cr6.eq) goto loc_824F88C4;
loc_824F88E4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x824f8908
	if (cr6.eq) goto loc_824F8908;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824F88F4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f8900
	if (cr6.eq) goto loc_824F8900;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_824F8900:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824f88f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824F88F4;
loc_824F8908:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f8918
	if (cr6.eq) goto loc_824F8918;
	// bl 0x8386d088
	ctx.lr = 0x824F8918;
	sub_8386D088(ctx, base);
loc_824F8918:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F8930"))) PPC_WEAK_FUNC(sub_824F8930);
PPC_FUNC_IMPL(__imp__sub_824F8930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x824F8938;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x824f8dd8
	if (!cr6.gt) goto loc_824F8DD8;
	// addi r21,r3,592
	ctx.r21.s64 = ctx.r3.s64 + 592;
	// li r19,5
	ctx.r19.s64 = 5;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r23,32767
	ctx.r23.s64 = 32767;
	// li r22,-1
	ctx.r22.s64 = -1;
loc_824F8964:
	// stw r19,616(r24)
	PPC_STORE_U32(ctx.r24.u32 + 616, ctx.r19.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,12(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// beq cr6,0x824f8980
	if (cr6.eq) goto loc_824F8980;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824F8980:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x824f8990
	if (cr6.gt) goto loc_824F8990;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_824F8990:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8241fa28
	ctx.lr = 0x824F89A4;
	sub_8241FA28(ctx, base);
	// lwz r9,336(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 336);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f8b90
	if (cr6.eq) goto loc_824F8B90;
	// ld r11,408(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 408);
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq cr6,0x824f89c8
	if (cr6.eq) goto loc_824F89C8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_824F89C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8b90
	if (cr6.eq) goto loc_824F8B90;
	// lwz r11,272(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 272);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lwz r10,268(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 268);
	// mullw. r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x824f8a70
	if (cr0.eq) goto loc_824F8A70;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_824F89F0:
	// lwz r11,400(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 400);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824f8a64
	if (!cr6.eq) goto loc_824F8A64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f7da8
	ctx.lr = 0x824F8A10;
	sub_824F7DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8a60
	if (cr6.eq) goto loc_824F8A60;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x8241fb80
	ctx.lr = 0x824F8A24;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F8A30;
	sub_8241FA70(ctx, base);
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// sth r23,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r23.u16);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
	// b 0x824f8a64
	goto loc_824F8A64;
loc_824F8A60:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_824F8A64:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// bne 0x824f89f0
	if (!cr0.eq) goto loc_824F89F0;
loc_824F8A70:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f8dfc
	if (!cr6.eq) goto loc_824F8DFC;
	// addi r29,r24,384
	ctx.r29.s64 = ctx.r24.s64 + 384;
	// li r26,4
	ctx.r26.s64 = 4;
loc_824F8A84:
	// lwz r11,-160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8b04
	if (cr6.eq) goto loc_824F8B04;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_824F8A98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x824f8ab0
	if (!cr6.eq) goto loc_824F8AB0;
	// stw r20,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
loc_824F8AB0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824f8af8
	if (!cr6.eq) goto loc_824F8AF8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f7a50
	ctx.lr = 0x824F8AC8;
	sub_824F7A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8af4
	if (cr6.eq) goto loc_824F8AF4;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// bl 0x8241fb80
	ctx.lr = 0x824F8ADC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F8AE8;
	sub_8241FA70(ctx, base);
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
	// stb r28,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r28.u8);
	// b 0x824f8af8
	goto loc_824F8AF8;
loc_824F8AF4:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_824F8AF8:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x824f8a98
	if (!cr0.eq) goto loc_824F8A98;
loc_824F8B04:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x824f8a84
	if (!cr0.eq) goto loc_824F8A84;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f8dfc
	if (!cr6.eq) goto loc_824F8DFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,336(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 336);
	// bl 0x824e2308
	ctx.lr = 0x824F8B28;
	sub_824E2308(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x824f8b80
	if (cr6.gt) goto loc_824F8B80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824f8b80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F8B80;
	// bdzf 4*cr6+eq,0x824f8b58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F8B58;
	// bdzf 4*cr6+eq,0x824f8b60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824F8B60;
	// bne cr6,0x824f8b80
	if (!cr6.eq) goto loc_824F8B80;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x824f8b84
	goto loc_824F8B84;
loc_824F8B58:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x824f8b78
	goto loc_824F8B78;
loc_824F8B60:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824f7710
	ctx.lr = 0x824F8B68;
	sub_824F7710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x824e3300
	ctx.lr = 0x824F8B74;
	sub_824E3300(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_824F8B78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824e2548
	ctx.lr = 0x824F8B80;
	sub_824E2548(ctx, base);
loc_824F8B80:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_824F8B84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8df8
	if (cr6.eq) goto loc_824F8DF8;
loc_824F8B90:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824f6ca0
	ctx.lr = 0x824F8B9C;
	sub_824F6CA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f8cc4
	if (cr6.eq) goto loc_824F8CC4;
	// lwz r29,304(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 304);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82510220
	ctx.lr = 0x824F8BC0;
	sub_82510220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82510248
	ctx.lr = 0x824F8BD4;
	sub_82510248(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x824f8c74
	if (cr6.eq) goto loc_824F8C74;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_824F8BE4:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// bl 0x824f6dc0
	ctx.lr = 0x824F8C00;
	sub_824F6DC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f8c68
	if (cr6.eq) goto loc_824F8C68;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x824f7da8
	ctx.lr = 0x824F8C14;
	sub_824F7DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8c64
	if (cr6.eq) goto loc_824F8C64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x8241fb80
	ctx.lr = 0x824F8C28;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F8C34;
	sub_8241FA70(ctx, base);
	// sth r23,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r23.u16);
	// sth r23,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r23.u16);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
	// b 0x824f8c68
	goto loc_824F8C68;
loc_824F8C64:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_824F8C68:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x824f8be4
	if (!cr0.eq) goto loc_824F8BE4;
loc_824F8C74:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f8dfc
	if (!cr6.eq) goto loc_824F8DFC;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x824f8c90
	if (!cr6.eq) goto loc_824F8C90;
	// stw r20,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r20.u32);
loc_824F8C90:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f7a50
	ctx.lr = 0x824F8C9C;
	sub_824F7A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8dfc
	if (cr6.eq) goto loc_824F8DFC;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// bl 0x8241fb80
	ctx.lr = 0x824F8CB0;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F8CBC;
	sub_8241FA70(ctx, base);
	// stw r22,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r22.u32);
	// stb r28,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r28.u8);
loc_824F8CC4:
	// lwz r11,272(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 272);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r10,268(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 268);
	// mullw. r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x824f8d74
	if (cr0.eq) goto loc_824F8D74;
	// lwz r8,400(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 400);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_824F8CE4:
	// ldx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r6
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r6.u64, xer);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// beq cr6,0x824f8cfc
	if (cr6.eq) goto loc_824F8CFC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_824F8CFC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824f8d1c
	if (!cr6.eq) goto loc_824F8D1C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x824f8ce4
	if (cr6.lt) goto loc_824F8CE4;
	// b 0x824f8d74
	goto loc_824F8D74;
loc_824F8D1C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f7da8
	ctx.lr = 0x824F8D28;
	sub_824F7DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8dfc
	if (cr6.eq) goto loc_824F8DFC;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x8241fb80
	ctx.lr = 0x824F8D3C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F8D48;
	sub_8241FA70(ctx, base);
	// sth r23,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r23.u16);
	// sth r23,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r23.u16);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
loc_824F8D74:
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8dc4
	if (cr6.eq) goto loc_824F8DC4;
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8241fb00
	ctx.lr = 0x824F8D94;
	sub_8241FB00(ctx, base);
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r8,8(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bgt cr6,0x824f8db0
	if (cr6.gt) goto loc_824F8DB0;
	// stw r28,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r28.u32);
loc_824F8DB0:
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r11.u32);
	// bne 0x824f8dc4
	if (!cr0.eq) goto loc_824F8DC4;
	// stw r28,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r28.u32);
loc_824F8DC4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fb00
	ctx.lr = 0x824F8DCC;
	sub_8241FB00(ctx, base);
	// lwz r11,608(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x824f8964
	if (cr6.gt) goto loc_824F8964;
loc_824F8DD8:
	// lwz r11,616(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 616);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x824f8e10
	if (!cr6.gt) goto loc_824F8E10;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,616(r24)
	PPC_STORE_U32(ctx.r24.u32 + 616, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_824F8DF8:
	// stb r28,424(r24)
	PPC_STORE_U8(ctx.r24.u32 + 424, ctx.r28.u8);
loc_824F8DFC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fb00
	ctx.lr = 0x824F8E04;
	sub_8241FB00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_824F8E10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F8E1C"))) PPC_WEAK_FUNC(sub_824F8E1C);
PPC_FUNC_IMPL(__imp__sub_824F8E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F8E20"))) PPC_WEAK_FUNC(sub_824F8E20);
PPC_FUNC_IMPL(__imp__sub_824F8E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824F8E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x824f8e50
	if (cr6.gt) goto loc_824F8E50;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824f8740
	ctx.lr = 0x824F8E50;
	sub_824F8740(ctx, base);
loc_824F8E50:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x824f8e6c
	if (cr6.gt) goto loc_824F8E6C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_824F8E6C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824f8e90
	if (!cr6.eq) goto loc_824F8E90;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82534518
	ctx.lr = 0x824F8E88;
	sub_82534518(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
loc_824F8E90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f8ea8
	if (cr6.eq) goto loc_824F8EA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x824F8EA8;
	sub_8241FA28(ctx, base);
loc_824F8EA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F8EBC"))) PPC_WEAK_FUNC(sub_824F8EBC);
PPC_FUNC_IMPL(__imp__sub_824F8EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F8EC0"))) PPC_WEAK_FUNC(sub_824F8EC0);
PPC_FUNC_IMPL(__imp__sub_824F8EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r5,20408(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8247d010
	ctx.lr = 0x824F8EE8;
	sub_8247D010(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824F8EF8"))) PPC_WEAK_FUNC(sub_824F8EF8);
PPC_FUNC_IMPL(__imp__sub_824F8EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x824F8F00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-24588
	ctx.r9.s64 = ctx.r11.s64 + -24588;
	// addi r8,r10,-24624
	ctx.r8.s64 = ctx.r10.s64 + -24624;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// addi r27,r3,384
	ctx.r27.s64 = ctx.r3.s64 + 384;
	// li r26,4
	ctx.r26.s64 = 4;
	// ori r25,r11,1
	ctx.r25.u64 = ctx.r11.u64 | 1;
loc_824F8F30:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824f8f7c
	if (cr6.eq) goto loc_824F8F7C;
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// addi r29,r10,-8
	ctx.r29.s64 = ctx.r10.s64 + -8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x824f8f70
	if (cr0.lt) goto loc_824F8F70;
loc_824F8F5C:
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fb00
	ctx.lr = 0x824F8F68;
	sub_8241FB00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x824f8f5c
	if (!cr0.lt) goto loc_824F8F5C;
loc_824F8F70:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82573040
	ctx.lr = 0x824F8F7C;
	sub_82573040(ctx, base);
loc_824F8F7C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x824f8f30
	if (!cr0.eq) goto loc_824F8F30;
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f8fcc
	if (cr6.eq) goto loc_824F8FCC;
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// mulli r10,r9,56
	ctx.r10.s64 = ctx.r9.s64 * 56;
	// addic. r31,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x824f8fc0
	if (cr0.lt) goto loc_824F8FC0;
loc_824F8FAC:
	// addi r30,r30,-56
	ctx.r30.s64 = ctx.r30.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fb00
	ctx.lr = 0x824F8FB8;
	sub_8241FB00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x824f8fac
	if (!cr0.lt) goto loc_824F8FAC;
loc_824F8FC0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82573040
	ctx.lr = 0x824F8FCC;
	sub_82573040(ctx, base);
loc_824F8FCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,624
	ctx.r3.s64 = ctx.r28.s64 + 624;
	// bl 0x8241f040
	ctx.lr = 0x824F8FD8;
	sub_8241F040(ctx, base);
	// addi r31,r28,592
	ctx.r31.s64 = ctx.r28.s64 + 592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f8618
	ctx.lr = 0x824F8FE4;
	sub_824F8618(ctx, base);
	// lwz r3,592(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 592);
	// bl 0x8386d088
	ctx.lr = 0x824F8FEC;
	sub_8386D088(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r30,592(r28)
	PPC_STORE_U32(ctx.r28.u32 + 592, ctx.r30.u32);
loc_824F8FF8:
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f9008
	if (cr6.eq) goto loc_824F9008;
	// bl 0x8386d088
	ctx.lr = 0x824F9008;
	sub_8386D088(ctx, base);
loc_824F9008:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bge 0x824f8ff8
	if (!cr0.lt) goto loc_824F8FF8;
	// addi r31,r28,528
	ctx.r31.s64 = ctx.r28.s64 + 528;
	// li r29,3
	ctx.r29.s64 = 3;
loc_824F9024:
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f9034
	if (cr6.eq) goto loc_824F9034;
	// bl 0x8386d088
	ctx.lr = 0x824F9034;
	sub_8386D088(ctx, base);
loc_824F9034:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bge 0x824f9024
	if (!cr0.lt) goto loc_824F9024;
	// addi r3,r28,408
	ctx.r3.s64 = ctx.r28.s64 + 408;
	// bl 0x8241fb00
	ctx.lr = 0x824F9050;
	sub_8241FB00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,376
	ctx.r3.s64 = ctx.r28.s64 + 376;
	// bl 0x82572fa0
	ctx.lr = 0x824F905C;
	sub_82572FA0(ctx, base);
	// addi r30,r28,344
	ctx.r30.s64 = ctx.r28.s64 + 344;
	// li r31,4
	ctx.r31.s64 = 4;
loc_824F9064:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F9070;
	sub_82572FA0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x824f9064
	if (!cr0.eq) goto loc_824F9064;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,336
	ctx.r3.s64 = ctx.r28.s64 + 336;
	// bl 0x82572fa0
	ctx.lr = 0x824F9088;
	sub_82572FA0(ctx, base);
	// lwz r3,304(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	// addi r31,r28,304
	ctx.r31.s64 = ctx.r28.s64 + 304;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f90ac
	if (cr6.eq) goto loc_824F90AC;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824f90ac
	if (cr6.eq) goto loc_824F90AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82468ef8
	ctx.lr = 0x824F90AC;
	sub_82468EF8(ctx, base);
loc_824F90AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x824F90B8;
	sub_8241F040(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x824F90C0;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F90CC;
	sub_8241FA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fb00
	ctx.lr = 0x824F90D4;
	sub_8241FB00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x824F90E0;
	sub_8241F040(ctx, base);
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// bl 0x824f8578
	ctx.lr = 0x824F90E8;
	sub_824F8578(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,-24668
	ctx.r10.s64 = ctx.r11.s64 + -24668;
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// bl 0x824f6448
	ctx.lr = 0x824F90FC;
	sub_824F6448(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F9104"))) PPC_WEAK_FUNC(sub_824F9104);
PPC_FUNC_IMPL(__imp__sub_824F9104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F9108"))) PPC_WEAK_FUNC(sub_824F9108);
PPC_FUNC_IMPL(__imp__sub_824F9108) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x824f9860
	sub_824F9860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F9110"))) PPC_WEAK_FUNC(sub_824F9110);
PPC_FUNC_IMPL(__imp__sub_824F9110) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,592
	ctx.r3.s64 = ctx.r3.s64 + 592;
	// b 0x824f8e20
	sub_824F8E20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F9118"))) PPC_WEAK_FUNC(sub_824F9118);
PPC_FUNC_IMPL(__imp__sub_824F9118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824F9120;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24632
	ctx.r9.s64 = ctx.r10.s64 + -24632;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r8,-31767
	ctx.r8.s64 = -2081882112;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// addi r30,r8,20440
	ctx.r30.s64 = ctx.r8.s64 + 20440;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x8257f080
	ctx.lr = 0x824F9160;
	sub_8257F080(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r29,-31767
	ctx.r29.s64 = -2081882112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r28,r29,20448
	ctx.r28.s64 = ctx.r29.s64 + 20448;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82589920
	ctx.lr = 0x824F9178;
	sub_82589920(ctx, base);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,20448(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20448);
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r6,r7,27552
	ctx.r6.s64 = ctx.r7.s64 + 27552;
	// srawi r5,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// bl 0x82476fa0
	ctx.lr = 0x824F9194;
	sub_82476FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257f158
	ctx.lr = 0x824F919C;
	sub_8257F158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F91A8"))) PPC_WEAK_FUNC(sub_824F91A8);
PPC_FUNC_IMPL(__imp__sub_824F91A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x824F91B0;
	__savegprlr_16(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x824f6968
	ctx.lr = 0x824F91C0;
	sub_824F6968(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-24668
	ctx.r8.s64 = ctx.r11.s64 + -24668;
	// addi r7,r10,-24588
	ctx.r7.s64 = ctx.r10.s64 + -24588;
	// addi r6,r9,-24624
	ctx.r6.s64 = ctx.r9.s64 + -24624;
	// stw r8,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r8.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r6,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r6.u32);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x824f8458
	ctx.lr = 0x824F91F0;
	sub_824F8458(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,304
	ctx.r29.s64 = ctx.r30.s64 + 304;
	// std r31,304(r30)
	PPC_STORE_U64(ctx.r30.u32 + 304, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x824F9208;
	sub_8241F040(ctx, base);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x824F9210;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241fa28
	ctx.lr = 0x824F921C;
	sub_8241FA28(ctx, base);
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x824F922C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F9230;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F923C;
	sub_8241FA70(ctx, base);
	// std r31,336(r30)
	PPC_STORE_U64(ctx.r30.u32 + 336, ctx.r31.u64);
	// addi r25,r30,336
	ctx.r25.s64 = ctx.r30.s64 + 336;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F9250;
	sub_82572FA0(ctx, base);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x824F9260;
	sub_82572FA0(ctx, base);
	// addi r22,r30,344
	ctx.r22.s64 = ctx.r30.s64 + 344;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x824f7328
	ctx.lr = 0x824F9270;
	sub_824F7328(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x824F927C;
	sub_82572FA0(ctx, base);
	// std r31,376(r30)
	PPC_STORE_U64(ctx.r30.u32 + 376, ctx.r31.u64);
	// addi r16,r30,376
	ctx.r16.s64 = ctx.r30.s64 + 376;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F9290;
	sub_82572FA0(ctx, base);
	// stw r31,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r31.u32);
	// addi r23,r30,408
	ctx.r23.s64 = ctx.r30.s64 + 408;
	// bl 0x8241fb80
	ctx.lr = 0x824F929C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8241fa28
	ctx.lr = 0x824F92A8;
	sub_8241FA28(ctx, base);
	// stb r31,424(r30)
	PPC_STORE_U8(ctx.r30.u32 + 424, ctx.r31.u8);
	// stw r31,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r31.u32);
	// addi r24,r30,444
	ctx.r24.s64 = ctx.r30.s64 + 444;
	// stw r31,448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 448, ctx.r31.u32);
	// stw r31,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r31.u32);
	// stw r31,456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 456, ctx.r31.u32);
	// sth r31,460(r30)
	PPC_STORE_U16(ctx.r30.u32 + 460, ctx.r31.u16);
	// sth r31,462(r30)
	PPC_STORE_U16(ctx.r30.u32 + 462, ctx.r31.u16);
	// stw r31,464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 464, ctx.r31.u32);
	// stw r31,468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 468, ctx.r31.u32);
	// stw r31,472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 472, ctx.r31.u32);
	// stw r31,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r31.u32);
	// stw r31,484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 484, ctx.r31.u32);
	// stw r31,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r31.u32);
	// stw r31,496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 496, ctx.r31.u32);
	// stw r31,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r31.u32);
	// stw r31,504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 504, ctx.r31.u32);
	// stw r31,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r31.u32);
	// stw r31,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r31.u32);
	// stw r31,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r31.u32);
	// stw r31,528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 528, ctx.r31.u32);
	// addi r3,r30,592
	ctx.r3.s64 = ctx.r30.s64 + 592;
	// stw r31,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r31.u32);
	// stw r31,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r31.u32);
	// stw r31,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r31.u32);
	// stw r31,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r31.u32);
	// stw r31,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r31.u32);
	// stw r31,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r31.u32);
	// stw r31,568(r30)
	PPC_STORE_U32(ctx.r30.u32 + 568, ctx.r31.u32);
	// stw r31,576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 576, ctx.r31.u32);
	// stw r31,580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 580, ctx.r31.u32);
	// stw r31,584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 584, ctx.r31.u32);
	// bl 0x82537098
	ctx.lr = 0x824F9334;
	sub_82537098(ctx, base);
	// stw r31,616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 616, ctx.r31.u32);
	// std r31,624(r30)
	PPC_STORE_U64(ctx.r30.u32 + 624, ctx.r31.u64);
	// addi r3,r30,624
	ctx.r3.s64 = ctx.r30.s64 + 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x824F9348;
	sub_8241F040(ctx, base);
	// lis r5,5015
	ctx.r5.s64 = 328663040;
	// li r4,16730
	ctx.r4.s64 = 16730;
	// ori r3,r5,45933
	ctx.r3.u64 = ctx.r5.u64 | 45933;
	// addi r28,r30,428
	ctx.r28.s64 = ctx.r30.s64 + 428;
	// rldimi r3,r4,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r11,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r11.u64);
	// addi r26,r30,384
	ctx.r26.s64 = ctx.r30.s64 + 384;
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// stw r31,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r31.u32);
	// stw r31,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r31.u32);
	// stw r31,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r31.u32);
	// stw r31,428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 428, ctx.r31.u32);
	// stw r31,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r31.u32);
	// stw r31,436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 436, ctx.r31.u32);
	// stw r31,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r31.u32);
	// bl 0x8252d4d8
	ctx.lr = 0x824F9394;
	sub_8252D4D8(ctx, base);
	// lwz r10,268(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwz r9,272(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// addi r27,r30,112
	ctx.r27.s64 = ctx.r30.s64 + 112;
	// subfic r8,r10,-32768
	xer.ca = ctx.r10.u32 <= 4294934528;
	ctx.r8.s64 = -32768 - ctx.r10.s64;
	// subfic r7,r9,-32768
	xer.ca = ctx.r9.u32 <= 4294934528;
	ctx.r7.s64 = -32768 - ctx.r9.s64;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 460, ctx.r4.u32);
	// bl 0x8241fad0
	ctx.lr = 0x824F93C0;
	sub_8241FAD0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824f94e0
	if (!cr6.eq) goto loc_824F94E0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824f8118
	ctx.lr = 0x824F93D8;
	sub_824F8118(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// bl 0x8241f040
	ctx.lr = 0x824F93F0;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F93F4;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241fa28
	ctx.lr = 0x824F9400;
	sub_8241FA28(ctx, base);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83323038
	ctx.lr = 0x824F9410;
	sub_83323038(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83323038
	ctx.lr = 0x824F941C;
	sub_83323038(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f943c
	if (cr6.eq) goto loc_824F943C;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824f943c
	if (cr6.eq) goto loc_824F943C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82468ef8
	ctx.lr = 0x824F943C;
	sub_82468EF8(ctx, base);
loc_824F943C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x824F9448;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F944C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241fa70
	ctx.lr = 0x824F9458;
	sub_8241FA70(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241fb00
	ctx.lr = 0x824F9460;
	sub_8241FB00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x824F946C;
	sub_8241F040(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f948c
	if (cr6.eq) goto loc_824F948C;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824f948c
	if (cr6.eq) goto loc_824F948C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82468ef8
	ctx.lr = 0x824F948C;
	sub_82468EF8(ctx, base);
loc_824F948C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f040
	ctx.lr = 0x824F9498;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x824F949C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8241fa70
	ctx.lr = 0x824F94A8;
	sub_8241FA70(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8241fb00
	ctx.lr = 0x824F94B0;
	sub_8241FB00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f040
	ctx.lr = 0x824F94BC;
	sub_8241F040(ctx, base);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x824f94e0
	if (cr6.eq) goto loc_824F94E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82468e10
	ctx.lr = 0x824F94D4;
	sub_82468E10(ctx, base);
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F94E0;
	sub_8241FA70(ctx, base);
loc_824F94E0:
	// lwz r10,220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r23,r11,-24692
	ctx.r23.s64 = ctx.r11.s64 + -24692;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824f957c
	if (!cr6.gt) goto loc_824F957C;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x824e22b0
	ctx.lr = 0x824F9500;
	sub_824E22B0(ctx, base);
	// addi r4,r23,-56
	ctx.r4.s64 = ctx.r23.s64 + -56;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241f0a0
	ctx.lr = 0x824F950C;
	sub_8241F0A0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573d70
	ctx.lr = 0x824F9518;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x824F9520;
	sub_82573C50(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r19,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r19.u32);
	// stw r19,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r19.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// bl 0x824e52f8
	ctx.lr = 0x824F953C;
	sub_824E52F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F9548;
	sub_82572FA0(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824f9574
	if (!cr6.gt) goto loc_824F9574;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x824e2308
	ctx.lr = 0x824F9560;
	sub_824E2308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e2b40
	ctx.lr = 0x824F9574;
	sub_824E2B40(ctx, base);
loc_824F9574:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x824F957C;
	sub_82573C50(ctx, base);
loc_824F957C:
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// ori r20,r11,21845
	ctx.r20.u64 = ctx.r11.u64 | 21845;
	// li r18,-9
	ctx.r18.s64 = -9;
	// li r21,-1
	ctx.r21.s64 = -1;
	// ori r17,r10,1
	ctx.r17.u64 = ctx.r10.u64 | 1;
loc_824F9598:
	// lwz r27,-160(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + -160);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x824f96f0
	if (cr6.eq) goto loc_824F96F0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824e22b0
	ctx.lr = 0x824F95AC;
	sub_824E22B0(ctx, base);
	// addi r5,r23,-32
	ctx.r5.s64 = ctx.r23.s64 + -32;
	// addi r4,r23,-8
	ctx.r4.s64 = ctx.r23.s64 + -8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82574628
	ctx.lr = 0x824F95C0;
	sub_82574628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8241f130
	ctx.lr = 0x824F95CC;
	sub_8241F130(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573d70
	ctx.lr = 0x824F95D8;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x824F95E0;
	sub_82573C50(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x824F95E8;
	sub_82573C50(ctx, base);
	// lwz r11,-144(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -144);
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r19,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r19.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// bl 0x824e52f8
	ctx.lr = 0x824F9604;
	sub_824E52F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F9610;
	sub_82572FA0(ctx, base);
	// cmplw cr6,r27,r20
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, xer);
	// bgt cr6,0x824f9630
	if (cr6.gt) goto loc_824F9630;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// ble cr6,0x824f9634
	if (!cr6.gt) goto loc_824F9634;
loc_824F9630:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_824F9634:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825730a8
	ctx.lr = 0x824F9640;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f969c
	if (cr6.eq) goto loc_824F969C;
	// addi r25,r3,8
	ctx.r25.s64 = ctx.r3.s64 + 8;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// addic. r28,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r28.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// blt 0x824f9694
	if (cr0.lt) goto loc_824F9694;
loc_824F965C:
	// bl 0x8241fb80
	ctx.lr = 0x824F9660;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x824F966C;
	sub_8241FA28(ctx, base);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r21,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r21.u32);
	// stw r31,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r31.u32);
	// stw r31,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r31.u32);
	// stb r31,36(r29)
	PPC_STORE_U8(ctx.r29.u32 + 36, ctx.r31.u8);
	// stw r31,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r31.u32);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// bge 0x824f965c
	if (!cr0.lt) goto loc_824F965C;
loc_824F9694:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x824f96a0
	goto loc_824F96A0;
loc_824F969C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824F96A0:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x824f96e8
	if (cr6.eq) goto loc_824F96E8;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_824F96B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x824e2308
	ctx.lr = 0x824F96C0;
	sub_824E2308(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// stw r24,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r24.u32);
	// blt cr6,0x824f96b4
	if (cr6.lt) goto loc_824F96B4;
loc_824F96E8:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x824F96F0;
	sub_82573C50(ctx, base);
loc_824F96F0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r24,4
	cr6.compare<uint32_t>(ctx.r24.u32, 4, xer);
	// blt cr6,0x824f9598
	if (cr6.lt) goto loc_824F9598;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824e22b0
	ctx.lr = 0x824F970C;
	sub_824E22B0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8241f0a0
	ctx.lr = 0x824F9718;
	sub_8241F0A0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573d70
	ctx.lr = 0x824F9724;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x824F972C;
	sub_82573C50(ctx, base);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwz r10,272(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,276(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r19,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r19.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x824e52f8
	ctx.lr = 0x824F9754;
	sub_824E52F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824F9760;
	sub_82572FA0(ctx, base);
	// lis r7,1170
	ctx.r7.s64 = 76677120;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ori r6,r7,18724
	ctx.r6.u64 = ctx.r7.u64 | 18724;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bgt cr6,0x824f9788
	if (cr6.gt) goto loc_824F9788;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// ble cr6,0x824f978c
	if (!cr6.gt) goto loc_824F978C;
loc_824F9788:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_824F978C:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825730a8
	ctx.lr = 0x824F9798;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f9808
	if (cr6.eq) goto loc_824F9808;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r28,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r28.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// blt 0x824f9800
	if (cr0.lt) goto loc_824F9800;
	// li r27,32767
	ctx.r27.s64 = 32767;
loc_824F97B8:
	// bl 0x8241fb80
	ctx.lr = 0x824F97BC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x824F97C8;
	sub_8241FA28(ctx, base);
	// sth r27,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r27.u16);
	// sth r27,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r27.u16);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stw r31,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r31.u32);
	// stb r31,48(r29)
	PPC_STORE_U8(ctx.r29.u32 + 48, ctx.r31.u8);
	// stw r31,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r31.u32);
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// stw r31,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r31.u32);
	// stw r31,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r31.u32);
	// stw r31,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r31.u32);
	// stw r31,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r31.u32);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// bge 0x824f97b8
	if (!cr0.lt) goto loc_824F97B8;
loc_824F9800:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x824f980c
	goto loc_824F980C;
loc_824F9808:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_824F980C:
	// lwz r28,148(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r11,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824f9848
	if (cr6.eq) goto loc_824F9848;
loc_824F9820:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// bl 0x824e2308
	ctx.lr = 0x824F982C;
	sub_824E2308(ctx, base);
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// blt cr6,0x824f9820
	if (cr6.lt) goto loc_824F9820;
loc_824F9848:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x824F9850;
	sub_82573C50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824F985C"))) PPC_WEAK_FUNC(sub_824F985C);
PPC_FUNC_IMPL(__imp__sub_824F985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824F9860"))) PPC_WEAK_FUNC(sub_824F9860);
PPC_FUNC_IMPL(__imp__sub_824F9860) {
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
	// bl 0x824f8ef8
	ctx.lr = 0x824F9880;
	sub_824F8EF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f9898
	if (cr6.eq) goto loc_824F9898;
	// bl 0x8248b818
	ctx.lr = 0x824F9894;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824F9898:
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

__attribute__((alias("__imp__sub_824F98B0"))) PPC_WEAK_FUNC(sub_824F98B0);
PPC_FUNC_IMPL(__imp__sub_824F98B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x824F98B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,304(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r17,268(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lwz r16,272(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// lhz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// lhz r7,258(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 258);
	// mullw r15,r16,r17
	ctx.r15.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r17.s32);
	// lwz r9,212(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r26,280(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r25,284(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// beq cr6,0x824f9920
	if (cr6.eq) goto loc_824F9920;
	// lwz r8,56(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// subfic r3,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r6.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r23
	ctx.r6.u64 = ctx.r7.u64 & ctx.r23.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rotlwi r23,r6,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
loc_824F9920:
	// mullw r8,r17,r11
	ctx.r8.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r11.s32);
	// lhz r24,460(r14)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r14.u32 + 460);
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// mullw r6,r16,r10
	ctx.r6.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r10.s32);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r3,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// mullw r31,r30,r11
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r6,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// mullw r3,r29,r10
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// subf r31,r7,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r7.s64;
	// subf r27,r6,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r6.s64;
	// srawi r28,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 1;
	// subf r3,r9,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r9.s64;
	// subf r31,r9,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r9.s64;
	// addze r28,r28
	temp.s64 = ctx.r28.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r28.s64 = temp.s64;
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r27,r3,r5
	ctx.r27.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rotlwi r3,r9,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rotlwi r31,r27,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// divw r22,r9,r11
	ctx.r22.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// divw r27,r27,r10
	ctx.r27.s32 = PPCDivide(ctx.r27.s32, ctx.r10.s32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// extsh r9,r22
	ctx.r9.s64 = ctx.r22.s16;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// andc r22,r10,r31
	ctx.r22.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// andc r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// sth r27,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r27.u16);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// twllei r11,0
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// twllei r10,0
	// li r21,0
	ctx.r21.s64 = 0;
	// twlgei r3,-1
	// twlgei r22,-1
	// cmpw cr6,r24,r9
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, xer);
	// bne cr6,0x824f99ec
	if (!cr6.eq) goto loc_824F99EC;
	// lhz r9,462(r14)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r14.u32 + 462);
	// extsh r3,r27
	ctx.r3.s64 = ctx.r27.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// bne cr6,0x824f99ec
	if (!cr6.eq) goto loc_824F99EC;
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// b 0x824f99f4
	goto loc_824F99F4;
loc_824F99EC:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r22,1
	ctx.r22.s64 = 1;
loc_824F99F4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824f9a70
	if (!cr6.eq) goto loc_824F9A70;
	// lhz r9,460(r14)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r14.u32 + 460);
	// lhz r3,462(r14)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r14.u32 + 462);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// subf r3,r29,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r29.s64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r7,r26,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r26.s64;
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// bgt cr6,0x824f9a70
	if (cr6.gt) goto loc_824F9A70;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x824f9a70
	if (!cr6.lt) goto loc_824F9A70;
	// subf r11,r28,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r28.s64;
	// subf r9,r25,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// bgt cr6,0x824f9a70
	if (cr6.gt) goto loc_824F9A70;
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x824f9a70
	if (!cr6.lt) goto loc_824F9A70;
	// lwz r31,460(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 460);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_824F9A70:
	// lwz r11,452(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 452);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x824f9a84
	if (cr6.eq) goto loc_824F9A84;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x824f9aac
	if (!cr6.eq) goto loc_824F9AAC;
loc_824F9A84:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824f8930
	ctx.lr = 0x824F9A8C;
	sub_824F8930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f9aac
	if (cr6.eq) goto loc_824F9AAC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r22,448(r14)
	PPC_STORE_U32(ctx.r14.u32 + 448, ctx.r22.u32);
	// stw r11,452(r14)
	PPC_STORE_U32(ctx.r14.u32 + 452, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_824F9AAC:
	// lwz r11,452(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 452);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x824f9ce8
	if (!cr6.eq) goto loc_824F9CE8;
	// lhz r11,460(r14)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r14.u32 + 460);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r24,r10
	ctx.r24.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r24
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, xer);
	// bne cr6,0x824f9aec
	if (!cr6.eq) goto loc_824F9AEC;
	// lhz r10,462(r14)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r14.u32 + 462);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x824f9af0
	if (cr6.eq) goto loc_824F9AF0;
loc_824F9AEC:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_824F9AF0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824f9ce8
	if (!cr6.eq) goto loc_824F9CE8;
	// extsh r20,r11
	ctx.r20.s64 = ctx.r11.s16;
	// stw r31,460(r14)
	PPC_STORE_U32(ctx.r14.u32 + 460, ctx.r31.u32);
	// add r19,r24,r17
	ctx.r19.u64 = ctx.r24.u64 + ctx.r17.u64;
	// add r18,r20,r16
	ctx.r18.u64 = ctx.r20.u64 + ctx.r16.u64;
	// addi r31,r14,532
	ctx.r31.s64 = ctx.r14.s64 + 532;
	// li r28,4
	ctx.r28.s64 = 4;
loc_824F9B14:
	// lwz r4,-64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r30,-68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f9b44
	if (cr6.eq) goto loc_824F9B44;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x824F9B3C;
	sub_831CE420(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r11,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r11.u32);
loc_824F9B44:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,-4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x824f9b74
	if (cr6.eq) goto loc_824F9B74;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x824F9B6C;
	sub_831CE420(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824F9B74:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x824f9b14
	if (!cr0.eq) goto loc_824F9B14;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x824f9ce8
	if (cr6.eq) goto loc_824F9CE8;
	// lwz r11,296(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 296);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,300(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 300);
	// addi r26,r14,528
	ctx.r26.s64 = ctx.r14.s64 + 528;
	// subf r27,r11,r24
	ctx.r27.s64 = ctx.r24.s64 - ctx.r11.s64;
	// subf r23,r10,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r10.s64;
	// add r22,r11,r19
	ctx.r22.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r21,r10,r18
	ctx.r21.u64 = ctx.r10.u64 + ctx.r18.u64;
loc_824F9BA8:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825101f8
	ctx.lr = 0x824F9BBC;
	sub_825101F8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824f9cd0
	if (cr6.eq) goto loc_824F9CD0;
loc_824F9BC8:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82510220
	ctx.lr = 0x824F9BDC;
	sub_82510220(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82510248
	ctx.lr = 0x824F9BF0;
	sub_82510248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x824f9c58
	if (cr6.eq) goto loc_824F9C58;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_824F9C08:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// bgt cr6,0x824f9c30
	if (cr6.gt) goto loc_824F9C30;
	// cmpw cr6,r11,r19
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, xer);
	// bge cr6,0x824f9c30
	if (!cr6.lt) goto loc_824F9C30;
	// cmpw cr6,r20,r9
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r9.s32, xer);
	// bgt cr6,0x824f9c30
	if (cr6.gt) goto loc_824F9C30;
	// cmpw cr6,r9,r18
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, xer);
	// blt cr6,0x824f9c44
	if (cr6.lt) goto loc_824F9C44;
loc_824F9C30:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// blt cr6,0x824f9c08
	if (cr6.lt) goto loc_824F9C08;
	// b 0x824f9c58
	goto loc_824F9C58;
loc_824F9C44:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,-64
	ctx.r3.s64 = ctx.r26.s64 + -64;
	// bl 0x82589920
	ctx.lr = 0x824F9C50;
	sub_82589920(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824F9C58:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f9cc0
	if (!cr6.eq) goto loc_824F9CC0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x824f9cc0
	if (cr6.eq) goto loc_824F9CC0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_824F9C74:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// bgt cr6,0x824f9c9c
	if (cr6.gt) goto loc_824F9C9C;
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// bge cr6,0x824f9c9c
	if (!cr6.lt) goto loc_824F9C9C;
	// cmpw cr6,r23,r9
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, xer);
	// bgt cr6,0x824f9c9c
	if (cr6.gt) goto loc_824F9C9C;
	// cmpw cr6,r9,r21
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, xer);
	// blt cr6,0x824f9cb0
	if (cr6.lt) goto loc_824F9CB0;
loc_824F9C9C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// blt cr6,0x824f9c74
	if (cr6.lt) goto loc_824F9C74;
	// b 0x824f9cc0
	goto loc_824F9CC0;
loc_824F9CB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82589920
	ctx.lr = 0x824F9CBC;
	sub_82589920(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824F9CC0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// blt cr6,0x824f9bc8
	if (cr6.lt) goto loc_824F9BC8;
loc_824F9CD0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x824f9ba8
	if (cr6.lt) goto loc_824F9BA8;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
loc_824F9CE8:
	// stw r21,452(r14)
	PPC_STORE_U32(ctx.r14.u32 + 452, ctx.r21.u32);
	// addi r4,r14,408
	ctx.r4.s64 = ctx.r14.s64 + 408;
	// stw r21,448(r14)
	PPC_STORE_U32(ctx.r14.u32 + 448, ctx.r21.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// bl 0x8241fa28
	ctx.lr = 0x824F9D04;
	sub_8241FA28(ctx, base);
	// lwz r11,336(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f9dd4
	if (cr6.eq) goto loc_824F9DD4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241fad0
	ctx.lr = 0x824F9D18;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f9dd4
	if (!cr6.eq) goto loc_824F9DD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,336(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 336);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// bl 0x824e2308
	ctx.lr = 0x824F9D34;
	sub_824E2308(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x824f9d90
	if (cr6.eq) goto loc_824F9D90;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x824f9d60
	if (cr6.eq) goto loc_824F9D60;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x824f9db0
	if (!cr6.eq) goto loc_824F9DB0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x824f9db0
	goto loc_824F9DB0;
loc_824F9D60:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824e3230
	ctx.lr = 0x824F9D6C;
	sub_824E3230(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824f9db0
	if (cr6.eq) goto loc_824F9DB0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824f76b8
	ctx.lr = 0x824F9D88;
	sub_824F76B8(ctx, base);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x824f9db0
	goto loc_824F9DB0;
loc_824F9D90:
	// lbz r11,424(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f9db0
	if (!cr6.eq) goto loc_824F9DB0;
	// stb r22,424(r14)
	PPC_STORE_U8(ctx.r14.u32 + 424, ctx.r22.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824e23f8
	ctx.lr = 0x824F9DB0;
	sub_824E23F8(ctx, base);
loc_824F9DB0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f9dd4
	if (!cr6.eq) goto loc_824F9DD4;
	// stw r22,452(r14)
	PPC_STORE_U32(ctx.r14.u32 + 452, ctx.r22.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r22,448(r14)
	PPC_STORE_U32(ctx.r14.u32 + 448, ctx.r22.u32);
	// bl 0x8241fb00
	ctx.lr = 0x824F9DCC;
	sub_8241FB00(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_824F9DD4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241fb00
	ctx.lr = 0x824F9DDC;
	sub_8241FB00(ctx, base);
	// lhz r11,462(r14)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r14.u32 + 462);
	// lhz r10,460(r14)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r14.u32 + 460);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// extsh r23,r10
	ctx.r23.s64 = ctx.r10.s16;
	// add r25,r26,r16
	ctx.r25.u64 = ctx.r26.u64 + ctx.r16.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// add r18,r23,r17
	ctx.r18.u64 = ctx.r23.u64 + ctx.r17.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// beq cr6,0x824f9edc
	if (cr6.eq) goto loc_824F9EDC;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// li r29,32767
	ctx.r29.s64 = 32767;
loc_824F9E18:
	// lwz r11,400(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 400);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824f9ed0
	if (!cr6.eq) goto loc_824F9ED0;
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// bgt cr6,0x824f9e60
	if (cr6.gt) goto loc_824F9E60;
	// cmpw cr6,r11,r18
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, xer);
	// bge cr6,0x824f9e60
	if (!cr6.lt) goto loc_824F9E60;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// bgt cr6,0x824f9e60
	if (cr6.gt) goto loc_824F9E60;
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x824f9e64
	if (cr6.lt) goto loc_824F9E64;
loc_824F9E60:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824F9E64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f9ed0
	if (!cr6.eq) goto loc_824F9ED0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f7da8
	ctx.lr = 0x824F9E7C;
	sub_824F7DA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f9ecc
	if (cr6.eq) goto loc_824F9ECC;
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// bl 0x8241fb80
	ctx.lr = 0x824F9E90;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824F9E9C;
	sub_8241FA70(ctx, base);
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// sth r29,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r29.u16);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r21,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r21.u32);
	// stw r21,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r21.u32);
	// stw r21,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r21.u32);
	// stw r21,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r21.u32);
	// stw r21,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r21.u32);
	// stb r21,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r21.u8);
	// b 0x824f9ed0
	goto loc_824F9ED0;
loc_824F9ECC:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_824F9ED0:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// bne 0x824f9e18
	if (!cr0.eq) goto loc_824F9E18;
loc_824F9EDC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f9efc
	if (cr6.eq) goto loc_824F9EFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r22,448(r14)
	PPC_STORE_U32(ctx.r14.u32 + 448, ctx.r22.u32);
	// stw r11,452(r14)
	PPC_STORE_U32(ctx.r14.u32 + 452, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_824F9EFC:
	// addi r15,r14,384
	ctx.r15.s64 = ctx.r14.s64 + 384;
	// addi r30,r14,468
	ctx.r30.s64 = ctx.r14.s64 + 468;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// li r26,4
	ctx.r26.s64 = 4;
loc_824F9F0C:
	// lwz r11,-160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824f9fec
	if (cr6.eq) goto loc_824F9FEC;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_824F9F20:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x824f9fcc
	if (!cr6.eq) goto loc_824F9FCC;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824f9f60
	if (cr6.eq) goto loc_824F9F60;
loc_824F9F48:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x824f9fbc
	if (cr6.eq) goto loc_824F9FBC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824f9f48
	if (!cr6.eq) goto loc_824F9F48;
loc_824F9F60:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824F9F64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f9fe0
	if (!cr6.eq) goto loc_824F9FE0;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824f9f98
	if (cr6.eq) goto loc_824F9F98;
loc_824F9F80:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x824f9fc4
	if (cr6.eq) goto loc_824F9FC4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824f9f80
	if (!cr6.eq) goto loc_824F9F80;
loc_824F9F98:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824F9F9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824f9fe0
	if (!cr6.eq) goto loc_824F9FE0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f79b0
	ctx.lr = 0x824F9FB4;
	sub_824F79B0(ctx, base);
	// stw r22,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r22.u32);
	// b 0x824f9fe0
	goto loc_824F9FE0;
loc_824F9FBC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x824f9f64
	goto loc_824F9F64;
loc_824F9FC4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x824f9f9c
	goto loc_824F9F9C;
loc_824F9FCC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824f9fe0
	if (!cr6.eq) goto loc_824F9FE0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f79b0
	ctx.lr = 0x824F9FE0;
	sub_824F79B0(ctx, base);
loc_824F9FE0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// bne 0x824f9f20
	if (!cr0.eq) goto loc_824F9F20;
loc_824F9FEC:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x824f9f0c
	if (!cr0.eq) goto loc_824F9F0C;
	// lwz r20,84(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r16,2
	ctx.r16.s64 = 2;
	// li r22,-1
	ctx.r22.s64 = -1;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x824fa284
	if (cr6.eq) goto loc_824FA284;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// addi r25,r14,464
	ctx.r25.s64 = ctx.r14.s64 + 464;
loc_824FA020:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x824fa0d8
	if (cr0.eq) goto loc_824FA0D8;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_824FA03C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r8,-160(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + -160);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// beq cr6,0x824fa07c
	if (cr6.eq) goto loc_824FA07C;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824FA05C:
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// beq cr6,0x824fa210
	if (cr6.eq) goto loc_824FA210;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x824fa05c
	if (cr6.lt) goto loc_824FA05C;
loc_824FA07C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824f6d18
	ctx.lr = 0x824FA088;
	sub_824F6D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa0cc
	if (cr6.eq) goto loc_824FA0CC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82510360
	ctx.lr = 0x824FA0A0;
	sub_82510360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fa28
	ctx.lr = 0x824FA0AC;
	sub_8241FA28(ctx, base);
	// stw r16,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824FA0BC;
	sub_8241FA70(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r19,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r19.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fb00
	ctx.lr = 0x824FA0CC;
	sub_8241FB00(ctx, base);
loc_824FA0CC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x824fa03c
	if (!cr0.eq) goto loc_824FA03C;
loc_824FA0D8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x824fa1d8
	if (cr0.eq) goto loc_824FA1D8;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_824FA0F4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r9,-160(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -160);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// beq cr6,0x824fa134
	if (cr6.eq) goto loc_824FA134;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824FA114:
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// beq cr6,0x824fa224
	if (cr6.eq) goto loc_824FA224;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x824fa114
	if (cr6.lt) goto loc_824FA114;
loc_824FA134:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824f6d68
	ctx.lr = 0x824FA140;
	sub_824F6D68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa1cc
	if (cr6.eq) goto loc_824FA1CC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824fa174
	if (!cr6.eq) goto loc_824FA174;
	// stw r21,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r21.u32);
	// bl 0x8241fb80
	ctx.lr = 0x824FA160;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824FA16C;
	sub_8241FA70(ctx, base);
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
	// stb r21,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r21.u8);
loc_824FA174:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82510360
	ctx.lr = 0x824FA184;
	sub_82510360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241fa28
	ctx.lr = 0x824FA190;
	sub_8241FA28(ctx, base);
	// stw r16,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824FA1A0;
	sub_8241FA70(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r19,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r19.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f7768
	ctx.lr = 0x824FA1B4;
	sub_824F7768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fa1c4
	if (!cr6.eq) goto loc_824FA1C4;
	// li r24,1
	ctx.r24.s64 = 1;
loc_824FA1C4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241fb00
	ctx.lr = 0x824FA1CC;
	sub_8241FB00(ctx, base);
loc_824FA1CC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x824fa0f4
	if (!cr0.eq) goto loc_824FA0F4;
loc_824FA1D8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// blt cr6,0x824fa020
	if (cr6.lt) goto loc_824FA020;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa284
	if (cr6.eq) goto loc_824FA284;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,452(r14)
	PPC_STORE_U32(ctx.r14.u32 + 452, ctx.r11.u32);
	// stw r10,448(r14)
	PPC_STORE_U32(ctx.r14.u32 + 448, ctx.r10.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_824FA210:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824fa0cc
	if (!cr6.eq) goto loc_824FA0CC;
	// stw r16,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r16.u32);
	// b 0x824fa0cc
	goto loc_824FA0CC;
loc_824FA224:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824fa234
	if (!cr6.eq) goto loc_824FA234;
	// stw r16,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
loc_824FA234:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f7768
	ctx.lr = 0x824FA240;
	sub_824F7768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fa1cc
	if (!cr6.eq) goto loc_824FA1CC;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa26c
	if (cr6.eq) goto loc_824FA26C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824fa270
	if (cr6.eq) goto loc_824FA270;
loc_824FA26C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824FA270:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fa1cc
	if (!cr6.eq) goto loc_824FA1CC;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x824fa1cc
	goto loc_824FA1CC;
loc_824FA284:
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// cmpw cr6,r23,r18
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r18.s32, xer);
	// bge cr6,0x824fa52c
	if (!cr6.lt) goto loc_824FA52C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r18,r11,-24768
	ctx.r18.s64 = ctx.r11.s64 + -24768;
loc_824FA29C:
	// lwz r21,92(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, xer);
	// bge cr6,0x824fa51c
	if (!cr6.lt) goto loc_824FA51C;
	// sth r20,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r20.u16);
loc_824FA2B0:
	// sth r21,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r21.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824f6dc0
	ctx.lr = 0x824FA2C0;
	sub_824F6DC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa30c
	if (cr6.eq) goto loc_824FA30C;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x824f7b48
	ctx.lr = 0x824FA2D4;
	sub_824F7B48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fa50c
	if (!cr6.eq) goto loc_824FA50C;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa300
	if (cr6.eq) goto loc_824FA300;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824fa304
	if (cr6.eq) goto loc_824FA304;
loc_824FA300:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FA304:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x824fa500
	goto loc_824FA500;
loc_824FA30C:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824f6e38
	ctx.lr = 0x824FA314;
	sub_824F6E38(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa50c
	if (cr6.eq) goto loc_824FA50C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa338
	if (cr6.eq) goto loc_824FA338;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// li r22,1
	ctx.r22.s64 = 1;
loc_824FA338:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa420
	if (cr6.eq) goto loc_824FA420;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r24,r14,344
	ctx.r24.s64 = ctx.r14.s64 + 344;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
loc_824FA350:
	// lwz r23,-160(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + -160);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x824fa40c
	if (cr6.eq) goto loc_824FA40C;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r26,r11,-4
	ctx.r26.s64 = ctx.r11.s64 + -4;
loc_824FA374:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x824fa3fc
	if (!cr6.eq) goto loc_824FA3FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82510220
	ctx.lr = 0x824FA398;
	sub_82510220(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82510248
	ctx.lr = 0x824FA3AC;
	sub_82510248(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x824fa3fc
	if (cr6.eq) goto loc_824FA3FC;
loc_824FA3BC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r20,r8
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r8.s32, xer);
	// bne cr6,0x824fa3d4
	if (!cr6.eq) goto loc_824FA3D4;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmpw cr6,r21,r8
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r8.s32, xer);
	// beq cr6,0x824fa3e8
	if (cr6.eq) goto loc_824FA3E8;
loc_824FA3D4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// blt cr6,0x824fa3bc
	if (cr6.lt) goto loc_824FA3BC;
	// b 0x824fa3fc
	goto loc_824FA3FC;
loc_824FA3E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x824e2308
	ctx.lr = 0x824FA3F4;
	sub_824E2308(ctx, base);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stwu r3,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r26.u32 = ea;
loc_824FA3FC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, xer);
	// blt cr6,0x824fa374
	if (cr6.lt) goto loc_824FA374;
loc_824FA40C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x824fa350
	if (cr6.lt) goto loc_824FA350;
loc_824FA420:
	// lbz r11,208(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 208);
	// addi r10,r14,56
	ctx.r10.s64 = ctx.r14.s64 + 56;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa47c
	if (cr6.eq) goto loc_824FA47C;
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// addi r11,r10,120
	ctx.r11.s64 = ctx.r10.s64 + 120;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x824fa444
	if (cr6.lt) goto loc_824FA444;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_824FA444:
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// addi r6,r10,80
	ctx.r6.s64 = ctx.r10.s64 + 80;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x824fa458
	if (cr6.lt) goto loc_824FA458;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_824FA458:
	// addi r5,r18,-28
	ctx.r5.s64 = ctx.r18.s64 + -28;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573118
	ctx.lr = 0x824FA478;
	sub_82573118(ctx, base);
	// b 0x824fa4a8
	goto loc_824FA4A8;
loc_824FA47C:
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824fa490
	if (cr6.lt) goto loc_824FA490;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_824FA490:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573118
	ctx.lr = 0x824FA4A8;
	sub_82573118(ctx, base);
loc_824FA4A8:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82420a60
	ctx.lr = 0x824FA4B4;
	sub_82420A60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r11.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824FA4C8;
	sub_8241FA70(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// stw r10,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r10.u32);
	// beq cr6,0x824fa4e8
	if (cr6.eq) goto loc_824FA4E8;
	// addi r3,r19,24
	ctx.r3.s64 = ctx.r19.s64 + 24;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// rlwinm r5,r22,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x824FA4E8;
	sub_831CEE08(ctx, base);
loc_824FA4E8:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241fb00
	ctx.lr = 0x824FA4F0;
	sub_8241FB00(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x824f7b48
	ctx.lr = 0x824FA4FC;
	sub_824F7B48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_824FA500:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fa50c
	if (!cr6.eq) goto loc_824FA50C;
	// li r17,1
	ctx.r17.s64 = 1;
loc_824FA50C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, xer);
	// blt cr6,0x824fa2b0
	if (cr6.lt) goto loc_824FA2B0;
loc_824FA51C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, xer);
	// blt cr6,0x824fa29c
	if (cr6.lt) goto loc_824FA29C;
loc_824FA52C:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa548
	if (cr6.eq) goto loc_824FA548;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,452(r14)
	PPC_STORE_U32(ctx.r14.u32 + 452, ctx.r11.u32);
	// stw r10,448(r14)
	PPC_STORE_U32(ctx.r14.u32 + 448, ctx.r10.u32);
loc_824FA548:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa76c
	if (cr6.eq) goto loc_824FA76C;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// addi r25,r14,528
	ctx.r25.s64 = ctx.r14.s64 + 528;
loc_824FA564:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x824fa620
	if (!cr0.gt) goto loc_824FA620;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_824FA580:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,-160(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + -160);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// beq cr6,0x824fa5c0
	if (cr6.eq) goto loc_824FA5C0;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FA5A0:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// beq cr6,0x824fa774
	if (cr6.eq) goto loc_824FA774;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x824fa5a0
	if (cr6.lt) goto loc_824FA5A0;
loc_824FA5C0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824f6d18
	ctx.lr = 0x824FA5CC;
	sub_824F6D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa614
	if (cr6.eq) goto loc_824FA614;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82510360
	ctx.lr = 0x824FA5E4;
	sub_82510360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241fa28
	ctx.lr = 0x824FA5F0;
	sub_8241FA28(ctx, base);
	// stw r16,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824FA600;
	sub_8241FA70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8241fb00
	ctx.lr = 0x824FA614;
	sub_8241FB00(ctx, base);
loc_824FA614:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x824fa580
	if (!cr0.eq) goto loc_824FA580;
loc_824FA620:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x824fa730
	if (!cr0.gt) goto loc_824FA730;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// li r20,-1
	ctx.r20.s64 = -1;
loc_824FA64C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r9,-160(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -160);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// beq cr6,0x824fa68c
	if (cr6.eq) goto loc_824FA68C;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824FA66C:
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// beq cr6,0x824fa788
	if (cr6.eq) goto loc_824FA788;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x824fa66c
	if (cr6.lt) goto loc_824FA66C;
loc_824FA68C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824f6d68
	ctx.lr = 0x824FA698;
	sub_824F6D68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa724
	if (cr6.eq) goto loc_824FA724;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824fa6cc
	if (!cr6.eq) goto loc_824FA6CC;
	// stw r23,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r23.u32);
	// bl 0x8241fb80
	ctx.lr = 0x824FA6B8;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824FA6C4;
	sub_8241FA70(ctx, base);
	// stw r20,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r20.u32);
	// stb r23,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r23.u8);
loc_824FA6CC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82510360
	ctx.lr = 0x824FA6DC;
	sub_82510360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241fa28
	ctx.lr = 0x824FA6E8;
	sub_8241FA28(ctx, base);
	// stw r16,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fa70
	ctx.lr = 0x824FA6F8;
	sub_8241FA70(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r22,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r22.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f7768
	ctx.lr = 0x824FA70C;
	sub_824F7768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fa71c
	if (!cr6.eq) goto loc_824FA71C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_824FA71C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241fb00
	ctx.lr = 0x824FA724;
	sub_8241FB00(ctx, base);
loc_824FA724:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x824fa64c
	if (!cr0.eq) goto loc_824FA64C;
loc_824FA730:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// blt cr6,0x824fa564
	if (cr6.lt) goto loc_824FA564;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa76c
	if (cr6.eq) goto loc_824FA76C;
	// lwz r11,452(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 452);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x824fa764
	if (!cr6.eq) goto loc_824FA764;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,452(r14)
	PPC_STORE_U32(ctx.r14.u32 + 452, ctx.r11.u32);
loc_824FA764:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,448(r14)
	PPC_STORE_U32(ctx.r14.u32 + 448, ctx.r11.u32);
loc_824FA76C:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_824FA774:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824fa614
	if (!cr6.eq) goto loc_824FA614;
	// stw r16,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r16.u32);
	// b 0x824fa614
	goto loc_824FA614;
loc_824FA788:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x824f7768
	ctx.lr = 0x824FA790;
	sub_824F7768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fa724
	if (!cr6.eq) goto loc_824FA724;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x824fa724
	goto loc_824FA724;
}

__attribute__((alias("__imp__sub_824FA7A4"))) PPC_WEAK_FUNC(sub_824FA7A4);
PPC_FUNC_IMPL(__imp__sub_824FA7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FA7A8"))) PPC_WEAK_FUNC(sub_824FA7A8);
PPC_FUNC_IMPL(__imp__sub_824FA7A8) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x825730a8
	ctx.lr = 0x824FA7D0;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa7f4
	if (cr6.eq) goto loc_824FA7F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f9118
	ctx.lr = 0x824FA7E0;
	sub_824F9118(ctx, base);
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
loc_824FA7F4:
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

__attribute__((alias("__imp__sub_824FA80C"))) PPC_WEAK_FUNC(sub_824FA80C);
PPC_FUNC_IMPL(__imp__sub_824FA80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FA810"))) PPC_WEAK_FUNC(sub_824FA810);
PPC_FUNC_IMPL(__imp__sub_824FA810) {
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
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,29
	ctx.r5.u64 = ctx.r5.u64 | 29;
	// li r3,632
	ctx.r3.s64 = 632;
	// bl 0x8248b768
	ctx.lr = 0x824FA838;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fa85c
	if (cr6.eq) goto loc_824FA85C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f91a8
	ctx.lr = 0x824FA848;
	sub_824F91A8(ctx, base);
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
loc_824FA85C:
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

__attribute__((alias("__imp__sub_824FA874"))) PPC_WEAK_FUNC(sub_824FA874);
PPC_FUNC_IMPL(__imp__sub_824FA874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FA878"))) PPC_WEAK_FUNC(sub_824FA878);
PPC_FUNC_IMPL(__imp__sub_824FA878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x824FA880;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824f75d8
	ctx.lr = 0x824FA8A8;
	sub_824F75D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824f98b0
	ctx.lr = 0x824FA8C0;
	sub_824F98B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f7188
	ctx.lr = 0x824FA8D0;
	sub_824F7188(ctx, base);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x824fa934
	if (cr6.lt) goto loc_824FA934;
	// bne cr6,0x824fa984
	if (!cr6.eq) goto loc_824FA984;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fa984
	if (cr6.eq) goto loc_824FA984;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// addi r10,r11,20408
	ctx.r10.s64 = ctx.r11.s64 + 20408;
	// lwz r30,20408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x824fa984
	if (cr6.eq) goto loc_824FA984;
loc_824FA908:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FA920;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x824fa908
	if (!cr6.eq) goto loc_824FA908;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_824FA934:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fa984
	if (!cr6.eq) goto loc_824FA984;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r10,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
	// addi r9,r11,20408
	ctx.r9.s64 = ctx.r11.s64 + 20408;
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,20408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20408);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x824fa984
	if (cr6.eq) goto loc_824FA984;
loc_824FA960:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FA978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x824fa960
	if (!cr6.eq) goto loc_824FA960;
loc_824FA984:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FA98C"))) PPC_WEAK_FUNC(sub_824FA98C);
PPC_FUNC_IMPL(__imp__sub_824FA98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FA990"))) PPC_WEAK_FUNC(sub_824FA990);
PPC_FUNC_IMPL(__imp__sub_824FA990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20468
	ctx.r3.s64 = ctx.r11.s64 + 20468;
	// b 0x824f2bb8
	sub_824F2BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FA9A0"))) PPC_WEAK_FUNC(sub_824FA9A0);
PPC_FUNC_IMPL(__imp__sub_824FA9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x824FA9C0;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x824fa9e8
	if (!cr6.eq) goto loc_824FA9E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x824FA9D4;
	sub_8253B068(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,20464(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20464, ctx.r11.u8);
loc_824FA9E8:
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

__attribute__((alias("__imp__sub_824FAA00"))) PPC_WEAK_FUNC(sub_824FAA00);
PPC_FUNC_IMPL(__imp__sub_824FAA00) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,20704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20704);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824faa74
	if (!cr6.eq) goto loc_824FAA74;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,20704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20704, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,20472
	ctx.r31.s64 = ctx.r9.s64 + 20472;
	// lis r6,17
	ctx.r6.s64 = 1114112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-24540
	ctx.r5.s64 = ctx.r8.s64 + -24540;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,152
	ctx.r4.s64 = 152;
	// bl 0x82477fc8
	ctx.lr = 0x824FAA50;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,8384
	ctx.r3.s64 = ctx.r7.s64 + 8384;
	// bl 0x831cdcc8
	ctx.lr = 0x824FAA5C;
	sub_831CDCC8(ctx, base);
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
loc_824FAA74:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
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

__attribute__((alias("__imp__sub_824FAA90"))) PPC_WEAK_FUNC(sub_824FAA90);
PPC_FUNC_IMPL(__imp__sub_824FAA90) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,20944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20944);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824fab04
	if (!cr6.eq) goto loc_824FAB04;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,20944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20944, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,20712
	ctx.r31.s64 = ctx.r9.s64 + 20712;
	// lis r6,17
	ctx.r6.s64 = 1114112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-24476
	ctx.r5.s64 = ctx.r8.s64 + -24476;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82477fc8
	ctx.lr = 0x824FAAE0;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,8400
	ctx.r3.s64 = ctx.r7.s64 + 8400;
	// bl 0x831cdcc8
	ctx.lr = 0x824FAAEC;
	sub_831CDCC8(ctx, base);
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
loc_824FAB04:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20712
	ctx.r3.s64 = ctx.r11.s64 + 20712;
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

__attribute__((alias("__imp__sub_824FAB20"))) PPC_WEAK_FUNC(sub_824FAB20);
PPC_FUNC_IMPL(__imp__sub_824FAB20) {
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
	// bl 0x824faa90
	ctx.lr = 0x824FAB34;
	sub_824FAA90(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-24468
	ctx.r4.s64 = ctx.r11.s64 + -24468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x824FAB4C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x824FAB58;
	sub_8246BE10(ctx, base);
	// bl 0x8251af80
	ctx.lr = 0x824FAB5C;
	sub_8251AF80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x824FAB68;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_824FAB7C"))) PPC_WEAK_FUNC(sub_824FAB7C);
PPC_FUNC_IMPL(__imp__sub_824FAB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FAB80"))) PPC_WEAK_FUNC(sub_824FAB80);
PPC_FUNC_IMPL(__imp__sub_824FAB80) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,21184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21184);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824fabf4
	if (!cr6.eq) goto loc_824FABF4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,21184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21184, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,20952
	ctx.r31.s64 = ctx.r9.s64 + 20952;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-24436
	ctx.r5.s64 = ctx.r8.s64 + -24436;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82477fc8
	ctx.lr = 0x824FABD0;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,8416
	ctx.r3.s64 = ctx.r7.s64 + 8416;
	// bl 0x831cdcc8
	ctx.lr = 0x824FABDC;
	sub_831CDCC8(ctx, base);
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
loc_824FABF4:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
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

__attribute__((alias("__imp__sub_824FAC10"))) PPC_WEAK_FUNC(sub_824FAC10);
PPC_FUNC_IMPL(__imp__sub_824FAC10) {
	PPC_FUNC_PROLOGUE();
	// b 0x824fab80
	sub_824FAB80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FAC14"))) PPC_WEAK_FUNC(sub_824FAC14);
PPC_FUNC_IMPL(__imp__sub_824FAC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FAC18"))) PPC_WEAK_FUNC(sub_824FAC18);
PPC_FUNC_IMPL(__imp__sub_824FAC18) {
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
	// bl 0x82467738
	ctx.lr = 0x824FAC2C;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x824FAC40;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fac80
	if (cr6.eq) goto loc_824FAC80;
	// bl 0x82455560
	ctx.lr = 0x824FAC50;
	sub_82455560(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24356
	ctx.r9.s64 = ctx.r10.s64 + -24356;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// bl 0x83b2d9f0
	ctx.lr = 0x824FAC78;
	sub_83B2D9F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x824fac84
	goto loc_824FAC84;
loc_824FAC80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824FAC84:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,20468
	ctx.r3.s64 = ctx.r11.s64 + 20468;
	// bl 0x824f2bb8
	ctx.lr = 0x824FAC90;
	sub_824F2BB8(ctx, base);
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

__attribute__((alias("__imp__sub_824FACA4"))) PPC_WEAK_FUNC(sub_824FACA4);
PPC_FUNC_IMPL(__imp__sub_824FACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FACA8"))) PPC_WEAK_FUNC(sub_824FACA8);
PPC_FUNC_IMPL(__imp__sub_824FACA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x824faa00
	sub_824FAA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FACAC"))) PPC_WEAK_FUNC(sub_824FACAC);
PPC_FUNC_IMPL(__imp__sub_824FACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FACB0"))) PPC_WEAK_FUNC(sub_824FACB0);
PPC_FUNC_IMPL(__imp__sub_824FACB0) {
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
	// bl 0x824b3de0
	ctx.lr = 0x824FACC8;
	sub_824B3DE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-24332
	ctx.r9.s64 = ctx.r11.s64 + -24332;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// std r10,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r10.u64);
	// std r10,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r10.u64);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_824FAD14"))) PPC_WEAK_FUNC(sub_824FAD14);
PPC_FUNC_IMPL(__imp__sub_824FAD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FAD18"))) PPC_WEAK_FUNC(sub_824FAD18);
PPC_FUNC_IMPL(__imp__sub_824FAD18) {
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
	// bl 0x824faa00
	ctx.lr = 0x824FAD30;
	sub_824FAA00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x824FAD44;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fad68
	if (cr6.eq) goto loc_824FAD68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824facb0
	ctx.lr = 0x824FAD54;
	sub_824FACB0(ctx, base);
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
loc_824FAD68:
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

__attribute__((alias("__imp__sub_824FAD80"))) PPC_WEAK_FUNC(sub_824FAD80);
PPC_FUNC_IMPL(__imp__sub_824FAD80) {
	PPC_FUNC_PROLOGUE();
	// b 0x824faa90
	sub_824FAA90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FAD84"))) PPC_WEAK_FUNC(sub_824FAD84);
PPC_FUNC_IMPL(__imp__sub_824FAD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FAD88"))) PPC_WEAK_FUNC(sub_824FAD88);
PPC_FUNC_IMPL(__imp__sub_824FAD88) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r10,r11,-24356
	ctx.r10.s64 = ctx.r11.s64 + -24356;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83397780
	ctx.lr = 0x824FADB8;
	sub_83397780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82467108
	ctx.lr = 0x824FADC0;
	sub_82467108(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824fadd8
	if (cr6.eq) goto loc_824FADD8;
	// bl 0x8248b818
	ctx.lr = 0x824FADD4;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824FADD8:
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

__attribute__((alias("__imp__sub_824FADF0"))) PPC_WEAK_FUNC(sub_824FADF0);
PPC_FUNC_IMPL(__imp__sub_824FADF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x824FADF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,20468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20468);
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x824faea8
	if (cr6.eq) goto loc_824FAEA8;
loc_824FAE34:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8251b068
	ctx.lr = 0x824FAE40;
	sub_8251B068(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,104
	ctx.r30.s64 = ctx.r11.s64 + 104;
	// bl 0x83102db0
	ctx.lr = 0x824FAE50;
	sub_83102DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82424320
	ctx.lr = 0x824FAE60;
	sub_82424320(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x824fae7c
	if (!cr6.eq) goto loc_824FAE7C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x824fae80
	if (cr6.eq) goto loc_824FAE80;
loc_824FAE7C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824FAE80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824faecc
	if (!cr6.eq) goto loc_824FAECC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x824fae34
	if (!cr6.eq) goto loc_824FAE34;
loc_824FAEA8:
	// bl 0x82451cb8
	ctx.lr = 0x824FAEAC;
	sub_82451CB8(ctx, base);
loc_824FAEAC:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r24,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r24.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82572fa0
	ctx.lr = 0x824FAEC0;
	sub_82572FA0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_824FAECC:
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d0228
	ctx.lr = 0x824FAEDC;
	sub_824D0228(ctx, base);
	// b 0x824faeac
	goto loc_824FAEAC;
}

__attribute__((alias("__imp__sub_824FAEE0"))) PPC_WEAK_FUNC(sub_824FAEE0);
PPC_FUNC_IMPL(__imp__sub_824FAEE0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824fadf0
	ctx.lr = 0x824FAF00;
	sub_824FADF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824faf14
	if (cr6.eq) goto loc_824FAF14;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x824faf18
	goto loc_824FAF18;
loc_824FAF14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824FAF18:
	// bl 0x82489e30
	ctx.lr = 0x824FAF1C;
	sub_82489E30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x824FAF2C;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_824FAF44"))) PPC_WEAK_FUNC(sub_824FAF44);
PPC_FUNC_IMPL(__imp__sub_824FAF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FAF48"))) PPC_WEAK_FUNC(sub_824FAF48);
PPC_FUNC_IMPL(__imp__sub_824FAF48) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82488fa8
	ctx.lr = 0x824FAF6C;
	sub_82488FA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f1b0
	ctx.lr = 0x824FAF78;
	sub_8241F1B0(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r11,20468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20468);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824faf94
	if (!cr6.eq) goto loc_824FAF94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248ba08
	ctx.lr = 0x824FAF90;
	sub_8248BA08(ctx, base);
	// b 0x824fafd0
	goto loc_824FAFD0;
loc_824FAF94:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824fadf0
	ctx.lr = 0x824FAFA4;
	sub_824FADF0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fafb8
	if (cr6.eq) goto loc_824FAFB8;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x824fafbc
	goto loc_824FAFBC;
loc_824FAFB8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824FAFBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248b9b8
	ctx.lr = 0x824FAFC4;
	sub_8248B9B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x824FAFD0;
	sub_82572FA0(ctx, base);
loc_824FAFD0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x824FAFD8;
	sub_82573C50(ctx, base);
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

__attribute__((alias("__imp__sub_824FAFF0"))) PPC_WEAK_FUNC(sub_824FAFF0);
PPC_FUNC_IMPL(__imp__sub_824FAFF0) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82488fa8
	ctx.lr = 0x824FB014;
	sub_82488FA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f1b0
	ctx.lr = 0x824FB020;
	sub_8241F1B0(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r11,20468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20468);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fb03c
	if (!cr6.eq) goto loc_824FB03C;
loc_824FB030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248ba08
	ctx.lr = 0x824FB038;
	sub_8248BA08(ctx, base);
	// b 0x824fb084
	goto loc_824FB084;
loc_824FB03C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824faee0
	ctx.lr = 0x824FB048;
	sub_824FAEE0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fb030
	if (cr6.eq) goto loc_824FB030;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824b39f8
	ctx.lr = 0x824FB058;
	sub_824B39F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x824FB06C;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8248b9b8
	ctx.lr = 0x824FB078;
	sub_8248B9B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x824FB084;
	sub_8241F040(ctx, base);
loc_824FB084:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x824FB08C;
	sub_82573C50(ctx, base);
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

__attribute__((alias("__imp__sub_824FB0A4"))) PPC_WEAK_FUNC(sub_824FB0A4);
PPC_FUNC_IMPL(__imp__sub_824FB0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FB0A8"))) PPC_WEAK_FUNC(sub_824FB0A8);
PPC_FUNC_IMPL(__imp__sub_824FB0A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fb0f8
	if (cr6.eq) goto loc_824FB0F8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b3ea8
	ctx.lr = 0x824FB0D8;
	sub_824B3EA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-24332
	ctx.r10.s64 = ctx.r11.s64 + -24332;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824b77c8
	ctx.lr = 0x824FB0F0;
	sub_824B77C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x824fb0fc
	goto loc_824FB0FC;
loc_824FB0F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824FB0FC:
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

__attribute__((alias("__imp__sub_824FB114"))) PPC_WEAK_FUNC(sub_824FB114);
PPC_FUNC_IMPL(__imp__sub_824FB114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FB118"))) PPC_WEAK_FUNC(sub_824FB118);
PPC_FUNC_IMPL(__imp__sub_824FB118) {
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
	// bl 0x824faa00
	ctx.lr = 0x824FB130;
	sub_824FAA00(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-24484
	ctx.r30.s64 = ctx.r11.s64 + -24484;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x824FB14C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x824FB158;
	sub_8246BE10(ctx, base);
	// bl 0x824b4418
	ctx.lr = 0x824FB15C;
	sub_824B4418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x824FB168;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x824FB17C;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fb198
	if (cr6.eq) goto loc_824FB198;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-24364
	ctx.r9.s64 = ctx.r10.s64 + -24364;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x824fb19c
	goto loc_824FB19C;
loc_824FB198:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FB19C:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be48
	ctx.lr = 0x824FB1AC;
	sub_8246BE48(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21224
	ctx.r4.s64 = ctx.r11.s64 + -21224;
	// bl 0x8246be80
	ctx.lr = 0x824FB1BC;
	sub_8246BE80(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824783f0
	ctx.lr = 0x824FB1D0;
	sub_824783F0(ctx, base);
	// addi r6,r30,-12
	ctx.r6.s64 = ctx.r30.s64 + -12;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x824FB1E8;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_824FB200"))) PPC_WEAK_FUNC(sub_824FB200);
PPC_FUNC_IMPL(__imp__sub_824FB200) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// addi r10,r11,-24332
	ctx.r10.s64 = ctx.r11.s64 + -24332;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8242f6e8
	ctx.lr = 0x824FB230;
	sub_8242F6E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b40a8
	ctx.lr = 0x824FB238;
	sub_824B40A8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824fb250
	if (cr6.eq) goto loc_824FB250;
	// bl 0x8248b818
	ctx.lr = 0x824FB24C;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824FB250:
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

__attribute__((alias("__imp__sub_824FB268"))) PPC_WEAK_FUNC(sub_824FB268);
PPC_FUNC_IMPL(__imp__sub_824FB268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824FB270;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x824faa90
	ctx.lr = 0x824FB280;
	sub_824FAA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x824FB294;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fb2d4
	if (cr6.eq) goto loc_824FB2D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8251b010
	ctx.lr = 0x824FB2A8;
	sub_8251B010(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r9,r11,-24272
	ctx.r9.s64 = ctx.r11.s64 + -24272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,20468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20468);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x83320918
	ctx.lr = 0x824FB2CC;
	sub_83320918(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x824fb2d8
	goto loc_824FB2D8;
loc_824FB2D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824FB2D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x824FB2E8;
	sub_8241F040(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FB2F4"))) PPC_WEAK_FUNC(sub_824FB2F4);
PPC_FUNC_IMPL(__imp__sub_824FB2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FB2F8"))) PPC_WEAK_FUNC(sub_824FB2F8);
PPC_FUNC_IMPL(__imp__sub_824FB2F8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r9,r11,-24272
	ctx.r9.s64 = ctx.r11.s64 + -24272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20468);
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252e6a0
	ctx.lr = 0x824FB338;
	sub_8252E6A0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// beq cr6,0x824fb360
	if (cr6.eq) goto loc_824FB360;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r4,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x833309e8
	ctx.lr = 0x824FB360;
	sub_833309E8(ctx, base);
loc_824FB360:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251b278
	ctx.lr = 0x824FB368;
	sub_8251B278(ctx, base);
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

__attribute__((alias("__imp__sub_824FB380"))) PPC_WEAK_FUNC(sub_824FB380);
PPC_FUNC_IMPL(__imp__sub_824FB380) {
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
	// bl 0x824fb2f8
	ctx.lr = 0x824FB3A0;
	sub_824FB2F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fb3b8
	if (cr6.eq) goto loc_824FB3B8;
	// bl 0x8248b818
	ctx.lr = 0x824FB3B4;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824FB3B8:
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

__attribute__((alias("__imp__sub_824FB3D0"))) PPC_WEAK_FUNC(sub_824FB3D0);
PPC_FUNC_IMPL(__imp__sub_824FB3D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824fab80
	ctx.lr = 0x824FB3E8;
	sub_824FAB80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824890e0
	ctx.lr = 0x824FB3F8;
	sub_824890E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r31,r11,-24384
	ctx.r31.s64 = ctx.r11.s64 + -24384;
	// addi r5,r10,-20664
	ctx.r5.s64 = ctx.r10.s64 + -20664;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489138
	ctx.lr = 0x824FB414;
	sub_82489138(ctx, base);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r5,r9,-20496
	ctx.r5.s64 = ctx.r9.s64 + -20496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489138
	ctx.lr = 0x824FB428;
	sub_82489138(ctx, base);
	// lis r8,-32176
	ctx.r8.s64 = -2108686336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r8,-22112
	ctx.r5.s64 = ctx.r8.s64 + -22112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489138
	ctx.lr = 0x824FB43C;
	sub_82489138(ctx, base);
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

__attribute__((alias("__imp__sub_824FB450"))) PPC_WEAK_FUNC(sub_824FB450);
PPC_FUNC_IMPL(__imp__sub_824FB450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489b30
	ctx.lr = 0x824FB468;
	sub_82489B30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824fb3d0
	ctx.lr = 0x824FB470;
	sub_824FB3D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,12828
	ctx.r10.s64 = ctx.r11.s64 + 12828;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82465ee8
	ctx.lr = 0x824FB484;
	sub_82465EE8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8257f3f0
	ctx.lr = 0x824FB48C;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489378
	ctx.lr = 0x824FB494;
	sub_82489378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FB4A8"))) PPC_WEAK_FUNC(sub_824FB4A8);
PPC_FUNC_IMPL(__imp__sub_824FB4A8) {
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
	// bl 0x824fab80
	ctx.lr = 0x824FB4BC;
	sub_824FAB80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-24428
	ctx.r4.s64 = ctx.r11.s64 + -24428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x824FB4D4;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x824FB4E0;
	sub_8246BE10(ctx, base);
	// bl 0x82467738
	ctx.lr = 0x824FB4E4;
	sub_82467738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x824FB4F0;
	sub_8246BE18(ctx, base);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-19504
	ctx.r4.s64 = ctx.r10.s64 + -19504;
	// bl 0x8246be38
	ctx.lr = 0x824FB500;
	sub_8246BE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x824FB508;
	sub_824894A0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-19376
	ctx.r4.s64 = ctx.r9.s64 + -19376;
	// bl 0x8253b5e8
	ctx.lr = 0x824FB520;
	sub_8253B5E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be88
	ctx.lr = 0x824FB534;
	sub_8253BE88(ctx, base);
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

__attribute__((alias("__imp__sub_824FB548"))) PPC_WEAK_FUNC(sub_824FB548);
PPC_FUNC_IMPL(__imp__sub_824FB548) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-24156
	ctx.r9.s64 = ctx.r11.s64 + -24156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x824fb57c
	if (cr6.eq) goto loc_824FB57C;
	// bl 0x82416268
	ctx.lr = 0x824FB578;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824FB57C:
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

__attribute__((alias("__imp__sub_824FB590"))) PPC_WEAK_FUNC(sub_824FB590);
PPC_FUNC_IMPL(__imp__sub_824FB590) {
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
	// lwz r4,304(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fb5e4
	if (cr6.eq) goto loc_824FB5E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825833a0
	ctx.lr = 0x824FB5BC;
	sub_825833A0(ctx, base);
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fb5dc
	if (cr6.eq) goto loc_824FB5DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FB5DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824FB5DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_824FB5E4:
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

__attribute__((alias("__imp__sub_824FB5F8"))) PPC_WEAK_FUNC(sub_824FB5F8);
PPC_FUNC_IMPL(__imp__sub_824FB5F8) {
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
	// lwz r3,332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fb628
	if (cr6.eq) goto loc_824FB628;
	// bl 0x82573040
	ctx.lr = 0x824FB61C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// b 0x824fb62c
	goto loc_824FB62C;
loc_824FB628:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FB62C:
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_824FB644"))) PPC_WEAK_FUNC(sub_824FB644);
PPC_FUNC_IMPL(__imp__sub_824FB644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FB648"))) PPC_WEAK_FUNC(sub_824FB648);
PPC_FUNC_IMPL(__imp__sub_824FB648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// beq cr6,0x824fb6a4
	if (cr6.eq) goto loc_824FB6A4;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x824fb6a4
	if (cr6.eq) goto loc_824FB6A4;
	// cmplwi cr6,r4,112
	cr6.compare<uint32_t>(ctx.r4.u32, 112, xer);
	// bne cr6,0x824fb66c
	if (!cr6.eq) goto loc_824FB66C;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// blr 
	return;
loc_824FB66C:
	// cmplwi cr6,r4,1167
	cr6.compare<uint32_t>(ctx.r4.u32, 1167, xer);
	// beq cr6,0x824fb698
	if (cr6.eq) goto loc_824FB698;
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// beq cr6,0x824fb698
	if (cr6.eq) goto loc_824FB698;
	// cmplwi cr6,r4,1392
	cr6.compare<uint32_t>(ctx.r4.u32, 1392, xer);
	// bne cr6,0x824fb690
	if (!cr6.eq) goto loc_824FB690;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// blr 
	return;
loc_824FB690:
	// stw r5,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r5.u32);
	// blr 
	return;
loc_824FB698:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// blr 
	return;
loc_824FB6A4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FB6B0"))) PPC_WEAK_FUNC(sub_824FB6B0);
PPC_FUNC_IMPL(__imp__sub_824FB6B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x824FB6B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x8258c148
	ctx.lr = 0x824FB6D8;
	sub_8258C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x824FB6E8;
	sub_8257FAD0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d1bd8
	ctx.lr = 0x824FB708;
	sub_832D1BD8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x824fb728
	if (cr6.lt) goto loc_824FB728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x824FB724;
	sub_8257FB60(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
loc_824FB728:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x824fb758
	if (!cr6.eq) goto loc_824FB758;
	// bl 0x82417100
	ctx.lr = 0x824FB734;
	sub_82417100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fb648
	ctx.lr = 0x824FB748;
	sub_824FB648(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_824FB758:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x8258c148
	ctx.lr = 0x824FB760;
	sub_8258C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x824FB770;
	sub_8257FAD0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d1ab0
	ctx.lr = 0x824FB788;
	sub_832D1AB0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x824fb7a8
	if (cr6.lt) goto loc_824FB7A8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x824FB7A4;
	sub_8257FB60(ctx, base);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
loc_824FB7A8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x824fb7bc
	if (cr6.eq) goto loc_824FB7BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x824fb7ec
	if (cr6.eq) goto loc_824FB7EC;
loc_824FB7BC:
	// bl 0x82417100
	ctx.lr = 0x824FB7C0;
	sub_82417100(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fb648
	ctx.lr = 0x824FB7D4;
	sub_824FB648(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x824fb7ec
	if (!cr6.eq) goto loc_824FB7EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x824fb7ec
	if (cr6.eq) goto loc_824FB7EC;
	// li r27,24
	ctx.r27.s64 = 24;
loc_824FB7EC:
	// bl 0x8258c148
	ctx.lr = 0x824FB7F0;
	sub_8258C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x824FB800;
	sub_8257FAD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d1a68
	ctx.lr = 0x824FB808;
	sub_832D1A68(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x824fb828
	if (cr6.lt) goto loc_824FB828;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8257fb60
	ctx.lr = 0x824FB824;
	sub_8257FB60(ctx, base);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
loc_824FB828:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x824fb858
	if (!cr6.eq) goto loc_824FB858;
	// bl 0x82417100
	ctx.lr = 0x824FB834;
	sub_82417100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fb648
	ctx.lr = 0x824FB848;
	sub_824FB648(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_824FB858:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FB868"))) PPC_WEAK_FUNC(sub_824FB868);
PPC_FUNC_IMPL(__imp__sub_824FB868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x824FB870;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x8258c148
	ctx.lr = 0x824FB890;
	sub_8258C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x824FB8A0;
	sub_8257FAD0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d1bd8
	ctx.lr = 0x824FB8C0;
	sub_832D1BD8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x824fb8e0
	if (cr6.lt) goto loc_824FB8E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x824FB8DC;
	sub_8257FB60(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
loc_824FB8E0:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x824fb910
	if (!cr6.eq) goto loc_824FB910;
	// bl 0x82417100
	ctx.lr = 0x824FB8EC;
	sub_82417100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fb648
	ctx.lr = 0x824FB900;
	sub_824FB648(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_824FB910:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x8258c148
	ctx.lr = 0x824FB918;
	sub_8258C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x824FB928;
	sub_8257FAD0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d1dd0
	ctx.lr = 0x824FB940;
	sub_832D1DD0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x824fb960
	if (cr6.lt) goto loc_824FB960;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x824FB95C;
	sub_8257FB60(ctx, base);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
loc_824FB960:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x824fb974
	if (cr6.eq) goto loc_824FB974;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x824fb9a4
	if (cr6.eq) goto loc_824FB9A4;
loc_824FB974:
	// bl 0x82417100
	ctx.lr = 0x824FB978;
	sub_82417100(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fb648
	ctx.lr = 0x824FB98C;
	sub_824FB648(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x824fb9a4
	if (!cr6.eq) goto loc_824FB9A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x824fb9a4
	if (cr6.eq) goto loc_824FB9A4;
	// li r27,24
	ctx.r27.s64 = 24;
loc_824FB9A4:
	// bl 0x8258c148
	ctx.lr = 0x824FB9A8;
	sub_8258C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x824FB9B8;
	sub_8257FAD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d1a68
	ctx.lr = 0x824FB9C0;
	sub_832D1A68(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x824fb9e0
	if (cr6.lt) goto loc_824FB9E0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8257fb60
	ctx.lr = 0x824FB9DC;
	sub_8257FB60(ctx, base);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
loc_824FB9E0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x824fba10
	if (!cr6.eq) goto loc_824FBA10;
	// bl 0x82417100
	ctx.lr = 0x824FB9EC;
	sub_82417100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fb648
	ctx.lr = 0x824FBA00;
	sub_824FB648(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_824FBA10:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FBA20"))) PPC_WEAK_FUNC(sub_824FBA20);
PPC_FUNC_IMPL(__imp__sub_824FBA20) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r31,r11,5704
	ctx.r31.s64 = ctx.r11.s64 + 5704;
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824fba78
	if (cr6.eq) goto loc_824FBA78;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825833a0
	ctx.lr = 0x824FBA50;
	sub_825833A0(ctx, base);
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fba70
	if (cr6.eq) goto loc_824FBA70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FBA70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824FBA70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_824FBA78:
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

__attribute__((alias("__imp__sub_824FBA8C"))) PPC_WEAK_FUNC(sub_824FBA8C);
PPC_FUNC_IMPL(__imp__sub_824FBA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FBA90"))) PPC_WEAK_FUNC(sub_824FBA90);
PPC_FUNC_IMPL(__imp__sub_824FBA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x824FBA98;
	__savegprlr_19(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// beq cr6,0x824fbabc
	if (cr6.eq) goto loc_824FBABC;
	// std r19,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r19.u64);
loc_824FBABC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FBAD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x824fbaec
	if (cr6.gt) goto loc_824FBAEC;
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_824FBAEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FBB00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x824fbb18
	if (!cr6.lt) goto loc_824FBB18;
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_824FBB18:
	// li r5,304
	ctx.r5.s64 = 304;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x831cdcf0
	ctx.lr = 0x824FBB2C;
	sub_831CDCF0(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fc1ec
	if (!cr6.eq) goto loc_824FC1EC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824fbb50
	if (cr6.lt) goto loc_824FBB50;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x824fbb54
	goto loc_824FBB54;
loc_824FBB50:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_824FBB54:
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x831ce7d8
	ctx.lr = 0x824FBB60;
	sub_831CE7D8(ctx, base);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d2800
	ctx.lr = 0x824FBB6C;
	sub_831D2800(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824fbbcc
	if (!cr6.eq) goto loc_824FBBCC;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824fbb88
	if (cr6.lt) goto loc_824FBB88;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x824fbb8c
	goto loc_824FBB8C;
loc_824FBB88:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_824FBB8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FBBA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x831d2748
	ctx.lr = 0x824FBBB0;
	sub_831D2748(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824FBBC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x824fbbdc
	goto loc_824FBBDC;
loc_824FBBCC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x831d2748
	ctx.lr = 0x824FBBDC;
	sub_831D2748(ctx, base);
loc_824FBBDC:
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, xer);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x824fc1b4
	if (cr6.eq) goto loc_824FC1B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r20,r11,-24064
	ctx.r20.s64 = ctx.r11.s64 + -24064;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x832d1a28
	ctx.lr = 0x824FBC14;
	sub_832D1A28(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x824fbc54
	if (!cr6.eq) goto loc_824FBC54;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x824fbc34
	if (cr6.eq) goto loc_824FBC34;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x824fbc34
	if (cr6.eq) goto loc_824FBC34;
	// cmplwi cr6,r3,1392
	cr6.compare<uint32_t>(ctx.r3.u32, 1392, xer);
	// bne cr6,0x824fbc54
	if (!cr6.eq) goto loc_824FBC54;
loc_824FBC34:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d1a28
	ctx.lr = 0x824FBC54;
	sub_832D1A28(ctx, base);
loc_824FBC54:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fbc70
	if (cr6.eq) goto loc_824FBC70;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fb648
	ctx.lr = 0x824FBC6C;
	sub_824FB648(ctx, base);
	// b 0x824fc1e8
	goto loc_824FC1E8;
loc_824FBC70:
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_824FBC78:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825336d0
	ctx.lr = 0x824FBC80;
	sub_825336D0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bge 0x824fbc78
	if (!cr0.lt) goto loc_824FBC78;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r23,r11,-24080
	ctx.r23.s64 = ctx.r11.s64 + -24080;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82533868
	ctx.lr = 0x824FBCA0;
	sub_82533868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r22,r11,-24096
	ctx.r22.s64 = ctx.r11.s64 + -24096;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82533868
	ctx.lr = 0x824FBCB4;
	sub_82533868(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825337b0
	ctx.lr = 0x824FBCBC;
	sub_825337B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825337b0
	ctx.lr = 0x824FBCC8;
	sub_825337B0(ctx, base);
	// clrlwi r28,r30,24
	ctx.r28.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824fbcdc
	if (cr6.eq) goto loc_824FBCDC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_824FBCDC:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fbcec
	if (cr6.eq) goto loc_824FBCEC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_824FBCEC:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x824fbf34
	if (!cr6.eq) goto loc_824FBF34;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// bl 0x8312dce0
	ctx.lr = 0x824FBCFC;
	sub_8312DCE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FBD1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824fbd34
	if (cr6.eq) goto loc_824FBD34;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x824fc18c
	goto loc_824FC18C;
loc_824FBD34:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// blt cr6,0x824fbd54
	if (cr6.lt) goto loc_824FBD54;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x824fbd58
	goto loc_824FBD58;
loc_824FBD54:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824FBD58:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bl 0x8252d628
	ctx.lr = 0x824FBD60;
	sub_8252D628(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fbd78
	if (!cr6.eq) goto loc_824FBD78;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// b 0x824fc18c
	goto loc_824FC18C;
loc_824FBD78:
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x824fbe20
	if (!cr6.eq) goto loc_824FBE20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825337f8
	ctx.lr = 0x824FBD94;
	sub_825337F8(ctx, base);
	// lis r12,434
	ctx.r12.s64 = 28442624;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r12,r12,7634
	ctx.r12.u64 = ctx.r12.u64 | 7634;
	// li r30,10
	ctx.r30.s64 = 10;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// oris r12,r12,4993
	ctx.r12.u64 = ctx.r12.u64 | 327221248;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ori r12,r12,16384
	ctx.r12.u64 = ctx.r12.u64 | 16384;
	// add r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 + ctx.r12.u64;
	// divd r28,r9,r30
	ctx.r28.s64 = PPCDivide(ctx.r9.s64, ctx.r30.s64);
	// bl 0x825337f8
	ctx.lr = 0x824FBDC8;
	sub_825337F8(ctx, base);
	// lis r12,434
	ctx.r12.s64 = 28442624;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ori r12,r12,7634
	ctx.r12.u64 = ctx.r12.u64 | 7634;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,4993
	ctx.r12.u64 = ctx.r12.u64 | 327221248;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,16384
	ctx.r12.u64 = ctx.r12.u64 | 16384;
	// add r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 + ctx.r12.u64;
	// divd r30,r6,r30
	ctx.r30.s64 = PPCDivide(ctx.r6.s64, ctx.r30.s64);
	// bl 0x824e5430
	ctx.lr = 0x824FBDF4;
	sub_824E5430(ctx, base);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// cmpd cr6,r11,r28
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r28.s64, xer);
	// ble cr6,0x824fbe28
	if (!cr6.gt) goto loc_824FBE28;
	// cmpd cr6,r11,r30
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r30.s64, xer);
	// ble cr6,0x824fbe28
	if (!cr6.gt) goto loc_824FBE28;
	// cmpd cr6,r28,r30
	cr6.compare<int64_t>(ctx.r28.s64, ctx.r30.s64, xer);
	// bgt cr6,0x824fbe18
	if (cr6.gt) goto loc_824FBE18;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// b 0x824fbe40
	goto loc_824FBE40;
loc_824FBE18:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// b 0x824fbe40
	goto loc_824FBE40;
loc_824FBE20:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x824fbe30
	if (!cr6.eq) goto loc_824FBE30;
loc_824FBE28:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// b 0x824fbe40
	goto loc_824FBE40;
loc_824FBE30:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x824fbe40
	if (!cr6.eq) goto loc_824FBE40;
	// addic r11,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// subfe r27,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + xer.ca < xer.ca);
	ctx.r27.u64 = ~ctx.r11.u64 + ctx.r28.u64 + xer.ca;
	xer.ca = temp.u8;
loc_824FBE40:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fbe98
	if (cr6.eq) goto loc_824FBE98;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fb6b0
	ctx.lr = 0x824FBE60;
	sub_824FB6B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r10,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x824fc18c
	if (!cr6.eq) goto loc_824FC18C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fb6b0
	ctx.lr = 0x824FBE88;
	sub_824FB6B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r10,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x824fc18c
	goto loc_824FC18C;
loc_824FBE98:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// beq cr6,0x824fc18c
	if (cr6.eq) goto loc_824FC18C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r28,332(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// rlwinm r30,r27,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82533850
	ctx.lr = 0x824FBEB4;
	sub_82533850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x824fb6b0
	ctx.lr = 0x824FBEC8;
	sub_824FB6B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r10,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x824fc18c
	if (cr6.eq) goto loc_824FC18C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FBEF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r27,332(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r3,r30,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r30.s64;
	// bl 0x82533850
	ctx.lr = 0x824FBF04;
	sub_82533850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x824fb6b0
	ctx.lr = 0x824FBF18;
	sub_824FB6B0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r26,r7,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x824fc18c
	if (cr6.eq) goto loc_824FC18C;
	// stw r28,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r28.u32);
	// b 0x824fc18c
	goto loc_824FC18C;
loc_824FBF34:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// bne cr6,0x824fc128
	if (!cr6.eq) goto loc_824FC128;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x824fbfbc
	if (!cr6.eq) goto loc_824FBFBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825337f8
	ctx.lr = 0x824FBF50;
	sub_825337F8(ctx, base);
	// lis r12,434
	ctx.r12.s64 = 28442624;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r12,r12,7634
	ctx.r12.u64 = ctx.r12.u64 | 7634;
	// li r30,10
	ctx.r30.s64 = 10;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// oris r12,r12,4993
	ctx.r12.u64 = ctx.r12.u64 | 327221248;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r12,r12,16384
	ctx.r12.u64 = ctx.r12.u64 | 16384;
	// add r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 + ctx.r12.u64;
	// divd r28,r9,r30
	ctx.r28.s64 = PPCDivide(ctx.r9.s64, ctx.r30.s64);
	// bl 0x825337f8
	ctx.lr = 0x824FBF84;
	sub_825337F8(ctx, base);
	// lis r12,434
	ctx.r12.s64 = 28442624;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ori r12,r12,7634
	ctx.r12.u64 = ctx.r12.u64 | 7634;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,4993
	ctx.r12.u64 = ctx.r12.u64 | 327221248;
	// ori r12,r12,16384
	ctx.r12.u64 = ctx.r12.u64 | 16384;
	// add r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 + ctx.r12.u64;
	// divd r6,r7,r30
	ctx.r6.s64 = PPCDivide(ctx.r7.s64, ctx.r30.s64);
	// cmpd cr6,r28,r6
	cr6.compare<int64_t>(ctx.r28.s64, ctx.r6.s64, xer);
	// blt cr6,0x824fbfb4
	if (cr6.lt) goto loc_824FBFB4;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// b 0x824fbfec
	goto loc_824FBFEC;
loc_824FBFB4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x824fbfec
	goto loc_824FBFEC;
loc_824FBFBC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x824fbfd4
	if (!cr6.eq) goto loc_824FBFD4;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// b 0x824fc18c
	goto loc_824FC18C;
loc_824FBFD4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x824fc18c
	if (!cr6.eq) goto loc_824FC18C;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x824fc18c
	if (cr6.eq) goto loc_824FC18C;
loc_824FBFEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FC008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824fc020
	if (cr6.eq) goto loc_824FC020;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x824fc18c
	goto loc_824FC18C;
loc_824FC020:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// bl 0x8312dce0
	ctx.lr = 0x824FC028;
	sub_8312DCE0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r27,332(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// rlwinm r30,r30,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82533850
	ctx.lr = 0x824FC040;
	sub_82533850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x824fb868
	ctx.lr = 0x824FC054;
	sub_824FB868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r10,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x824fc0c0
	if (cr6.eq) goto loc_824FC0C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FC07C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r24,332(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subf r3,r30,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r30.s64;
	// bl 0x82533850
	ctx.lr = 0x824FC090;
	sub_82533850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x824fb868
	ctx.lr = 0x824FC0A4;
	sub_824FB868(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x824fc0b8
	if (!cr6.eq) goto loc_824FC0B8;
	// stw r27,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r27.u32);
	// b 0x824fc0c0
	goto loc_824FC0C0;
loc_824FC0B8:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_824FC0C0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x824fc0e4
	if (cr6.eq) goto loc_824FC0E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FC0DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,14
	cr6.compare<int32_t>(ctx.r3.s32, 14, xer);
	// bne cr6,0x824fc18c
	if (!cr6.eq) goto loc_824FC18C;
loc_824FC0E4:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r7,312(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r6,308(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// blt cr6,0x824fc104
	if (cr6.lt) goto loc_824FC104;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x824fc108
	goto loc_824FC108;
loc_824FC104:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_824FC108:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8252d758
	ctx.lr = 0x824FC110;
	sub_8252D758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fc18c
	if (!cr6.eq) goto loc_824FC18C;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// b 0x824fc18c
	goto loc_824FC18C;
loc_824FC128:
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bne cr6,0x824fc18c
	if (!cr6.eq) goto loc_824FC18C;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x824fc18c
	if (cr6.eq) goto loc_824FC18C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824fc14c
	if (cr6.eq) goto loc_824FC14C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x824fc158
	goto loc_824FC158;
loc_824FC14C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fc160
	if (cr6.eq) goto loc_824FC160;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_824FC158:
	// bl 0x825337e0
	ctx.lr = 0x824FC15C;
	sub_825337E0(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
loc_824FC160:
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fc174
	if (cr6.eq) goto loc_824FC174;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
loc_824FC174:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832d19a8
	ctx.lr = 0x824FC188;
	sub_832D19A8(ctx, base);
	// std r3,0(r21)
	PPC_STORE_U64(ctx.r21.u32 + 0, ctx.r3.u64);
loc_824FC18C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d1980
	ctx.lr = 0x824FC198;
	sub_832D1980(ctx, base);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_824FC19C:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82533738
	ctx.lr = 0x824FC1A8;
	sub_82533738(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x824fc19c
	if (!cr0.lt) goto loc_824FC19C;
	// b 0x824fc1ec
	goto loc_824FC1EC;
loc_824FC1B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x832d1978
	ctx.lr = 0x824FC1C0;
	sub_832D1978(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x824fc1e0
	if (cr6.eq) goto loc_824FC1E0;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x824fc1e0
	if (cr6.eq) goto loc_824FC1E0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fc1ec
	if (cr6.eq) goto loc_824FC1EC;
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// b 0x824fc1e8
	goto loc_824FC1E8;
loc_824FC1E0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_824FC1E8:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_824FC1EC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824fc1fc
	if (!cr6.eq) goto loc_824FC1FC;
	// stw r19,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r19.u32);
loc_824FC1FC:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FC204"))) PPC_WEAK_FUNC(sub_824FC204);
PPC_FUNC_IMPL(__imp__sub_824FC204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FC208"))) PPC_WEAK_FUNC(sub_824FC208);
PPC_FUNC_IMPL(__imp__sub_824FC208) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824fba90
	ctx.lr = 0x824FC228;
	sub_824FBA90(ctx, base);
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_824FC24C"))) PPC_WEAK_FUNC(sub_824FC24C);
PPC_FUNC_IMPL(__imp__sub_824FC24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FC250"))) PPC_WEAK_FUNC(sub_824FC250);
PPC_FUNC_IMPL(__imp__sub_824FC250) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824fba90
	ctx.lr = 0x824FC270;
	sub_824FBA90(ctx, base);
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_824FC294"))) PPC_WEAK_FUNC(sub_824FC294);
PPC_FUNC_IMPL(__imp__sub_824FC294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FC298"))) PPC_WEAK_FUNC(sub_824FC298);
PPC_FUNC_IMPL(__imp__sub_824FC298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824FC2A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,304(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-24056
	ctx.r10.s64 = ctx.r11.s64 + -24056;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824fc2f4
	if (cr6.eq) goto loc_824FC2F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825833a0
	ctx.lr = 0x824FC2D0;
	sub_825833A0(ctx, base);
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fc2f0
	if (cr6.eq) goto loc_824FC2F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FC2F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824FC2F0:
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
loc_824FC2F4:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fc308
	if (cr6.eq) goto loc_824FC308;
	// bl 0x82573040
	ctx.lr = 0x824FC304;
	sub_82573040(ctx, base);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
loc_824FC308:
	// stw r29,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r29.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x824fc324
	if (cr6.lt) goto loc_824FC324;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x824FC324;
	sub_8386D088(ctx, base);
loc_824FC324:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,-24156
	ctx.r9.s64 = ctx.r11.s64 + -24156;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FC348"))) PPC_WEAK_FUNC(sub_824FC348);
PPC_FUNC_IMPL(__imp__sub_824FC348) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FC350"))) PPC_WEAK_FUNC(sub_824FC350);
PPC_FUNC_IMPL(__imp__sub_824FC350) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FC358"))) PPC_WEAK_FUNC(sub_824FC358);
PPC_FUNC_IMPL(__imp__sub_824FC358) {
	PPC_FUNC_PROLOGUE();
	// stw r4,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FC360"))) PPC_WEAK_FUNC(sub_824FC360);
PPC_FUNC_IMPL(__imp__sub_824FC360) {
	PPC_FUNC_PROLOGUE();
	// stw r4,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FC368"))) PPC_WEAK_FUNC(sub_824FC368);
PPC_FUNC_IMPL(__imp__sub_824FC368) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FC370"))) PPC_WEAK_FUNC(sub_824FC370);
PPC_FUNC_IMPL(__imp__sub_824FC370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824FC378;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fc3a8
	if (cr6.eq) goto loc_824FC3A8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8312dce0
	ctx.lr = 0x824FC39C;
	sub_8312DCE0(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x824fc408
	if (cr6.eq) goto loc_824FC408;
loc_824FC3A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FC3BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312dce0
	ctx.lr = 0x824FC3C4;
	sub_8312DCE0(ctx, base);
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// lis r5,18
	ctx.r5.s64 = 1179648;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// bl 0x825730a8
	ctx.lr = 0x824FC3D8;
	sub_825730A8(ctx, base);
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824fc408
	if (!cr6.eq) goto loc_824FC408;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_824FC408:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FC41C"))) PPC_WEAK_FUNC(sub_824FC41C);
PPC_FUNC_IMPL(__imp__sub_824FC41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FC420"))) PPC_WEAK_FUNC(sub_824FC420);
PPC_FUNC_IMPL(__imp__sub_824FC420) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x824fc464
	if (!cr6.eq) goto loc_824FC464;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r11,-23996
	ctx.r5.s64 = ctx.r11.s64 + -23996;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x831d2748
	ctx.lr = 0x824FC450;
	sub_831D2748(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824FC464:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576848
	ctx.lr = 0x824FC46C;
	sub_82576848(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82576cb0
	ctx.lr = 0x824FC474;
	sub_82576CB0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576908
	ctx.lr = 0x824FC484;
	sub_82576908(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x824fc498
	if (!cr6.lt) goto loc_824FC498;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_824FC498:
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x831d2748
	ctx.lr = 0x824FC4A4;
	sub_831D2748(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x824fc4b8
	if (cr6.lt) goto loc_824FC4B8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x824FC4B8;
	sub_8386D088(ctx, base);
loc_824FC4B8:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// blt cr6,0x824fc4e0
	if (cr6.lt) goto loc_824FC4E0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8386d088
	ctx.lr = 0x824FC4E0;
	sub_8386D088(ctx, base);
loc_824FC4E0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FC4F4"))) PPC_WEAK_FUNC(sub_824FC4F4);
PPC_FUNC_IMPL(__imp__sub_824FC4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FC4F8"))) PPC_WEAK_FUNC(sub_824FC4F8);
PPC_FUNC_IMPL(__imp__sub_824FC4F8) {
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
	// bl 0x824fc298
	ctx.lr = 0x824FC518;
	sub_824FC298(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824fc538
	if (cr6.eq) goto loc_824FC538;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x824FC534;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824FC538:
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

__attribute__((alias("__imp__sub_824FC550"))) PPC_WEAK_FUNC(sub_824FC550);
PPC_FUNC_IMPL(__imp__sub_824FC550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x824FC558;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824fc680
	if (cr6.eq) goto loc_824FC680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_824FC578:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824fc578
	if (!cr6.eq) goto loc_824FC578;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fc680
	if (cr6.eq) goto loc_824FC680;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824209f8
	ctx.lr = 0x824FC5A8;
	sub_824209F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825768c0
	ctx.lr = 0x824FC5B4;
	sub_825768C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241fe60
	ctx.lr = 0x824FC5BC;
	sub_8241FE60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fba90
	ctx.lr = 0x824FC5DC;
	sub_824FBA90(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x824fc604
	if (cr6.eq) goto loc_824FC604;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x824fc604
	if (cr6.eq) goto loc_824FC604;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_824FC604:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312dce0
	ctx.lr = 0x824FC60C;
	sub_8312DCE0(ctx, base);
	// clrlwi r10,r3,20
	ctx.r10.u64 = ctx.r3.u32 & 0xFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fc624
	if (cr6.eq) goto loc_824FC624;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
loc_824FC624:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832d19a8
	ctx.lr = 0x824FC638;
	sub_832D19A8(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r3
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, xer);
	// blt cr6,0x824fc658
	if (cr6.lt) goto loc_824FC658;
	// std r29,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r29.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_824FC658:
	// addi r10,r3,1023
	ctx.r10.s64 = ctx.r3.s64 + 1023;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r9,r11,1023
	ctx.r9.s64 = ctx.r11.s64 + 1023;
	// rldicl r8,r10,54,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 54) & 0x3FFFFFFFFFFFFF;
	// rldicl r7,r9,54,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 54) & 0x3FFFFFFFFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// std r6,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r6.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_824FC680:
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FC69C"))) PPC_WEAK_FUNC(sub_824FC69C);
PPC_FUNC_IMPL(__imp__sub_824FC69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FC6A0"))) PPC_WEAK_FUNC(sub_824FC6A0);
PPC_FUNC_IMPL(__imp__sub_824FC6A0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824fc740
	if (cr6.eq) goto loc_824FC740;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_824FC6C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824fc6c8
	if (!cr6.eq) goto loc_824FC6C8;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fc740
	if (cr6.eq) goto loc_824FC740;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824209f8
	ctx.lr = 0x824FC6F8;
	sub_824209F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825768c0
	ctx.lr = 0x824FC704;
	sub_825768C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241fe60
	ctx.lr = 0x824FC70C;
	sub_8241FE60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fba90
	ctx.lr = 0x824FC71C;
	sub_824FBA90(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x824fc734
	if (cr6.eq) goto loc_824FC734;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// bne cr6,0x824fc738
	if (!cr6.eq) goto loc_824FC738;
loc_824FC734:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FC738:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x824fc750
	goto loc_824FC750;
loc_824FC740:
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_824FC750:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_824FC76C"))) PPC_WEAK_FUNC(sub_824FC76C);
PPC_FUNC_IMPL(__imp__sub_824FC76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FC770"))) PPC_WEAK_FUNC(sub_824FC770);
PPC_FUNC_IMPL(__imp__sub_824FC770) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FC798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r4,r8,-22544
	ctx.r4.s64 = ctx.r8.s64 + -22544;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x824FC7C8;
	sub_824208C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825768c0
	ctx.lr = 0x824FC7D4;
	sub_825768C0(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x824fc7e8
	if (cr6.lt) goto loc_824FC7E8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x824FC7E8;
	sub_8386D088(ctx, base);
loc_824FC7E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_824FC80C"))) PPC_WEAK_FUNC(sub_824FC80C);
PPC_FUNC_IMPL(__imp__sub_824FC80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FC810"))) PPC_WEAK_FUNC(sub_824FC810);
PPC_FUNC_IMPL(__imp__sub_824FC810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x824FC818;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x824fc848
	if (cr6.eq) goto loc_824FC848;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x824fc960
	goto loc_824FC960;
loc_824FC848:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x824fc95c
	if (cr6.eq) goto loc_824FC95C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824FC854:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824fc854
	if (!cr6.eq) goto loc_824FC854;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fc95c
	if (cr6.eq) goto loc_824FC95C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824fc95c
	if (cr6.eq) goto loc_824FC95C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x824fc95c
	if (cr6.eq) goto loc_824FC95C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fc770
	ctx.lr = 0x824FC890;
	sub_824FC770(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23992
	ctx.r4.s64 = ctx.r11.s64 + -23992;
	// bl 0x825836d0
	ctx.lr = 0x824FC8A0;
	sub_825836D0(ctx, base);
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82416260
	ctx.lr = 0x824FC8A8;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fc8c8
	if (cr6.eq) goto loc_824FC8C8;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-15864
	ctx.r5.s64 = ctx.r11.s64 + -15864;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82583a98
	ctx.lr = 0x824FC8C4;
	sub_82583A98(ctx, base);
	// b 0x824fc8cc
	goto loc_824FC8CC;
loc_824FC8C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824FC8CC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// beq cr6,0x824fc938
	if (cr6.eq) goto loc_824FC938;
	// stw r28,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824209f8
	ctx.lr = 0x824FC8EC;
	sub_824209F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825768c0
	ctx.lr = 0x824FC8F8;
	sub_825768C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241fe60
	ctx.lr = 0x824FC900;
	sub_8241FE60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583340
	ctx.lr = 0x824FC920;
	sub_82583340(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824fc944
	if (cr6.eq) goto loc_824FC944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fc770
	ctx.lr = 0x824FC938;
	sub_824FC770(ctx, base);
loc_824FC938:
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_824FC944:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82583730
	ctx.lr = 0x824FC94C;
	sub_82583730(ctx, base);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_824FC95C:
	// li r10,3
	ctx.r10.s64 = 3;
loc_824FC960:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FC978"))) PPC_WEAK_FUNC(sub_824FC978);
PPC_FUNC_IMPL(__imp__sub_824FC978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x824FC980;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x824fc9b0
	if (cr6.eq) goto loc_824FC9B0;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x824fcac4
	goto loc_824FCAC4;
loc_824FC9B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x824fcac0
	if (cr6.eq) goto loc_824FCAC0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824FC9BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824fc9bc
	if (!cr6.eq) goto loc_824FC9BC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fcac0
	if (cr6.eq) goto loc_824FCAC0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x824fcac0
	if (cr6.eq) goto loc_824FCAC0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x824fcac0
	if (cr6.eq) goto loc_824FCAC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fc770
	ctx.lr = 0x824FC9F8;
	sub_824FC770(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23980
	ctx.r4.s64 = ctx.r11.s64 + -23980;
	// bl 0x825836d0
	ctx.lr = 0x824FCA08;
	sub_825836D0(ctx, base);
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82416260
	ctx.lr = 0x824FCA10;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fca30
	if (cr6.eq) goto loc_824FCA30;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-15792
	ctx.r5.s64 = ctx.r11.s64 + -15792;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82583a98
	ctx.lr = 0x824FCA2C;
	sub_82583A98(ctx, base);
	// b 0x824fca34
	goto loc_824FCA34;
loc_824FCA30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824FCA34:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// beq cr6,0x824fca9c
	if (cr6.eq) goto loc_824FCA9C;
	// stw r28,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824209f8
	ctx.lr = 0x824FCA54;
	sub_824209F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825768c0
	ctx.lr = 0x824FCA60;
	sub_825768C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241fe60
	ctx.lr = 0x824FCA68;
	sub_8241FE60(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x82583340
	ctx.lr = 0x824FCA84;
	sub_82583340(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fcaa8
	if (cr6.eq) goto loc_824FCAA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fc770
	ctx.lr = 0x824FCA9C;
	sub_824FC770(ctx, base);
loc_824FCA9C:
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
loc_824FCAA8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82583730
	ctx.lr = 0x824FCAB0;
	sub_82583730(ctx, base);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_824FCAC0:
	// li r10,3
	ctx.r10.s64 = 3;
loc_824FCAC4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FCADC"))) PPC_WEAK_FUNC(sub_824FCADC);
PPC_FUNC_IMPL(__imp__sub_824FCADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCAE0"))) PPC_WEAK_FUNC(sub_824FCAE0);
PPC_FUNC_IMPL(__imp__sub_824FCAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,4
	ctx.r10.s64 = 4;
	// vaddfp128 v0,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// addi r9,r11,27636
	ctx.r9.s64 = ctx.r11.s64 + 27636;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// li r8,8
	ctx.r8.s64 = 8;
	// vspltw128 v8,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// li r7,12
	ctx.r7.s64 = 12;
	// vspltisw128 v62,-1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r6,16
	ctx.r6.s64 = 16;
	// vupkd3d128 v3,v13,0
	vTemp.u32[0] = ctx.v13.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v13.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v13.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v13.u8[2] | 0x3F800000;
	ctx.v3 = vTemp;
	// li r5,32
	ctx.r5.s64 = 32;
	// lvlx128 v61,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// lvlx128 v59,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v58,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// lvlx128 v57,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v12,v62,v13,12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 4));
	// vsldoi128 v55,v13,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 8));
	// vrlimi128 v60,v59,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 57), 4));
	// vsldoi128 v54,v62,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vrlimi128 v58,v57,4,3
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 57), 4));
	// vor128 v7,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v6,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vand128 v11,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vrlimi128 v7,v57,2,2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 78), 2));
	// vrlimi128 v6,v61,2,2
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// vrlimi128 v7,v56,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 147), 1));
	// vrlimi128 v6,v56,1,1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 147), 1));
	// vperm128 v10,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v9,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v53,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v7,v63,v63,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmaddfp v5,v10,v0,v13
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v4,v9,v8,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v3,v10,v9,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v3.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v52,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vor128 v13,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v6,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vnmsubfp v10,v13,v8,v5
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v5.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v7,v0,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vnmsubfp v13,v7,v6,v3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v3.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v51,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor128 v50,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v49,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor128 v0,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// vor128 v4,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v7,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v6,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v9,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v8,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// vsel v5,v4,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// vsel v7,v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vor128 v13,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v0,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vsel v12,v8,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v6,v5,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vsel v10,v7,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v13,v12,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// stvx128 v6,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r3,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCBE4"))) PPC_WEAK_FUNC(sub_824FCBE4);
PPC_FUNC_IMPL(__imp__sub_824FCBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCBE8"))) PPC_WEAK_FUNC(sub_824FCBE8);
PPC_FUNC_IMPL(__imp__sub_824FCBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,4
	ctx.r10.s64 = 4;
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r11,27636
	ctx.r9.s64 = ctx.r11.s64 + 27636;
	// vspltw v10,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// li r8,8
	ctx.r8.s64 = 8;
	// lvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v62,-1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r7,12
	ctx.r7.s64 = 12;
	// vmaddfp v9,v0,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw v6,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vmaddfp v7,v10,v13,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsldoi v10,v13,v13,12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 4));
	// lvlx128 v63,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v11,v0,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// lvlx128 v61,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v59,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// lvlx128 v58,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v8,v12,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// lvlx128 v57,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 57), 4));
	// vrlimi128 v59,v58,4,3
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 57), 4));
	// vor128 v56,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v55,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vmaddfp v12,v11,v10,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v5,v6,v0,v7
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vnmsubfp v4,v11,v10,v9
	simde_mm_store_ps(ctx.v4.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v56,v58,2,2
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 78), 2));
	// vrlimi128 v55,v63,2,2
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 78), 2));
	// vor128 v7,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v6,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vrlimi128 v7,v57,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 147), 1));
	// vrlimi128 v6,v57,1,1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 147), 1));
	// vor128 v54,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vperm v9,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v10,v13,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm v12,v13,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v11,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vsldoi128 v53,v54,v54,8
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 8));
	// vmaddfp v13,v9,v10,v5
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vsubfp128 v0,v4,v53
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vnmsubfp v13,v11,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsel v12,v13,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// stvx128 v12,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCCA4"))) PPC_WEAK_FUNC(sub_824FCCA4);
PPC_FUNC_IMPL(__imp__sub_824FCCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCCA8"))) PPC_WEAK_FUNC(sub_824FCCA8);
PPC_FUNC_IMPL(__imp__sub_824FCCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x8251b010
	ctx.lr = 0x824FCCC0;
	sub_8251B010(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,9008
	ctx.r9.s64 = ctx.r11.s64 + 9008;
	// addi r8,r10,-23136
	ctx.r8.s64 = ctx.r10.s64 + -23136;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_824FCD0C"))) PPC_WEAK_FUNC(sub_824FCD0C);
PPC_FUNC_IMPL(__imp__sub_824FCD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCD10"))) PPC_WEAK_FUNC(sub_824FCD10);
PPC_FUNC_IMPL(__imp__sub_824FCD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-23136
	ctx.r10.s64 = ctx.r11.s64 + -23136;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8251b278
	sub_8251B278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FCD20"))) PPC_WEAK_FUNC(sub_824FCD20);
PPC_FUNC_IMPL(__imp__sub_824FCD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251b718
	sub_8251B718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FCD24"))) PPC_WEAK_FUNC(sub_824FCD24);
PPC_FUNC_IMPL(__imp__sub_824FCD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCD28"))) PPC_WEAK_FUNC(sub_824FCD28);
PPC_FUNC_IMPL(__imp__sub_824FCD28) {
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
	// bl 0x8251b068
	ctx.lr = 0x824FCD38;
	sub_8251B068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fcd54
	if (cr6.eq) goto loc_824FCD54;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824FCD54:
	// bl 0x8258b5f8
	ctx.lr = 0x824FCD58;
	sub_8258B5F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCD68"))) PPC_WEAK_FUNC(sub_824FCD68);
PPC_FUNC_IMPL(__imp__sub_824FCD68) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8251b068
	ctx.lr = 0x824FCD84;
	sub_8251B068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fcdac
	if (cr6.eq) goto loc_824FCDAC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r3,232
	ctx.r11.s64 = ctx.r3.s64 + 232;
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_824FCD9C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x824fcd9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824FCD9C;
	// b 0x824fcdcc
	goto loc_824FCDCC;
loc_824FCDAC:
	// bl 0x82528700
	ctx.lr = 0x824FCDB0;
	sub_82528700(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_824FCDC0:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x824fcdc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824FCDC0;
loc_824FCDCC:
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

__attribute__((alias("__imp__sub_824FCDE4"))) PPC_WEAK_FUNC(sub_824FCDE4);
PPC_FUNC_IMPL(__imp__sub_824FCDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCDE8"))) PPC_WEAK_FUNC(sub_824FCDE8);
PPC_FUNC_IMPL(__imp__sub_824FCDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e4c8
	ctx.lr = 0x824FCE08;
	sub_8241E4C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e148
	ctx.lr = 0x824FCE14;
	sub_8241E148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241d6c0
	ctx.lr = 0x824FCE20;
	sub_8241D6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCE38"))) PPC_WEAK_FUNC(sub_824FCE38);
PPC_FUNC_IMPL(__imp__sub_824FCE38) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// addi r10,r10,-6
	ctx.r10.s64 = ctx.r10.s64 + -6;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x824fcf94
	if (cr6.gt) goto loc_824FCF94;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824fceac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824FCEAC;
	// bdzf 4*cr6+eq,0x824fcedc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824FCEDC;
	// bdzf 4*cr6+eq,0x824fcf0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824FCF0C;
	// bne cr6,0x824fcf30
	if (!cr6.eq) goto loc_824FCF30;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x824fcde8
	ctx.lr = 0x824FCE94;
	sub_824FCDE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824FCEAC:
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x824fcde8
	ctx.lr = 0x824FCEC4;
	sub_824FCDE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824FCEDC:
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x824fcde8
	ctx.lr = 0x824FCEF4;
	sub_824FCDE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824FCF0C:
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241daf0
	ctx.lr = 0x824FCF18;
	sub_8241DAF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824FCF30:
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82517240
	ctx.lr = 0x824FCF3C;
	sub_82517240(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8241d928
	ctx.lr = 0x824FCF5C;
	sub_8241D928(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd40
	ctx.lr = 0x824FCF68;
	sub_8241DD40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241d6c0
	ctx.lr = 0x824FCF70;
	sub_8241D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x824FCF7C;
	sub_8241F040(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824FCF94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824FCFAC"))) PPC_WEAK_FUNC(sub_824FCFAC);
PPC_FUNC_IMPL(__imp__sub_824FCFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FCFB0"))) PPC_WEAK_FUNC(sub_824FCFB0);
PPC_FUNC_IMPL(__imp__sub_824FCFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824FCFB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23400
	ctx.r4.s64 = ctx.r11.s64 + -23400;
	// bl 0x8241f0a0
	ctx.lr = 0x824FCFD4;
	sub_8241F0A0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x824FCFE8;
	sub_8241F040(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x8241e310
	ctx.lr = 0x824FCFF4;
	sub_8241E310(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241e310
	ctx.lr = 0x824FD004;
	sub_8241E310(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x8248b880
	ctx.lr = 0x824FD020;
	sub_8248B880(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD028;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD030;
	sub_8241D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x824FD03C;
	sub_8241F040(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x824FD044;
	sub_82573C50(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82451488
	ctx.lr = 0x824FD050;
	sub_82451488(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD058;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD060;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD068;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82573c50
	ctx.lr = 0x824FD070;
	sub_82573C50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8241f040
	ctx.lr = 0x824FD07C;
	sub_8241F040(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FD084"))) PPC_WEAK_FUNC(sub_824FD084);
PPC_FUNC_IMPL(__imp__sub_824FD084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD088"))) PPC_WEAK_FUNC(sub_824FD088);
PPC_FUNC_IMPL(__imp__sub_824FD088) {
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
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23392
	ctx.r4.s64 = ctx.r11.s64 + -23392;
	// bl 0x8241f0a0
	ctx.lr = 0x824FD0B0;
	sub_8241F0A0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x824FD0C4;
	sub_8241F040(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x8241e310
	ctx.lr = 0x824FD0D0;
	sub_8241E310(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x8241e310
	ctx.lr = 0x824FD0E0;
	sub_8241E310(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x8248b880
	ctx.lr = 0x824FD0FC;
	sub_8248B880(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD104;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD10C;
	sub_8241D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x824FD118;
	sub_8241F040(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x824FD120;
	sub_82573C50(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824514a0
	ctx.lr = 0x824FD12C;
	sub_824514A0(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD134;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD13C;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8241d6c0
	ctx.lr = 0x824FD144;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82573c50
	ctx.lr = 0x824FD14C;
	sub_82573C50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8241f040
	ctx.lr = 0x824FD158;
	sub_8241F040(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
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

__attribute__((alias("__imp__sub_824FD170"))) PPC_WEAK_FUNC(sub_824FD170);
PPC_FUNC_IMPL(__imp__sub_824FD170) {
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
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lwz r11,21424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21424);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824fd1e4
	if (!cr6.eq) goto loc_824FD1E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// stw r11,21424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21424, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,21192
	ctx.r31.s64 = ctx.r9.s64 + 21192;
	// lis r6,17
	ctx.r6.s64 = 1114112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-23328
	ctx.r5.s64 = ctx.r8.s64 + -23328;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x82477fc8
	ctx.lr = 0x824FD1C0;
	sub_82477FC8(ctx, base);
	// lis r7,-31793
	ctx.r7.s64 = -2083586048;
	// addi r3,r7,8608
	ctx.r3.s64 = ctx.r7.s64 + 8608;
	// bl 0x831cdcc8
	ctx.lr = 0x824FD1CC;
	sub_831CDCC8(ctx, base);
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
loc_824FD1E4:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,21192
	ctx.r3.s64 = ctx.r11.s64 + 21192;
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

__attribute__((alias("__imp__sub_824FD200"))) PPC_WEAK_FUNC(sub_824FD200);
PPC_FUNC_IMPL(__imp__sub_824FD200) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-23136
	ctx.r10.s64 = ctx.r11.s64 + -23136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8251b278
	ctx.lr = 0x824FD22C;
	sub_8251B278(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824fd244
	if (cr6.eq) goto loc_824FD244;
	// bl 0x8248b818
	ctx.lr = 0x824FD240;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824FD244:
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

__attribute__((alias("__imp__sub_824FD25C"))) PPC_WEAK_FUNC(sub_824FD25C);
PPC_FUNC_IMPL(__imp__sub_824FD25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824FD260"))) PPC_WEAK_FUNC(sub_824FD260);
PPC_FUNC_IMPL(__imp__sub_824FD260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x824FD268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8251b068
	ctx.lr = 0x824FD278;
	sub_8251B068(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x824fd2d4
	if (!cr6.eq) goto loc_824FD2D4;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r4,r11,21792
	ctx.r4.s64 = ctx.r11.s64 + 21792;
	// bl 0x82573280
	ctx.lr = 0x824FD298;
	sub_82573280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824fd2d4
	if (cr6.eq) goto loc_824FD2D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FD2BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824FD2D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824FD2D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b7f0
	ctx.lr = 0x824FD2E0;
	sub_8251B7F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824FD2E8"))) PPC_WEAK_FUNC(sub_824FD2E8);
PPC_FUNC_IMPL(__imp__sub_824FD2E8) {
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
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8251b068
	ctx.lr = 0x824FD300;
	sub_8251B068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824fd310
	if (cr6.eq) goto loc_824FD310;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// b 0x824fd318
	goto loc_824FD318;
loc_824FD310:
	// bl 0x8258b5f8
	ctx.lr = 0x824FD314;
	sub_8258B5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_824FD318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a8d20
	ctx.lr = 0x824FD320;
	sub_824A8D20(ctx, base);
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

__attribute__((alias("__imp__sub_824FD338"))) PPC_WEAK_FUNC(sub_824FD338);
PPC_FUNC_IMPL(__imp__sub_824FD338) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

