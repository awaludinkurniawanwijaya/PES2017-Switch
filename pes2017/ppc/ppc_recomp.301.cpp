#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83200E1C"))) PPC_WEAK_FUNC(sub_83200E1C);
PPC_FUNC_IMPL(__imp__sub_83200E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200E20"))) PPC_WEAK_FUNC(sub_83200E20);
PPC_FUNC_IMPL(__imp__sub_83200E20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ff530
	ctx.lr = 0x83200E38;
	sub_831FF530(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83200e7c
	if (!cr6.eq) goto loc_83200E7C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83200E64;
	sub_832085E8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
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
loc_83200E7C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f1,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83200EA4"))) PPC_WEAK_FUNC(sub_83200EA4);
PPC_FUNC_IMPL(__imp__sub_83200EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83200EA8"))) PPC_WEAK_FUNC(sub_83200EA8);
PPC_FUNC_IMPL(__imp__sub_83200EA8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831ff530
	ctx.lr = 0x83200EC8;
	sub_831FF530(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83200ef8
	if (!cr6.eq) goto loc_83200EF8;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83200EF0;
	sub_832085E8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x83200f28
	goto loc_83200F28;
loc_83200EF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andc r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// or r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 | ctx.r30.u64;
	// rlwinm r8,r9,0,20,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// rlwinm r8,r8,0,26,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF83F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83200f24
	if (cr6.eq) goto loc_83200F24;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_83200F24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200F28:
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

__attribute__((alias("__imp__sub_83200F40"))) PPC_WEAK_FUNC(sub_83200F40);
PPC_FUNC_IMPL(__imp__sub_83200F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83200F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x831ff530
	ctx.lr = 0x83200F60;
	sub_831FF530(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83200f94
	if (!cr6.eq) goto loc_83200F94;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83200F88;
	sub_832085E8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83200F94:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832006f8
	ctx.lr = 0x83200FA4;
	sub_832006F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83200FB0"))) PPC_WEAK_FUNC(sub_83200FB0);
PPC_FUNC_IMPL(__imp__sub_83200FB0) {
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
	// bl 0x831ff530
	ctx.lr = 0x83200FC8;
	sub_831FF530(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320100c
	if (!cr6.eq) goto loc_8320100C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83200FF4;
	sub_832085E8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
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
loc_8320100C:
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r4,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r4.u16);
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

__attribute__((alias("__imp__sub_83201028"))) PPC_WEAK_FUNC(sub_83201028);
PPC_FUNC_IMPL(__imp__sub_83201028) {
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
	// bl 0x831ff530
	ctx.lr = 0x83201040;
	sub_831FF530(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83201084
	if (!cr6.eq) goto loc_83201084;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320106C;
	sub_832085E8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
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
loc_83201084:
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r4,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r4.u16);
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

__attribute__((alias("__imp__sub_832010A0"))) PPC_WEAK_FUNC(sub_832010A0);
PPC_FUNC_IMPL(__imp__sub_832010A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832010A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832010d4
	if (!cr6.eq) goto loc_832010D4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832010D4:
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83201100
	if (cr6.eq) goto loc_83201100;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83201100
	if (!cr6.eq) goto loc_83201100;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-2392
	ctx.r5.s64 = ctx.r11.s64 + -2392;
	// bl 0x83295250
	ctx.lr = 0x832010FC;
	sub_83295250(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
loc_83201100:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83201110
	if (cr6.eq) goto loc_83201110;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83201110:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83201120
	if (cr6.eq) goto loc_83201120;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83201120:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320112C"))) PPC_WEAK_FUNC(sub_8320112C);
PPC_FUNC_IMPL(__imp__sub_8320112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201130"))) PPC_WEAK_FUNC(sub_83201130);
PPC_FUNC_IMPL(__imp__sub_83201130) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// sth r9,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// lhz r8,14(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// sth r8,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r8.u16);
	// lhz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// sth r7,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// lhz r6,38(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// sth r6,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r6.u16);
	// bl 0x831fd8e8
	ctx.lr = 0x83201190;
	sub_831FD8E8(ctx, base);
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lfs f13,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_832011C8"))) PPC_WEAK_FUNC(sub_832011C8);
PPC_FUNC_IMPL(__imp__sub_832011C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832011f8
	if (!cr6.eq) goto loc_832011F8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,25860
	ctx.r4.s64 = ctx.r11.s64 + 25860;
	// addi r3,r10,25448
	ctx.r3.s64 = ctx.r10.s64 + 25448;
	// bl 0x83208568
	ctx.lr = 0x832011F8;
	sub_83208568(ctx, base);
loc_832011F8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// sth r11,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r11.u16);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// sth r11,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r11.u16);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r11.u16);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// sth r11,18(r4)
	PPC_STORE_U16(ctx.r4.u32 + 18, ctx.r11.u16);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// stw r11,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r11.u32);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f13,36(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// bl 0x831ff530
	ctx.lr = 0x83201258;
	sub_831FF530(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83201298
	if (!cr6.eq) goto loc_83201298;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83201280;
	sub_832085E8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
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
loc_83201298:
	// bl 0x83201130
	ctx.lr = 0x8320129C;
	sub_83201130(ctx, base);
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

__attribute__((alias("__imp__sub_832012B4"))) PPC_WEAK_FUNC(sub_832012B4);
PPC_FUNC_IMPL(__imp__sub_832012B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832012B8"))) PPC_WEAK_FUNC(sub_832012B8);
PPC_FUNC_IMPL(__imp__sub_832012B8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832012e4
	if (!cr6.eq) goto loc_832012E4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,25860
	ctx.r4.s64 = ctx.r11.s64 + 25860;
	// addi r3,r10,25448
	ctx.r3.s64 = ctx.r10.s64 + 25448;
	// bl 0x83208568
	ctx.lr = 0x832012E4;
	sub_83208568(ctx, base);
loc_832012E4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r7,r9,24688
	ctx.r7.s64 = ctx.r9.s64 + 24688;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// sth r11,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r11.u16);
	// lfs f13,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// sth r11,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r11.u16);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r11.u16);
	// sth r11,18(r4)
	PPC_STORE_U16(ctx.r4.u32 + 18, ctx.r11.u16);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// stw r11,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r11.u32);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f13,36(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lwz r3,16(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83201364
	if (!cr6.eq) goto loc_83201364;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83201364:
	// bl 0x83201130
	ctx.lr = 0x83201368;
	sub_83201130(ctx, base);
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

__attribute__((alias("__imp__sub_8320137C"))) PPC_WEAK_FUNC(sub_8320137C);
PPC_FUNC_IMPL(__imp__sub_8320137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201380"))) PPC_WEAK_FUNC(sub_83201380);
PPC_FUNC_IMPL(__imp__sub_83201380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// sth r11,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r11.u16);
	// sth r11,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r11.u16);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r11.u16);
	// sth r11,18(r4)
	PPC_STORE_U16(ctx.r4.u32 + 18, ctx.r11.u16);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// bne cr6,0x832013cc
	if (!cr6.eq) goto loc_832013CC;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_832013CC:
	// lbz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// lhz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// sth r9,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r9.u16);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,96(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lhz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// lhz r11,18(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// sth r8,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r8.u16);
	// lwz r6,96(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lhz r8,20(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 20);
	// lhz r9,22(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 22);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// sth r7,18(r4)
	PPC_STORE_U16(ctx.r4.u32 + 18, ctx.r7.u16);
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201428"))) PPC_WEAK_FUNC(sub_83201428);
PPC_FUNC_IMPL(__imp__sub_83201428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83201430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83201508
	if (cr6.eq) goto loc_83201508;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83201470
	if (!cr6.eq) goto loc_83201470;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x832277e8
	ctx.lr = 0x83201460;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83201470
	if (!cr6.eq) goto loc_83201470;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83201470:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// cmplwi cr6,r29,1089
	cr6.compare<uint32_t>(ctx.r29.u32, 1089, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83201508
	if (cr6.eq) goto loc_83201508;
	// cmplwi cr6,r29,1088
	cr6.compare<uint32_t>(ctx.r29.u32, 1088, xer);
	// bne cr6,0x832014a4
	if (!cr6.eq) goto loc_832014A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832014A4:
	// cmplwi cr6,r29,538
	cr6.compare<uint32_t>(ctx.r29.u32, 538, xer);
	// bne cr6,0x832014c0
	if (!cr6.eq) goto loc_832014C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,24
	ctx.r10.u64 = ctx.r11.u64 | 24;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832014C0:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832014e8
	if (!cr6.eq) goto loc_832014E8;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x832014D4;
	sub_832277F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832014e8
	if (!cr6.eq) goto loc_832014E8;
	// bl 0x83227908
	ctx.lr = 0x832014E4;
	sub_83227908(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_832014E8:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25908
	ctx.r4.s64 = ctx.r10.s64 + 25908;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x83201508;
	sub_832085E8(ctx, base);
loc_83201508:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201510"))) PPC_WEAK_FUNC(sub_83201510);
PPC_FUNC_IMPL(__imp__sub_83201510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201530"))) PPC_WEAK_FUNC(sub_83201530);
PPC_FUNC_IMPL(__imp__sub_83201530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832015f0
	if (cr6.eq) goto loc_832015F0;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,24688
	ctx.r7.s64 = ctx.r10.s64 + 24688;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83201568
	if (cr6.eq) goto loc_83201568;
	// lwz r8,348(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
loc_83201568:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83201590
	if (!cr6.eq) goto loc_83201590;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r8.u32);
	// stw r11,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83201590:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83217740
	ctx.lr = 0x832015AC;
	sub_83217740(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832015d4
	if (!cr6.eq) goto loc_832015D4;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x832015C0;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832015d4
	if (!cr6.eq) goto loc_832015D4;
	// bl 0x83227908
	ctx.lr = 0x832015D0;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_832015D4:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25936
	ctx.r4.s64 = ctx.r10.s64 + 25936;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// bl 0x832085e8
	ctx.lr = 0x832015F0;
	sub_832085E8(ctx, base);
loc_832015F0:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201604"))) PPC_WEAK_FUNC(sub_83201604);
PPC_FUNC_IMPL(__imp__sub_83201604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201608"))) PPC_WEAK_FUNC(sub_83201608);
PPC_FUNC_IMPL(__imp__sub_83201608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320162c
	if (!cr6.eq) goto loc_8320162C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f1,148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8320162C:
	// lis r10,8769
	ctx.r10.s64 = 574685184;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lis r8,-32204
	ctx.r8.s64 = -2110521344;
	// ori r7,r10,60465
	ctx.r7.u64 = ctx.r10.u64 | 60465;
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lfs f0,25808(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25808);
	ctx.f0.f64 = double(temp.f32);
	// addis r5,r6,14226
	ctx.r5.s64 = ctx.r6.s64 + 932315136;
	// addi r5,r5,19295
	ctx.r5.s64 = ctx.r5.s64 + 19295;
	// rlwinm r4,r5,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// stw r5,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r5.u32);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320166C"))) PPC_WEAK_FUNC(sub_8320166C);
PPC_FUNC_IMPL(__imp__sub_8320166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201670"))) PPC_WEAK_FUNC(sub_83201670);
PPC_FUNC_IMPL(__imp__sub_83201670) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8320170c
	if (cr6.eq) goto loc_8320170C;
	// lhz r11,90(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x832016dc
	if (!cr6.gt) goto loc_832016DC;
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r11,0
	ctx.r11.s64 = 0;
loc_832016B8:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// beq cr6,0x8320170c
	if (cr6.eq) goto loc_8320170C;
	// lhz r7,90(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x832016b8
	if (cr6.lt) goto loc_832016B8;
loc_832016DC:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x832016EC;
	sub_83209DF8(ctx, base);
	// lhz r10,90(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r30.u32);
	// lhz r11,90(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,90(r31)
	PPC_STORE_U16(ctx.r31.u32 + 90, ctx.r6.u16);
loc_8320170C:
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

__attribute__((alias("__imp__sub_83201724"))) PPC_WEAK_FUNC(sub_83201724);
PPC_FUNC_IMPL(__imp__sub_83201724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201728"))) PPC_WEAK_FUNC(sub_83201728);
PPC_FUNC_IMPL(__imp__sub_83201728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83201730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83201758
	if (!cr6.eq) goto loc_83201758;
loc_8320174C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83201758:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320174c
	if (!cr6.eq) goto loc_8320174C;
	// lhz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// addi r9,r30,7
	ctx.r9.s64 = ctx.r30.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x83201798
	if (cr6.eq) goto loc_83201798;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// bl 0x83209df8
	ctx.lr = 0x83201794;
	sub_83209DF8(ctx, base);
	// stw r3,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
loc_83201798:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// sth r9,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r9.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832017B8"))) PPC_WEAK_FUNC(sub_832017B8);
PPC_FUNC_IMPL(__imp__sub_832017B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_832017DC:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832017dc
	if (!cr6.eq) goto loc_832017DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832017F0"))) PPC_WEAK_FUNC(sub_832017F0);
PPC_FUNC_IMPL(__imp__sub_832017F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// stw r3,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83201828
	if (!cr6.eq) goto loc_83201828;
	// li r11,12289
	ctx.r11.s64 = 12289;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// sth r10,88(r3)
	PPC_STORE_U16(ctx.r3.u32 + 88, ctx.r10.u16);
	// b 0x832141d0
	sub_832141D0(ctx, base);
	return;
loc_83201828:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// li r10,12289
	ctx.r10.s64 = 12289;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// sth r9,88(r3)
	PPC_STORE_U16(ctx.r3.u32 + 88, ctx.r9.u16);
	// b 0x832141d0
	sub_832141D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201848"))) PPC_WEAK_FUNC(sub_83201848);
PPC_FUNC_IMPL(__imp__sub_83201848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320184C"))) PPC_WEAK_FUNC(sub_8320184C);
PPC_FUNC_IMPL(__imp__sub_8320184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201850"))) PPC_WEAK_FUNC(sub_83201850);
PPC_FUNC_IMPL(__imp__sub_83201850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83201884
	if (!cr6.eq) goto loc_83201884;
	// li r10,12289
	ctx.r10.s64 = 12289;
	// stw r3,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r3.u32);
	// sth r9,88(r3)
	PPC_STORE_U16(ctx.r3.u32 + 88, ctx.r9.u16);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// b 0x832141d0
	sub_832141D0(ctx, base);
	return;
loc_83201884:
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// addi r10,r9,64
	ctx.r10.s64 = ctx.r9.s64 + 64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832018a8
	if (cr6.eq) goto loc_832018A8;
loc_83201894:
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83201894
	if (!cr6.eq) goto loc_83201894;
loc_832018A8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// beq cr6,0x832018bc
	if (cr6.eq) goto loc_832018BC;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
loc_832018BC:
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// li r11,12289
	ctx.r11.s64 = 12289;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// sth r10,88(r3)
	PPC_STORE_U16(ctx.r3.u32 + 88, ctx.r10.u16);
	// b 0x832141d0
	sub_832141D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832018D8"))) PPC_WEAK_FUNC(sub_832018D8);
PPC_FUNC_IMPL(__imp__sub_832018D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832018DC"))) PPC_WEAK_FUNC(sub_832018DC);
PPC_FUNC_IMPL(__imp__sub_832018DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832018E0"))) PPC_WEAK_FUNC(sub_832018E0);
PPC_FUNC_IMPL(__imp__sub_832018E0) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832019ec
	if (cr6.eq) goto loc_832019EC;
	// lwz r10,348(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83201940
	if (!cr6.eq) goto loc_83201940;
	// stw r3,348(r9)
	PPC_STORE_U32(ctx.r9.u32 + 348, ctx.r3.u32);
	// li r11,12288
	ctx.r11.s64 = 12288;
	// lhz r10,82(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 82);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 | 128;
	// ori r6,r10,1024
	ctx.r6.u64 = ctx.r10.u64 | 1024;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// sth r9,88(r3)
	PPC_STORE_U16(ctx.r3.u32 + 88, ctx.r9.u16);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// b 0x832019d4
	goto loc_832019D4;
loc_83201940:
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,12288
	cr6.compare<int32_t>(ctx.r11.s32, 12288, xer);
	// bne cr6,0x83201980
	if (!cr6.eq) goto loc_83201980;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r31,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r31.u32);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r31,348(r9)
	PPC_STORE_U32(ctx.r9.u32 + 348, ctx.r31.u32);
	// lhz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 | 128;
	// ori r6,r9,1024
	ctx.r6.u64 = ctx.r9.u64 | 1024;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// b 0x832019d0
	goto loc_832019D0;
loc_83201980:
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832019a4
	if (cr6.eq) goto loc_832019A4;
loc_83201990:
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83201990
	if (!cr6.eq) goto loc_83201990;
loc_832019A4:
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,12288
	ctx.r8.s64 = 12288;
	// ori r5,r9,128
	ctx.r5.u64 = ctx.r9.u64 | 128;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lhz r7,82(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// ori r6,r7,1024
	ctx.r6.u64 = ctx.r7.u64 | 1024;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
loc_832019D0:
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
loc_832019D4:
	// sth r6,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r6.u16);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b0b8
	ctx.lr = 0x832019E4;
	sub_8322B0B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832141d0
	ctx.lr = 0x832019EC;
	sub_832141D0(ctx, base);
loc_832019EC:
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

__attribute__((alias("__imp__sub_83201A00"))) PPC_WEAK_FUNC(sub_83201A00);
PPC_FUNC_IMPL(__imp__sub_83201A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83201A08;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83201a2c
	if (!cr6.eq) goto loc_83201A2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83201A2C:
	// lwz r30,436(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83201ae8
	if (!cr6.eq) goto loc_83201AE8;
	// bl 0x83227c00
	ctx.lr = 0x83201A3C;
	sub_83227C00(ctx, base);
	// stw r3,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// lwz r4,448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r31,448
	ctx.r28.s64 = ctx.r31.s64 + 448;
	// bl 0x83228490
	ctx.lr = 0x83201A50;
	sub_83228490(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83201a68
	if (!cr6.eq) goto loc_83201A68;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x83201a70
	goto loc_83201A70;
loc_83201A68:
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
loc_83201A70:
	// li r11,1857
	ctx.r11.s64 = 1857;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322c0a8
	ctx.lr = 0x83201A94;
	sub_8322C0A8(ctx, base);
	// li r10,422
	ctx.r10.s64 = 422;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// bl 0x8322c0a8
	ctx.lr = 0x83201AB8;
	sub_8322C0A8(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83229630
	ctx.lr = 0x83201AC0;
	sub_83229630(ctx, base);
	// li r9,1935
	ctx.r9.s64 = 1935;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322c328
	ctx.lr = 0x83201AE8;
	sub_8322C328(ctx, base);
loc_83201AE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201AF4"))) PPC_WEAK_FUNC(sub_83201AF4);
PPC_FUNC_IMPL(__imp__sub_83201AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201AF8"))) PPC_WEAK_FUNC(sub_83201AF8);
PPC_FUNC_IMPL(__imp__sub_83201AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83201B00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83201b58
	if (cr6.eq) goto loc_83201B58;
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83201b34
	if (cr6.eq) goto loc_83201B34;
	// bl 0x83209d68
	ctx.lr = 0x83201B30;
	sub_83209D68(ctx, base);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
loc_83201B34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209c20
	ctx.lr = 0x83201B3C;
	sub_83209C20(ctx, base);
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83201b54
	if (cr6.eq) goto loc_83201B54;
	// bl 0x83209d68
	ctx.lr = 0x83201B50;
	sub_83209D68(ctx, base);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
loc_83201B54:
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
loc_83201B58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201B60"))) PPC_WEAK_FUNC(sub_83201B60);
PPC_FUNC_IMPL(__imp__sub_83201B60) {
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
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r30,-349
	ctx.r10.s64 = ctx.r30.s64 + -349;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// subfic r8,r30,162
	xer.ca = ctx.r30.u32 <= 162;
	ctx.r8.s64 = 162 - ctx.r30.s64;
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// and r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83201ba8
	if (!cr6.eq) goto loc_83201BA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83201c20
	goto loc_83201C20;
loc_83201BA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// li r9,29
	ctx.r9.s64 = 29;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// ori r6,r7,128
	ctx.r6.u64 = ctx.r7.u64 | 128;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// li r5,163
	ctx.r5.s64 = 163;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r4,44
	ctx.r4.s64 = 44;
	// sth r6,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r6.u16);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r5,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r5.u16);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// sth r4,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r4.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8322a5b0
	ctx.lr = 0x83201BFC;
	sub_8322A5B0(ctx, base);
	// lis r12,0
	ctx.r12.s64 = 0;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// ori r12,r12,65515
	ctx.r12.u64 = ctx.r12.u64 | 65515;
	// sth r3,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r3.u16);
	// sth r30,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
loc_83201C20:
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

__attribute__((alias("__imp__sub_83201C38"))) PPC_WEAK_FUNC(sub_83201C38);
PPC_FUNC_IMPL(__imp__sub_83201C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201C58"))) PPC_WEAK_FUNC(sub_83201C58);
PPC_FUNC_IMPL(__imp__sub_83201C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r3,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201C74"))) PPC_WEAK_FUNC(sub_83201C74);
PPC_FUNC_IMPL(__imp__sub_83201C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201C78"))) PPC_WEAK_FUNC(sub_83201C78);
PPC_FUNC_IMPL(__imp__sub_83201C78) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83201cb4
	if (!cr6.eq) goto loc_83201CB4;
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
loc_83201CB4:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83201cd4
	if (!cr6.eq) goto loc_83201CD4;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83201cd4
	if (cr6.eq) goto loc_83201CD4;
	// bl 0x8324cec0
	ctx.lr = 0x83201CD0;
	sub_8324CEC0(ctx, base);
	// stw r3,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r3.u32);
loc_83201CD4:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
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

__attribute__((alias("__imp__sub_83201CEC"))) PPC_WEAK_FUNC(sub_83201CEC);
PPC_FUNC_IMPL(__imp__sub_83201CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201CF0"))) PPC_WEAK_FUNC(sub_83201CF0);
PPC_FUNC_IMPL(__imp__sub_83201CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83201CF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r3,24688(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24688);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83201d1c
	if (cr6.eq) goto loc_83201D1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8325a7c8
	ctx.lr = 0x83201D1C;
	sub_8325A7C8(ctx, base);
loc_83201D1C:
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x8322a890
	ctx.lr = 0x83201D28;
	sub_8322A890(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323dec8
	ctx.lr = 0x83201D34;
	sub_8323DEC8(ctx, base);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83201dc8
	if (cr6.eq) goto loc_83201DC8;
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83201d54
	if (cr6.eq) goto loc_83201D54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8324d2f0
	ctx.lr = 0x83201D54;
	sub_8324D2F0(ctx, base);
loc_83201D54:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83201d68
	if (cr6.eq) goto loc_83201D68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8323c790
	ctx.lr = 0x83201D68;
	sub_8323C790(ctx, base);
loc_83201D68:
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83201d88
	if (cr6.eq) goto loc_83201D88;
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// bne cr6,0x83201d88
	if (!cr6.eq) goto loc_83201D88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832428c0
	ctx.lr = 0x83201D88;
	sub_832428C0(ctx, base);
loc_83201D88:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83201dc8
	if (cr6.eq) goto loc_83201DC8;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83201da8
	if (!cr6.eq) goto loc_83201DA8;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
loc_83201DA8:
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83201db8
	if (!cr6.eq) goto loc_83201DB8;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
loc_83201DB8:
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83201dc8
	if (!cr6.eq) goto loc_83201DC8;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_83201DC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83201DD0"))) PPC_WEAK_FUNC(sub_83201DD0);
PPC_FUNC_IMPL(__imp__sub_83201DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r9,70(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 70);
	// sth r9,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r9.u16);
	// lhz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// sth r8,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r8.u16);
	// lhz r7,74(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 74);
	// sth r7,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r7.u16);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lhz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 76);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r10,78(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201E34"))) PPC_WEAK_FUNC(sub_83201E34);
PPC_FUNC_IMPL(__imp__sub_83201E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201E38"))) PPC_WEAK_FUNC(sub_83201E38);
PPC_FUNC_IMPL(__imp__sub_83201E38) {
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
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,24688
	ctx.r9.s64 = ctx.r10.s64 + 24688;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83201e88
	if (cr6.eq) goto loc_83201E88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83201dd0
	ctx.lr = 0x83201E74;
	sub_83201DD0(ctx, base);
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83201E88:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201E9C"))) PPC_WEAK_FUNC(sub_83201E9C);
PPC_FUNC_IMPL(__imp__sub_83201E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201EA0"))) PPC_WEAK_FUNC(sub_83201EA0);
PPC_FUNC_IMPL(__imp__sub_83201EA0) {
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
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r9,r10,24688
	ctx.r9.s64 = ctx.r10.s64 + 24688;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83201ee0
	if (cr6.eq) goto loc_83201EE0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83201dd0
	ctx.lr = 0x83201EE0;
	sub_83201DD0(ctx, base);
loc_83201EE0:
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,4(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201F28"))) PPC_WEAK_FUNC(sub_83201F28);
PPC_FUNC_IMPL(__imp__sub_83201F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 76);
	// lhz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lhz r4,78(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// lhz r5,70(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 70);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lhz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 80);
	// lhz r6,72(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lhz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// lhz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 80);
	// andc r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lhz r8,74(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 74);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201F9C"))) PPC_WEAK_FUNC(sub_83201F9C);
PPC_FUNC_IMPL(__imp__sub_83201F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83201FA0"))) PPC_WEAK_FUNC(sub_83201FA0);
PPC_FUNC_IMPL(__imp__sub_83201FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x83201f28
	ctx.lr = 0x83201FCC;
	sub_83201F28(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83201FE0"))) PPC_WEAK_FUNC(sub_83201FE0);
PPC_FUNC_IMPL(__imp__sub_83201FE0) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83202014
	if (!cr6.eq) goto loc_83202014;
	// li r3,1807
	ctx.r3.s64 = 1807;
	// b 0x83202108
	goto loc_83202108;
loc_83202014:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x832264e0
	ctx.lr = 0x8320203C;
	sub_832264E0(ctx, base);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83202058
	if (!cr6.eq) goto loc_83202058;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x83202050;
	sub_832277E8(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
loc_83202058:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,1805
	cr6.compare<uint32_t>(ctx.r11.u32, 1805, xer);
	// beq cr6,0x83202100
	if (cr6.eq) goto loc_83202100;
	// cmplwi cr6,r11,1806
	cr6.compare<uint32_t>(ctx.r11.u32, 1806, xer);
	// beq cr6,0x83202100
	if (cr6.eq) goto loc_83202100;
	// cmplwi cr6,r11,1807
	cr6.compare<uint32_t>(ctx.r11.u32, 1807, xer);
	// beq cr6,0x83202100
	if (cr6.eq) goto loc_83202100;
	// cmplwi cr6,r11,1808
	cr6.compare<uint32_t>(ctx.r11.u32, 1808, xer);
	// beq cr6,0x83202100
	if (cr6.eq) goto loc_83202100;
	// cmplwi cr6,r11,1890
	cr6.compare<uint32_t>(ctx.r11.u32, 1890, xer);
	// beq cr6,0x832020f0
	if (cr6.eq) goto loc_832020F0;
	// cmplwi cr6,r11,1891
	cr6.compare<uint32_t>(ctx.r11.u32, 1891, xer);
	// beq cr6,0x832020f0
	if (cr6.eq) goto loc_832020F0;
	// cmplwi cr6,r11,1892
	cr6.compare<uint32_t>(ctx.r11.u32, 1892, xer);
	// beq cr6,0x832020f0
	if (cr6.eq) goto loc_832020F0;
	// cmplwi cr6,r11,1893
	cr6.compare<uint32_t>(ctx.r11.u32, 1893, xer);
	// beq cr6,0x832020f0
	if (cr6.eq) goto loc_832020F0;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832020c0
	if (!cr6.eq) goto loc_832020C0;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x832020B0;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832020bc
	if (!cr6.eq) goto loc_832020BC;
	// bl 0x83227908
	ctx.lr = 0x832020BC;
	sub_83227908(ctx, base);
loc_832020BC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832020C0:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83225c80
	ctx.lr = 0x832020C8;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,25448
	ctx.r9.s64 = ctx.r11.s64 + 25448;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,25956
	ctx.r4.s64 = ctx.r10.s64 + 25956;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x832020E8;
	sub_832085E8(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// b 0x83202108
	goto loc_83202108;
loc_832020F0:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-85
	ctx.r11.s64 = ctx.r11.s64 + -85;
	// sth r11,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
	// b 0x83202104
	goto loc_83202104;
loc_83202100:
	// sth r10,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r10.u16);
loc_83202104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83202108:
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

__attribute__((alias("__imp__sub_83202120"))) PPC_WEAK_FUNC(sub_83202120);
PPC_FUNC_IMPL(__imp__sub_83202120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r3,7,17,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0x7F80;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r7,r10,0,25,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x83213a48
	sub_83213A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83202168"))) PPC_WEAK_FUNC(sub_83202168);
PPC_FUNC_IMPL(__imp__sub_83202168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320216C"))) PPC_WEAK_FUNC(sub_8320216C);
PPC_FUNC_IMPL(__imp__sub_8320216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83202170"))) PPC_WEAK_FUNC(sub_83202170);
PPC_FUNC_IMPL(__imp__sub_83202170) {
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
	ctx.lr = 0x83202178;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce778
	ctx.lr = 0x83202180;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// li r19,1
	ctx.r19.s64 = 1;
	// lbz r9,164(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 164);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832021b4
	if (!cr6.eq) goto loc_832021B4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,25980
	ctx.r4.s64 = ctx.r11.s64 + 25980;
	// addi r3,r10,25448
	ctx.r3.s64 = ctx.r10.s64 + 25448;
	// bl 0x83208568
	ctx.lr = 0x832021B4;
	sub_83208568(ctx, base);
loc_832021B4:
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,24856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24856);
	// lfs f29,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24856, ctx.r11.u32);
	// lfs f0,44(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// fmuls f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// rlwinm r7,r8,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lbz r31,40(r27)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + 40);
	// stb r20,40(r27)
	PPC_STORE_U8(ctx.r27.u32 + 40, ctx.r20.u8);
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x832021fc
	if (cr6.lt) goto loc_832021FC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_832021FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202210
	if (cr6.eq) goto loc_83202210;
	// fneg f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// li r19,-1
	ctx.r19.s64 = -1;
loc_83202210:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83202228
	if (cr6.eq) goto loc_83202228;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x83202234
	goto loc_83202234;
loc_83202228:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83202238
	if (cr6.gt) goto loc_83202238;
loc_83202234:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83202238:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83202250
	if (!cr6.eq) goto loc_83202250;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832027e4
	if (cr6.eq) goto loc_832027E4;
loc_83202250:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ff840
	ctx.lr = 0x83202258;
	sub_831FF840(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202274
	if (cr6.eq) goto loc_83202274;
	// lwz r3,348(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x8321c710
	ctx.lr = 0x8320226C;
	sub_8321C710(ctx, base);
	// lbz r31,40(r27)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + 40);
	// stb r20,40(r27)
	PPC_STORE_U8(ctx.r27.u32 + 40, ctx.r20.u8);
loc_83202274:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83200458
	ctx.lr = 0x8320227C;
	sub_83200458(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r21,348(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// beq cr6,0x832022a4
	if (cr6.eq) goto loc_832022A4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83217500
	ctx.lr = 0x83202298;
	sub_83217500(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,0,13,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_832022A4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f0,48(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// bne cr6,0x832022c0
	if (!cr6.eq) goto loc_832022C0;
	// lfs f30,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f30.f64 = double(temp.f32);
	// b 0x832022c8
	goto loc_832022C8;
loc_832022C0:
	// lfs f13,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_832022C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lfs f28,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f28.f64 = double(temp.f32);
loc_832022D4:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x832022e4
	if (cr6.gt) goto loc_832022E4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_832022E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832022fc
	if (!cr6.eq) goto loc_832022FC;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202754
	if (cr6.eq) goto loc_83202754;
loc_832022FC:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320230c
	if (cr6.gt) goto loc_8320230C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8320230C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320234c
	if (cr6.eq) goto loc_8320234C;
	// lfs f0,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f30,f28
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x83202334
	if (!cr6.lt) goto loc_83202334;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83202334:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320234c
	if (cr6.eq) goto loc_8320234C;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// fsubs f31,f31,f30
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// b 0x83202354
	goto loc_83202354;
loc_8320234C:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_83202354:
	// lfs f13,52(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// lfs f12,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,52(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 52, temp.u32);
	// stfs f0,56(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x83202380
	if (!cr6.lt) goto loc_83202380;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83202380:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202398
	if (cr6.eq) goto loc_83202398;
	// fsubs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,56(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
	// extsb r22,r19
	ctx.r22.s64 = ctx.r19.s8;
loc_83202398:
	// bl 0x83237570
	ctx.lr = 0x8320239C;
	sub_83237570(ctx, base);
	// lwz r3,356(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832023ac
	if (cr6.eq) goto loc_832023AC;
	// bl 0x8321e638
	ctx.lr = 0x832023AC;
	sub_8321E638(ctx, base);
loc_832023AC:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8320260c
	if (cr6.eq) goto loc_8320260C;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832023C8:
	// dcbt r11,r21
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x832023c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832023C8;
	// lwz r11,56(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832023e4
	if (cr6.eq) goto loc_832023E4;
	// dcbt r0,r11
loc_832023E4:
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,372(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// rlwinm r10,r9,16,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1;
	// lhz r23,86(r21)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r21.u32 + 86);
	// rlwinm r9,r9,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202404
	if (cr6.eq) goto loc_83202404;
	// lhz r26,6(r11)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
loc_83202404:
	// clrlwi r25,r10,24
	ctx.r25.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r24,r9,24
	ctx.r24.u64 = ctx.r9.u32 & 0xFF;
loc_8320240C:
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83202430
	if (cr6.eq) goto loc_83202430;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83202424:
	// dcbt r11,r9
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x83202424
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83202424;
loc_83202430:
	// lhz r10,82(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 82);
	// lhz r9,6(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lhz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 84);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// or r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r29,r8,r28
	ctx.r29.u64 = ctx.r8.u64 | ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83202458
	if (!cr6.eq) goto loc_83202458;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x83202460
	goto loc_83202460;
loc_83202458:
	// dcbt r0,r11
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
loc_83202460:
	// rlwinm r11,r29,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202474
	if (cr6.eq) goto loc_83202474;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83218b70
	ctx.lr = 0x83202474;
	sub_83218B70(ctx, base);
loc_83202474:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x832024a4
	if (cr6.eq) goto loc_832024A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83218ca0
	ctx.lr = 0x83202484;
	sub_83218CA0(ctx, base);
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// bne cr6,0x832024a4
	if (!cr6.eq) goto loc_832024A4;
	// rlwinm r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832024a4
	if (cr6.eq) goto loc_832024A4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,372(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// bl 0x832573d8
	ctx.lr = 0x832024A4;
	sub_832573D8(ctx, base);
loc_832024A4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832024b4
	if (!cr6.eq) goto loc_832024B4;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x832024bc
	goto loc_832024BC;
loc_832024B4:
	// dcbt r0,r31
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_832024BC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832024e8
	if (cr6.eq) goto loc_832024E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214be0
	ctx.lr = 0x832024CC;
	sub_83214BE0(ctx, base);
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// bne cr6,0x832024e8
	if (!cr6.eq) goto loc_832024E8;
	// rlwinm r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832024e8
	if (cr6.eq) goto loc_832024E8;
	// lwz r3,372(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// bl 0x83257788
	ctx.lr = 0x832024E8;
	sub_83257788(ctx, base);
loc_832024E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832024f8
	if (!cr6.eq) goto loc_832024F8;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x83202500
	goto loc_83202500;
loc_832024F8:
	// dcbt r0,r31
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_83202500:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// ble cr6,0x83202554
	if (!cr6.gt) goto loc_83202554;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83218e58
	ctx.lr = 0x83202514;
	sub_83218E58(ctx, base);
	// rlwinm r11,r29,0,22,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3F0;
	// rlwinm r11,r11,0,27,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202530
	if (cr6.eq) goto loc_83202530;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214d78
	ctx.lr = 0x83202530;
	sub_83214D78(ctx, base);
loc_83202530:
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// bne cr6,0x83202554
	if (!cr6.eq) goto loc_83202554;
	// rlwinm r11,r26,0,22,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x3F0;
	// rlwinm r11,r11,0,27,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202554
	if (cr6.eq) goto loc_83202554;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,372(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// bl 0x83257790
	ctx.lr = 0x83202554;
	sub_83257790(ctx, base);
loc_83202554:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83202560
	if (cr6.eq) goto loc_83202560;
	// dcbt r0,r31
loc_83202560:
	// lwz r30,64(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8320240c
	if (!cr6.eq) goto loc_8320240C;
	// addic. r3,r27,120
	xer.ca = ctx.r27.u32 > 4294967175;
	ctx.r3.s64 = ctx.r27.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8320257c
	if (!cr0.eq) goto loc_8320257C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x83202590
	goto loc_83202590;
loc_8320257C:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_83202590:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832025a0
	if (cr6.eq) goto loc_832025A0;
	// bl 0x8324ccf0
	ctx.lr = 0x832025A0;
	sub_8324CCF0(ctx, base);
loc_832025A0:
	// lhz r10,86(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 86);
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// beq cr6,0x8320260c
	if (cr6.eq) goto loc_8320260C;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,60(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r9,64(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// twllei r11,0
	// divwu r7,r8,r11
	ctx.r7.u32 = PPCDivide(ctx.r8.u32, ctx.r11.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// mullw r9,r7,r11
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stw r6,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r6.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r10.u32);
	// bne cr6,0x8320260c
	if (!cr6.eq) goto loc_8320260C;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// oris r7,r9,16384
	ctx.r7.u64 = ctx.r9.u64 | 1073741824;
	// stw r8,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r8.u32);
	// rlwinm r6,r7,0,20,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFE0;
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// rlwinm r6,r6,0,26,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFF83F;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320260c
	if (cr6.eq) goto loc_8320260C;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
loc_8320260C:
	// lwz r3,376(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 376);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320261c
	if (cr6.eq) goto loc_8320261C;
	// bl 0x83255e68
	ctx.lr = 0x8320261C;
	sub_83255E68(ctx, base);
loc_8320261C:
	// lwz r3,400(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83202660
	if (cr6.eq) goto loc_83202660;
	// bl 0x8324b750
	ctx.lr = 0x8320262C;
	sub_8324B750(ctx, base);
	// addic. r3,r27,120
	xer.ca = ctx.r27.u32 > 4294967175;
	ctx.r3.s64 = ctx.r27.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8320263c
	if (!cr0.eq) goto loc_8320263C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x83202650
	goto loc_83202650;
loc_8320263C:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_83202650:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202660
	if (cr6.eq) goto loc_83202660;
	// bl 0x8324ccf0
	ctx.lr = 0x83202660;
	sub_8324CCF0(ctx, base);
loc_83202660:
	// lwz r3,412(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832026ac
	if (cr6.eq) goto loc_832026AC;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq cr6,0x832026ac
	if (cr6.eq) goto loc_832026AC;
	// bl 0x83242f28
	ctx.lr = 0x83202678;
	sub_83242F28(ctx, base);
	// addic. r3,r27,120
	xer.ca = ctx.r27.u32 > 4294967175;
	ctx.r3.s64 = ctx.r27.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83202688
	if (!cr0.eq) goto loc_83202688;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x8320269c
	goto loc_8320269C;
loc_83202688:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_8320269C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832026ac
	if (cr6.eq) goto loc_832026AC;
	// bl 0x8324ccf0
	ctx.lr = 0x832026AC;
	sub_8324CCF0(ctx, base);
loc_832026AC:
	// lwz r3,420(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832026f8
	if (cr6.eq) goto loc_832026F8;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq cr6,0x832026f8
	if (cr6.eq) goto loc_832026F8;
	// bl 0x8323c698
	ctx.lr = 0x832026C4;
	sub_8323C698(ctx, base);
	// addic. r3,r27,120
	xer.ca = ctx.r27.u32 > 4294967175;
	ctx.r3.s64 = ctx.r27.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832026d4
	if (!cr0.eq) goto loc_832026D4;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x832026e8
	goto loc_832026E8;
loc_832026D4:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_832026E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832026f8
	if (cr6.eq) goto loc_832026F8;
	// bl 0x8324ccf0
	ctx.lr = 0x832026F8;
	sub_8324CCF0(ctx, base);
loc_832026F8:
	// lwz r3,416(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320273c
	if (cr6.eq) goto loc_8320273C;
	// bl 0x8324d338
	ctx.lr = 0x83202708;
	sub_8324D338(ctx, base);
	// addic. r3,r27,120
	xer.ca = ctx.r27.u32 > 4294967175;
	ctx.r3.s64 = ctx.r27.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83202718
	if (!cr0.eq) goto loc_83202718;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x8320272c
	goto loc_8320272C;
loc_83202718:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_8320272C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320273c
	if (cr6.eq) goto loc_8320273C;
	// bl 0x8324ccf0
	ctx.lr = 0x8320273C;
	sub_8324CCF0(ctx, base);
loc_8320273C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832022d4
	if (cr6.eq) goto loc_832022D4;
loc_83202754:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832027a0
	if (cr6.eq) goto loc_832027A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83200528
	ctx.lr = 0x8320276C;
	sub_83200528(ctx, base);
	// addic. r3,r27,120
	xer.ca = ctx.r27.u32 > 4294967175;
	ctx.r3.s64 = ctx.r27.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8320277c
	if (!cr0.eq) goto loc_8320277C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x83202790
	goto loc_83202790;
loc_8320277C:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_83202790:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832027a0
	if (cr6.eq) goto loc_832027A0;
	// bl 0x8324ccf0
	ctx.lr = 0x832027A0;
	sub_8324CCF0(ctx, base);
loc_832027A0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832027c4
	if (cr6.eq) goto loc_832027C4;
	// lwz r3,348(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x83217500
	ctx.lr = 0x832027B8;
	sub_83217500(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,0,13,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
loc_832027C4:
	// lbz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 40);
	// stb r20,40(r27)
	PPC_STORE_U8(ctx.r27.u32 + 40, ctx.r20.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832027dc
	if (cr6.eq) goto loc_832027DC;
	// lwz r3,348(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// bl 0x8321c710
	ctx.lr = 0x832027DC;
	sub_8321C710(ctx, base);
loc_832027DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83200458
	ctx.lr = 0x832027E4;
	sub_83200458(ctx, base);
loc_832027E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7c4
	ctx.lr = 0x832027F4;
	__restfpr_28(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832027F8"))) PPC_WEAK_FUNC(sub_832027F8);
PPC_FUNC_IMPL(__imp__sub_832027F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r9,86(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 86);
	// twllei r10,0
	// divwu r7,r8,r10
	ctx.r7.u32 = PPCDivide(ctx.r8.u32, ctx.r10.u32);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// divwu r8,r8,r10
	ctx.r8.u32 = PPCDivide(ctx.r8.u32, ctx.r10.u32);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// twllei r10,0
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83200ea8
	sub_83200EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320287C"))) PPC_WEAK_FUNC(sub_8320287C);
PPC_FUNC_IMPL(__imp__sub_8320287C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83202880"))) PPC_WEAK_FUNC(sub_83202880);
PPC_FUNC_IMPL(__imp__sub_83202880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r9.u8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// b 0x8321c710
	sub_8321C710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832028B0"))) PPC_WEAK_FUNC(sub_832028B0);
PPC_FUNC_IMPL(__imp__sub_832028B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832028B4"))) PPC_WEAK_FUNC(sub_832028B4);
PPC_FUNC_IMPL(__imp__sub_832028B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832028B8"))) PPC_WEAK_FUNC(sub_832028B8);
PPC_FUNC_IMPL(__imp__sub_832028B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832028C0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83202a38
	if (cr6.eq) goto loc_83202A38;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r29.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// beq cr6,0x83202a38
	if (cr6.eq) goto loc_83202A38;
	// clrlwi r28,r4,24
	ctx.r28.u64 = ctx.r4.u32 & 0xFF;
	// lwz r30,348(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83202924
	if (cr6.eq) goto loc_83202924;
	// bl 0x832071d8
	ctx.lr = 0x8320290C;
	sub_832071D8(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x83207270
	ctx.lr = 0x83202914;
	sub_83207270(ctx, base);
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83202924
	if (cr6.eq) goto loc_83202924;
	// bl 0x83257848
	ctx.lr = 0x83202924;
	sub_83257848(ctx, base);
loc_83202924:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83202974
	if (!cr6.eq) goto loc_83202974;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// rlwinm r8,r10,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// lhz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 68);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lhz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// lhz r10,66(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 66);
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lhz r9,70(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 70);
	// sth r4,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r4.u16);
	// sth r8,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r8.u16);
	// sth r10,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r10.u16);
	// sth r9,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r9.u16);
	// b 0x83202990
	goto loc_83202990;
loc_83202974:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83202988
	if (cr6.eq) goto loc_83202988;
	// sth r29,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r29.u16);
loc_83202988:
	// lhz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// lhz r10,70(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
loc_83202990:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83202a2c
	if (cr6.eq) goto loc_83202A2C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83202a2c
	if (cr6.eq) goto loc_83202A2C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832029bc
	if (cr6.eq) goto loc_832029BC;
loc_832029AC:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832029ac
	if (!cr6.eq) goto loc_832029AC;
loc_832029BC:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
loc_832029E4:
	// bl 0x83206ac0
	ctx.lr = 0x832029E8;
	sub_83206AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832072c8
	ctx.lr = 0x832029F0;
	sub_832072C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832073a8
	ctx.lr = 0x832029F8;
	sub_832073A8(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321e0a0
	ctx.lr = 0x83202A0C;
	sub_8321E0A0(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// bl 0x83206b20
	ctx.lr = 0x83202A14;
	sub_83206B20(ctx, base);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83202a2c
	if (!cr6.eq) goto loc_83202A2C;
	// lwz r30,60(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832029e4
	if (!cr6.eq) goto loc_832029E4;
loc_83202A2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83202A38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83202A48"))) PPC_WEAK_FUNC(sub_83202A48);
PPC_FUNC_IMPL(__imp__sub_83202A48) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202b00
	if (cr6.eq) goto loc_83202B00;
	// lhz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// lhz r9,70(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 70);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r31,348(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83202b00
	if (cr6.eq) goto loc_83202B00;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202ad4
	if (cr6.eq) goto loc_83202AD4;
loc_83202AC4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83202ac4
	if (!cr6.eq) goto loc_83202AC4;
loc_83202AD4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832197e8
	ctx.lr = 0x83202AEC;
	sub_832197E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83202b04
	if (!cr6.eq) goto loc_83202B04;
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83202ad4
	if (!cr6.eq) goto loc_83202AD4;
loc_83202B00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83202B04:
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

__attribute__((alias("__imp__sub_83202B1C"))) PPC_WEAK_FUNC(sub_83202B1C);
PPC_FUNC_IMPL(__imp__sub_83202B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83202B20"))) PPC_WEAK_FUNC(sub_83202B20);
PPC_FUNC_IMPL(__imp__sub_83202B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83202B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83202bd0
	if (cr6.eq) goto loc_83202BD0;
	// lhz r31,68(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// lhz r30,70(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 70);
	// lhz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83202b84
	if (!cr6.eq) goto loc_83202B84;
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83202b84
	if (!cr6.eq) goto loc_83202B84;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83202b84
	if (!cr6.eq) goto loc_83202B84;
	// lhz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83202b84
	if (cr6.eq) goto loc_83202B84;
	// lhz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 76);
	// lhz r30,78(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
loc_83202B84:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// bl 0x831fd8e8
	ctx.lr = 0x83202B90;
	sub_831FD8E8(ctx, base);
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// bl 0x831fcce0
	ctx.lr = 0x83202BD0;
	sub_831FCCE0(ctx, base);
loc_83202BD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83202BD8"))) PPC_WEAK_FUNC(sub_83202BD8);
PPC_FUNC_IMPL(__imp__sub_83202BD8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83202c0c
	if (!cr6.eq) goto loc_83202C0C;
loc_83202C04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83202cd8
	goto loc_83202CD8;
loc_83202C0C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x831fd8e8
	ctx.lr = 0x83202C18;
	sub_831FD8E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fcce0
	ctx.lr = 0x83202C28;
	sub_831FCCE0(ctx, base);
	// lhz r10,38(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// lhz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// frsp f11,f9
	ctx.f11.f64 = double(float(ctx.f9.f64));
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// blt cr6,0x83202c74
	if (cr6.lt) goto loc_83202C74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83202C74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83202c04
	if (!cr6.eq) goto loc_83202C04;
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83202c90
	if (cr6.gt) goto loc_83202C90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83202C90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83202c04
	if (!cr6.eq) goto loc_83202C04;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83202cb0
	if (cr6.lt) goto loc_83202CB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83202CB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83202c04
	if (!cr6.eq) goto loc_83202C04;
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83202ccc
	if (cr6.gt) goto loc_83202CCC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83202CCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_83202CD8:
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

__attribute__((alias("__imp__sub_83202CF0"))) PPC_WEAK_FUNC(sub_83202CF0);
PPC_FUNC_IMPL(__imp__sub_83202CF0) {
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
	// bl 0x83201ea0
	ctx.lr = 0x83202D04;
	sub_83201EA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83202bd8
	ctx.lr = 0x83202D0C;
	sub_83202BD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83202D1C"))) PPC_WEAK_FUNC(sub_83202D1C);
PPC_FUNC_IMPL(__imp__sub_83202D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83202D20"))) PPC_WEAK_FUNC(sub_83202D20);
PPC_FUNC_IMPL(__imp__sub_83202D20) {
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
	// bl 0x8325a4d8
	ctx.lr = 0x83202D38;
	sub_8325A4D8(ctx, base);
	// bl 0x83237520
	ctx.lr = 0x83202D3C;
	sub_83237520(ctx, base);
	// bl 0x8325aa30
	ctx.lr = 0x83202D40;
	sub_8325AA30(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lhz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83202dcc
	if (!cr6.gt) goto loc_83202DCC;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_83202D64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83202d7c
	if (!cr6.eq) goto loc_83202D7C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x83202d8c
	goto loc_83202D8C;
loc_83202D7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// andc r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
loc_83202D8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83202db8
	if (cr6.eq) goto loc_83202DB8;
	// lhz r9,70(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 70);
	// lhz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// lhz r6,72(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// sth r30,74(r11)
	PPC_STORE_U16(ctx.r11.u32 + 74, ctx.r30.u16);
	// sth r9,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r9.u16);
	// sth r10,76(r11)
	PPC_STORE_U16(ctx.r11.u32 + 76, ctx.r10.u16);
	// sth r6,80(r11)
	PPC_STORE_U16(ctx.r11.u32 + 80, ctx.r6.u16);
	// lhz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
loc_83202DB8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// blt cr6,0x83202d64
	if (cr6.lt) goto loc_83202D64;
loc_83202DCC:
	// sth r30,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r30.u16);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x83206878
	ctx.lr = 0x83202DD8;
	sub_83206878(ctx, base);
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83202e08
	if (!cr6.eq) goto loc_83202E08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// b 0x83202e10
	goto loc_83202E10;
loc_83202E08:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
loc_83202E10:
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

__attribute__((alias("__imp__sub_83202E28"))) PPC_WEAK_FUNC(sub_83202E28);
PPC_FUNC_IMPL(__imp__sub_83202E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83202E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,38(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8325acb0
	ctx.lr = 0x83202E90;
	sub_8325ACB0(ctx, base);
	// addi r5,r30,224
	ctx.r5.s64 = ctx.r30.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8325b058
	ctx.lr = 0x83202EA0;
	sub_8325B058(ctx, base);
	// lfs f7,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fctiwz f3,f6
	ctx.f3.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// lfs f2,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f1,f4
	ctx.f1.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f3.u64);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctiwz f0,f2
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83202f70
	if (cr6.eq) goto loc_83202F70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bge cr6,0x83202f18
	if (!cr6.lt) goto loc_83202F18;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83202f1c
	if (cr6.gt) goto loc_83202F1C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x83202f1c
	goto loc_83202F1C;
loc_83202F18:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_83202F1C:
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bge cr6,0x83202f34
	if (!cr6.lt) goto loc_83202F34;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83202f38
	if (cr6.gt) goto loc_83202F38;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x83202f38
	goto loc_83202F38;
loc_83202F34:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_83202F38:
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x83202f50
	if (!cr6.lt) goto loc_83202F50;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bgt cr6,0x83202f54
	if (cr6.gt) goto loc_83202F54;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x83202f54
	goto loc_83202F54;
loc_83202F50:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_83202F54:
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// bge cr6,0x83202f6c
	if (!cr6.lt) goto loc_83202F6C;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bgt cr6,0x83202f70
	if (cr6.gt) goto loc_83202F70;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x83202f70
	goto loc_83202F70;
loc_83202F6C:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_83202F70:
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// subf r10,r6,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83202F90"))) PPC_WEAK_FUNC(sub_83202F90);
PPC_FUNC_IMPL(__imp__sub_83202F90) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x83206dc8
	ctx.lr = 0x83202FE0;
	sub_83206DC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83206d50
	ctx.lr = 0x83202FE8;
	sub_83206D50(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83203058
	if (cr6.eq) goto loc_83203058;
	// lbz r3,83(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r4,r6,5696
	ctx.r4.s64 = ctx.r6.s64 + 5696;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// li r3,16
	ctx.r3.s64 = 16;
	// lvx128 v63,r4,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vmulfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83203058:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832077f8
	ctx.lr = 0x83203070;
	sub_832077F8(ctx, base);
	// bl 0x832070b8
	ctx.lr = 0x83203074;
	sub_832070B8(ctx, base);
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

__attribute__((alias("__imp__sub_8320308C"))) PPC_WEAK_FUNC(sub_8320308C);
PPC_FUNC_IMPL(__imp__sub_8320308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203090"))) PPC_WEAK_FUNC(sub_83203090);
PPC_FUNC_IMPL(__imp__sub_83203090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83203098;
	__savegprlr_23(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// beq cr6,0x832034e4
	if (cr6.eq) goto loc_832034E4;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r30,r10,24688
	ctx.r30.s64 = ctx.r10.s64 + 24688;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// stb r29,100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 100, ctx.r29.u8);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83207d78
	ctx.lr = 0x8320311C;
	sub_83207D78(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832031ac
	if (cr6.eq) goto loc_832031AC;
	// lfs f10,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f10.f64 = double(temp.f32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f8,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f8.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f0,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// stfd f9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f9.u64);
	// lfs f13,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,172(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f10,180(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f5.u64);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f8,188(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fctiwz f6,f11
	ctx.f6.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f6.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_832031AC:
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// rlwinm r11,r11,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// cmplwi cr6,r11,4352
	cr6.compare<uint32_t>(ctx.r11.u32, 4352, xer);
	// bne cr6,0x832031d0
	if (!cr6.eq) goto loc_832031D0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,26024
	ctx.r4.s64 = ctx.r11.s64 + 26024;
	// addi r3,r10,25448
	ctx.r3.s64 = ctx.r10.s64 + 25448;
	// bl 0x83208330
	ctx.lr = 0x832031D0;
	sub_83208330(ctx, base);
loc_832031D0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832031e8
	if (cr6.eq) goto loc_832031E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8320321c
	goto loc_8320321C;
loc_832031E8:
	// rlwinm r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832031fc
	if (cr6.eq) goto loc_832031FC;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x8320321c
	goto loc_8320321C;
loc_832031FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83203214
	if (cr6.eq) goto loc_83203214;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x8320321c
	goto loc_8320321C;
loc_83203214:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
loc_8320321C:
	// lwz r8,444(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83203230
	if (cr6.eq) goto loc_83203230;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83203230:
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83203268
	if (cr6.eq) goto loc_83203268;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83203250
	if (!cr6.eq) goto loc_83203250;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x83203258
	goto loc_83203258;
loc_83203250:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
loc_83203258:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83203268
	if (cr6.eq) goto loc_83203268;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83203268:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320327c
	if (cr6.eq) goto loc_8320327C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8320327C:
	// clrlwi r27,r9,24
	ctx.r27.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83203290
	if (!cr6.eq) goto loc_83203290;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832032e8
	if (cr6.eq) goto loc_832032E8;
loc_83203290:
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,38(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_832032E8:
	// bl 0x83206c08
	ctx.lr = 0x832032EC;
	sub_83206C08(ctx, base);
	// lhz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// bl 0x83206db0
	ctx.lr = 0x832032F4;
	sub_83206DB0(ctx, base);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r10,24880
	ctx.r9.s64 = ctx.r10.s64 + 24880;
	// stb r29,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r29.u8);
	// bl 0x832074f8
	ctx.lr = 0x83203308;
	sub_832074F8(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83203350
	if (cr6.eq) goto loc_83203350;
	// bl 0x832071d8
	ctx.lr = 0x83203314;
	sub_832071D8(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83203340
	if (cr6.eq) goto loc_83203340;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83206ce8
	ctx.lr = 0x83203334;
	sub_83206CE8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83202f90
	ctx.lr = 0x83203340;
	sub_83202F90(ctx, base);
loc_83203340:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83206ce8
	ctx.lr = 0x83203350;
	sub_83206CE8(ctx, base);
loc_83203350:
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832033d0
	if (cr6.eq) goto loc_832033D0;
	// lwz r29,444(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832033c4
	if (!cr6.eq) goto loc_832033C4;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x831fe1d8
	ctx.lr = 0x83203370;
	sub_831FE1D8(ctx, base);
	// lhz r10,38(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x831feaa0
	ctx.lr = 0x832033A8;
	sub_831FEAA0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r29,r1,256
	ctx.r29.s64 = ctx.r1.s64 + 256;
	// bl 0x83210190
	ctx.lr = 0x832033B4;
	sub_83210190(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x831fe368
	ctx.lr = 0x832033C4;
	sub_831FE368(ctx, base);
loc_832033C4:
	// bl 0x83206a78
	ctx.lr = 0x832033C8;
	sub_83206A78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832074c0
	ctx.lr = 0x832033D0;
	sub_832074C0(ctx, base);
loc_832033D0:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x83207240
	ctx.lr = 0x832033D8;
	sub_83207240(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832033e8
	if (cr6.eq) goto loc_832033E8;
	// bl 0x83207568
	ctx.lr = 0x832033E8;
	sub_83207568(ctx, base);
loc_832033E8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8320344c
	if (cr6.eq) goto loc_8320344C;
	// subfic r11,r25,0
	xer.ca = ctx.r25.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r25.s64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r23,r24,1
	ctx.r23.s64 = ctx.r24.s64 + 1;
	// bl 0x83202e28
	ctx.lr = 0x83203410;
	sub_83202E28(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8320343c
	if (cr6.eq) goto loc_8320343C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83206ce8
	ctx.lr = 0x83203430;
	sub_83206CE8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83202f90
	ctx.lr = 0x8320343C;
	sub_83202F90(ctx, base);
loc_8320343C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83206ce8
	ctx.lr = 0x8320344C;
	sub_83206CE8(ctx, base);
loc_8320344C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83203460
	if (cr6.eq) goto loc_83203460;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83202f90
	ctx.lr = 0x83203460;
	sub_83202F90(ctx, base);
loc_83203460:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83203478
	if (cr6.eq) goto loc_83203478;
	// bl 0x83257848
	ctx.lr = 0x83203470;
	sub_83257848(ctx, base);
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// bl 0x83257868
	ctx.lr = 0x83203478;
	sub_83257868(ctx, base);
loc_83203478:
	// lwz r31,348(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832034a8
	if (cr6.eq) goto loc_832034A8;
loc_83203484:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320349c
	if (!cr6.eq) goto loc_8320349C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d1d0
	ctx.lr = 0x8320349C;
	sub_8321D1D0(ctx, base);
loc_8320349C:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83203484
	if (!cr6.eq) goto loc_83203484;
loc_832034A8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832034c0
	if (cr6.eq) goto loc_832034C0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83206ce8
	ctx.lr = 0x832034C0;
	sub_83206CE8(ctx, base);
loc_832034C0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832034cc
	if (cr6.eq) goto loc_832034CC;
	// bl 0x83206b30
	ctx.lr = 0x832034CC;
	sub_83206B30(ctx, base);
loc_832034CC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x832034e4
	if (cr6.eq) goto loc_832034E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83206ce8
	ctx.lr = 0x832034E4;
	sub_83206CE8(ctx, base);
loc_832034E4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832034EC"))) PPC_WEAK_FUNC(sub_832034EC);
PPC_FUNC_IMPL(__imp__sub_832034EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832034F0"))) PPC_WEAK_FUNC(sub_832034F0);
PPC_FUNC_IMPL(__imp__sub_832034F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832034F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r11,42(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 42);
	// lhz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83203958
	if (!cr0.gt) goto loc_83203958;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83203550
	if (cr6.eq) goto loc_83203550;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// ble cr6,0x83203550
	if (!cr6.gt) goto loc_83203550;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x83203544;
	sub_83209AA8(ctx, base);
	// lhz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83203550:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x83203784
	if (cr6.eq) goto loc_83203784;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x83203634
	if (cr6.eq) goto loc_83203634;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// beq cr6,0x8320358c
	if (cr6.eq) goto loc_8320358C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25524
	ctx.r4.s64 = ctx.r10.s64 + 25524;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83208568
	ctx.lr = 0x8320358C;
	sub_83208568(ctx, base);
loc_8320358C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ff530
	ctx.lr = 0x83203594;
	sub_831FF530(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832035c8
	if (!cr6.eq) goto loc_832035C8;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x832085e8
	ctx.lr = 0x832035C0;
	sub_832085E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832035d8
	goto loc_832035D8;
loc_832035C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_832035D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83203948
	if (cr6.eq) goto loc_83203948;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// orc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ~ctx.r10.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83203948
	if (!cr6.eq) goto loc_83203948;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r9,r28,0,1,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x78000000;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// sth r11,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r11.u16);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// sth r10,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r10.u16);
	// bne cr6,0x8320362c
	if (!cr6.eq) goto loc_8320362C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// sth r10,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r10.u16);
loc_8320362C:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x832038c0
	goto loc_832038C0;
loc_83203634:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832036d0
	if (!cr6.gt) goto loc_832036D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r27,-2
	ctx.r10.s64 = ctx.r27.s64 + -2;
loc_8320364C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83203664
	if (!cr6.eq) goto loc_83203664;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83203674
	goto loc_83203674;
loc_83203664:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// andc r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r9.u64;
	// rlwinm r9,r4,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
loc_83203674:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832036bc
	if (cr6.eq) goto loc_832036BC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r9,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// orc r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ~ctx.r5.u64;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832036bc
	if (!cr6.eq) goto loc_832036BC;
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, xer);
	// bne cr6,0x832036bc
	if (!cr6.eq) goto loc_832036BC;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sthu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// lhz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
loc_832036BC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x8320364c
	if (cr6.lt) goto loc_8320364C;
loc_832036D0:
	// lhz r11,42(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 42);
	// li r7,0
	ctx.r7.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832038b8
	if (!cr6.gt) goto loc_832038B8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
loc_832036F4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320370c
	if (!cr6.eq) goto loc_8320370C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8320371c
	goto loc_8320371C;
loc_8320370C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// andc r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
loc_8320371C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83203768
	if (cr6.eq) goto loc_83203768;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// orc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ~ctx.r6.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83203768
	if (!cr6.eq) goto loc_83203768;
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, xer);
	// bne cr6,0x83203768
	if (!cr6.eq) goto loc_83203768;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 | 32768;
	// sth r11,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r11.u16);
	// sthu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
loc_83203768:
	// lhz r11,42(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 42);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x832036f4
	if (cr6.lt) goto loc_832036F4;
	// b 0x832038b8
	goto loc_832038B8;
loc_83203784:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83203814
	if (!cr6.gt) goto loc_83203814;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r27,-2
	ctx.r10.s64 = ctx.r27.s64 + -2;
loc_8320379C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832037b4
	if (!cr6.eq) goto loc_832037B4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x832037c4
	goto loc_832037C4;
loc_832037B4:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// neg r5,r8
	ctx.r5.s64 = -ctx.r8.s64;
	// andc r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// rlwinm r8,r4,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
loc_832037C4:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83203800
	if (cr6.eq) goto loc_83203800;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r8,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// orc r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ~ctx.r5.u64;
	// clrlwi r8,r3,31
	ctx.r8.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83203800
	if (!cr6.eq) goto loc_83203800;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sthu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// lhz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
loc_83203800:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x8320379c
	if (cr6.lt) goto loc_8320379C;
loc_83203814:
	// lhz r11,42(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 42);
	// li r7,0
	ctx.r7.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832038b8
	if (!cr6.gt) goto loc_832038B8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
loc_83203838:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83203850
	if (!cr6.eq) goto loc_83203850;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83203860
	goto loc_83203860;
loc_83203850:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// andc r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
loc_83203860:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832038a0
	if (cr6.eq) goto loc_832038A0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// orc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ~ctx.r6.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832038a0
	if (!cr6.eq) goto loc_832038A0;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 | 32768;
	// sth r11,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r11.u16);
	// sthu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
loc_832038A0:
	// lhz r11,42(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 42);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x83203838
	if (cr6.lt) goto loc_83203838;
loc_832038B8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83203948
	if (!cr6.gt) goto loc_83203948;
loc_832038C0:
	// bl 0x83206600
	ctx.lr = 0x832038C4;
	sub_83206600(ctx, base);
	// bl 0x83207728
	ctx.lr = 0x832038C8;
	sub_83207728(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83206d50
	ctx.lr = 0x832038D0;
	sub_83206D50(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-4280
	ctx.r6.s64 = ctx.r11.s64 + -4280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832970a8
	ctx.lr = 0x832038E8;
	sub_832970A8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83203918
	if (!cr6.gt) goto loc_83203918;
	// addi r30,r27,-2
	ctx.r30.s64 = ctx.r27.s64 + -2;
loc_832038F4:
	// lhzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// rlwinm r9,r11,19,13,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFC;
	// rlwinm r8,r11,2,15,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x83203090
	ctx.lr = 0x83203910;
	sub_83203090(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x832038f4
	if (!cr0.eq) goto loc_832038F4;
loc_83203918:
	// bl 0x83206878
	ctx.lr = 0x8320391C;
	sub_83206878(ctx, base);
	// bl 0x83206bf0
	ctx.lr = 0x83203920;
	sub_83206BF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,100(r29)
	PPC_STORE_U8(ctx.r29.u32 + 100, ctx.r10.u8);
	// stw r9,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r9.u32);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
loc_83203948:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83203958
	if (cr6.eq) goto loc_83203958;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83209d68
	ctx.lr = 0x83203958;
	sub_83209D68(ctx, base);
loc_83203958:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83203964"))) PPC_WEAK_FUNC(sub_83203964);
PPC_FUNC_IMPL(__imp__sub_83203964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203968"))) PPC_WEAK_FUNC(sub_83203968);
PPC_FUNC_IMPL(__imp__sub_83203968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83203984
	if (!cr6.eq) goto loc_83203984;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83203984:
	// lhz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203990"))) PPC_WEAK_FUNC(sub_83203990);
PPC_FUNC_IMPL(__imp__sub_83203990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832039ac
	if (!cr6.eq) goto loc_832039AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832039AC:
	// lhz r11,38(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832039B8"))) PPC_WEAK_FUNC(sub_832039B8);
PPC_FUNC_IMPL(__imp__sub_832039B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832039d8
	if (!cr6.eq) goto loc_832039D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_832039D8:
	// lfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832039E0"))) PPC_WEAK_FUNC(sub_832039E0);
PPC_FUNC_IMPL(__imp__sub_832039E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832039FC"))) PPC_WEAK_FUNC(sub_832039FC);
PPC_FUNC_IMPL(__imp__sub_832039FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203A00"))) PPC_WEAK_FUNC(sub_83203A00);
PPC_FUNC_IMPL(__imp__sub_83203A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r3,86(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 86);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203A20"))) PPC_WEAK_FUNC(sub_83203A20);
PPC_FUNC_IMPL(__imp__sub_83203A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// sth r3,86(r11)
	PPC_STORE_U16(ctx.r11.u32 + 86, ctx.r3.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203A3C"))) PPC_WEAK_FUNC(sub_83203A3C);
PPC_FUNC_IMPL(__imp__sub_83203A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203A40"))) PPC_WEAK_FUNC(sub_83203A40);
PPC_FUNC_IMPL(__imp__sub_83203A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203A60"))) PPC_WEAK_FUNC(sub_83203A60);
PPC_FUNC_IMPL(__imp__sub_83203A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// sth r3,88(r11)
	PPC_STORE_U16(ctx.r11.u32 + 88, ctx.r3.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203A7C"))) PPC_WEAK_FUNC(sub_83203A7C);
PPC_FUNC_IMPL(__imp__sub_83203A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203A80"))) PPC_WEAK_FUNC(sub_83203A80);
PPC_FUNC_IMPL(__imp__sub_83203A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83203a9c
	if (!cr6.eq) goto loc_83203A9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83203A9C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203AA8"))) PPC_WEAK_FUNC(sub_83203AA8);
PPC_FUNC_IMPL(__imp__sub_83203AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203ACC"))) PPC_WEAK_FUNC(sub_83203ACC);
PPC_FUNC_IMPL(__imp__sub_83203ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203AD0"))) PPC_WEAK_FUNC(sub_83203AD0);
PPC_FUNC_IMPL(__imp__sub_83203AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83203aec
	if (!cr6.eq) goto loc_83203AEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83203AEC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203AF8"))) PPC_WEAK_FUNC(sub_83203AF8);
PPC_FUNC_IMPL(__imp__sub_83203AF8) {
	PPC_FUNC_PROLOGUE();
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1855
	cr6.compare<uint32_t>(ctx.r11.u32, 1855, xer);
	// bne cr6,0x83203b78
	if (!cr6.eq) goto loc_83203B78;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83203b3c
	if (cr6.eq) goto loc_83203B3C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83203B3C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83203b64
	if (cr6.eq) goto loc_83203B64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83203B64;
	sub_83222030(ctx, base);
loc_83203B64:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x83203b7c
	goto loc_83203B7C;
loc_83203B78:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_83203B7C:
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

__attribute__((alias("__imp__sub_83203B94"))) PPC_WEAK_FUNC(sub_83203B94);
PPC_FUNC_IMPL(__imp__sub_83203B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203B98"))) PPC_WEAK_FUNC(sub_83203B98);
PPC_FUNC_IMPL(__imp__sub_83203B98) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1855
	cr6.compare<uint32_t>(ctx.r11.u32, 1855, xer);
	// bne cr6,0x83203c08
	if (!cr6.eq) goto loc_83203C08;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83203bd8
	if (!cr6.eq) goto loc_83203BD8;
	// li r3,1855
	ctx.r3.s64 = 1855;
	// bl 0x832277f8
	ctx.lr = 0x83203BC4;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83203bd8
	if (!cr6.eq) goto loc_83203BD8;
	// bl 0x83227908
	ctx.lr = 0x83203BD4;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_83203BD8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,26076
	ctx.r5.s64 = ctx.r11.s64 + 26076;
	// addi r4,r10,26056
	ctx.r4.s64 = ctx.r10.s64 + 26056;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// bl 0x832085e8
	ctx.lr = 0x83203BF4;
	sub_832085E8(ctx, base);
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
loc_83203C08:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203C1C"))) PPC_WEAK_FUNC(sub_83203C1C);
PPC_FUNC_IMPL(__imp__sub_83203C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203C20"))) PPC_WEAK_FUNC(sub_83203C20);
PPC_FUNC_IMPL(__imp__sub_83203C20) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1908
	cr6.compare<uint32_t>(ctx.r11.u32, 1908, xer);
	// blt cr6,0x83203c5c
	if (cr6.lt) goto loc_83203C5C;
	// cmplwi cr6,r11,1909
	cr6.compare<uint32_t>(ctx.r11.u32, 1909, xer);
	// bgt cr6,0x83203c5c
	if (cr6.gt) goto loc_83203C5C;
	// li r3,316
	ctx.r3.s64 = 316;
	// bl 0x8320d810
	ctx.lr = 0x83203C48;
	sub_8320D810(ctx, base);
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
loc_83203C5C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203C70"))) PPC_WEAK_FUNC(sub_83203C70);
PPC_FUNC_IMPL(__imp__sub_83203C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r10,-4
	ctx.r10.s64 = -4;
	// addi r11,r11,-2380
	ctx.r11.s64 = ctx.r11.s64 + -2380;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83203C8C"))) PPC_WEAK_FUNC(sub_83203C8C);
PPC_FUNC_IMPL(__imp__sub_83203C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83203C90"))) PPC_WEAK_FUNC(sub_83203C90);
PPC_FUNC_IMPL(__imp__sub_83203C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83203C98;
	__savegprlr_29(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x832040b8
	if (cr6.gt) goto loc_832040B8;
	// lis r12,-31968
	ctx.r12.s64 = -2095054848;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15600
	ctx.r12.s64 = ctx.r12.s64 + 15600;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u32) {
	case 0:
		goto loc_83203D24;
	case 1:
		goto loc_83203D44;
	case 2:
		goto loc_83203D64;
	case 3:
		goto loc_832040AC;
	case 4:
		goto loc_83203D84;
	case 5:
		goto loc_83203D98;
	case 6:
		goto loc_83203DB8;
	case 7:
		goto loc_83203DE8;
	case 8:
		goto loc_83203E98;
	case 9:
		goto loc_83203EC8;
	case 10:
		goto loc_83203EF0;
	case 11:
		goto loc_83203FDC;
	case 12:
		goto loc_832040AC;
	default:
		return;
	}
	// lwz r25,15652(0)
	ctx.r25.u64 = PPC_LOAD_U32(15652);
	// lwz r25,15684(0)
	ctx.r25.u64 = PPC_LOAD_U32(15684);
	// lwz r25,15716(0)
	ctx.r25.u64 = PPC_LOAD_U32(15716);
	// lwz r25,16556(0)
	ctx.r25.u64 = PPC_LOAD_U32(16556);
	// lwz r25,15748(0)
	ctx.r25.u64 = PPC_LOAD_U32(15748);
	// lwz r25,15768(0)
	ctx.r25.u64 = PPC_LOAD_U32(15768);
	// lwz r25,15800(0)
	ctx.r25.u64 = PPC_LOAD_U32(15800);
	// lwz r25,15848(0)
	ctx.r25.u64 = PPC_LOAD_U32(15848);
	// lwz r25,16024(0)
	ctx.r25.u64 = PPC_LOAD_U32(16024);
	// lwz r25,16072(0)
	ctx.r25.u64 = PPC_LOAD_U32(16072);
	// lwz r25,16112(0)
	ctx.r25.u64 = PPC_LOAD_U32(16112);
	// lwz r25,16348(0)
	ctx.r25.u64 = PPC_LOAD_U32(16348);
	// lwz r25,16556(0)
	ctx.r25.u64 = PPC_LOAD_U32(16556);
loc_83203D24:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8325bdb8
	ctx.lr = 0x83203D38;
	sub_8325BDB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203D44:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832070d0
	ctx.lr = 0x83203D58;
	sub_832070D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203D64:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832070e0
	ctx.lr = 0x83203D78;
	sub_832070E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203D84:
	// bl 0x8325ba50
	ctx.lr = 0x83203D88;
	sub_8325BA50(ctx, base);
	// bl 0x832091d8
	ctx.lr = 0x83203D8C;
	sub_832091D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203D98:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// bl 0x832099c0
	ctx.lr = 0x83203DAC;
	sub_832099C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203DB8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83207d40
	ctx.lr = 0x83203DDC;
	sub_83207D40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203DE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,30720
	ctx.r10.s64 = 2013265920;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// lwz r30,-4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r7,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x83203e38
	if (!cr6.eq) goto loc_83203E38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83207d58
	ctx.lr = 0x83203E2C;
	sub_83207D58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff530
	ctx.lr = 0x83203E40;
	sub_831FF530(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83203e78
	if (!cr6.eq) goto loc_83203E78;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83203E68;
	sub_832085E8(ctx, base);
	// li r29,-3
	ctx.r29.s64 = -3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203E78:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// andc r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r30.u64;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203E98:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83257dc0
	ctx.lr = 0x83203EBC;
	sub_83257DC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203EC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r8,r10,25440
	ctx.r8.s64 = ctx.r10.s64 + 25440;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203EF0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r6,4352
	cr6.compare<int32_t>(ctx.r6.s32, 4352, xer);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x83203f78
	if (cr6.eq) goto loc_83203F78;
	// cmpwi cr6,r6,4353
	cr6.compare<int32_t>(ctx.r6.s32, 4353, xer);
	// bne cr6,0x83203f88
	if (!cr6.eq) goto loc_83203F88;
	// cmpwi cr6,r7,4864
	cr6.compare<int32_t>(ctx.r7.s32, 4864, xer);
	// beq cr6,0x83203f5c
	if (cr6.eq) goto loc_83203F5C;
	// cmpwi cr6,r7,4865
	cr6.compare<int32_t>(ctx.r7.s32, 4865, xer);
	// bne cr6,0x83203f88
	if (!cr6.eq) goto loc_83203F88;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203F5C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,84(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203F78:
	// cmpwi cr6,r7,4864
	cr6.compare<int32_t>(ctx.r7.s32, 4864, xer);
	// beq cr6,0x83203fc0
	if (cr6.eq) goto loc_83203FC0;
	// cmpwi cr6,r7,4865
	cr6.compare<int32_t>(ctx.r7.s32, 4865, xer);
	// beq cr6,0x83203fa4
	if (cr6.eq) goto loc_83203FA4;
loc_83203F88:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,26100
	ctx.r4.s64 = ctx.r10.s64 + 26100;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// bl 0x83208568
	ctx.lr = 0x83203FA4;
	sub_83208568(ctx, base);
loc_83203FA4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203FC0:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,76(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83203FDC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r6,4352
	cr6.compare<int32_t>(ctx.r6.s32, 4352, xer);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x8320405c
	if (cr6.eq) goto loc_8320405C;
	// cmpwi cr6,r6,4353
	cr6.compare<int32_t>(ctx.r6.s32, 4353, xer);
	// bne cr6,0x8320406c
	if (!cr6.eq) goto loc_8320406C;
	// cmpwi cr6,r7,4864
	cr6.compare<int32_t>(ctx.r7.s32, 4864, xer);
	// beq cr6,0x83204044
	if (cr6.eq) goto loc_83204044;
	// cmpwi cr6,r7,4865
	cr6.compare<int32_t>(ctx.r7.s32, 4865, xer);
	// bne cr6,0x8320406c
	if (!cr6.eq) goto loc_8320406C;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r10,24688
	ctx.r9.s64 = ctx.r10.s64 + 24688;
	// stw r11,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83204044:
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r10,24688
	ctx.r9.s64 = ctx.r10.s64 + 24688;
	// stw r11,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8320405C:
	// cmpwi cr6,r7,4864
	cr6.compare<int32_t>(ctx.r7.s32, 4864, xer);
	// beq cr6,0x832040a0
	if (cr6.eq) goto loc_832040A0;
	// cmpwi cr6,r7,4865
	cr6.compare<int32_t>(ctx.r7.s32, 4865, xer);
	// beq cr6,0x83204088
	if (cr6.eq) goto loc_83204088;
loc_8320406C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,26100
	ctx.r4.s64 = ctx.r10.s64 + 26100;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// bl 0x83208568
	ctx.lr = 0x83204088;
	sub_83208568(ctx, base);
loc_83204088:
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r10,24688
	ctx.r9.s64 = ctx.r10.s64 + 24688;
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832040A0:
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r10,24688
	ctx.r9.s64 = ctx.r10.s64 + 24688;
	// stw r11,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r11.u32);
loc_832040AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832040B8:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,26132
	ctx.r4.s64 = ctx.r10.s64 + 26132;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// bl 0x83208568
	ctx.lr = 0x832040D4;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_832040D4"))) PPC_WEAK_FUNC(sub_832040D4);
PPC_FUNC_IMPL(__imp__sub_832040D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832040D8"))) PPC_WEAK_FUNC(sub_832040D8);
PPC_FUNC_IMPL(__imp__sub_832040D8) {
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
	// lis r8,-31748
	ctx.r8.s64 = -2080636928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r8,24688
	ctx.r4.s64 = ctx.r8.s64 + 24688;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r9.u32);
	// stb r8,100(r4)
	PPC_STORE_U8(ctx.r4.u32 + 100, ctx.r8.u8);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// beq cr6,0x8320412c
	if (cr6.eq) goto loc_8320412C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831ff530
	ctx.lr = 0x8320412C;
	sub_831FF530(ctx, base);
loc_8320412C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// beq cr6,0x83204140
	if (cr6.eq) goto loc_83204140;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x83207d78
	ctx.lr = 0x83204140;
	sub_83207D78(ctx, base);
loc_83204140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83204150"))) PPC_WEAK_FUNC(sub_83204150);
PPC_FUNC_IMPL(__imp__sub_83204150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83204158;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8320424c
	if (!cr6.gt) goto loc_8320424C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8320417C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stb r9,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r9.u8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bne cr6,0x832041b8
	if (!cr6.eq) goto loc_832041B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x832041d8
	goto loc_832041D8;
loc_832041B8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83207d78
	ctx.lr = 0x832041D8;
	sub_83207D78(ctx, base);
loc_832041D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff210
	ctx.lr = 0x832041E0;
	sub_831FF210(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x832041E8;
	sub_83209D68(ctx, base);
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8320417c
	if (cr6.lt) goto loc_8320417C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83204220
	if (cr6.eq) goto loc_83204220;
	// bl 0x83209d68
	ctx.lr = 0x83204210;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// sth r10,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r10.u16);
loc_83204220:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// stb r9,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r9.u8);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8320424C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204254"))) PPC_WEAK_FUNC(sub_83204254);
PPC_FUNC_IMPL(__imp__sub_83204254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204258"))) PPC_WEAK_FUNC(sub_83204258);
PPC_FUNC_IMPL(__imp__sub_83204258) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r7,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r7.u32);
	// stb r6,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r6.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// bne cr6,0x832042c4
	if (!cr6.eq) goto loc_832042C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// b 0x832042e4
	goto loc_832042E4;
loc_832042C4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83207d78
	ctx.lr = 0x832042E4;
	sub_83207D78(ctx, base);
loc_832042E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff210
	ctx.lr = 0x832042EC;
	sub_831FF210(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832040d8
	ctx.lr = 0x832042F4;
	sub_832040D8(ctx, base);
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

__attribute__((alias("__imp__sub_83204308"))) PPC_WEAK_FUNC(sub_83204308);
PPC_FUNC_IMPL(__imp__sub_83204308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83204310;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x83204360
	if (!cr6.eq) goto loc_83204360;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x83209aa8
	ctx.lr = 0x83204358;
	sub_83209AA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_83204360:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fb998
	ctx.lr = 0x83204368;
	sub_831FB998(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r8.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r10.u32);
	// stb r9,100(r29)
	PPC_STORE_U8(ctx.r29.u32 + 100, ctx.r9.u8);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832589f0
	ctx.lr = 0x832043A0;
	sub_832589F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832040d8
	ctx.lr = 0x832043A8;
	sub_832040D8(ctx, base);
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r7,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r7.u8);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r5,r5,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r5,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832043C8"))) PPC_WEAK_FUNC(sub_832043C8);
PPC_FUNC_IMPL(__imp__sub_832043C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832043D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r3,27
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 27;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8320442c
	if (cr6.eq) goto loc_8320442C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83204420
	if (cr6.eq) goto loc_83204420;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83204420
	if (cr6.eq) goto loc_83204420;
loc_832043FC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83204420
	if (cr6.eq) goto loc_83204420;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,25456
	ctx.r4.s64 = ctx.r11.s64 + 25456;
	// addi r3,r10,25448
	ctx.r3.s64 = ctx.r10.s64 + 25448;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x832085e8
	ctx.lr = 0x83204420;
	sub_832085E8(ctx, base);
loc_83204420:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320442C:
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r10,r10,24688
	ctx.r10.s64 = ctx.r10.s64 + 24688;
	// lhz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x832043fc
	if (!cr6.lt) goto loc_832043FC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832043fc
	if (cr6.eq) goto loc_832043FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x832043fc
	if (!cr6.eq) goto loc_832043FC;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83204498
	if (!cr6.eq) goto loc_83204498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204308
	ctx.lr = 0x8320447C;
	sub_83204308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832000a0
	ctx.lr = 0x8320448C;
	sub_832000A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83204498:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831feec8
	ctx.lr = 0x832044A0;
	sub_831FEEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832044e4
	if (!cr6.eq) goto loc_832044E4;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83204420
	if (!cr6.eq) goto loc_83204420;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,26156
	ctx.r4.s64 = ctx.r11.s64 + 26156;
	// addi r3,r10,25448
	ctx.r3.s64 = ctx.r10.s64 + 25448;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x832083d0
	ctx.lr = 0x832044D8;
	sub_832083D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832044E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832000a0
	ctx.lr = 0x832044F0;
	sub_832000A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832044FC"))) PPC_WEAK_FUNC(sub_832044FC);
PPC_FUNC_IMPL(__imp__sub_832044FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204500"))) PPC_WEAK_FUNC(sub_83204500);
PPC_FUNC_IMPL(__imp__sub_83204500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83204508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// xori r8,r11,87
	ctx.r8.u64 = ctx.r11.u64 ^ 87;
	// xori r7,r10,83
	ctx.r7.u64 = ctx.r10.u64 ^ 83;
	// xori r6,r9,70
	ctx.r6.u64 = ctx.r9.u64 ^ 70;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// xori r4,r9,67
	ctx.r4.u64 = ctx.r9.u64 ^ 67;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320456c
	if (cr6.eq) goto loc_8320456C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,25880
	ctx.r4.s64 = ctx.r11.s64 + 25880;
	// addi r3,r10,25448
	ctx.r3.s64 = ctx.r10.s64 + 25448;
	// bl 0x83208568
	ctx.lr = 0x8320456C;
	sub_83208568(ctx, base);
loc_8320456C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831feec8
	ctx.lr = 0x83204574;
	sub_831FEEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83204594
	if (!cr6.eq) goto loc_83204594;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,26188
	ctx.r4.s64 = ctx.r11.s64 + 26188;
	// addi r3,r10,25448
	ctx.r3.s64 = ctx.r10.s64 + 25448;
	// bl 0x83208568
	ctx.lr = 0x83204594;
	sub_83208568(ctx, base);
loc_83204594:
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// beq cr6,0x832045b0
	if (cr6.eq) goto loc_832045B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832045bc
	goto loc_832045BC;
loc_832045B0:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_832045BC:
	// bl 0x831fff20
	ctx.lr = 0x832045C0;
	sub_831FFF20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// bne cr6,0x832045dc
	if (!cr6.eq) goto loc_832045DC;
	// lbz r11,34(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 34);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x83204308
	ctx.lr = 0x832045DC;
	sub_83204308(ctx, base);
loc_832045DC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832045E8"))) PPC_WEAK_FUNC(sub_832045E8);
PPC_FUNC_IMPL(__imp__sub_832045E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832045F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// lhz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83204674
	if (!cr6.gt) goto loc_83204674;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83204614:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320462c
	if (!cr6.eq) goto loc_8320462C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8320463c
	goto loc_8320463C;
loc_8320462C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// andc r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_8320463C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204660
	if (cr6.eq) goto loc_83204660;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83204660
	if (cr6.eq) goto loc_83204660;
	// bl 0x83204258
	ctx.lr = 0x8320465C;
	sub_83204258(ctx, base);
	// lhz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
loc_83204660:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x83204614
	if (cr6.lt) goto loc_83204614;
loc_83204674:
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x832046bc
	if (cr0.lt) goto loc_832046BC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_83204688:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832046a4
	if (cr6.eq) goto loc_832046A4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// neg r7,r11
	ctx.r7.s64 = -ctx.r11.s64;
	// andc r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
loc_832046A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832046bc
	if (!cr6.eq) goto loc_832046BC;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bge 0x83204688
	if (!cr0.lt) goto loc_83204688;
loc_832046BC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r28,r11,0,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// bge cr6,0x83204710
	if (!cr6.lt) goto loc_83204710;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_832046D8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x83209d68
	ctx.lr = 0x832046E4;
	sub_83209D68(ctx, base);
	// lhz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 24);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x832046d8
	if (cr6.lt) goto loc_832046D8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x83209df8
	ctx.lr = 0x83204708;
	sub_83209DF8(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// sth r28,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r28.u16);
loc_83204710:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320471C"))) PPC_WEAK_FUNC(sub_8320471C);
PPC_FUNC_IMPL(__imp__sub_8320471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204720"))) PPC_WEAK_FUNC(sub_83204720);
PPC_FUNC_IMPL(__imp__sub_83204720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83204728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83209098
	ctx.lr = 0x8320473C;
	sub_83209098(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832047b0
	if (cr6.eq) goto loc_832047B0;
	// rlwinm r11,r31,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x78000000;
	// lis r10,6144
	ctx.r10.s64 = 402653184;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83204794
	if (!cr6.eq) goto loc_83204794;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r10,r10,24688
	ctx.r10.s64 = ctx.r10.s64 + 24688;
	// lhz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83204794
	if (!cr6.lt) goto loc_83204794;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204794
	if (cr6.eq) goto loc_83204794;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// beq cr6,0x832047a0
	if (cr6.eq) goto loc_832047A0;
loc_83204794:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832047A0:
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832047B0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83204804
	if (cr6.eq) goto loc_83204804;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x83204804
	if (cr6.eq) goto loc_83204804;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-22544
	ctx.r30.s64 = ctx.r11.s64 + -22544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831fef88
	ctx.lr = 0x832047D4;
	sub_831FEF88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83204794
	if (cr6.eq) goto loc_83204794;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832043c8
	ctx.lr = 0x832047EC;
	sub_832043C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83204794
	if (cr6.eq) goto loc_83204794;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832000a0
	ctx.lr = 0x83204804;
	sub_832000A0(ctx, base);
loc_83204804:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204810"))) PPC_WEAK_FUNC(sub_83204810);
PPC_FUNC_IMPL(__imp__sub_83204810) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// oris r8,r10,256
	ctx.r8.u64 = ctx.r10.u64 | 16777216;
	// stw r5,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// sth r30,88(r3)
	PPC_STORE_U16(ctx.r3.u32 + 88, ctx.r30.u16);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// bl 0x83213448
	ctx.lr = 0x8320485C;
	sub_83213448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e7d0
	ctx.lr = 0x83204864;
	sub_8322E7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83239018
	ctx.lr = 0x8320486C;
	sub_83239018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83215368
	ctx.lr = 0x83204874;
	sub_83215368(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832146c8
	ctx.lr = 0x83204880;
	sub_832146C8(ctx, base);
	// lis r7,-31748
	ctx.r7.s64 = -2080636928;
	// addi r6,r7,24688
	ctx.r6.s64 = ctx.r7.s64 + 24688;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832048a0
	if (cr6.eq) goto loc_832048A0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// oris r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 524288;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_832048A0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832048bc
	if (cr6.eq) goto loc_832048BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213048
	ctx.lr = 0x832048BC;
	sub_83213048(ctx, base);
loc_832048BC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83204920
	if (!cr6.eq) goto loc_83204920;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x83203c90
	ctx.lr = 0x832048DC;
	sub_83203C90(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r11,26220
	ctx.r6.s64 = ctx.r11.s64 + 26220;
	// addi r5,r10,26212
	ctx.r5.s64 = ctx.r10.s64 + 26212;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83297a40
	ctx.lr = 0x832048FC;
	sub_83297A40(ctx, base);
	// li r9,324
	ctx.r9.s64 = 324;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// sth r9,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r30.u8);
	// bl 0x8322c0a8
	ctx.lr = 0x83204920;
	sub_8322C0A8(ctx, base);
loc_83204920:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_8320493C"))) PPC_WEAK_FUNC(sub_8320493C);
PPC_FUNC_IMPL(__imp__sub_8320493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204940"))) PPC_WEAK_FUNC(sub_83204940);
PPC_FUNC_IMPL(__imp__sub_83204940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83204948;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-31748
	ctx.r7.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r7,24688
	ctx.r28.s64 = ctx.r7.s64 + 24688;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lis r6,-32203
	ctx.r6.s64 = -2110455808;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r6,-22544
	ctx.r4.s64 = ctx.r6.s64 + -22544;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lbz r8,34(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 34);
	// stb r8,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r8.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x832043c8
	ctx.lr = 0x83204998;
	sub_832043C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stw r11,96(r28)
	PPC_STORE_U32(ctx.r28.u32 + 96, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r10,100(r28)
	PPC_STORE_U8(ctx.r28.u32 + 100, ctx.r10.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83207d78
	ctx.lr = 0x832049D4;
	sub_83207D78(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83201380
	ctx.lr = 0x832049E0;
	sub_83201380(ctx, base);
	// lhz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// sth r5,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r5.u16);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lhz r4,114(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// sth r4,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r4.u16);
	// bl 0x83228ec8
	ctx.lr = 0x83204A08;
	sub_83228EC8(ctx, base);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83204a28
	if (cr6.eq) goto loc_83204A28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_83204A28:
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83204a44
	if (cr6.eq) goto loc_83204A44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 1048576;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83204A44:
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83204a90
	if (cr6.eq) goto loc_83204A90;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83204810
	ctx.lr = 0x83204A5C;
	sub_83204810(ctx, base);
	// addic. r3,r31,120
	xer.ca = ctx.r31.u32 > 4294967175;
	ctx.r3.s64 = ctx.r31.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83204a6c
	if (!cr0.eq) goto loc_83204A6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83204a80
	goto loc_83204A80;
loc_83204A6C:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_83204A80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204a90
	if (cr6.eq) goto loc_83204A90;
	// bl 0x8324ccf0
	ctx.lr = 0x83204A90;
	sub_8324CCF0(ctx, base);
loc_83204A90:
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83204aa4
	if (cr6.eq) goto loc_83204AA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83228410
	ctx.lr = 0x83204AA4;
	sub_83228410(ctx, base);
loc_83204AA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83204af0
	if (cr6.eq) goto loc_83204AF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83200528
	ctx.lr = 0x83204ABC;
	sub_83200528(ctx, base);
	// addic. r3,r31,120
	xer.ca = ctx.r31.u32 > 4294967175;
	ctx.r3.s64 = ctx.r31.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83204acc
	if (!cr0.eq) goto loc_83204ACC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83204ae0
	goto loc_83204AE0;
loc_83204ACC:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_83204AE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204af0
	if (cr6.eq) goto loc_83204AF0;
	// bl 0x8324ccf0
	ctx.lr = 0x83204AF0;
	sub_8324CCF0(ctx, base);
loc_83204AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83200458
	ctx.lr = 0x83204AF8;
	sub_83200458(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832040d8
	ctx.lr = 0x83204B00;
	sub_832040D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204B0C"))) PPC_WEAK_FUNC(sub_83204B0C);
PPC_FUNC_IMPL(__imp__sub_83204B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204B10"))) PPC_WEAK_FUNC(sub_83204B10);
PPC_FUNC_IMPL(__imp__sub_83204B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83204B18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83204b4c
	if (!cr6.eq) goto loc_83204B4C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83204b64
	if (cr6.eq) goto loc_83204B64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83295af0
	ctx.lr = 0x83204B44;
	sub_83295AF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83204b64
	goto loc_83204B64;
loc_83204B4C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-2392
	ctx.r5.s64 = ctx.r11.s64 + -2392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295250
	ctx.lr = 0x83204B60;
	sub_83295250(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83204B64:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x831fef88
	ctx.lr = 0x83204B74;
	sub_831FEF88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83204b88
	if (!cr6.eq) goto loc_83204B88;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83204B88:
	// bl 0x83206600
	ctx.lr = 0x83204B8C;
	sub_83206600(ctx, base);
	// bl 0x832005a0
	ctx.lr = 0x83204B90;
	sub_832005A0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83204bb4
	if (cr6.eq) goto loc_83204BB4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83209b18
	ctx.lr = 0x83204BB0;
	sub_83209B18(ctx, base);
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
loc_83204BB4:
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r29.u32);
	// bl 0x83297bb8
	ctx.lr = 0x83204BC4;
	sub_83297BB8(ctx, base);
	// std r3,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r3.u64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83204940
	ctx.lr = 0x83204BD8;
	sub_83204940(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x83206878
	ctx.lr = 0x83204BE8;
	sub_83206878(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204BF4"))) PPC_WEAK_FUNC(sub_83204BF4);
PPC_FUNC_IMPL(__imp__sub_83204BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204BF8"))) PPC_WEAK_FUNC(sub_83204BF8);
PPC_FUNC_IMPL(__imp__sub_83204BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83204C00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83204dbc
	if (cr6.gt) goto loc_83204DBC;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r31,r10,24688
	ctx.r31.s64 = ctx.r10.s64 + 24688;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83204ca0
	if (cr6.eq) goto loc_83204CA0;
	// bdz 0x83204dbc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83204DBC;
	// bdz 0x83204dbc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83204DBC;
	// bdz 0x83204dbc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83204DBC;
	// bdz 0x83204c50
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83204C50;
	// bdz 0x83204dbc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83204DBC;
	// bdz 0x83204ca0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83204CA0;
	// b 0x83204ca0
	goto loc_83204CA0;
loc_83204C50:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x831ff5a8
	ctx.lr = 0x83204C60;
	sub_831FF5A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83204c70
	if (!cr6.eq) goto loc_83204C70;
	// li r24,-3
	ctx.r24.s64 = -3;
	// b 0x83204d70
	goto loc_83204D70;
loc_83204C70:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204c98
	if (cr6.eq) goto loc_83204C98;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x83204d70
	goto loc_83204D70;
loc_83204C98:
	// bl 0x83204258
	ctx.lr = 0x83204C9C;
	sub_83204258(ctx, base);
	// b 0x83204d70
	goto loc_83204D70;
loc_83204CA0:
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83204d70
	if (!cr6.gt) goto loc_83204D70;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83204CB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83204cd0
	if (!cr6.eq) goto loc_83204CD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83204ce0
	goto loc_83204CE0;
loc_83204CD0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_83204CE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204d58
	if (cr6.eq) goto loc_83204D58;
	// cmpwi cr6,r26,7
	cr6.compare<int32_t>(ctx.r26.s32, 7, xer);
	// bne cr6,0x83204d08
	if (!cr6.eq) goto loc_83204D08;
	// lbz r11,41(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// blt cr6,0x83204d58
	if (cr6.lt) goto loc_83204D58;
	// b 0x83204d20
	goto loc_83204D20;
loc_83204D08:
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(ctx.r26.s32, 8, xer);
	// bne cr6,0x83204d20
	if (!cr6.eq) goto loc_83204D20;
	// lbz r11,41(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// bne cr6,0x83204d58
	if (!cr6.eq) goto loc_83204D58;
loc_83204D20:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204d48
	if (cr6.eq) goto loc_83204D48;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x83204d58
	goto loc_83204D58;
loc_83204D48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff840
	ctx.lr = 0x83204D50;
	sub_831FF840(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff210
	ctx.lr = 0x83204D58;
	sub_831FF210(ctx, base);
loc_83204D58:
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x83204cb8
	if (cr6.lt) goto loc_83204CB8;
loc_83204D70:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83204db0
	if (!cr6.eq) goto loc_83204DB0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r10.u8);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x832045e8
	ctx.lr = 0x83204DA8;
	sub_832045E8(ctx, base);
	// bl 0x83208160
	ctx.lr = 0x83204DAC;
	sub_83208160(ctx, base);
	// bl 0x832091d8
	ctx.lr = 0x83204DB0;
	sub_832091D8(ctx, base);
loc_83204DB0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83204DBC:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25524
	ctx.r4.s64 = ctx.r10.s64 + 25524;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x83208568
	ctx.lr = 0x83204DDC;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83204DDC"))) PPC_WEAK_FUNC(sub_83204DDC);
PPC_FUNC_IMPL(__imp__sub_83204DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83204DE0"))) PPC_WEAK_FUNC(sub_83204DE0);
PPC_FUNC_IMPL(__imp__sub_83204DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83204DE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83204f2c
	if (!cr6.eq) goto loc_83204F2C;
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r11,6144
	ctx.r11.s64 = 402653184;
	// lwz r24,48(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r10,r30,0,1,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x78000000;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x83204e70
	if (!cr6.eq) goto loc_83204E70;
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83204e70
	if (!cr6.lt) goto loc_83204E70;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204e70
	if (cr6.eq) goto loc_83204E70;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x83204e70
	if (!cr6.eq) goto loc_83204E70;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832043c8
	ctx.lr = 0x83204E64;
	sub_832043C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83204e70
	if (cr6.eq) goto loc_83204E70;
	// lwz r26,92(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
loc_83204E70:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831ff530
	ctx.lr = 0x83204E78;
	sub_831FF530(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83204e94
	if (cr6.eq) goto loc_83204E94;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204e94
	if (cr6.eq) goto loc_83204E94;
	// lwz r25,384(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
loc_83204E94:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r10,-20096
	ctx.r28.s64 = ctx.r10.s64 + -20096;
	// addi r29,r11,-22544
	ctx.r29.s64 = ctx.r11.s64 + -22544;
	// ble cr6,0x83204eec
	if (!cr6.gt) goto loc_83204EEC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83204ec0
	if (!cr6.eq) goto loc_83204EC0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// b 0x83204ec8
	goto loc_83204EC8;
loc_83204EC0:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_83204EC8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,26244
	ctx.r5.s64 = ctx.r11.s64 + 26244;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x83297a40
	ctx.lr = 0x83204EE0;
	sub_83297A40(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x83296ba8
	ctx.lr = 0x83204EE8;
	sub_83296BA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83204EEC:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x83204f2c
	if (!cr6.gt) goto loc_83204F2C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83204f08
	if (!cr6.eq) goto loc_83204F08;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// b 0x83204f10
	goto loc_83204F10;
loc_83204F08:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_83204F10:
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r10,26228
	ctx.r5.s64 = ctx.r10.s64 + 26228;
	// subfic r4,r27,64
	xer.ca = ctx.r27.u32 <= 64;
	ctx.r4.s64 = 64 - ctx.r27.s64;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x83297a40
	ctx.lr = 0x83204F2C;
	sub_83297A40(ctx, base);
loc_83204F2C:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83204F38"))) PPC_WEAK_FUNC(sub_83204F38);
PPC_FUNC_IMPL(__imp__sub_83204F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83204F40;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83205064
	if (!cr6.lt) goto loc_83205064;
	// lwz r28,48(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r31,44(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83208e78
	ctx.lr = 0x83204F6C;
	sub_83208E78(ctx, base);
	// stw r3,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83205064
	if (!cr6.lt) goto loc_83205064;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm r11,r31,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x78000000;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r10,6144
	ctx.r10.s64 = 402653184;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bne cr6,0x83204ffc
	if (!cr6.eq) goto loc_83204FFC;
	// lhz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83204ffc
	if (!cr6.lt) goto loc_83204FFC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83204ffc
	if (cr6.eq) goto loc_83204FFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x83204ffc
	if (!cr6.eq) goto loc_83204FFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832043c8
	ctx.lr = 0x83204FF0;
	sub_832043C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83204ffc
	if (cr6.eq) goto loc_83204FFC;
	// lwz r27,92(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
loc_83204FFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ff530
	ctx.lr = 0x83205004;
	sub_831FF530(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320501c
	if (cr6.eq) goto loc_8320501C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320501c
	if (cr6.eq) goto loc_8320501C;
	// lwz r30,384(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
loc_8320501C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83205034
	if (cr6.eq) goto loc_83205034;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83296be0
	ctx.lr = 0x83205034;
	sub_83296BE0(ctx, base);
loc_83205034:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83255980
	ctx.lr = 0x8320503C;
	sub_83255980(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83205058
	if (cr6.eq) goto loc_83205058;
	// addi r11,r1,89
	ctx.r11.s64 = ctx.r1.s64 + 89;
	// subfic r5,r3,23
	xer.ca = ctx.r3.u32 <= 23;
	ctx.r5.s64 = 23 - ctx.r3.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x83296be0
	ctx.lr = 0x83205058;
	sub_83296BE0(ctx, base);
loc_83205058:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83208ef0
	ctx.lr = 0x83205060;
	sub_83208EF0(ctx, base);
	// stw r3,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r3.u32);
loc_83205064:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320506C"))) PPC_WEAK_FUNC(sub_8320506C);
PPC_FUNC_IMPL(__imp__sub_8320506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205070"))) PPC_WEAK_FUNC(sub_83205070);
PPC_FUNC_IMPL(__imp__sub_83205070) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x832043c8
	ctx.lr = 0x83205090;
	sub_832043C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832050b0
	if (cr6.eq) goto loc_832050B0;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832050b0
	if (!cr6.eq) goto loc_832050B0;
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
loc_832050B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832050C0"))) PPC_WEAK_FUNC(sub_832050C0);
PPC_FUNC_IMPL(__imp__sub_832050C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832050C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lhz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// lwz r25,44(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lwz r27,48(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r24,20(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x832051b0
	if (!cr6.gt) goto loc_832051B0;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,24856
	ctx.r26.s64 = ctx.r11.s64 + 24856;
loc_83205100:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83205118
	if (!cr6.eq) goto loc_83205118;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83205128
	goto loc_83205128;
loc_83205118:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_83205128:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320519c
	if (cr6.eq) goto loc_8320519C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320519c
	if (!cr6.eq) goto loc_8320519C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r10,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r10.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83207d78
	ctx.lr = 0x83205174;
	sub_83207D78(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83205190
	if (cr6.eq) goto loc_83205190;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_83205190:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832028b8
	ctx.lr = 0x83205198;
	sub_832028B8(ctx, base);
	// lhz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
loc_8320519C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83205100
	if (cr6.lt) goto loc_83205100;
loc_832051B0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r10.u8);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// beq cr6,0x83205240
	if (cr6.eq) goto loc_83205240;
	// srawi r11,r27,27
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 27;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x8320523c
	if (!cr6.lt) goto loc_8320523C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// bge cr6,0x8320523c
	if (!cr6.lt) goto loc_8320523C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320523c
	if (cr6.eq) goto loc_8320523C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8320523c
	if (!cr6.gt) goto loc_8320523C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// beq cr6,0x83205240
	if (cr6.eq) goto loc_83205240;
loc_8320523C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83205240:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x83205254
	if (cr6.eq) goto loc_83205254;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x83207d78
	ctx.lr = 0x83205254;
	sub_83207D78(ctx, base);
loc_83205254:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320525C"))) PPC_WEAK_FUNC(sub_8320525C);
PPC_FUNC_IMPL(__imp__sub_8320525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205260"))) PPC_WEAK_FUNC(sub_83205260);
PPC_FUNC_IMPL(__imp__sub_83205260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83205268;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x83203c90
	ctx.lr = 0x83205284;
	sub_83203C90(ctx, base);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r5,168
	ctx.r5.s64 = 168;
	// addi r3,r10,24688
	ctx.r3.s64 = ctx.r10.s64 + 24688;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83294018
	ctx.lr = 0x8320529C;
	sub_83294018(ctx, base);
	// bl 0x83209450
	ctx.lr = 0x832052A0;
	sub_83209450(ctx, base);
	// bl 0x832086e8
	ctx.lr = 0x832052A4;
	sub_832086E8(ctx, base);
	// lis r29,-32221
	ctx.r29.s64 = -2111635456;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r28,r29,18088
	ctx.r28.s64 = ctx.r29.s64 + 18088;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r4,r9,26336
	ctx.r4.s64 = ctx.r9.s64 + 26336;
	// addi r3,r8,25448
	ctx.r3.s64 = ctx.r8.s64 + 25448;
	// lwz r7,18088(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18088);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r10,96
	ctx.r10.s64 = 96;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r9,72
	ctx.r9.s64 = 72;
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x83207e30
	ctx.lr = 0x832052D8;
	sub_83207E30(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x832052DC;
	sub_83102DB0(ctx, base);
	// bl 0x83220c58
	ctx.lr = 0x832052E0;
	sub_83220C58(ctx, base);
	// bl 0x8322a440
	ctx.lr = 0x832052E4;
	sub_8322A440(ctx, base);
	// bl 0x832075b0
	ctx.lr = 0x832052E8;
	sub_832075B0(ctx, base);
	// bl 0x831ff7a8
	ctx.lr = 0x832052EC;
	sub_831FF7A8(ctx, base);
	// bl 0x8324e890
	ctx.lr = 0x832052F0;
	sub_8324E890(ctx, base);
	// bl 0x8323d930
	ctx.lr = 0x832052F4;
	sub_8323D930(ctx, base);
	// bl 0x832374a8
	ctx.lr = 0x832052F8;
	sub_832374A8(ctx, base);
	// bl 0x8325a9e0
	ctx.lr = 0x832052FC;
	sub_8325A9E0(ctx, base);
	// bl 0x83235a18
	ctx.lr = 0x83205300;
	sub_83235A18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83206b50
	ctx.lr = 0x83205308;
	sub_83206B50(ctx, base);
	// bl 0x8325b7b8
	ctx.lr = 0x8320530C;
	sub_8325B7B8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83205310;
	sub_83102DB0(ctx, base);
	// bl 0x831ff8a0
	ctx.lr = 0x83205314;
	sub_831FF8A0(ctx, base);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r3,r7,26320
	ctx.r3.s64 = ctx.r7.s64 + 26320;
	// bl 0x83298020
	ctx.lr = 0x83205324;
	sub_83298020(ctx, base);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r6,26300
	ctx.r3.s64 = ctx.r6.s64 + 26300;
	// bl 0x83298020
	ctx.lr = 0x83205334;
	sub_83298020(ctx, base);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r5,26280
	ctx.r3.s64 = ctx.r5.s64 + 26280;
	// bl 0x83298020
	ctx.lr = 0x83205344;
	sub_83298020(ctx, base);
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// lwz r4,18088(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18088);
	// addi r3,r3,26260
	ctx.r3.s64 = ctx.r3.s64 + 26260;
	// bl 0x83298020
	ctx.lr = 0x83205354;
	sub_83298020(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320535C"))) PPC_WEAK_FUNC(sub_8320535C);
PPC_FUNC_IMPL(__imp__sub_8320535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205360"))) PPC_WEAK_FUNC(sub_83205360);
PPC_FUNC_IMPL(__imp__sub_83205360) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1975
	cr6.compare<uint32_t>(ctx.r11.u32, 1975, xer);
	// bgt cr6,0x832053e4
	if (cr6.gt) goto loc_832053E4;
	// beq cr6,0x832053a8
	if (cr6.eq) goto loc_832053A8;
	// cmplwi cr6,r11,1908
	cr6.compare<uint32_t>(ctx.r11.u32, 1908, xer);
	// beq cr6,0x8320539c
	if (cr6.eq) goto loc_8320539C;
	// cmplwi cr6,r11,1909
	cr6.compare<uint32_t>(ctx.r11.u32, 1909, xer);
	// bne cr6,0x832053ec
	if (!cr6.eq) goto loc_832053EC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,25432
	ctx.r4.s64 = ctx.r11.s64 + 25432;
	// b 0x8320540c
	goto loc_8320540C;
loc_8320539C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,26084
	ctx.r4.s64 = ctx.r11.s64 + 26084;
	// b 0x8320540c
	goto loc_8320540C;
loc_832053A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x83203c90
	ctx.lr = 0x832053C0;
	sub_83203C90(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r10,26360
	ctx.r5.s64 = ctx.r10.s64 + 26360;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83297a40
	ctx.lr = 0x832053D8;
	sub_83297A40(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83205410
	goto loc_83205410;
loc_832053E4:
	// cmplwi cr6,r11,1986
	cr6.compare<uint32_t>(ctx.r11.u32, 1986, xer);
	// beq cr6,0x83205404
	if (cr6.eq) goto loc_83205404;
loc_832053EC:
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83205404:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,26088
	ctx.r4.s64 = ctx.r11.s64 + 26088;
loc_8320540C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_83205410:
	// bl 0x83223a60
	ctx.lr = 0x83205414;
	sub_83223A60(ctx, base);
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

__attribute__((alias("__imp__sub_8320542C"))) PPC_WEAK_FUNC(sub_8320542C);
PPC_FUNC_IMPL(__imp__sub_8320542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205430"))) PPC_WEAK_FUNC(sub_83205430);
PPC_FUNC_IMPL(__imp__sub_83205430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83205438;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x832043c8
	ctx.lr = 0x83205464;
	sub_832043C8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83205550
	if (!cr6.gt) goto loc_83205550;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83205488:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832054a0
	if (!cr6.eq) goto loc_832054A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832054b0
	goto loc_832054B0;
loc_832054A0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_832054B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83205538
	if (cr6.eq) goto loc_83205538;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83205538
	if (!cr6.eq) goto loc_83205538;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x832054e0
	if (cr6.eq) goto loc_832054E0;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// beq cr6,0x83205538
	if (cr6.eq) goto loc_83205538;
loc_832054E0:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// beq cr6,0x83205518
	if (cr6.eq) goto loc_83205518;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83205538
	if (cr6.eq) goto loc_83205538;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,348(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// bl 0x831ffd50
	ctx.lr = 0x83205500;
	sub_831FFD50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83205554
	if (cr6.lt) goto loc_83205554;
	// ble cr6,0x83205538
	if (!cr6.gt) goto loc_83205538;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83205520
	if (!cr6.eq) goto loc_83205520;
loc_83205518:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83205520:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x83205530
	if (!cr6.eq) goto loc_83205530;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x83205538
	goto loc_83205538;
loc_83205530:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83204258
	ctx.lr = 0x83205538;
	sub_83204258(ctx, base);
loc_83205538:
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83205488
	if (cr6.lt) goto loc_83205488;
loc_83205550:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_83205554:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320555C"))) PPC_WEAK_FUNC(sub_8320555C);
PPC_FUNC_IMPL(__imp__sub_8320555C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205560"))) PPC_WEAK_FUNC(sub_83205560);
PPC_FUNC_IMPL(__imp__sub_83205560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83205568;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lhz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// rlwinm r23,r10,31,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r10.u32);
	// ble cr6,0x8320563c
	if (!cr6.gt) goto loc_8320563C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_832055AC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r31,r26,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832055c4
	if (!cr6.eq) goto loc_832055C4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x832055d0
	goto loc_832055D0;
loc_832055C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_832055D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320561c
	if (cr6.eq) goto loc_8320561C;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83205618
	if (cr6.eq) goto loc_83205618;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831feec8
	ctx.lr = 0x832055F8;
	sub_831FEEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832056b8
	if (cr6.eq) goto loc_832056B8;
	// lhz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320568c
	if (cr6.eq) goto loc_8320568C;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// sth r11,24(r30)
	PPC_STORE_U16(ctx.r30.u32 + 24, ctx.r11.u16);
loc_83205618:
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_8320561C:
	// lhz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x832055ac
	if (cr6.lt) goto loc_832055AC;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
loc_8320563C:
	// clrlwi r9,r23,24
	ctx.r9.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83205650
	if (!cr6.eq) goto loc_83205650;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r10.u32);
loc_83205650:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83205680
	if (!cr6.eq) goto loc_83205680;
	// addi r10,r24,7
	ctx.r10.s64 = ctx.r24.s64 + 7;
	// rlwinm r3,r10,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bge cr6,0x83205670
	if (!cr6.lt) goto loc_83205670;
	// li r3,8
	ctx.r3.s64 = 8;
loc_83205670:
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bge cr6,0x83205680
	if (!cr6.lt) goto loc_83205680;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ffa40
	ctx.lr = 0x83205680;
	sub_831FFA40(ctx, base);
loc_83205680:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8320568C:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r11,33(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 33);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x83205430
	ctx.lr = 0x832056A8;
	sub_83205430(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832056e8
	if (cr6.gt) goto loc_832056E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fe7e0
	ctx.lr = 0x832056B8;
	sub_831FE7E0(ctx, base);
loc_832056B8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832056cc
	if (cr6.eq) goto loc_832056CC;
	// bl 0x83209d68
	ctx.lr = 0x832056C8;
	sub_83209D68(ctx, base);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_832056CC:
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// stb r27,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r27.u8);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// b 0x8320561c
	goto loc_8320561C;
loc_832056E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831ff530
	ctx.lr = 0x832056F0;
	sub_831FF530(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r4,r9,25608
	ctx.r4.s64 = ctx.r9.s64 + 25608;
	// lwz r9,384(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// addi r3,r8,25448
	ctx.r3.s64 = ctx.r8.s64 + 25448;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x83208568
	ctx.lr = 0x83205720;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83205720"))) PPC_WEAK_FUNC(sub_83205720);
PPC_FUNC_IMPL(__imp__sub_83205720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83205728;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83205560
	ctx.lr = 0x83205730;
	sub_83205560(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r22,r11,25448
	ctx.r22.s64 = ctx.r11.s64 + 25448;
	// addi r21,r10,-22544
	ctx.r21.s64 = ctx.r10.s64 + -22544;
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8320587c
	if (!cr6.gt) goto loc_8320587C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r11,26460
	ctx.r4.s64 = ctx.r11.s64 + 26460;
	// bl 0x832083d0
	ctx.lr = 0x8320576C;
	sub_832083D0(ctx, base);
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8320585c
	if (!cr6.gt) goto loc_8320585C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r27,r11,26428
	ctx.r27.s64 = ctx.r11.s64 + 26428;
loc_8320578C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832057a4
	if (!cr6.eq) goto loc_832057A4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x832057b4
	goto loc_832057B4;
loc_832057A4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_832057B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320583c
	if (cr6.eq) goto loc_8320583C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r23,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r23.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832057f4
	if (!cr6.eq) goto loc_832057F4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r23,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r23.u32);
	// b 0x83205814
	goto loc_83205814;
loc_832057F4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83207d78
	ctx.lr = 0x83205814;
	sub_83207D78(ctx, base);
loc_83205814:
	// lwz r6,384(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83205824
	if (!cr6.eq) goto loc_83205824;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_83205824:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832083d0
	ctx.lr = 0x83205834;
	sub_832083D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff210
	ctx.lr = 0x8320583C;
	sub_831FF210(ctx, base);
loc_8320583C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x83205844;
	sub_83209D68(ctx, base);
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8320578c
	if (cr6.lt) goto loc_8320578C;
loc_8320585C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320587c
	if (cr6.eq) goto loc_8320587C;
	// bl 0x83209d68
	ctx.lr = 0x8320586C;
	sub_83209D68(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// sth r23,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r23.u16);
loc_8320587C:
	// bl 0x83204150
	ctx.lr = 0x83205880;
	sub_83204150(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r23,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r23.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stw r23,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r23.u32);
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83205a18
	if (!cr6.gt) goto loc_83205A18;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// ble cr6,0x832059b0
	if (!cr6.gt) goto loc_832059B0;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r25,r9,26396
	ctx.r25.s64 = ctx.r9.s64 + 26396;
	// addi r24,r11,26368
	ctx.r24.s64 = ctx.r11.s64 + 26368;
loc_832058EC:
	// lwzx r30,r28,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83205900
	if (!cr6.eq) goto loc_83205900;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x8320590c
	goto loc_8320590C;
loc_83205900:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8320590C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320599c
	if (cr6.eq) goto loc_8320599C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83205938
	if (!cr6.eq) goto loc_83205938;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x832083d0
	ctx.lr = 0x83205938;
	sub_832083D0(ctx, base);
loc_83205938:
	// lwz r6,92(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83205948
	if (!cr6.eq) goto loc_83205948;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_83205948:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832083d0
	ctx.lr = 0x83205958;
	sub_832083D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831feec8
	ctx.lr = 0x83205960;
	sub_831FEEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83205974
	if (cr6.eq) goto loc_83205974;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831fe7e0
	ctx.lr = 0x83205974;
	sub_831FE7E0(ctx, base);
loc_83205974:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x8320597C;
	sub_83209D68(ctx, base);
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
	// stb r23,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r23.u8);
	// stw r23,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r23.u32);
	// stw r23,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r23.u32);
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r23.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
loc_8320599C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x832058ec
	if (cr6.lt) goto loc_832058EC;
loc_832059B0:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832059f8
	if (!cr6.gt) goto loc_832059F8;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_832059C0:
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832059e4
	if (cr6.eq) goto loc_832059E4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83209d68
	ctx.lr = 0x832059D4;
	sub_83209D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r23,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
loc_832059E4:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x832059c0
	if (cr6.lt) goto loc_832059C0;
loc_832059F8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83205a0c
	if (cr6.eq) goto loc_83205A0C;
	// bl 0x83209d68
	ctx.lr = 0x83205A04;
	sub_83209D68(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
loc_83205A0C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_83205A18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x83205A28;
	sub_83294018(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stb r23,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r23.u8);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// stb r23,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r23.u8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r11,6144
	ctx.r11.s64 = 6144;
	// ori r10,r10,1023
	ctx.r10.u64 = ctx.r10.u64 | 1023;
	// addi r7,r8,5696
	ctx.r7.s64 = ctx.r8.s64 + 5696;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r9,2303
	ctx.r9.u64 = ctx.r9.u64 | 2303;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lfs f0,148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r10.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83205A8C"))) PPC_WEAK_FUNC(sub_83205A8C);
PPC_FUNC_IMPL(__imp__sub_83205A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205A90"))) PPC_WEAK_FUNC(sub_83205A90);
PPC_FUNC_IMPL(__imp__sub_83205A90) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83204500
	ctx.lr = 0x83205AA4;
	sub_83204500(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x832043c8
	ctx.lr = 0x83205AB0;
	sub_832043C8(ctx, base);
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83205ACC"))) PPC_WEAK_FUNC(sub_83205ACC);
PPC_FUNC_IMPL(__imp__sub_83205ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83205AD0"))) PPC_WEAK_FUNC(sub_83205AD0);
PPC_FUNC_IMPL(__imp__sub_83205AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83205AD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83205ca4
	if (cr6.eq) goto loc_83205CA4;
	// srawi r11,r3,27
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 27;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83205ca4
	if (cr6.eq) goto loc_83205CA4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83205ca4
	if (cr6.eq) goto loc_83205CA4;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r28,r11,24688
	ctx.r28.s64 = ctx.r11.s64 + 24688;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83205ca4
	if (!cr6.eq) goto loc_83205CA4;
	// clrlwi r31,r5,24
	ctx.r31.u64 = ctx.r5.u32 & 0xFF;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addic r10,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r8,r11,-22544
	ctx.r8.s64 = ctx.r11.s64 + -22544;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 & ctx.r8.u64;
	// bl 0x831fef88
	ctx.lr = 0x83205B3C;
	sub_831FEF88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83205ca4
	if (cr6.eq) goto loc_83205CA4;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83205b98
	if (cr6.eq) goto loc_83205B98;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83205b80
	if (!cr6.eq) goto loc_83205B80;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83205b78
	if (cr6.eq) goto loc_83205B78;
	// li r3,-22
	ctx.r3.s64 = -22;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83205B78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_83205B80:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83205B98:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83205c04
	if (cr6.eq) goto loc_83205C04;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83205be0
	if (cr6.eq) goto loc_83205BE0;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83205bd4
	if (cr6.eq) goto loc_83205BD4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,26484
	ctx.r4.s64 = ctx.r11.s64 + 26484;
	// addi r3,r10,25448
	ctx.r3.s64 = ctx.r10.s64 + 25448;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83208568
	ctx.lr = 0x83205BD4;
	sub_83208568(ctx, base);
loc_83205BD4:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,0,31,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r11.u64 & 0xFE);
	// stb r11,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r11.u8);
loc_83205BE0:
	// lhz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83205c04
	if (cr6.eq) goto loc_83205C04;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,24(r30)
	PPC_STORE_U16(ctx.r30.u32 + 24, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83205C04:
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83205c24
	if (!cr6.eq) goto loc_83205C24;
	// lwz r6,48(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
loc_83205C24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83205430
	ctx.lr = 0x83205C30;
	sub_83205430(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83205c6c
	if (!cr6.gt) goto loc_83205C6C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831ff530
	ctx.lr = 0x83205C40;
	sub_831FF530(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,25608
	ctx.r4.s64 = ctx.r10.s64 + 25608;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r9,384(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x83208568
	ctx.lr = 0x83205C6C;
	sub_83208568(ctx, base);
loc_83205C6C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83205c7c
	if (cr6.eq) goto loc_83205C7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fe7e0
	ctx.lr = 0x83205C7C;
	sub_831FE7E0(ctx, base);
loc_83205C7C:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r10.u8);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83205ca4
	if (!cr6.eq) goto loc_83205CA4;
	// bl 0x83205560
	ctx.lr = 0x83205C9C;
	sub_83205560(ctx, base);
	// bl 0x83208160
	ctx.lr = 0x83205CA0;
	sub_83208160(ctx, base);
	// bl 0x832091d8
	ctx.lr = 0x83205CA4;
	sub_832091D8(ctx, base);
loc_83205CA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83205CB0"))) PPC_WEAK_FUNC(sub_83205CB0);
PPC_FUNC_IMPL(__imp__sub_83205CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83205CB8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83206044
	if (cr6.gt) goto loc_83206044;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83205d74
	if (cr6.eq) goto loc_83205D74;
	// bdz 0x83206044
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83206044;
	// bdz 0x83206044
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83206044;
	// bdz 0x83205d00
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83205D00;
	// bdz 0x83206044
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83206044;
	// bdz 0x83206044
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83206044;
	// bdz 0x83205eac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83205EAC;
	// b 0x83205eac
	goto loc_83205EAC;
loc_83205D00:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,-22544
	ctx.r30.s64 = ctx.r11.s64 + -22544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831fef88
	ctx.lr = 0x83205D14;
	sub_831FEF88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83205d2c
	if (!cr6.eq) goto loc_83205D2C;
	// li r21,-3
	ctx.r21.s64 = -3;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83205D2C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83205ad0
	ctx.lr = 0x83205D40;
	sub_83205AD0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83206000
	if (!cr6.eq) goto loc_83206000;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83206000
	if (cr6.eq) goto loc_83206000;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83205D74:
	// clrlwi r26,r31,24
	ctx.r26.u64 = ctx.r31.u32 & 0xFF;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// bne cr6,0x83205d94
	if (!cr6.eq) goto loc_83205D94;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
loc_83205D94:
	// lhz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83205e4c
	if (!cr6.gt) goto loc_83205E4C;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_83205DAC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83205dc4
	if (!cr6.eq) goto loc_83205DC4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x83205dd0
	goto loc_83205DD0;
loc_83205DC4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83205DD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83205e38
	if (cr6.eq) goto loc_83205E38;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83205e28
	if (!cr6.eq) goto loc_83205E28;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831feec8
	ctx.lr = 0x83205DF0;
	sub_831FEEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83205e28
	if (cr6.eq) goto loc_83205E28;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r11,33(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 33);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x83205430
	ctx.lr = 0x83205E18;
	sub_83205430(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x83205e74
	if (cr6.gt) goto loc_83205E74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fe7e0
	ctx.lr = 0x83205E28;
	sub_831FE7E0(ctx, base);
loc_83205E28:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// lhz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
loc_83205E38:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83205dac
	if (cr6.lt) goto loc_83205DAC;
loc_83205E4C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83206000
	if (!cr6.eq) goto loc_83206000;
	// bl 0x83205560
	ctx.lr = 0x83205E58;
	sub_83205560(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// bl 0x83208160
	ctx.lr = 0x83205E68;
	sub_83208160(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83205E74:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831ff530
	ctx.lr = 0x83205E7C;
	sub_831FF530(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r4,r9,25608
	ctx.r4.s64 = ctx.r9.s64 + 25608;
	// lwz r9,384(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// addi r3,r8,25448
	ctx.r3.s64 = ctx.r8.s64 + 25448;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x83208568
	ctx.lr = 0x83205EAC;
	sub_83208568(ctx, base);
loc_83205EAC:
	// clrlwi r23,r31,24
	ctx.r23.u64 = ctx.r31.u32 & 0xFF;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// bne cr6,0x83205ecc
	if (!cr6.eq) goto loc_83205ECC;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
loc_83205ECC:
	// lhz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83205fe4
	if (!cr6.gt) goto loc_83205FE4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_83205EF0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83205f08
	if (!cr6.eq) goto loc_83205F08;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x83205f14
	goto loc_83205F14;
loc_83205F08:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83205F14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83205fcc
	if (cr6.eq) goto loc_83205FCC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// blt cr6,0x83205fcc
	if (cr6.lt) goto loc_83205FCC;
	// cmpwi cr6,r22,8
	cr6.compare<int32_t>(ctx.r22.s32, 8, xer);
	// bne cr6,0x83205f40
	if (!cr6.eq) goto loc_83205F40;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bne cr6,0x83205fcc
	if (!cr6.eq) goto loc_83205FCC;
loc_83205F40:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x83205fc0
	if (!cr6.eq) goto loc_83205FC0;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831feec8
	ctx.lr = 0x83205F54;
	sub_831FEEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83205fc0
	if (cr6.eq) goto loc_83205FC0;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83205fc0
	if (!cr6.eq) goto loc_83205FC0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// rlwimi r10,r24,0,31,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r10.u64 & 0xFE);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
	// beq cr6,0x83205f94
	if (cr6.eq) goto loc_83205F94;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// b 0x83205fcc
	goto loc_83205FCC;
loc_83205F94:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r11,33(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 33);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x83205430
	ctx.lr = 0x83205FB0;
	sub_83205430(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8320600c
	if (cr6.gt) goto loc_8320600C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fe7e0
	ctx.lr = 0x83205FC0;
	sub_831FE7E0(ctx, base);
loc_83205FC0:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
loc_83205FCC:
	// lhz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// blt cr6,0x83205ef0
	if (cr6.lt) goto loc_83205EF0;
loc_83205FE4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x83206000
	if (!cr6.eq) goto loc_83206000;
	// bl 0x83205560
	ctx.lr = 0x83205FF0;
	sub_83205560(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// bl 0x83208160
	ctx.lr = 0x83206000;
	sub_83208160(ctx, base);
loc_83206000:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8320600C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831ff530
	ctx.lr = 0x83206014;
	sub_831FF530(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r4,r9,25608
	ctx.r4.s64 = ctx.r9.s64 + 25608;
	// lwz r9,384(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// addi r3,r8,25448
	ctx.r3.s64 = ctx.r8.s64 + 25448;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x83208568
	ctx.lr = 0x83206044;
	sub_83208568(ctx, base);
loc_83206044:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25524
	ctx.r4.s64 = ctx.r10.s64 + 25524;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// bl 0x83208568
	ctx.lr = 0x83206064;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83206064"))) PPC_WEAK_FUNC(sub_83206064);
PPC_FUNC_IMPL(__imp__sub_83206064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206068"))) PPC_WEAK_FUNC(sub_83206068);
PPC_FUNC_IMPL(__imp__sub_83206068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83206074
	if (!cr6.eq) goto loc_83206074;
	// blr 
	return;
loc_83206074:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-22544
	ctx.r6.s64 = ctx.r11.s64 + -22544;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83205ad0
	sub_83205AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320608C"))) PPC_WEAK_FUNC(sub_8320608C);
PPC_FUNC_IMPL(__imp__sub_8320608C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206090"))) PPC_WEAK_FUNC(sub_83206090);
PPC_FUNC_IMPL(__imp__sub_83206090) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31748
	ctx.r31.s64 = -2080636928;
	// lwz r11,24876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24876);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832060cc
	if (!cr6.eq) goto loc_832060CC;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x83203c90
	ctx.lr = 0x832060C4;
	sub_83203C90(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,24876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24876, ctx.r11.u32);
loc_832060CC:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,24856
	ctx.r7.s64 = ctx.r9.s64 + 24856;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24856(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24856, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,29,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// rlwinm r6,r30,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320611c
	if (cr6.eq) goto loc_8320611C;
	// bl 0x832045e8
	ctx.lr = 0x8320611C;
	sub_832045E8(ctx, base);
loc_8320611C:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320612c
	if (cr6.eq) goto loc_8320612C;
	// bl 0x83205560
	ctx.lr = 0x8320612C;
	sub_83205560(ctx, base);
loc_8320612C:
	// rlwinm r11,r30,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320613c
	if (cr6.eq) goto loc_8320613C;
	// bl 0x83208160
	ctx.lr = 0x8320613C;
	sub_83208160(ctx, base);
loc_8320613C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
	// bl 0x83206600
	ctx.lr = 0x83206148;
	sub_83206600(ctx, base);
	// bl 0x832050c0
	ctx.lr = 0x8320614C;
	sub_832050C0(ctx, base);
	// bl 0x8323daf8
	ctx.lr = 0x83206150;
	sub_8323DAF8(ctx, base);
	// bl 0x83235ce8
	ctx.lr = 0x83206154;
	sub_83235CE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83206170"))) PPC_WEAK_FUNC(sub_83206170);
PPC_FUNC_IMPL(__imp__sub_83206170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83206178;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x832061a4
	if (!cr6.gt) goto loc_832061A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832061A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832063d4
	if (!cr6.eq) goto loc_832063D4;
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// bne cr6,0x832061bc
	if (!cr6.eq) goto loc_832061BC;
	// bl 0x83206090
	ctx.lr = 0x832061BC;
	sub_83206090(ctx, base);
loc_832061BC:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x832063e4
	if (cr6.gt) goto loc_832063E4;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r31,r10,24688
	ctx.r31.s64 = ctx.r10.s64 + 24688;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8320627c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8320627C;
	// bdzf 4*cr6+eq,0x832061e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832061E8;
	// bdzf 4*cr6+eq,0x832063e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832063E4;
	// bne cr6,0x8320631c
	if (!cr6.eq) goto loc_8320631C;
loc_832061E8:
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832063a0
	if (!cr6.gt) goto loc_832063A0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83206200:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83206218
	if (!cr6.eq) goto loc_83206218;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83206228
	goto loc_83206228;
loc_83206218:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_83206228:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83206260
	if (cr6.eq) goto loc_83206260;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83206260
	if (!cr6.eq) goto loc_83206260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83202170
	ctx.lr = 0x83206250;
	sub_83202170(ctx, base);
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83206260
	if (cr6.eq) goto loc_83206260;
	// bl 0x832373c0
	ctx.lr = 0x83206260;
	sub_832373C0(ctx, base);
loc_83206260:
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x83206200
	if (cr6.lt) goto loc_83206200;
	// b 0x832063a0
	goto loc_832063A0;
loc_8320627C:
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832063a0
	if (!cr6.gt) goto loc_832063A0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83206294:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832062ac
	if (!cr6.eq) goto loc_832062AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832062bc
	goto loc_832062BC;
loc_832062AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_832062BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83206300
	if (cr6.eq) goto loc_83206300;
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x83206300
	if (!cr6.eq) goto loc_83206300;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83206300
	if (!cr6.eq) goto loc_83206300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83202170
	ctx.lr = 0x832062F0;
	sub_83202170(ctx, base);
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83206300
	if (cr6.eq) goto loc_83206300;
	// bl 0x832373c0
	ctx.lr = 0x83206300;
	sub_832373C0(ctx, base);
loc_83206300:
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x83206294
	if (cr6.lt) goto loc_83206294;
	// b 0x832063a0
	goto loc_832063A0;
loc_8320631C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ff530
	ctx.lr = 0x83206324;
	sub_831FF530(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83206358
	if (!cr6.eq) goto loc_83206358;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x832085e8
	ctx.lr = 0x83206350;
	sub_832085E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83206368
	goto loc_83206368;
loc_83206358:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_83206368:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832063a0
	if (cr6.eq) goto loc_832063A0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832063a0
	if (!cr6.eq) goto loc_832063A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83202170
	ctx.lr = 0x83206390;
	sub_83202170(ctx, base);
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832063a0
	if (cr6.eq) goto loc_832063A0;
	// bl 0x832373c0
	ctx.lr = 0x832063A0;
	sub_832373C0(ctx, base);
loc_832063A0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r10.u8);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bne cr6,0x832063d4
	if (!cr6.eq) goto loc_832063D4;
	// bl 0x83202d20
	ctx.lr = 0x832063D4;
	sub_83202D20(ctx, base);
loc_832063D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832063E4:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,25524
	ctx.r4.s64 = ctx.r10.s64 + 25524;
	// addi r3,r9,25448
	ctx.r3.s64 = ctx.r9.s64 + 25448;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x83208568
	ctx.lr = 0x83206404;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83206404"))) PPC_WEAK_FUNC(sub_83206404);
PPC_FUNC_IMPL(__imp__sub_83206404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206408"))) PPC_WEAK_FUNC(sub_83206408);
PPC_FUNC_IMPL(__imp__sub_83206408) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x83208160
	ctx.lr = 0x83206438;
	sub_83208160(ctx, base);
	// bl 0x83204150
	ctx.lr = 0x8320643C;
	sub_83204150(ctx, base);
	// bl 0x8323d948
	ctx.lr = 0x83206440;
	sub_8323D948(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8320644c
	if (cr6.eq) goto loc_8320644C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8320644C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83206480
	if (cr6.eq) goto loc_83206480;
	// bl 0x83259ef8
	ctx.lr = 0x8320645C;
	sub_83259EF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83206468
	if (cr6.eq) goto loc_83206468;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83206468:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83206480
	if (cr6.eq) goto loc_83206480;
	// bl 0x83209d68
	ctx.lr = 0x83206478;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83206480:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x832374c0
	ctx.lr = 0x83206488;
	sub_832374C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83206494
	if (cr6.eq) goto loc_83206494;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83206494:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832064ac
	if (cr6.eq) goto loc_832064AC;
	// bl 0x83209d68
	ctx.lr = 0x832064A4;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_832064AC:
	// bl 0x8325a9f8
	ctx.lr = 0x832064B0;
	sub_8325A9F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832064bc
	if (cr6.eq) goto loc_832064BC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832064BC:
	// bl 0x832371f8
	ctx.lr = 0x832064C0;
	sub_832371F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832064cc
	if (cr6.eq) goto loc_832064CC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832064CC:
	// bl 0x83207708
	ctx.lr = 0x832064D0;
	sub_83207708(ctx, base);
	// bl 0x83205720
	ctx.lr = 0x832064D4;
	sub_83205720(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832064e0
	if (cr6.eq) goto loc_832064E0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832064E0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x83208780
	ctx.lr = 0x832064F0;
	sub_83208780(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832064fc
	if (cr6.eq) goto loc_832064FC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832064FC:
	// bl 0x8325b958
	ctx.lr = 0x83206500;
	sub_8325B958(ctx, base);
	// bl 0x83209600
	ctx.lr = 0x83206504;
	sub_83209600(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83206510
	if (cr6.eq) goto loc_83206510;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83206510:
	// bl 0x83208828
	ctx.lr = 0x83206514;
	sub_83208828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83206520
	if (cr6.eq) goto loc_83206520;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83206520:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83206b50
	ctx.lr = 0x83206528;
	sub_83206B50(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83206550"))) PPC_WEAK_FUNC(sub_83206550);
PPC_FUNC_IMPL(__imp__sub_83206550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,248
	ctx.r10.s64 = 248;
	// addi r9,r11,24880
	ctx.r9.s64 = ctx.r11.s64 + 24880;
	// dcbt r9,r10
	// li r8,276
	ctx.r8.s64 = 276;
	// dcbt r9,r8
	// li r7,304
	ctx.r7.s64 = 304;
	// dcbt r9,r7
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206574"))) PPC_WEAK_FUNC(sub_83206574);
PPC_FUNC_IMPL(__imp__sub_83206574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206578"))) PPC_WEAK_FUNC(sub_83206578);
PPC_FUNC_IMPL(__imp__sub_83206578) {
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
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x832065a8
	if (!cr6.gt) goto loc_832065A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832065A8:
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x83209aa8
	ctx.lr = 0x832065BC;
	sub_83209AA8(ctx, base);
	// lhz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// lhz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// sth r7,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// sth r9,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r9.u16);
	// sth r8,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r8.u16);
	// lhz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// bl 0x83294018
	ctx.lr = 0x832065E8;
	sub_83294018(ctx, base);
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

__attribute__((alias("__imp__sub_832065FC"))) PPC_WEAK_FUNC(sub_832065FC);
PPC_FUNC_IMPL(__imp__sub_832065FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206600"))) PPC_WEAK_FUNC(sub_83206600);
PPC_FUNC_IMPL(__imp__sub_83206600) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,24880
	ctx.r31.s64 = ctx.r11.s64 + 24880;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// bl 0x83206578
	ctx.lr = 0x83206624;
	sub_83206578(ctx, base);
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// bl 0x83206578
	ctx.lr = 0x8320662C;
	sub_83206578(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x83206578
	ctx.lr = 0x83206634;
	sub_83206578(ctx, base);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r9,r10,24688
	ctx.r9.s64 = ctx.r10.s64 + 24688;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// rlwinm r9,r11,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// rlwinm r8,r11,22,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bctrl 
	ctx.lr = 0x832066A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832066d8
	if (!cr6.eq) goto loc_832066D8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r6,r11,26572
	ctx.r6.s64 = ctx.r11.s64 + 26572;
	// addi r5,r10,26556
	ctx.r5.s64 = ctx.r10.s64 + 26556;
	// addi r4,r9,26544
	ctx.r4.s64 = ctx.r9.s64 + 26544;
	// addi r3,r8,26532
	ctx.r3.s64 = ctx.r8.s64 + 26532;
	// bl 0x83208568
	ctx.lr = 0x832066D8;
	sub_83208568(ctx, base);
loc_832066D8:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83206708
	if (!cr6.eq) goto loc_83206708;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r6,r11,26524
	ctx.r6.s64 = ctx.r11.s64 + 26524;
	// addi r5,r10,26556
	ctx.r5.s64 = ctx.r10.s64 + 26556;
	// addi r4,r9,26544
	ctx.r4.s64 = ctx.r9.s64 + 26544;
	// addi r3,r8,26532
	ctx.r3.s64 = ctx.r8.s64 + 26532;
	// bl 0x83208568
	ctx.lr = 0x83206708;
	sub_83208568(ctx, base);
loc_83206708:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// fcfid f4,f0
	ctx.f4.f64 = double(ctx.f0.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// addi r7,r8,5696
	ctx.r7.s64 = ctx.r8.s64 + 5696;
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// lfs f0,132(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// lfs f13,220(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// frsp f0,f8
	ctx.f0.f64 = double(float(ctx.f8.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// frsp f0,f3
	ctx.f0.f64 = double(float(ctx.f3.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bctrl 
	ctx.lr = 0x832067D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f2
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// beq cr6,0x832067ec
	if (cr6.eq) goto loc_832067EC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832067EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320681c
	if (cr6.eq) goto loc_8320681C;
	// stfd f2,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,26604
	ctx.r4.s64 = ctx.r11.s64 + 26604;
	// addi r3,r10,26532
	ctx.r3.s64 = ctx.r10.s64 + 26532;
	// bl 0x83208568
	ctx.lr = 0x8320681C;
	sub_83208568(ctx, base);
loc_8320681C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x83206830
	if (!cr6.eq) goto loc_83206830;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83206830:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83206860
	if (cr6.eq) goto loc_83206860;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r6,r11,26596
	ctx.r6.s64 = ctx.r11.s64 + 26596;
	// addi r5,r10,26580
	ctx.r5.s64 = ctx.r10.s64 + 26580;
	// addi r4,r9,26544
	ctx.r4.s64 = ctx.r9.s64 + 26544;
	// addi r3,r8,26532
	ctx.r3.s64 = ctx.r8.s64 + 26532;
	// bl 0x83208568
	ctx.lr = 0x83206860;
	sub_83208568(ctx, base);
loc_83206860:
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

__attribute__((alias("__imp__sub_83206878"))) PPC_WEAK_FUNC(sub_83206878);
PPC_FUNC_IMPL(__imp__sub_83206878) {
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
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,24880
	ctx.r31.s64 = ctx.r10.s64 + 24880;
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// sth r11,266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 266, ctx.r11.u16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832068b0
	if (cr6.eq) goto loc_832068B0;
	// bl 0x83209d68
	ctx.lr = 0x832068A8;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
loc_832068B0:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r10,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r10.u16);
	// beq cr6,0x832068d8
	if (cr6.eq) goto loc_832068D8;
	// bl 0x83209d68
	ctx.lr = 0x832068D0;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_832068D8:
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r10,322(r31)
	PPC_STORE_U16(ctx.r31.u32 + 322, ctx.r10.u16);
	// beq cr6,0x8320691c
	if (cr6.eq) goto loc_8320691C;
	// bl 0x83209d68
	ctx.lr = 0x832068F8;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
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
loc_8320691C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83206938"))) PPC_WEAK_FUNC(sub_83206938);
PPC_FUNC_IMPL(__imp__sub_83206938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83206940;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83206a70
	if (cr6.eq) goto loc_83206A70;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lhz r7,18(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// mullw r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// sth r6,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r6.u16);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x832069a8
	if (cr6.lt) goto loc_832069A8;
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r5,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r5.u16);
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// bl 0x83209df8
	ctx.lr = 0x832069A4;
	sub_83209DF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_832069A8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lhz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r7,22(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// blt cr6,0x832069e8
	if (cr6.lt) goto loc_832069E8;
	// lhz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// lhz r7,14(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// add r6,r8,r30
	ctx.r6.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// sth r4,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r4.u16);
loc_832069E8:
	// sth r30,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r30.u16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83206a70
	if (!cr6.gt) goto loc_83206A70;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r7,r10,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
loc_83206A08:
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// ld r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// add r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// std r5,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// std r3,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r3.u64);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r30,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r30.u64);
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// std r4,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r4.u64);
	// std r5,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r5.u64);
	// bne 0x83206a08
	if (!cr0.eq) goto loc_83206A08;
loc_83206A70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206A78"))) PPC_WEAK_FUNC(sub_83206A78);
PPC_FUNC_IMPL(__imp__sub_83206A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// dcbt r0,r10
	// addi r3,r11,276
	ctx.r3.s64 = ctx.r11.s64 + 276;
	// b 0x83206938
	sub_83206938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206A90"))) PPC_WEAK_FUNC(sub_83206A90);
PPC_FUNC_IMPL(__imp__sub_83206A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r10,24880
	ctx.r9.s64 = ctx.r10.s64 + 24880;
	// lwz r10,312(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 312);
loc_83206AA8:
	// dcbt r11,r10
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x83206aa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83206AA8;
	// addi r3,r9,304
	ctx.r3.s64 = ctx.r9.s64 + 304;
	// b 0x83206938
	sub_83206938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206ABC"))) PPC_WEAK_FUNC(sub_83206ABC);
PPC_FUNC_IMPL(__imp__sub_83206ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206AC0"))) PPC_WEAK_FUNC(sub_83206AC0);
PPC_FUNC_IMPL(__imp__sub_83206AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// dcbt r0,r10
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// b 0x83206938
	sub_83206938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206AD8"))) PPC_WEAK_FUNC(sub_83206AD8);
PPC_FUNC_IMPL(__imp__sub_83206AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,14(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lhz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// mullw r11,r8,r6
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// sth r6,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r6.u16);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206B1C"))) PPC_WEAK_FUNC(sub_83206B1C);
PPC_FUNC_IMPL(__imp__sub_83206B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206B20"))) PPC_WEAK_FUNC(sub_83206B20);
PPC_FUNC_IMPL(__imp__sub_83206B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// b 0x83206ad8
	sub_83206AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206B30"))) PPC_WEAK_FUNC(sub_83206B30);
PPC_FUNC_IMPL(__imp__sub_83206B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r3,r11,276
	ctx.r3.s64 = ctx.r11.s64 + 276;
	// b 0x83206ad8
	sub_83206AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206B40"))) PPC_WEAK_FUNC(sub_83206B40);
PPC_FUNC_IMPL(__imp__sub_83206B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// b 0x83206ad8
	sub_83206AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206B50"))) PPC_WEAK_FUNC(sub_83206B50);
PPC_FUNC_IMPL(__imp__sub_83206B50) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,24880
	ctx.r30.s64 = ctx.r11.s64 + 24880;
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83206b80
	if (cr6.eq) goto loc_83206B80;
	// bl 0x8325be68
	ctx.lr = 0x83206B80;
	sub_8325BE68(ctx, base);
loc_83206B80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209508
	ctx.lr = 0x83206B88;
	sub_83209508(ctx, base);
	// stw r31,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83261508
	ctx.lr = 0x83206B98;
	sub_83261508(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r9,r11,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83206bc8
	if (cr6.eq) goto loc_83206BC8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83206bc8
	if (cr6.eq) goto loc_83206BC8;
	// bl 0x8325cf80
	ctx.lr = 0x83206BC4;
	sub_8325CF80(ctx, base);
	// b 0x83206bd0
	goto loc_83206BD0;
loc_83206BC8:
	// li r5,140
	ctx.r5.s64 = 140;
	// bl 0x831ce980
	ctx.lr = 0x83206BD0;
	sub_831CE980(ctx, base);
loc_83206BD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_83206BEC"))) PPC_WEAK_FUNC(sub_83206BEC);
PPC_FUNC_IMPL(__imp__sub_83206BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206BF0"))) PPC_WEAK_FUNC(sub_83206BF0);
PPC_FUNC_IMPL(__imp__sub_83206BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83206C04"))) PPC_WEAK_FUNC(sub_83206C04);
PPC_FUNC_IMPL(__imp__sub_83206C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206C08"))) PPC_WEAK_FUNC(sub_83206C08);
PPC_FUNC_IMPL(__imp__sub_83206C08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r10,24880
	ctx.r5.s64 = ctx.r10.s64 + 24880;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,76(r5)
	PPC_STORE_U32(ctx.r5.u32 + 76, ctx.r11.u32);
	// stw r10,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, ctx.r10.u32);
	// stw r9,84(r5)
	PPC_STORE_U32(ctx.r5.u32 + 84, ctx.r9.u32);
	// stw r8,88(r5)
	PPC_STORE_U32(ctx.r5.u32 + 88, ctx.r8.u32);
	// stw r7,92(r5)
	PPC_STORE_U32(ctx.r5.u32 + 92, ctx.r7.u32);
	// stw r6,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206C44"))) PPC_WEAK_FUNC(sub_83206C44);
PPC_FUNC_IMPL(__imp__sub_83206C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206C48"))) PPC_WEAK_FUNC(sub_83206C48);
PPC_FUNC_IMPL(__imp__sub_83206C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83206C50;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831d1ca8
	ctx.lr = 0x83206C68;
	sub_831D1CA8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831d18f0
	ctx.lr = 0x83206C80;
	sub_831D18F0(ctx, base);
	// lfs f12,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x83206C90;
	sub_831D1CA8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831d18f0
	ctx.lr = 0x83206CA8;
	sub_831D18F0(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// fctiwz f8,f31
	ctx.f8.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r30.s64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83206CE8"))) PPC_WEAK_FUNC(sub_83206CE8);
PPC_FUNC_IMPL(__imp__sub_83206CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r6,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// stw r3,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// beq cr6,0x83206d28
	if (cr6.eq) goto loc_83206D28;
	// stw r4,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r4.u32);
	// b 0x83206d30
	goto loc_83206D30;
loc_83206D28:
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_83206D30:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83206D4C"))) PPC_WEAK_FUNC(sub_83206D4C);
PPC_FUNC_IMPL(__imp__sub_83206D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206D50"))) PPC_WEAK_FUNC(sub_83206D50);
PPC_FUNC_IMPL(__imp__sub_83206D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bgt cr6,0x83206d64
	if (cr6.gt) goto loc_83206D64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83206d80
	goto loc_83206D80;
loc_83206D64:
	// cmplwi cr6,r5,53
	cr6.compare<uint32_t>(ctx.r5.u32, 53, xer);
	// bge cr6,0x83206d74
	if (!cr6.lt) goto loc_83206D74;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83206d80
	goto loc_83206D80;
loc_83206D74:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r5,86
	xer.ca = ctx.r5.u32 <= 86;
	ctx.r11.s64 = 86 - ctx.r5.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83206D80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83206da0
	if (!cr6.eq) goto loc_83206DA0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,26652
	ctx.r4.s64 = ctx.r11.s64 + 26652;
	// addi r3,r10,26532
	ctx.r3.s64 = ctx.r10.s64 + 26532;
	// b 0x83208568
	sub_83208568(ctx, base);
	return;
loc_83206DA0:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// stw r5,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206DB0"))) PPC_WEAK_FUNC(sub_83206DB0);
PPC_FUNC_IMPL(__imp__sub_83206DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83206DC4"))) PPC_WEAK_FUNC(sub_83206DC4);
PPC_FUNC_IMPL(__imp__sub_83206DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206DC8"))) PPC_WEAK_FUNC(sub_83206DC8);
PPC_FUNC_IMPL(__imp__sub_83206DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83206DDC"))) PPC_WEAK_FUNC(sub_83206DDC);
PPC_FUNC_IMPL(__imp__sub_83206DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206DE0"))) PPC_WEAK_FUNC(sub_83206DE0);
PPC_FUNC_IMPL(__imp__sub_83206DE0) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,97
	ctx.r8.s64 = ctx.r1.s64 + 97;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subfic r7,r4,2
	xer.ca = ctx.r4.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r4.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83206E18:
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83206e74
	if (cr6.eq) goto loc_83206E74;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83206e74
	if (cr6.eq) goto loc_83206E74;
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83206e74
	if (cr6.eq) goto loc_83206E74;
	// stbx r9,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83206e74
	if (cr6.eq) goto loc_83206E74;
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,128
	cr6.compare<int32_t>(ctx.r9.s32, 128, xer);
	// blt cr6,0x83206e18
	if (cr6.lt) goto loc_83206E18;
	// stb r4,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r4.u8);
loc_83206E74:
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255b10
	ctx.lr = 0x83206E80;
	sub_83255B10(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83206e8c
	if (!cr6.eq) goto loc_83206E8C;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_83206E8C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83206EA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r7,-4
	ctx.r7.s64 = -4;
	// addic r6,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ctx.r7.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206ED0"))) PPC_WEAK_FUNC(sub_83206ED0);
PPC_FUNC_IMPL(__imp__sub_83206ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,160(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83206EF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r7,-4
	ctx.r7.s64 = -4;
	// addic r6,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206F14"))) PPC_WEAK_FUNC(sub_83206F14);
PPC_FUNC_IMPL(__imp__sub_83206F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206F18"))) PPC_WEAK_FUNC(sub_83206F18);
PPC_FUNC_IMPL(__imp__sub_83206F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83206F2C"))) PPC_WEAK_FUNC(sub_83206F2C);
PPC_FUNC_IMPL(__imp__sub_83206F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206F30"))) PPC_WEAK_FUNC(sub_83206F30);
PPC_FUNC_IMPL(__imp__sub_83206F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r10,24880
	ctx.r9.s64 = ctx.r10.s64 + 24880;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,164(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83206F5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r6,-4
	ctx.r6.s64 = -4;
	// addic r5,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 & ctx.r6.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206F80"))) PPC_WEAK_FUNC(sub_83206F80);
PPC_FUNC_IMPL(__imp__sub_83206F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,172(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83206F9C"))) PPC_WEAK_FUNC(sub_83206F9C);
PPC_FUNC_IMPL(__imp__sub_83206F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206FA0"))) PPC_WEAK_FUNC(sub_83206FA0);
PPC_FUNC_IMPL(__imp__sub_83206FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83206fac
	if (!cr6.eq) goto loc_83206FAC;
	// blr 
	return;
loc_83206FAC:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83206FC0"))) PPC_WEAK_FUNC(sub_83206FC0);
PPC_FUNC_IMPL(__imp__sub_83206FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83206FDC"))) PPC_WEAK_FUNC(sub_83206FDC);
PPC_FUNC_IMPL(__imp__sub_83206FDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83206FE0"))) PPC_WEAK_FUNC(sub_83206FE0);
PPC_FUNC_IMPL(__imp__sub_83206FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83206FF4"))) PPC_WEAK_FUNC(sub_83206FF4);
PPC_FUNC_IMPL(__imp__sub_83206FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83206FF8"))) PPC_WEAK_FUNC(sub_83206FF8);
PPC_FUNC_IMPL(__imp__sub_83206FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,184(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8320700C"))) PPC_WEAK_FUNC(sub_8320700C);
PPC_FUNC_IMPL(__imp__sub_8320700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207010"))) PPC_WEAK_FUNC(sub_83207010);
PPC_FUNC_IMPL(__imp__sub_83207010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83207024"))) PPC_WEAK_FUNC(sub_83207024);
PPC_FUNC_IMPL(__imp__sub_83207024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207028"))) PPC_WEAK_FUNC(sub_83207028);
PPC_FUNC_IMPL(__imp__sub_83207028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,200(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8320703C"))) PPC_WEAK_FUNC(sub_8320703C);
PPC_FUNC_IMPL(__imp__sub_8320703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207040"))) PPC_WEAK_FUNC(sub_83207040);
PPC_FUNC_IMPL(__imp__sub_83207040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,208(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83207054"))) PPC_WEAK_FUNC(sub_83207054);
PPC_FUNC_IMPL(__imp__sub_83207054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207058"))) PPC_WEAK_FUNC(sub_83207058);
PPC_FUNC_IMPL(__imp__sub_83207058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,216(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8320706C"))) PPC_WEAK_FUNC(sub_8320706C);
PPC_FUNC_IMPL(__imp__sub_8320706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207070"))) PPC_WEAK_FUNC(sub_83207070);
PPC_FUNC_IMPL(__imp__sub_83207070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83207090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r7,-4
	ctx.r7.s64 = -4;
	// addic r6,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832070B4"))) PPC_WEAK_FUNC(sub_832070B4);
PPC_FUNC_IMPL(__imp__sub_832070B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832070B8"))) PPC_WEAK_FUNC(sub_832070B8);
PPC_FUNC_IMPL(__imp__sub_832070B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r9,236(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832070CC"))) PPC_WEAK_FUNC(sub_832070CC);
PPC_FUNC_IMPL(__imp__sub_832070CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832070D0"))) PPC_WEAK_FUNC(sub_832070D0);
PPC_FUNC_IMPL(__imp__sub_832070D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stw r3,25216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25216, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832070DC"))) PPC_WEAK_FUNC(sub_832070DC);
PPC_FUNC_IMPL(__imp__sub_832070DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832070E0"))) PPC_WEAK_FUNC(sub_832070E0);
PPC_FUNC_IMPL(__imp__sub_832070E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stw r3,25220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25220, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832070EC"))) PPC_WEAK_FUNC(sub_832070EC);
PPC_FUNC_IMPL(__imp__sub_832070EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832070F0"))) PPC_WEAK_FUNC(sub_832070F0);
PPC_FUNC_IMPL(__imp__sub_832070F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832070F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,24880
	ctx.r31.s64 = ctx.r11.s64 + 24880;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83207154
	if (cr6.eq) goto loc_83207154;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// addi r29,r10,26532
	ctx.r29.s64 = ctx.r10.s64 + 26532;
	// beq cr6,0x8320712c
	if (cr6.eq) goto loc_8320712C;
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// bne cr6,0x83207140
	if (!cr6.eq) goto loc_83207140;
loc_8320712C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,26720
	ctx.r4.s64 = ctx.r11.s64 + 26720;
	// bl 0x83208330
	ctx.lr = 0x8320713C;
	sub_83208330(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
loc_83207140:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x83207160
	if (!cr6.eq) goto loc_83207160;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
loc_83207150:
	// beq cr6,0x832071b8
	if (cr6.eq) goto loc_832071B8;
loc_83207154:
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83207160:
	// cmplwi cr6,r5,256
	cr6.compare<uint32_t>(ctx.r5.u32, 256, xer);
	// beq cr6,0x83207188
	if (cr6.eq) goto loc_83207188;
	// cmplwi cr6,r5,512
	cr6.compare<uint32_t>(ctx.r5.u32, 512, xer);
	// beq cr6,0x832071a8
	if (cr6.eq) goto loc_832071A8;
	// lis r11,-32767
	ctx.r11.s64 = -2147418112;
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x83207190
	if (!cr6.eq) goto loc_83207190;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x832071b8
	if (cr6.eq) goto loc_832071B8;
loc_83207188:
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(ctx.r30.u32, 256, xer);
	// b 0x83207150
	goto loc_83207150;
loc_83207190:
	// lis r11,-32512
	ctx.r11.s64 = -2130706432;
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x832071b0
	if (!cr6.eq) goto loc_832071B0;
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(ctx.r30.u32, 256, xer);
	// beq cr6,0x832071b8
	if (cr6.eq) goto loc_832071B8;
loc_832071A8:
	// cmplwi cr6,r30,512
	cr6.compare<uint32_t>(ctx.r30.u32, 512, xer);
	// b 0x83207150
	goto loc_83207150;
loc_832071B0:
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x832071c4
	if (!cr6.eq) goto loc_832071C4;
loc_832071B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832071C4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,26680
	ctx.r4.s64 = ctx.r11.s64 + 26680;
	// bl 0x83208568
	ctx.lr = 0x832071D4;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_832071D4"))) PPC_WEAK_FUNC(sub_832071D4);
PPC_FUNC_IMPL(__imp__sub_832071D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832071D8"))) PPC_WEAK_FUNC(sub_832071D8);
PPC_FUNC_IMPL(__imp__sub_832071D8) {
	PPC_FUNC_PROLOGUE();
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x1)));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,24880
	ctx.r9.s64 = ctx.r11.s64 + 24880;
	// li r8,32
	ctx.r8.s64 = 32;
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r7,48
	ctx.r7.s64 = 48;
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v63,v62,1,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 1));
	// lwz r11,256(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// vrlimi128 v61,v62,8,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 8));
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// vrlimi128 v59,v62,2,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 2));
	// vcsxwfp128 v55,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v58,v61,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v57,v60,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vcsxwfp128 v56,v59,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// stvx128 v55,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320723C"))) PPC_WEAK_FUNC(sub_8320723C);
PPC_FUNC_IMPL(__imp__sub_8320723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207240"))) PPC_WEAK_FUNC(sub_83207240);
PPC_FUNC_IMPL(__imp__sub_83207240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,24880
	ctx.r9.s64 = ctx.r11.s64 + 24880;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,256(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_8320725C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8320725c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8320725C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320726C"))) PPC_WEAK_FUNC(sub_8320726C);
PPC_FUNC_IMPL(__imp__sub_8320726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207270"))) PPC_WEAK_FUNC(sub_83207270);
PPC_FUNC_IMPL(__imp__sub_83207270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r4,256(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83210238
	sub_83210238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207288"))) PPC_WEAK_FUNC(sub_83207288);
PPC_FUNC_IMPL(__imp__sub_83207288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r4,256(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83210238
	sub_83210238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832072AC"))) PPC_WEAK_FUNC(sub_832072AC);
PPC_FUNC_IMPL(__imp__sub_832072AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832072B0"))) PPC_WEAK_FUNC(sub_832072B0);
PPC_FUNC_IMPL(__imp__sub_832072B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r4,256(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x831fd368
	sub_831FD368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832072C4"))) PPC_WEAK_FUNC(sub_832072C4);
PPC_FUNC_IMPL(__imp__sub_832072C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832072C8"))) PPC_WEAK_FUNC(sub_832072C8);
PPC_FUNC_IMPL(__imp__sub_832072C8) {
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
	// lbz r11,173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lbz r9,172(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 172);
	// addi r5,r3,96
	ctx.r5.s64 = ctx.r3.s64 + 96;
	// addi r8,r10,24880
	ctx.r8.s64 = ctx.r10.s64 + 24880;
	// rlwinm r7,r11,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// or r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r4,256(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8320738c
	if (cr6.eq) goto loc_8320738C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8320735c
	if (cr6.eq) goto loc_8320735C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83207394
	if (!cr6.eq) goto loc_83207394;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f0,64(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f11,72(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f0,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x832102f8
	ctx.lr = 0x8320734C;
	sub_832102F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320735C:
	// lfs f0,72(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f13,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fneg f3,f0
	ctx.f3.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fneg f2,f13
	ctx.f2.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// bl 0x832105a8
	ctx.lr = 0x8320737C;
	sub_832105A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320738C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83210238
	ctx.lr = 0x83207394;
	sub_83210238(ctx, base);
loc_83207394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832073A4"))) PPC_WEAK_FUNC(sub_832073A4);
PPC_FUNC_IMPL(__imp__sub_832073A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832073A8"))) PPC_WEAK_FUNC(sub_832073A8);
PPC_FUNC_IMPL(__imp__sub_832073A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832073EC"))) PPC_WEAK_FUNC(sub_832073EC);
PPC_FUNC_IMPL(__imp__sub_832073EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832073F0"))) PPC_WEAK_FUNC(sub_832073F0);
PPC_FUNC_IMPL(__imp__sub_832073F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r10,24880
	ctx.r9.s64 = ctx.r10.s64 + 24880;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r11,256(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8320740C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8320740c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8320740C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320741C"))) PPC_WEAK_FUNC(sub_8320741C);
PPC_FUNC_IMPL(__imp__sub_8320741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207420"))) PPC_WEAK_FUNC(sub_83207420);
PPC_FUNC_IMPL(__imp__sub_83207420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// lhz r9,262(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 262);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83207488
	if (!cr6.eq) goto loc_83207488;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x1)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v63,v62,1,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 1));
	// vrlimi128 v61,v62,8,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 8));
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v59,v62,2,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 2));
	// vcsxwfp128 v55,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v58,v61,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v57,v60,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vcsxwfp128 v56,v59,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// stvx128 v55,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_83207488:
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// lhz r6,260(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 260);
	// lwz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// li r11,8
	ctx.r11.s64 = 8;
	// mullw r10,r7,r6
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r3,-8
	ctx.r8.s64 = ctx.r3.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_832074AC:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x832074ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832074AC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832074BC"))) PPC_WEAK_FUNC(sub_832074BC);
PPC_FUNC_IMPL(__imp__sub_832074BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832074C0"))) PPC_WEAK_FUNC(sub_832074C0);
PPC_FUNC_IMPL(__imp__sub_832074C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,24880
	ctx.r9.s64 = ctx.r11.s64 + 24880;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,284(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_832074DC:
	// ldu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x832074dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832074DC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,292(r9)
	PPC_STORE_U16(ctx.r9.u32 + 292, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832074F4"))) PPC_WEAK_FUNC(sub_832074F4);
PPC_FUNC_IMPL(__imp__sub_832074F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832074F8"))) PPC_WEAK_FUNC(sub_832074F8);
PPC_FUNC_IMPL(__imp__sub_832074F8) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r31,312(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbf68
	ctx.lr = 0x8320751C;
	sub_831FBF68(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x83210190
	ctx.lr = 0x83207524;
	sub_83210190(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r9,144
	ctx.r9.s64 = 144;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x831fbe28
	ctx.lr = 0x83207538;
	sub_831FBE28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r11.u8);
	// stb r10,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r10.u8);
	// stb r10,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r10.u8);
	// stb r11,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r11.u8);
	// stb r11,195(r31)
	PPC_STORE_U8(ctx.r31.u32 + 195, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83207568"))) PPC_WEAK_FUNC(sub_83207568);
PPC_FUNC_IMPL(__imp__sub_83207568) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r31,312(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbfe0
	ctx.lr = 0x83207594;
	sub_831FBFE0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_832075B0"))) PPC_WEAK_FUNC(sub_832075B0);
PPC_FUNC_IMPL(__imp__sub_832075B0) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,336
	ctx.r5.s64 = 336;
	// addi r31,r11,24880
	ctx.r31.s64 = ctx.r11.s64 + 24880;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x832075D8;
	sub_83294018(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r9,r9,26812
	ctx.r9.s64 = ctx.r9.s64 + 26812;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r10.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 266, ctx.r10.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r9,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r9.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r10,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r10.u16);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// sth r11,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r11.u16);
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r9,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r9.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,288(r31)
	PPC_STORE_U16(ctx.r31.u32 + 288, ctx.r10.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,270(r31)
	PPC_STORE_U16(ctx.r31.u32 + 270, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// sth r9,290(r31)
	PPC_STORE_U16(ctx.r31.u32 + 290, ctx.r9.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r10,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r10.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r8,r8,26792
	ctx.r8.s64 = ctx.r8.s64 + 26792;
	// sth r11,292(r31)
	PPC_STORE_U16(ctx.r31.u32 + 292, ctx.r11.u16);
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r9,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r9.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,300(r31)
	PPC_STORE_U16(ctx.r31.u32 + 300, ctx.r10.u16);
	// li r10,224
	ctx.r10.s64 = 224;
	// sth r11,298(r31)
	PPC_STORE_U16(ctx.r31.u32 + 298, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// addi r7,r7,26784
	ctx.r7.s64 = ctx.r7.s64 + 26784;
	// sth r10,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r10.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r9,318(r31)
	PPC_STORE_U16(ctx.r31.u32 + 318, ctx.r9.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// sth r11,320(r31)
	PPC_STORE_U16(ctx.r31.u32 + 320, ctx.r11.u16);
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r10,322(r31)
	PPC_STORE_U16(ctx.r31.u32 + 322, ctx.r10.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r9,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r9.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r11,326(r31)
	PPC_STORE_U16(ctx.r31.u32 + 326, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,328(r31)
	PPC_STORE_U16(ctx.r31.u32 + 328, ctx.r10.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r8,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r8.u32);
	// stw r7,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r7.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83207708"))) PPC_WEAK_FUNC(sub_83207708);
PPC_FUNC_IMPL(__imp__sub_83207708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r11,244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8325be68
	sub_8325BE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207720"))) PPC_WEAK_FUNC(sub_83207720);
PPC_FUNC_IMPL(__imp__sub_83207720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207724"))) PPC_WEAK_FUNC(sub_83207724);
PPC_FUNC_IMPL(__imp__sub_83207724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207728"))) PPC_WEAK_FUNC(sub_83207728);
PPC_FUNC_IMPL(__imp__sub_83207728) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,24880
	ctx.r31.s64 = ctx.r11.s64 + 24880;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320774C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x1)));
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v63,v62,1,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 1));
	// vrlimi128 v61,v62,8,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 8));
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v59,v62,2,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 2));
	// vcsxwfp128 v55,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v58,v61,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v57,v60,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vcsxwfp128 v56,v59,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x832074f8
	ctx.lr = 0x832077B0;
	sub_832074F8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x832077e0
	if (cr6.eq) goto loc_832077E0;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lfs f0,132(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_832077E0:
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

__attribute__((alias("__imp__sub_832077F4"))) PPC_WEAK_FUNC(sub_832077F4);
PPC_FUNC_IMPL(__imp__sub_832077F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832077F8"))) PPC_WEAK_FUNC(sub_832077F8);
PPC_FUNC_IMPL(__imp__sub_832077F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83207800;
	__savegprlr_15(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r11,24880
	ctx.r31.s64 = ctx.r11.s64 + 24880;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lhz r11,290(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 290);
	// lhz r9,292(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83207858
	if (cr6.eq) goto loc_83207858;
	// sth r11,292(r31)
	PPC_STORE_U16(ctx.r31.u32 + 292, ctx.r11.u16);
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83207854;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,290(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 290);
loc_83207858:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832078a8
	if (!cr6.eq) goto loc_832078A8;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,240(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,244(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// b 0x832078b4
	goto loc_832078B4;
loc_832078A8:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832078B4:
	// bctrl 
	ctx.lr = 0x832078B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r26,80
	ctx.r26.s64 = 80;
	// li r27,96
	ctx.r27.s64 = 96;
	// li r4,112
	ctx.r4.s64 = 112;
	// lbz r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83207a58
	if (cr6.eq) goto loc_83207A58;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,60
	ctx.r7.s64 = ctx.r11.s64 + 60;
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v59,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v58,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v57,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v56,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v55,v60,v57
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v54,v58,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f13,148(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// vmrghw128 v53,v63,v55
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// stfs f12,152(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// vmrghw128 v52,v59,v54
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// stfs f11,156(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// vmrglw128 v51,v63,v55
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v50,v59,v54
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrghw128 v49,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrglw128 v48,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrghw128 v47,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrglw128 v46,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// stvx128 v49,r11,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r11,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v47,r11,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f10,160(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,164(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,168(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lfs f7,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,172(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,176(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,180(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lfs f4,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,184(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// lfs f3,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,188(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r20,20(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r19,40(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r18,60(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lbz r17,195(r11)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r11.u32 + 195);
	// lwz r16,68(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r15,64(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// or r16,r16,r15
	ctx.r16.u64 = ctx.r16.u64 | ctx.r15.u64;
	// or r9,r16,r9
	ctx.r9.u64 = ctx.r16.u64 | ctx.r9.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// or r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 | ctx.r30.u64;
	// or r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 | ctx.r25.u64;
	// or r7,r8,r21
	ctx.r7.u64 = ctx.r8.u64 | ctx.r21.u64;
	// or r3,r7,r20
	ctx.r3.u64 = ctx.r7.u64 | ctx.r20.u64;
	// or r9,r3,r19
	ctx.r9.u64 = ctx.r3.u64 | ctx.r19.u64;
	// or r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 | ctx.r18.u64;
	// beq cr6,0x83207a14
	if (cr6.eq) goto loc_83207A14;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_83207A14:
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// clrlwi r7,r9,1
	ctx.r7.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r6,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r6.u8);
	// or r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 | ctx.r9.u64;
	// stb r7,194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 194, ctx.r7.u8);
	// or r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 | ctx.r8.u64;
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r3,196(r11)
	PPC_STORE_U8(ctx.r11.u32 + 196, ctx.r3.u8);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
loc_83207A58:
	// vspltisw128 v45,1
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_set1_epi32(int(0x1)));
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x0)));
	// lbz r25,194(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 194);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// vcsxwfp128 v63,v45,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// vor128 v62,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vor128 v13,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// bne cr6,0x83207aac
	if (!cr6.eq) goto loc_83207AAC;
	// rlwinm r10,r28,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80000000;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// b 0x83207c40
	goto loc_83207C40;
loc_83207AAC:
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r29,10
	cr6.compare<int32_t>(ctx.r29.s32, 10, xer);
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r9,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lvx128 v0,r31,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bne cr6,0x83207adc
	if (!cr6.eq) goto loc_83207ADC;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x83207b28
	goto loc_83207B28;
loc_83207ADC:
	// rlwinm r7,r28,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83207afc
	if (cr6.eq) goto loc_83207AFC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,26820
	ctx.r4.s64 = ctx.r11.s64 + 26820;
	// addi r3,r10,26532
	ctx.r3.s64 = ctx.r10.s64 + 26532;
	// bl 0x83208568
	ctx.lr = 0x83207AFC;
	sub_83208568(ctx, base);
loc_83207AFC:
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83207b18
	if (cr6.eq) goto loc_83207B18;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x83207b28
	goto loc_83207B28;
loc_83207B18:
	// clrlwi r7,r25,24
	ctx.r7.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83207b28
	if (cr6.eq) goto loc_83207B28;
	// vmaddfp v13,v12,v0,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
loc_83207B28:
	// clrlwi r7,r25,24
	ctx.r7.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83207bd8
	if (!cr6.eq) goto loc_83207BD8;
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// li r8,6
	ctx.r8.s64 = 6;
	// stb r6,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r6.u8);
	// li r7,144
	ctx.r7.s64 = 144;
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// vspltw128 v44,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stb r6,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r6.u8);
	// lvx128 v43,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r11,r26
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v42,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v40,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lvx128 v35,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v39,v41,v44
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v44.f32)));
	// lvx128 v37,r11,r4
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v38,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v34,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v33,v34,v42
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmulfp128 v32,v37,v40
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v40.f32)));
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// vmulfp128 v36,v43,v38
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v38.f32)));
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// stvlx128 v39,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// vor128 v13,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r30,r1,180
	ctx.r30.s64 = ctx.r1.s64 + 180;
	// stvrx128 v39,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v39.u8[i]);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// stvlx128 v33,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// addi r29,r1,180
	ctx.r29.s64 = ctx.r1.s64 + 180;
	// stvrx128 v33,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v33.u8[i]);
	// addi r28,r1,196
	ctx.r28.s64 = ctx.r1.s64 + 196;
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stvlx128 v32,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// stvrx128 v32,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v32.u8[i]);
	// stvlx128 v36,r0,r30
	ea = ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvrx128 v36,r29,r10
	ea = ctx.r29.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v36.u8[i]);
	// stvlx128 v35,r0,r28
	ea = ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvrx128 v35,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
loc_83207BD8:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83207c30
	if (cr6.eq) goto loc_83207C30;
	// lbz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 196);
	// vmulfp128 v13,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83207c30
	if (cr6.eq) goto loc_83207C30;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// vor128 v62,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 != 0) | (xer.ca != 0);
	ctx.r8.s64 = ctx.r9.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// ble cr6,0x83207c30
	if (!cr6.gt) goto loc_83207C30;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83207c30
	if (cr6.eq) goto loc_83207C30;
	// vaddfp v13,v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vor128 v62,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
loc_83207C30:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_83207C40:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// clrlwi r29,r25,24
	ctx.r29.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x83207c84
	if (!cr6.eq) goto loc_83207C84;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83207c84
	if (cr6.eq) goto loc_83207C84;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83207C80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_83207C84:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83207c9c
	if (cr6.eq) goto loc_83207C9C;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83207C9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83207C9C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83207ccc
	if (!cr6.eq) goto loc_83207CCC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x83207ccc
	if (!cr6.eq) goto loc_83207CCC;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// b 0x83207cec
	goto loc_83207CEC;
loc_83207CCC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83207CEC:
	// bctrl 
	ctx.lr = 0x83207CF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83207d1c
	if (!cr6.eq) goto loc_83207D1C;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83207d1c
	if (cr6.eq) goto loc_83207D1C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83207D1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83207D1C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207D24"))) PPC_WEAK_FUNC(sub_83207D24);
PPC_FUNC_IMPL(__imp__sub_83207D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207D28"))) PPC_WEAK_FUNC(sub_83207D28);
PPC_FUNC_IMPL(__imp__sub_83207D28) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832077f8
	sub_832077F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207D40"))) PPC_WEAK_FUNC(sub_83207D40);
PPC_FUNC_IMPL(__imp__sub_83207D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207D58"))) PPC_WEAK_FUNC(sub_83207D58);
PPC_FUNC_IMPL(__imp__sub_83207D58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lwz r11,25224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25224);
	// andc r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// or r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r11,25224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25224, ctx.r11.u32);
	// stw r11,5968(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207D78"))) PPC_WEAK_FUNC(sub_83207D78);
PPC_FUNC_IMPL(__imp__sub_83207D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,25224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25224);
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// stw r11,5968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207D90"))) PPC_WEAK_FUNC(sub_83207D90);
PPC_FUNC_IMPL(__imp__sub_83207D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// addi r8,r4,-2
	ctx.r8.s64 = ctx.r4.s64 + -2;
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lbzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r7,r9,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r7,r9,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83207de8
	if (!cr6.eq) goto loc_83207DE8;
loc_83207DC4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r7,r9,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83207dc4
	if (cr6.eq) goto loc_83207DC4;
loc_83207DE8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// rlwinm r7,r9,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83207e04
	if (!cr6.eq) goto loc_83207E04;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// b 0x83207e1c
	goto loc_83207E1C;
loc_83207E04:
	// rlwinm r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r9,r4,-3
	ctx.r9.s64 = ctx.r4.s64 + -3;
	// beq cr6,0x83207e18
	if (cr6.eq) goto loc_83207E18;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
loc_83207E18:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
loc_83207E1C:
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207E2C"))) PPC_WEAK_FUNC(sub_83207E2C);
PPC_FUNC_IMPL(__imp__sub_83207E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207E30"))) PPC_WEAK_FUNC(sub_83207E30);
PPC_FUNC_IMPL(__imp__sub_83207E30) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832979a8
	ctx.lr = 0x83207E80;
	sub_832979A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83207d90
	ctx.lr = 0x83207E90;
	sub_83207D90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255a88
	ctx.lr = 0x83207E98;
	sub_83255A88(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83207edc
	if (!cr6.eq) goto loc_83207EDC;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,13664
	ctx.r4.s64 = ctx.r10.s64 + 13664;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83207EC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83207EDC:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83207EEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207F00"))) PPC_WEAK_FUNC(sub_83207F00);
PPC_FUNC_IMPL(__imp__sub_83207F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83207f3c
	if (!cr6.eq) goto loc_83207F3C;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,13664
	ctx.r4.s64 = ctx.r10.s64 + 13664;
	// addi r3,r9,26876
	ctx.r3.s64 = ctx.r9.s64 + 26876;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_83207F3C:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r10,26876
	ctx.r3.s64 = ctx.r10.s64 + 26876;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83207F54"))) PPC_WEAK_FUNC(sub_83207F54);
PPC_FUNC_IMPL(__imp__sub_83207F54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83207F58"))) PPC_WEAK_FUNC(sub_83207F58);
PPC_FUNC_IMPL(__imp__sub_83207F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83207F60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83204de0
	ctx.lr = 0x83207F70;
	sub_83204DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83207fb0
	if (cr6.eq) goto loc_83207FB0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83207fb0
	if (cr6.eq) goto loc_83207FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255980
	ctx.lr = 0x83207F90;
	sub_83255980(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// subf r4,r3,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,26888
	ctx.r5.s64 = ctx.r11.s64 + 26888;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x83207FA8;
	sub_83297A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x83207FB0;
	sub_83255A88(ctx, base);
loc_83207FB0:
	// bl 0x83205070
	ctx.lr = 0x83207FB4;
	sub_83205070(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83207FBC"))) PPC_WEAK_FUNC(sub_83207FBC);
PPC_FUNC_IMPL(__imp__sub_83207FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83207FC0"))) PPC_WEAK_FUNC(sub_83207FC0);
PPC_FUNC_IMPL(__imp__sub_83207FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83207FC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832080f8
	if (cr6.eq) goto loc_832080F8;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r27,r9,13664
	ctx.r27.s64 = ctx.r9.s64 + 13664;
	// addi r30,r10,25224
	ctx.r30.s64 = ctx.r10.s64 + 25224;
	// addi r28,r11,26896
	ctx.r28.s64 = ctx.r11.s64 + 26896;
	// beq cr6,0x8320809c
	if (cr6.eq) goto loc_8320809C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320809c
	if (cr6.eq) goto loc_8320809C;
loc_83208008:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296d08
	ctx.lr = 0x83208014;
	sub_83296D08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x83208040
	if (cr6.eq) goto loc_83208040;
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r6,r29,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832553f0
	ctx.lr = 0x83208038;
	sub_832553F0(ctx, base);
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// b 0x83208058
	goto loc_83208058;
loc_83208040:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83254ec0
	ctx.lr = 0x8320804C;
	sub_83254EC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296ba8
	ctx.lr = 0x83208054;
	sub_83296BA8(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_83208058:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83208080
	if (!cr6.eq) goto loc_83208080;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320807C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83208090
	goto loc_83208090;
loc_83208080:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83208090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83208090:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83208008
	if (!cr6.eq) goto loc_83208008;
loc_8320809C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255c58
	ctx.lr = 0x832080B0;
	sub_83255C58(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83207f58
	ctx.lr = 0x832080BC;
	sub_83207F58(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832080e8
	if (!cr6.eq) goto loc_832080E8;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832080E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832080E8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832080F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832080F8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208100"))) PPC_WEAK_FUNC(sub_83208100);
PPC_FUNC_IMPL(__imp__sub_83208100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83208108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,25224
	ctx.r30.s64 = ctx.r11.s64 + 25224;
	// addi r31,r30,56
	ctx.r31.s64 = ctx.r30.s64 + 56;
loc_8320811C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83208130
	if (cr6.eq) goto loc_83208130;
	// bl 0x83209d68
	ctx.lr = 0x8320812C;
	sub_83209D68(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83208130:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,120
	ctx.r11.s64 = ctx.r30.s64 + 120;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x8320811c
	if (cr6.lt) goto loc_8320811C;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x83208158;
	sub_83294018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208160"))) PPC_WEAK_FUNC(sub_83208160);
PPC_FUNC_IMPL(__imp__sub_83208160) {
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
	// bl 0x83208100
	ctx.lr = 0x83208170;
	sub_83208100(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x83294018
	ctx.lr = 0x83208190;
	sub_83294018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832081A0"))) PPC_WEAK_FUNC(sub_832081A0);
PPC_FUNC_IMPL(__imp__sub_832081A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832081A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83208324
	if (cr6.eq) goto loc_83208324;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,5968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5968);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83208324
	if (cr6.eq) goto loc_83208324;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83207f58
	ctx.lr = 0x832081DC;
	sub_83207F58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x832081E4;
	sub_83255A88(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,25224
	ctx.r31.s64 = ctx.r11.s64 + 25224;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
loc_832081F4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320824c
	if (cr6.eq) goto loc_8320824C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x83208234
	if (!cr0.eq) goto loc_83208234;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_83208214:
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8320823c
	if (cr6.eq) goto loc_8320823C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x83208214
	if (cr0.eq) goto loc_83208214;
loc_83208234:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83208240
	goto loc_83208240;
loc_8320823C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83208240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83208324
	if (cr6.eq) goto loc_83208324;
loc_8320824C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x832081f4
	if (cr6.lt) goto loc_832081F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320828c
	if (cr6.eq) goto loc_8320828C;
	// bl 0x83209d68
	ctx.lr = 0x83208278;
	sub_83209D68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8320828C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209778
	ctx.lr = 0x83208294;
	sub_83209778(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832082e4
	if (cr6.eq) goto loc_832082E4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832082C8;
	sub_83293EC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832082E4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83208314
	if (!cr6.eq) goto loc_83208314;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,13664
	ctx.r4.s64 = ctx.r10.s64 + 13664;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320830C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83208314:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83208324;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83208324:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320832C"))) PPC_WEAK_FUNC(sub_8320832C);
PPC_FUNC_IMPL(__imp__sub_8320832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83208330"))) PPC_WEAK_FUNC(sub_83208330);
PPC_FUNC_IMPL(__imp__sub_83208330) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stw r4,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,5968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5968);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832083bc
	if (cr6.eq) goto loc_832083BC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832979a8
	ctx.lr = 0x83208394;
	sub_832979A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83207d90
	ctx.lr = 0x832083A4;
	sub_83207D90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255a88
	ctx.lr = 0x832083AC;
	sub_83255A88(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832081a0
	ctx.lr = 0x832083BC;
	sub_832081A0(ctx, base);
loc_832083BC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832083D0"))) PPC_WEAK_FUNC(sub_832083D0);
PPC_FUNC_IMPL(__imp__sub_832083D0) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stw r4,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,5968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5968);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832084a0
	if (cr6.eq) goto loc_832084A0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832979a8
	ctx.lr = 0x83208434;
	sub_832979A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83207d90
	ctx.lr = 0x83208444;
	sub_83207D90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255a88
	ctx.lr = 0x8320844C;
	sub_83255A88(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83208490
	if (!cr6.eq) goto loc_83208490;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,13664
	ctx.r4.s64 = ctx.r10.s64 + 13664;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320847C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83208490:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832084A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832084A0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832084B4"))) PPC_WEAK_FUNC(sub_832084B4);
PPC_FUNC_IMPL(__imp__sub_832084B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832084B8"))) PPC_WEAK_FUNC(sub_832084B8);
PPC_FUNC_IMPL(__imp__sub_832084B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832084C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83204de0
	ctx.lr = 0x832084D4;
	sub_83204DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83208514
	if (cr6.eq) goto loc_83208514;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83208514
	if (cr6.eq) goto loc_83208514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255980
	ctx.lr = 0x832084F4;
	sub_83255980(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// subf r4,r3,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,26888
	ctx.r5.s64 = ctx.r11.s64 + 26888;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x8320850C;
	sub_83297A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x83208514;
	sub_83255A88(ctx, base);
loc_83208514:
	// bl 0x83205070
	ctx.lr = 0x83208518;
	sub_83205070(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83208550
	if (!cr6.eq) goto loc_83208550;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,13664
	ctx.r4.s64 = ctx.r10.s64 + 13664;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83208548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83208550:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83208560;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

