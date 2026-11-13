#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8308DEC0"))) PPC_WEAK_FUNC(sub_8308DEC0);
PPC_FUNC_IMPL(__imp__sub_8308DEC0) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308def4
	if (cr6.lt) goto loc_8308DEF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308DEF4;
	sub_825952B8(ctx, base);
loc_8308DEF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8308DF20"))) PPC_WEAK_FUNC(sub_8308DF20);
PPC_FUNC_IMPL(__imp__sub_8308DF20) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// blt cr6,0x8308df54
	if (cr6.lt) goto loc_8308DF54;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_8308DF54:
	// bl 0x8306ada0
	ctx.lr = 0x8308DF58;
	sub_8306ADA0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8308df7c
	if (!cr6.eq) goto loc_8308DF7C;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
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
loc_8308DF7C:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
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

__attribute__((alias("__imp__sub_8308DF94"))) PPC_WEAK_FUNC(sub_8308DF94);
PPC_FUNC_IMPL(__imp__sub_8308DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308DF98"))) PPC_WEAK_FUNC(sub_8308DF98);
PPC_FUNC_IMPL(__imp__sub_8308DF98) {
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
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// blt cr6,0x8308dfc0
	if (cr6.lt) goto loc_8308DFC0;
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
loc_8308DFC0:
	// bl 0x8306ada0
	ctx.lr = 0x8308DFC4;
	sub_8306ADA0(ctx, base);
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308DFD8"))) PPC_WEAK_FUNC(sub_8308DFD8);
PPC_FUNC_IMPL(__imp__sub_8308DFD8) {
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
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// blt cr6,0x8308e000
	if (cr6.lt) goto loc_8308E000;
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
loc_8308E000:
	// bl 0x8306ada0
	ctx.lr = 0x8308E004;
	sub_8306ADA0(ctx, base);
	// lbz r3,9(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308E018"))) PPC_WEAK_FUNC(sub_8308E018);
PPC_FUNC_IMPL(__imp__sub_8308E018) {
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
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// blt cr6,0x8308e034
	if (cr6.lt) goto loc_8308E034;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8308e048
	goto loc_8308E048;
loc_8308E034:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8306a968
	ctx.lr = 0x8308E03C;
	sub_8306A968(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r3,1024
	xer.ca = ctx.r3.u32 <= 1024;
	ctx.r11.s64 = 1024 - ctx.r3.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8308E048:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,3000
	ctx.r3.s64 = 3000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8308e05c
	if (cr6.eq) goto loc_8308E05C;
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8308E05C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308E06C"))) PPC_WEAK_FUNC(sub_8308E06C);
PPC_FUNC_IMPL(__imp__sub_8308E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E070"))) PPC_WEAK_FUNC(sub_8308E070);
PPC_FUNC_IMPL(__imp__sub_8308E070) {
	PPC_FUNC_PROLOGUE();
	// li r3,800
	ctx.r3.s64 = 800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308E078"))) PPC_WEAK_FUNC(sub_8308E078);
PPC_FUNC_IMPL(__imp__sub_8308E078) {
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
	// bl 0x8353b230
	ctx.lr = 0x8308E088;
	sub_8353B230(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8308E090:
	// and r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8308e0c0
	if (!cr6.eq) goto loc_8308E0C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x8308e090
	if (cr6.lt) goto loc_8308E090;
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
loc_8308E0C0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308E0D4"))) PPC_WEAK_FUNC(sub_8308E0D4);
PPC_FUNC_IMPL(__imp__sub_8308E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E0D8"))) PPC_WEAK_FUNC(sub_8308E0D8);
PPC_FUNC_IMPL(__imp__sub_8308E0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8308E0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8308e154
	if (cr6.eq) goto loc_8308E154;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x831ce980
	ctx.lr = 0x8308E134;
	sub_831CE980(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stb r29,151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 151, ctx.r29.u8);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x831ce980
	ctx.lr = 0x8308E150;
	sub_831CE980(ctx, base);
	// stb r29,407(r31)
	PPC_STORE_U8(ctx.r31.u32 + 407, ctx.r29.u8);
loc_8308E154:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308E15C"))) PPC_WEAK_FUNC(sub_8308E15C);
PPC_FUNC_IMPL(__imp__sub_8308E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E160"))) PPC_WEAK_FUNC(sub_8308E160);
PPC_FUNC_IMPL(__imp__sub_8308E160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x8308e1ec
	if (cr6.gt) goto loc_8308E1EC;
	// lis r12,-31991
	ctx.r12.s64 = -2096562176;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7808
	ctx.r12.s64 = ctx.r12.s64 + -7808;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_8308E1B4;
	case 1:
		goto loc_8308E1BC;
	case 2:
		goto loc_8308E1C4;
	case 3:
		goto loc_8308E1CC;
	case 4:
		goto loc_8308E1D4;
	case 5:
		goto loc_8308E1DC;
	case 6:
		goto loc_8308E1E4;
	case 7:
		goto loc_8308E1EC;
	case 8:
		goto loc_8308E1EC;
	case 9:
		goto loc_8308E1EC;
	case 10:
		goto loc_8308E1EC;
	case 11:
		goto loc_8308E1EC;
	case 12:
		goto loc_8308E1EC;
	default:
		return;
	}
	// lwz r24,-7756(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7756);
	// lwz r24,-7748(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7748);
	// lwz r24,-7740(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7740);
	// lwz r24,-7732(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7732);
	// lwz r24,-7724(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7724);
	// lwz r24,-7716(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7716);
	// lwz r24,-7708(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7708);
	// lwz r24,-7700(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7700);
	// lwz r24,-7700(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7700);
	// lwz r24,-7700(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7700);
	// lwz r24,-7700(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7700);
	// lwz r24,-7700(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7700);
	// lwz r24,-7700(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7700);
loc_8308E1B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8308E1BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8308E1C4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8308E1CC:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8308E1D4:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8308E1DC:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8308E1E4:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8308E1EC:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308E1F4"))) PPC_WEAK_FUNC(sub_8308E1F4);
PPC_FUNC_IMPL(__imp__sub_8308E1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E1F8"))) PPC_WEAK_FUNC(sub_8308E1F8);
PPC_FUNC_IMPL(__imp__sub_8308E1F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8308e160
	sub_8308E160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308E1FC"))) PPC_WEAK_FUNC(sub_8308E1FC);
PPC_FUNC_IMPL(__imp__sub_8308E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E200"))) PPC_WEAK_FUNC(sub_8308E200);
PPC_FUNC_IMPL(__imp__sub_8308E200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// blt cr6,0x8308e214
	if (cr6.lt) goto loc_8308E214;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_8308E214:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308E21C"))) PPC_WEAK_FUNC(sub_8308E21C);
PPC_FUNC_IMPL(__imp__sub_8308E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E220"))) PPC_WEAK_FUNC(sub_8308E220);
PPC_FUNC_IMPL(__imp__sub_8308E220) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83105d48
	ctx.lr = 0x8308E240;
	sub_83105D48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8308e25c
	if (!cr6.eq) goto loc_8308E25C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8308e274
	goto loc_8308E274;
loc_8308E25C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308E270;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8308E274:
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

__attribute__((alias("__imp__sub_8308E28C"))) PPC_WEAK_FUNC(sub_8308E28C);
PPC_FUNC_IMPL(__imp__sub_8308E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E290"))) PPC_WEAK_FUNC(sub_8308E290);
PPC_FUNC_IMPL(__imp__sub_8308E290) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308e2c0
	if (cr6.lt) goto loc_8308E2C0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8308e2c4
	goto loc_8308E2C4;
loc_8308E2C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8308E2C4:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8306b538
	ctx.lr = 0x8308E2D0;
	sub_8306B538(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8308e2f8
	if (cr6.lt) goto loc_8308E2F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308E2F8;
	sub_825952B8(ctx, base);
loc_8308E2F8:
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

__attribute__((alias("__imp__sub_8308E324"))) PPC_WEAK_FUNC(sub_8308E324);
PPC_FUNC_IMPL(__imp__sub_8308E324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E328"))) PPC_WEAK_FUNC(sub_8308E328);
PPC_FUNC_IMPL(__imp__sub_8308E328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8308E330;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,15454
	ctx.r4.s64 = ctx.r11.s64 + 15454;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8308E368;
	sub_8259CC28(ctx, base);
	// cmpwi cr6,r29,30
	cr6.compare<int32_t>(ctx.r29.s32, 30, xer);
	// blt cr6,0x8308e3bc
	if (cr6.lt) goto loc_8308E3BC;
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
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8308E390;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308e468
	if (cr6.lt) goto loc_8308E468;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308E3B0;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8308E3BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308df20
	ctx.lr = 0x8308E3C8;
	sub_8308DF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8308e3dc
	if (!cr6.eq) goto loc_8308E3DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x8308e444
	goto loc_8308E444;
loc_8308E3DC:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8308e400
	if (cr6.eq) goto loc_8308E400;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// beq cr6,0x8308e3f8
	if (cr6.eq) goto loc_8308E3F8;
	// bl 0x82d04220
	ctx.lr = 0x8308E3F4;
	sub_82D04220(ctx, base);
	// b 0x8308e408
	goto loc_8308E408;
loc_8308E3F8:
	// li r5,2016
	ctx.r5.s64 = 2016;
	// b 0x8308e404
	goto loc_8308E404;
loc_8308E400:
	// li r5,2017
	ctx.r5.s64 = 2017;
loc_8308E404:
	// bl 0x82d042a8
	ctx.lr = 0x8308E408;
	sub_82D042A8(ctx, base);
loc_8308E408:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x8308e440
	if (cr6.lt) goto loc_8308E440;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x8308e434
	if (cr6.lt) goto loc_8308E434;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,127
	ctx.r4.s64 = 127;
	// bl 0x8246e3e8
	ctx.lr = 0x8308E430;
	sub_8246E3E8(ctx, base);
	// b 0x8308e440
	goto loc_8308E440;
loc_8308E434:
	// li r5,0
	ctx.r5.s64 = 0;
	// subfic r4,r11,127
	xer.ca = ctx.r11.u32 <= 127;
	ctx.r4.s64 = 127 - ctx.r11.s64;
	// bl 0x82a9c298
	ctx.lr = 0x8308E440;
	sub_82A9C298(ctx, base);
loc_8308E440:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8308E444:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8308E460;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8308E468;
	sub_8387E8E0(ctx, base);
loc_8308E468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308E474"))) PPC_WEAK_FUNC(sub_8308E474);
PPC_FUNC_IMPL(__imp__sub_8308E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E478"))) PPC_WEAK_FUNC(sub_8308E478);
PPC_FUNC_IMPL(__imp__sub_8308E478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8308E480;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8306ada0
	ctx.lr = 0x8308E498;
	sub_8306ADA0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
loc_8308E4B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308e4b4
	if (!cr6.eq) goto loc_8308E4B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8308E4D8;
	sub_8259CC28(ctx, base);
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(ctx.r30.s32, 30, xer);
	// bge cr6,0x8308e4e8
	if (!cr6.lt) goto loc_8308E4E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8306ada0
	ctx.lr = 0x8308E4E8;
	sub_8306ADA0(ctx, base);
loc_8308E4E8:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8308E4FC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8308e4fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8308E4FC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r11,15740
	ctx.r6.s64 = ctx.r11.s64 + 15740;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8353bc30
	ctx.lr = 0x8308E520;
	sub_8353BC30(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x8308E530;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308E53C"))) PPC_WEAK_FUNC(sub_8308E53C);
PPC_FUNC_IMPL(__imp__sub_8308E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E540"))) PPC_WEAK_FUNC(sub_8308E540);
PPC_FUNC_IMPL(__imp__sub_8308E540) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8308e328
	ctx.lr = 0x8308E560;
	sub_8308E328(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8308e574
	if (!cr6.lt) goto loc_8308E574;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_8308E574:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r11,15716
	ctx.r5.s64 = ctx.r11.s64 + 15716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573118
	ctx.lr = 0x8308E588;
	sub_82573118(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8308e5a8
	if (cr6.lt) goto loc_8308E5A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308E5A8;
	sub_825952B8(ctx, base);
loc_8308E5A8:
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

__attribute__((alias("__imp__sub_8308E5BC"))) PPC_WEAK_FUNC(sub_8308E5BC);
PPC_FUNC_IMPL(__imp__sub_8308E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E5C0"))) PPC_WEAK_FUNC(sub_8308E5C0);
PPC_FUNC_IMPL(__imp__sub_8308E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8308E5C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r29,r11,15736
	ctx.r29.s64 = ctx.r11.s64 + 15736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r29,-281
	ctx.r4.s64 = ctx.r29.s64 + -281;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8308E608;
	sub_8259CC28(ctx, base);
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(ctx.r30.s32, 30, xer);
	// blt cr6,0x8308e65c
	if (cr6.lt) goto loc_8308E65C;
	// stw r25,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r25.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r31.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8308E630;
	sub_8259CB28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308e7fc
	if (cr6.lt) goto loc_8308E7FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308E650;
	sub_825952B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8308E65C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8306ada0
	ctx.lr = 0x8308E664;
	sub_8306ADA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// bl 0x8308e328
	ctx.lr = 0x8308E67C;
	sub_8308E328(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x8308E694;
	sub_8259CB28(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8308e6b4
	if (cr6.lt) goto loc_8308E6B4;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8308E6B4;
	sub_825952B8(ctx, base);
loc_8308E6B4:
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// cmplwi cr6,r30,100
	cr6.compare<uint32_t>(ctx.r30.u32, 100, xer);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x8308e710
	if (cr6.lt) goto loc_8308E710;
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x831cdcf0
	ctx.lr = 0x8308E6DC;
	sub_831CDCF0(ctx, base);
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573118
	ctx.lr = 0x8308E6F0;
	sub_82573118(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8308E6F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8308e6f8
	if (!cr6.eq) goto loc_8308E6F8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x8308e7ac
	goto loc_8308E7AC;
loc_8308E710:
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// blt cr6,0x8308e760
	if (cr6.lt) goto loc_8308E760;
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x831cdcf0
	ctx.lr = 0x8308E72C;
	sub_831CDCF0(ctx, base);
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573118
	ctx.lr = 0x8308E740;
	sub_82573118(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8308E748:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8308e748
	if (!cr6.eq) goto loc_8308E748;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// b 0x8308e7ac
	goto loc_8308E7AC;
loc_8308E760:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// ble cr6,0x8308e7c0
	if (!cr6.gt) goto loc_8308E7C0;
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// bl 0x831cdcf0
	ctx.lr = 0x8308E77C;
	sub_831CDCF0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573118
	ctx.lr = 0x8308E790;
	sub_82573118(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8308E798:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8308e798
	if (!cr6.eq) goto loc_8308E798;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8308E7AC:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8308E7C0;
	sub_825A1EB8(ctx, base);
loc_8308E7C0:
	// stw r25,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r25.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r31.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8308E7E0;
	sub_8259CB28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308e7fc
	if (cr6.lt) goto loc_8308E7FC;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8308E7FC;
	sub_825952B8(ctx, base);
loc_8308E7FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308E808"))) PPC_WEAK_FUNC(sub_8308E808);
PPC_FUNC_IMPL(__imp__sub_8308E808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8308E810;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r28,r11,15752
	ctx.r28.s64 = ctx.r11.s64 + 15752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,-266
	ctx.r4.s64 = ctx.r28.s64 + -266;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8308E844;
	sub_8259CC28(ctx, base);
	// lis r8,-31773
	ctx.r8.s64 = -2082275328;
	// lwz r4,10296(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10296);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8308E850:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308e850
	if (!cr6.eq) goto loc_8308E850;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8308E874;
	sub_8259CC28(ctx, base);
	// bl 0x8310e010
	ctx.lr = 0x8308E878;
	sub_8310E010(ctx, base);
	// lis r30,-31773
	ctx.r30.s64 = -2082275328;
	// lis r29,-31773
	ctx.r29.s64 = -2082275328;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8308e8a4
	if (!cr6.eq) goto loc_8308E8A4;
	// lwz r4,10312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10312);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8308E890:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308e890
	if (!cr6.eq) goto loc_8308E890;
	// b 0x8308e8bc
	goto loc_8308E8BC;
loc_8308E8A4:
	// lwz r4,10308(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10308);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8308E8AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308e8ac
	if (!cr6.eq) goto loc_8308E8AC;
loc_8308E8BC:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8308E8D0;
	sub_825A1EB8(ctx, base);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x8308E8E0;
	sub_825A1EB8(ctx, base);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lwz r4,10304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10304);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8308E8EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308e8ec
	if (!cr6.eq) goto loc_8308E8EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8308E910;
	sub_825A1EB8(ctx, base);
	// bl 0x8310e010
	ctx.lr = 0x8308E914;
	sub_8310E010(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8308e938
	if (!cr6.eq) goto loc_8308E938;
	// lwz r4,10312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10312);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8308E924:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308e924
	if (!cr6.eq) goto loc_8308E924;
	// b 0x8308e950
	goto loc_8308E950;
loc_8308E938:
	// lwz r4,10308(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10308);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8308E940:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308e940
	if (!cr6.eq) goto loc_8308E940;
loc_8308E950:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8308E964;
	sub_825A1EB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x8308E974;
	sub_825A1EB8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8308E978:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308e978
	if (!cr6.eq) goto loc_8308E978;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8308E9A0;
	sub_825A1EB8(ctx, base);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lwz r4,10316(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10316);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8308E9AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308e9ac
	if (!cr6.eq) goto loc_8308E9AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8308E9D0;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308E9DC"))) PPC_WEAK_FUNC(sub_8308E9DC);
PPC_FUNC_IMPL(__imp__sub_8308E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308E9E0"))) PPC_WEAK_FUNC(sub_8308E9E0);
PPC_FUNC_IMPL(__imp__sub_8308E9E0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8308e5c0
	ctx.lr = 0x8308EA04;
	sub_8308E5C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmpwi cr6,r31,30
	cr6.compare<int32_t>(ctx.r31.s32, 30, xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bge cr6,0x8308ea38
	if (!cr6.lt) goto loc_8308EA38;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306a968
	ctx.lr = 0x8308EA2C;
	sub_8306A968(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r3,1024
	xer.ca = ctx.r3.u32 <= 1024;
	ctx.r11.s64 = 1024 - ctx.r3.s64;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8308EA38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r4,249
	ctx.r4.s64 = 16318464;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x8308ea54
	if (!cr6.eq) goto loc_8308EA54;
	// ori r4,r4,42
	ctx.r4.u64 = ctx.r4.u64 | 42;
	// b 0x8308ea58
	goto loc_8308EA58;
loc_8308EA54:
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
loc_8308EA58:
	// bl 0x82d04220
	ctx.lr = 0x8308EA5C;
	sub_82D04220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,15756
	ctx.r4.s64 = ctx.r11.s64 + 15756;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x8308EA70;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8308EA84;
	sub_825A1DA8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8308eaa4
	if (cr6.lt) goto loc_8308EAA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308EAA4;
	sub_825952B8(ctx, base);
loc_8308EAA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8308EAC0"))) PPC_WEAK_FUNC(sub_8308EAC0);
PPC_FUNC_IMPL(__imp__sub_8308EAC0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8308e5c0
	ctx.lr = 0x8308EADC;
	sub_8308E5C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,249
	ctx.r4.s64 = 16318464;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82d04220
	ctx.lr = 0x8308EB00;
	sub_82D04220(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,15760
	ctx.r4.s64 = ctx.r9.s64 + 15760;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825a1eb8
	ctx.lr = 0x8308EB14;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8308EB28;
	sub_825A1DA8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8308eb48
	if (cr6.lt) goto loc_8308EB48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308EB48;
	sub_825952B8(ctx, base);
loc_8308EB48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8308EB60"))) PPC_WEAK_FUNC(sub_8308EB60);
PPC_FUNC_IMPL(__imp__sub_8308EB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8308EB68;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,15485
	ctx.r4.s64 = ctx.r11.s64 + 15485;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8308EB9C;
	sub_8259CC28(ctx, base);
	// cmpwi cr6,r29,30
	cr6.compare<int32_t>(ctx.r29.s32, 30, xer);
	// blt cr6,0x8308ebf0
	if (cr6.lt) goto loc_8308EBF0;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8308EBC4;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308ec64
	if (cr6.lt) goto loc_8308EC64;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308EBE4;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8308EBF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8306ada0
	ctx.lr = 0x8308EBF8;
	sub_8306ADA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x837b0c10
	ctx.lr = 0x8308EC08;
	sub_837B0C10(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308ec38
	if (!cr6.eq) goto loc_8308EC38;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8308EC34;
	sub_8259CB28(ctx, base);
	// b 0x8308ec54
	goto loc_8308EC54;
loc_8308EC38:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8308ec4c
	if (!cr6.lt) goto loc_8308EC4C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8308EC4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308e808
	ctx.lr = 0x8308EC54;
	sub_8308E808(ctx, base);
loc_8308EC54:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x8308EC5C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8308EC64;
	sub_8387E8E0(ctx, base);
loc_8308EC64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308EC70"))) PPC_WEAK_FUNC(sub_8308EC70);
PPC_FUNC_IMPL(__imp__sub_8308EC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8308EC78;
	__savegprlr_19(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8308effc
	if (cr6.eq) goto loc_8308EFFC;
	// addi r20,r3,128
	ctx.r20.s64 = ctx.r3.s64 + 128;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x837b0c10
	ctx.lr = 0x8308ECAC;
	sub_837B0C10(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r22,r11,15712
	ctx.r22.s64 = ctx.r11.s64 + 15712;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r24,28
	ctx.r24.s64 = 28;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8308ee20
	if (cr6.eq) goto loc_8308EE20;
	// addi r4,r22,-8
	ctx.r4.s64 = ctx.r22.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82574d38
	ctx.lr = 0x8308ECE8;
	sub_82574D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8308edb4
	if (cr6.eq) goto loc_8308EDB4;
loc_8308ECF4:
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cb28
	ctx.lr = 0x8308ED14;
	sub_8259CB28(ctx, base);
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cb28
	ctx.lr = 0x8308ED34;
	sub_8259CB28(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291fdc8
	ctx.lr = 0x8308ED40;
	sub_8291FDC8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308ed5c
	if (cr6.lt) goto loc_8308ED5C;
	// stw r19,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r19.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8308ED5C;
	sub_825952B8(ctx, base);
loc_8308ED5C:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x8308ed84
	if (cr6.lt) goto loc_8308ED84;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x8308ED84;
	sub_825952B8(ctx, base);
loc_8308ED84:
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r4,r22,-8
	ctx.r4.s64 = ctx.r22.s64 + -8;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82574d38
	ctx.lr = 0x8308EDA8;
	sub_82574D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8308ecf4
	if (!cr6.eq) goto loc_8308ECF4;
loc_8308EDB4:
	// stw r28,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// subf r6,r30,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x8259cb28
	ctx.lr = 0x8308EDD8;
	sub_8259CB28(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8292a3f8
	ctx.lr = 0x8308EDE4;
	sub_8292A3F8(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291fdc8
	ctx.lr = 0x8308EDF0;
	sub_8291FDC8(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x8308EDF8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x8308EE00;
	sub_8387E8E0(ctx, base);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, xer);
	// beq cr6,0x8308ee20
	if (cr6.eq) goto loc_8308EE20;
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// bgt cr6,0x8308ee88
	if (cr6.gt) goto loc_8308EE88;
loc_8308EE20:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// addi r4,r22,-290
	ctx.r4.s64 = ctx.r22.s64 + -290;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x8308EE3C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8291fdc8
	ctx.lr = 0x8308EE48;
	sub_8291FDC8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308ee64
	if (cr6.lt) goto loc_8308EE64;
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8308EE64;
	sub_825952B8(ctx, base);
loc_8308EE64:
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// ble cr6,0x8308ee20
	if (!cr6.gt) goto loc_8308EE20;
loc_8308EE88:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8308EE8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308ee8c
	if (!cr6.eq) goto loc_8308EE8C;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// mulli r10,r27,28
	ctx.r10.s64 = ctx.r27.s64 * 28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r10,r26
	ctx.r3.u64 = ctx.r10.u64 + ctx.r26.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8308EEB8;
	sub_8259CC28(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8308ef6c
	if (cr6.eq) goto loc_8308EF6C;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// ble cr6,0x8308ef44
	if (!cr6.gt) goto loc_8308EF44;
loc_8308EEDC:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x8308EEF0;
	sub_825A1DA8(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x8308ef0c
	if (!cr6.gt) goto loc_8308EF0C;
	// addi r4,r22,-4
	ctx.r4.s64 = ctx.r22.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x8308EF0C;
	sub_825A1EB8(ctx, base);
loc_8308EF0C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bgt cr6,0x8308eedc
	if (cr6.gt) goto loc_8308EEDC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x8308ef5c
	if (cr6.lt) goto loc_8308EF5C;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// blt cr6,0x8308ef50
	if (cr6.lt) goto loc_8308EF50;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x8246e3e8
	ctx.lr = 0x8308EF40;
	sub_8246E3E8(ctx, base);
	// b 0x8308ef5c
	goto loc_8308EF5C;
loc_8308EF44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8308EF50;
	sub_831CC188(ctx, base);
loc_8308EF50:
	// li r5,0
	ctx.r5.s64 = 0;
	// subfic r4,r11,255
	xer.ca = ctx.r11.u32 <= 255;
	ctx.r4.s64 = 255 - ctx.r11.s64;
	// bl 0x82a9c298
	ctx.lr = 0x8308EF5C;
	sub_82A9C298(ctx, base);
loc_8308EF5C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8308ef70
	if (!cr6.lt) goto loc_8308EF70;
loc_8308EF6C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_8308EF70:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82573118
	ctx.lr = 0x8308EF80;
	sub_82573118(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308ef9c
	if (cr6.lt) goto loc_8308EF9C;
	// stw r19,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8308EF9C;
	sub_825952B8(ctx, base);
loc_8308EF9C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x8308efc4
	if (cr6.lt) goto loc_8308EFC4;
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8308EFC4;
	sub_825952B8(ctx, base);
loc_8308EFC4:
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// beq cr6,0x8308effc
	if (cr6.eq) goto loc_8308EFFC;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838adab0
	ctx.lr = 0x8308EFEC;
	sub_838ADAB0(ctx, base);
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825952b8
	ctx.lr = 0x8308EFFC;
	sub_825952B8(ctx, base);
loc_8308EFFC:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308F004"))) PPC_WEAK_FUNC(sub_8308F004);
PPC_FUNC_IMPL(__imp__sub_8308F004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F008"))) PPC_WEAK_FUNC(sub_8308F008);
PPC_FUNC_IMPL(__imp__sub_8308F008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8308F010;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_8308F044:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8308f044
	if (!cr6.eq) goto loc_8308F044;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8308F068;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d05480
	ctx.lr = 0x8308F074;
	sub_82D05480(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,28
	ctx.r9.s64 = 28;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r11,r7,r9
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x8308f104
	if (cr6.gt) goto loc_8308F104;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,15423
	ctx.r4.s64 = ctx.r11.s64 + 15423;
	// bl 0x837b0c10
	ctx.lr = 0x8308F0A0;
	sub_837B0C10(ctx, base);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8308F0C0;
	sub_8259CB28(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8308f0e0
	if (cr6.lt) goto loc_8308F0E0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8308F0E0;
	sub_825952B8(ctx, base);
loc_8308F0E0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x8308f148
	if (cr6.lt) goto loc_8308F148;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x8308f140
	goto loc_8308F140;
loc_8308F104:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8308F128;
	sub_8259CB28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308f148
	if (cr6.lt) goto loc_8308F148;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8308F140:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8308F148;
	sub_825952B8(ctx, base);
loc_8308F148:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x838ae2a8
	ctx.lr = 0x8308F15C;
	sub_838AE2A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308F168"))) PPC_WEAK_FUNC(sub_8308F168);
PPC_FUNC_IMPL(__imp__sub_8308F168) {
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
	// addi r8,r3,157
	ctx.r8.s64 = ctx.r3.s64 + 157;
	// lwz r7,144(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x83092600
	ctx.lr = 0x8308F198;
	sub_83092600(ctx, base);
	// stw r3,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x8308F1A8;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_8308F1BC"))) PPC_WEAK_FUNC(sub_8308F1BC);
PPC_FUNC_IMPL(__imp__sub_8308F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F1C0"))) PPC_WEAK_FUNC(sub_8308F1C0);
PPC_FUNC_IMPL(__imp__sub_8308F1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308F1E4"))) PPC_WEAK_FUNC(sub_8308F1E4);
PPC_FUNC_IMPL(__imp__sub_8308F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F1E8"))) PPC_WEAK_FUNC(sub_8308F1E8);
PPC_FUNC_IMPL(__imp__sub_8308F1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8308F210"))) PPC_WEAK_FUNC(sub_8308F210);
PPC_FUNC_IMPL(__imp__sub_8308F210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308F214"))) PPC_WEAK_FUNC(sub_8308F214);
PPC_FUNC_IMPL(__imp__sub_8308F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F218"))) PPC_WEAK_FUNC(sub_8308F218);
PPC_FUNC_IMPL(__imp__sub_8308F218) {
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
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8308f250
	if (!cr6.eq) goto loc_8308F250;
loc_8308F238:
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
loc_8308F250:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308F264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8308f238
	if (cr6.eq) goto loc_8308F238;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
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

__attribute__((alias("__imp__sub_8308F28C"))) PPC_WEAK_FUNC(sub_8308F28C);
PPC_FUNC_IMPL(__imp__sub_8308F28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F290"))) PPC_WEAK_FUNC(sub_8308F290);
PPC_FUNC_IMPL(__imp__sub_8308F290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8308F298;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,272
	ctx.r4.s64 = 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x8308F2C8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8308f328
	if (cr6.eq) goto loc_8308F328;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83091408
	ctx.lr = 0x8308F2EC;
	sub_83091408(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r29,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r29.u8);
	// addi r9,r11,15984
	ctx.r9.s64 = ctx.r11.s64 + 15984;
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8308dfd8
	ctx.lr = 0x8308F30C;
	sub_8308DFD8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8308f31c
	if (!cr6.eq) goto loc_8308F31C;
	// stb r29,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r29.u8);
loc_8308F31C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8308F328:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308F334"))) PPC_WEAK_FUNC(sub_8308F334);
PPC_FUNC_IMPL(__imp__sub_8308F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F338"))) PPC_WEAK_FUNC(sub_8308F338);
PPC_FUNC_IMPL(__imp__sub_8308F338) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,15984
	ctx.r10.s64 = ctx.r11.s64 + 15984;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830914e0
	ctx.lr = 0x8308F364;
	sub_830914E0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8308f37c
	if (cr6.eq) goto loc_8308F37C;
	// bl 0x82416268
	ctx.lr = 0x8308F378;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8308F37C:
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

__attribute__((alias("__imp__sub_8308F394"))) PPC_WEAK_FUNC(sub_8308F394);
PPC_FUNC_IMPL(__imp__sub_8308F394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F398"))) PPC_WEAK_FUNC(sub_8308F398);
PPC_FUNC_IMPL(__imp__sub_8308F398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8308F3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8308f3f0
	if (cr6.eq) goto loc_8308F3F0;
	// lwz r4,76(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// bl 0x83089de0
	ctx.lr = 0x8308F3C0;
	sub_83089DE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8310cc00
	ctx.lr = 0x8308F3C8;
	sub_8310CC00(ctx, base);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8308F3D8;
	sub_82596FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
	// bl 0x82597088
	ctx.lr = 0x8308F3F0;
	sub_82597088(ctx, base);
loc_8308F3F0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308F404"))) PPC_WEAK_FUNC(sub_8308F404);
PPC_FUNC_IMPL(__imp__sub_8308F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F408"))) PPC_WEAK_FUNC(sub_8308F408);
PPC_FUNC_IMPL(__imp__sub_8308F408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8308F410;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8308F430;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8308f444
	if (!cr6.eq) goto loc_8308F444;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8308F444:
	// li r10,10
	ctx.r10.s64 = 10;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8308F458:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8308f458
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8308F458;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stb r31,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r31.u8);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// bl 0x83a7d958
	ctx.lr = 0x8308F498;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x8308F49C;
	sub_83524138(ctx, base);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x831d4758
	ctx.lr = 0x8308F4A4;
	sub_831D4758(ctx, base);
loc_8308F4A4:
	// bl 0x831d4788
	ctx.lr = 0x8308F4A8;
	sub_831D4788(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8308f4a4
	if (cr6.lt) goto loc_8308F4A4;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8308F4D0;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308F4DC"))) PPC_WEAK_FUNC(sub_8308F4DC);
PPC_FUNC_IMPL(__imp__sub_8308F4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F4E0"))) PPC_WEAK_FUNC(sub_8308F4E0);
PPC_FUNC_IMPL(__imp__sub_8308F4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8308F4E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8308F504;
	sub_831CDCF0(ctx, base);
	// li r10,80
	ctx.r10.s64 = 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306a968
	ctx.lr = 0x8308F524;
	sub_8306A968(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x83108968
	ctx.lr = 0x8308F52C;
	sub_83108968(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83108978
	ctx.lr = 0x8308F534;
	sub_83108978(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x83108968
	ctx.lr = 0x8308F53C;
	sub_83108968(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83108978
	ctx.lr = 0x8308F544;
	sub_83108978(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x83108968
	ctx.lr = 0x8308F54C;
	sub_83108968(ctx, base);
	// bl 0x82aa87f0
	ctx.lr = 0x8308F550;
	sub_82AA87F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83108968
	ctx.lr = 0x8308F558;
	sub_83108968(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83108978
	ctx.lr = 0x8308F560;
	sub_83108978(ctx, base);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r28,r11,10528
	ctx.r28.s64 = ctx.r11.s64 + 10528;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_8308F578:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310fab0
	ctx.lr = 0x8308F584;
	sub_8310FAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8308f5a0
	if (!cr6.eq) goto loc_8308F5A0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// slw r10,r25,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r29.u8 & 0x3F));
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_8308F5A0:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8308f578
	if (!cr0.eq) goto loc_8308F578;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306ada0
	ctx.lr = 0x8308F5B4;
	sub_8306ADA0(ctx, base);
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// stb r30,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r30.u8);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x83a7d958
	ctx.lr = 0x8308F5C4;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x8308F5C8;
	sub_83524138(ctx, base);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x831d4758
	ctx.lr = 0x8308F5D0;
	sub_831D4758(ctx, base);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
loc_8308F5D4:
	// bl 0x831d4788
	ctx.lr = 0x8308F5D8;
	sub_831D4788(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stbx r11,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x8308f5d4
	if (cr6.lt) goto loc_8308F5D4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308F5F4"))) PPC_WEAK_FUNC(sub_8308F5F4);
PPC_FUNC_IMPL(__imp__sub_8308F5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F5F8"))) PPC_WEAK_FUNC(sub_8308F5F8);
PPC_FUNC_IMPL(__imp__sub_8308F5F8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8308f620
	if (cr6.eq) goto loc_8308F620;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308F620;
	sub_825952B8(ctx, base);
loc_8308F620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308F630"))) PPC_WEAK_FUNC(sub_8308F630);
PPC_FUNC_IMPL(__imp__sub_8308F630) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8308f674
	if (cr6.eq) goto loc_8308F674;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8308f674
	if (cr6.eq) goto loc_8308F674;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x8308F660;
	sub_831CE980(ctx, base);
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
loc_8308F674:
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

__attribute__((alias("__imp__sub_8308F688"))) PPC_WEAK_FUNC(sub_8308F688);
PPC_FUNC_IMPL(__imp__sub_8308F688) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8308f6cc
	if (cr6.eq) goto loc_8308F6CC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8308f6cc
	if (cr6.eq) goto loc_8308F6CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8308f630
	ctx.lr = 0x8308F6BC;
	sub_8308F630(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x831ce980
	ctx.lr = 0x8308F6CC;
	sub_831CE980(ctx, base);
loc_8308F6CC:
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

__attribute__((alias("__imp__sub_8308F6E4"))) PPC_WEAK_FUNC(sub_8308F6E4);
PPC_FUNC_IMPL(__imp__sub_8308F6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F6E8"))) PPC_WEAK_FUNC(sub_8308F6E8);
PPC_FUNC_IMPL(__imp__sub_8308F6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8308f6f4
	if (!cr6.eq) goto loc_8308F6F4;
	// blr 
	return;
loc_8308F6F4:
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308F6FC"))) PPC_WEAK_FUNC(sub_8308F6FC);
PPC_FUNC_IMPL(__imp__sub_8308F6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F700"))) PPC_WEAK_FUNC(sub_8308F700);
PPC_FUNC_IMPL(__imp__sub_8308F700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8308f728
	if (!cr6.eq) goto loc_8308F728;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8308F728:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x831ce980
	ctx.lr = 0x8308F734;
	sub_831CE980(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308F748"))) PPC_WEAK_FUNC(sub_8308F748);
PPC_FUNC_IMPL(__imp__sub_8308F748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8308f770
	if (!cr6.eq) goto loc_8308F770;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8308F770:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x831ce980
	ctx.lr = 0x8308F77C;
	sub_831CE980(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308F798"))) PPC_WEAK_FUNC(sub_8308F798);
PPC_FUNC_IMPL(__imp__sub_8308F798) {
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
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8308e200
	ctx.lr = 0x8308F7BC;
	sub_8308E200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8308f7d0
	if (cr6.eq) goto loc_8308F7D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8308f7e0
	goto loc_8308F7E0;
loc_8308F7D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_8308F7E0:
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

__attribute__((alias("__imp__sub_8308F7F8"))) PPC_WEAK_FUNC(sub_8308F7F8);
PPC_FUNC_IMPL(__imp__sub_8308F7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8308F800;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// bl 0x8306ada0
	ctx.lr = 0x8308F810;
	sub_8306ADA0(ctx, base);
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8308f864
	if (cr6.eq) goto loc_8308F864;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,10528
	ctx.r31.s64 = ctx.r11.s64 + 10528;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8308F82C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// slw r10,r29,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r3.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8308f854
	if (cr6.eq) goto loc_8308F854;
	// bl 0x8310fab0
	ctx.lr = 0x8308F848;
	sub_8310FAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8308f870
	if (cr6.eq) goto loc_8308F870;
loc_8308F854:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// blt cr6,0x8308f82c
	if (cr6.lt) goto loc_8308F82C;
loc_8308F864:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8308F870:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308F87C"))) PPC_WEAK_FUNC(sub_8308F87C);
PPC_FUNC_IMPL(__imp__sub_8308F87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308F880"))) PPC_WEAK_FUNC(sub_8308F880);
PPC_FUNC_IMPL(__imp__sub_8308F880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8308F888;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8308f8ac
	if (!cr6.eq) goto loc_8308F8AC;
loc_8308F8A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8308F8AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8308F8C4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8308f8a0
	if (cr6.eq) goto loc_8308F8A0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8308f4e0
	ctx.lr = 0x8308F8DC;
	sub_8308F4E0(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8308F8EC;
	sub_831CE980(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x8308F8FC;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308F908"))) PPC_WEAK_FUNC(sub_8308F908);
PPC_FUNC_IMPL(__imp__sub_8308F908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8308F910;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83108968
	ctx.lr = 0x8308F924;
	sub_83108968(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83108978
	ctx.lr = 0x8308F92C;
	sub_83108978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// bl 0x8306ada0
	ctx.lr = 0x8308F938;
	sub_8306ADA0(ctx, base);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x8308f944
	if (cr6.lt) goto loc_8308F944;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_8308F944:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x8308f96c
	if (cr6.gt) goto loc_8308F96C;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8308f96c
	if (cr6.eq) goto loc_8308F96C;
	// bdz 0x8308f964
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8308F964;
	// bdz 0x8308f978
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8308F978;
	// b 0x8308f98c
	goto loc_8308F98C;
loc_8308F964:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bgt cr6,0x8308f994
	if (cr6.gt) goto loc_8308F994;
loc_8308F96C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8308F978:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8308f994
	if (cr6.lt) goto loc_8308F994;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8308F98C:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8308f96c
	if (cr6.eq) goto loc_8308F96C;
loc_8308F994:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308F9A0"))) PPC_WEAK_FUNC(sub_8308F9A0);
PPC_FUNC_IMPL(__imp__sub_8308F9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8308F9A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83108968
	ctx.lr = 0x8308F9BC;
	sub_83108968(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83108978
	ctx.lr = 0x8308F9C4;
	sub_83108978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// bl 0x8306ada0
	ctx.lr = 0x8308F9D0;
	sub_8306ADA0(ctx, base);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x8308f9dc
	if (cr6.lt) goto loc_8308F9DC;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_8308F9DC:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x8308fa04
	if (cr6.gt) goto loc_8308FA04;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8308fa04
	if (cr6.eq) goto loc_8308FA04;
	// bdz 0x8308f9fc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8308F9FC;
	// bdz 0x8308fa10
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8308FA10;
	// b 0x8308fa24
	goto loc_8308FA24;
loc_8308F9FC:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bgt cr6,0x8308fa2c
	if (cr6.gt) goto loc_8308FA2C;
loc_8308FA04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8308FA10:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8308fa2c
	if (cr6.lt) goto loc_8308FA2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8308FA24:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8308fa04
	if (cr6.eq) goto loc_8308FA04;
loc_8308FA2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308FA38"))) PPC_WEAK_FUNC(sub_8308FA38);
PPC_FUNC_IMPL(__imp__sub_8308FA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8308FA40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83108968
	ctx.lr = 0x8308FA50;
	sub_83108968(ctx, base);
	// bl 0x82aa87f0
	ctx.lr = 0x8308FA54;
	sub_82AA87F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83108968
	ctx.lr = 0x8308FA5C;
	sub_83108968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83108978
	ctx.lr = 0x8308FA64;
	sub_83108978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,20(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// bl 0x8306ada0
	ctx.lr = 0x8308FA74;
	sub_8306ADA0(ctx, base);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x8308fa80
	if (cr6.lt) goto loc_8308FA80;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_8308FA80:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x8308faa8
	if (cr6.gt) goto loc_8308FAA8;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8308faa8
	if (cr6.eq) goto loc_8308FAA8;
	// bdz 0x8308faa0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8308FAA0;
	// bdz 0x8308fab4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8308FAB4;
	// b 0x8308fac8
	goto loc_8308FAC8;
loc_8308FAA0:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bgt cr6,0x8308fad0
	if (cr6.gt) goto loc_8308FAD0;
loc_8308FAA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8308FAB4:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// blt cr6,0x8308fad0
	if (cr6.lt) goto loc_8308FAD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8308FAC8:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x8308faa8
	if (cr6.eq) goto loc_8308FAA8;
loc_8308FAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308FADC"))) PPC_WEAK_FUNC(sub_8308FADC);
PPC_FUNC_IMPL(__imp__sub_8308FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308FAE0"))) PPC_WEAK_FUNC(sub_8308FAE0);
PPC_FUNC_IMPL(__imp__sub_8308FAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,5
	ctx.r8.u64 = ctx.r10.u64 | 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,568(r11)
	PPC_STORE_U8(ctx.r11.u32 + 568, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8308FB08"))) PPC_WEAK_FUNC(sub_8308FB08);
PPC_FUNC_IMPL(__imp__sub_8308FB08) {
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
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8308fb40
	if (!cr6.eq) goto loc_8308FB40;
	// li r3,6
	ctx.r3.s64 = 6;
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
loc_8308FB40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308FB54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x8308fc30
	if (cr6.gt) goto loc_8308FC30;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8308fb9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8308FB9C;
	// bdzf 4*cr6+eq,0x8308fbb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8308FBB4;
	// bdzf 4*cr6+eq,0x8308fbcc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8308FBCC;
	// bdzf 4*cr6+eq,0x8308fc00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8308FC00;
	// bdzf 4*cr6+eq,0x8308fc18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8308FC18;
	// bdzf 4*cr6+eq,0x8308fc30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8308FC30;
	// bdzf 4*cr6+eq,0x8308fc30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8308FC30;
	// bne cr6,0x8308fc30
	if (!cr6.eq) goto loc_8308FC30;
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
loc_8308FB9C:
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
loc_8308FBB4:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_8308FBCC:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089f30
	ctx.lr = 0x8308FBDC;
	sub_83089F30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8308fc18
	if (cr6.eq) goto loc_8308FC18;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_8308FC00:
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_8308FC18:
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_8308FC30:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089f30
	ctx.lr = 0x8308FC40;
	sub_83089F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,0
	ctx.r10.s64 = ctx.r11.s64 + 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
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

__attribute__((alias("__imp__sub_8308FC6C"))) PPC_WEAK_FUNC(sub_8308FC6C);
PPC_FUNC_IMPL(__imp__sub_8308FC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308FC70"))) PPC_WEAK_FUNC(sub_8308FC70);
PPC_FUNC_IMPL(__imp__sub_8308FC70) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8308fcc8
	if (!cr6.eq) goto loc_8308FCC8;
	// lwz r30,104(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x8306ada0
	ctx.lr = 0x8308FCA0;
	sub_8306ADA0(ctx, base);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x8308fcc8
	if (!cr6.gt) goto loc_8308FCC8;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,296
	ctx.r6.s64 = ctx.r31.s64 + 296;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x8308bed0
	ctx.lr = 0x8308FCC8;
	sub_8308BED0(ctx, base);
loc_8308FCC8:
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

__attribute__((alias("__imp__sub_8308FCE0"))) PPC_WEAK_FUNC(sub_8308FCE0);
PPC_FUNC_IMPL(__imp__sub_8308FCE0) {
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
	// lbz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8308fd6c
	if (!cr6.eq) goto loc_8308FD6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308FD10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8308fd6c
	if (!cr6.eq) goto loc_8308FD6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308FD30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8308fd6c
	if (!cr6.eq) goto loc_8308FD6C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x8308fd58
	if (cr6.eq) goto loc_8308FD58;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// ble cr6,0x8308fd6c
	if (!cr6.gt) goto loc_8308FD6C;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8308fd6c
	if (cr6.gt) goto loc_8308FD6C;
loc_8308FD58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308FD6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8308FD6C:
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

__attribute__((alias("__imp__sub_8308FD80"))) PPC_WEAK_FUNC(sub_8308FD80);
PPC_FUNC_IMPL(__imp__sub_8308FD80) {
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
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x8308e200
	ctx.lr = 0x8308FD9C;
	sub_8308E200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8308fde4
	if (!cr6.eq) goto loc_8308FDE4;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8308fdc4
	if (!cr6.eq) goto loc_8308FDC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8306a968
	ctx.lr = 0x8308FDC0;
	sub_8306A968(ctx, base);
	// b 0x8308fde0
	goto loc_8308FDE0;
loc_8308FDC4:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8308f880
	ctx.lr = 0x8308FDCC;
	sub_8308F880(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// bl 0x8308f748
	ctx.lr = 0x8308FDD4;
	sub_8308F748(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_8308FDE0:
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_8308FDE4:
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

__attribute__((alias("__imp__sub_8308FDF8"))) PPC_WEAK_FUNC(sub_8308FDF8);
PPC_FUNC_IMPL(__imp__sub_8308FDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8308FE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,16536
	ctx.r10.s64 = ctx.r11.s64 + 16536;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8308fe24
	if (cr6.eq) goto loc_8308FE24;
	// bl 0x8308f5f8
	ctx.lr = 0x8308FE24;
	sub_8308F5F8(ctx, base);
loc_8308FE24:
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8308fe58
	if (!cr6.eq) goto loc_8308FE58;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8308fe60
	if (cr6.eq) goto loc_8308FE60;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308FE50;
	sub_825952B8(ctx, base);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// b 0x8308fe60
	goto loc_8308FE60;
loc_8308FE58:
	// bl 0x83103e98
	ctx.lr = 0x8308FE5C;
	sub_83103E98(ctx, base);
	// stw r29,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r29.u32);
loc_8308FE60:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308fe84
	if (cr6.lt) goto loc_8308FE84;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308FE84;
	sub_825952B8(ctx, base);
loc_8308FE84:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x8308dae8
	ctx.lr = 0x8308FE9C;
	sub_8308DAE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8308FEA4"))) PPC_WEAK_FUNC(sub_8308FEA4);
PPC_FUNC_IMPL(__imp__sub_8308FEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308FEA8"))) PPC_WEAK_FUNC(sub_8308FEA8);
PPC_FUNC_IMPL(__imp__sub_8308FEA8) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8308ff20
	if (!cr6.eq) goto loc_8308FF20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8308eb60
	ctx.lr = 0x8308FED4;
	sub_8308EB60(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x8308fef0
	if (!cr6.lt) goto loc_8308FEF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8308FEF0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83104938
	ctx.lr = 0x8308FEF8;
	sub_83104938(ctx, base);
	// stw r3,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x8308FF00;
	sub_83103B18(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8308ff20
	if (cr6.lt) goto loc_8308FF20;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8308FF20;
	sub_825952B8(ctx, base);
loc_8308FF20:
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

__attribute__((alias("__imp__sub_8308FF34"))) PPC_WEAK_FUNC(sub_8308FF34);
PPC_FUNC_IMPL(__imp__sub_8308FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8308FF38"))) PPC_WEAK_FUNC(sub_8308FF38);
PPC_FUNC_IMPL(__imp__sub_8308FF38) {
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
	// bl 0x8308fdf8
	ctx.lr = 0x8308FF58;
	sub_8308FDF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8308ff70
	if (cr6.eq) goto loc_8308FF70;
	// bl 0x82416268
	ctx.lr = 0x8308FF6C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8308FF70:
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

__attribute__((alias("__imp__sub_8308FF88"))) PPC_WEAK_FUNC(sub_8308FF88);
PPC_FUNC_IMPL(__imp__sub_8308FF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8308FF90;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r4,247
	ctx.r4.s64 = 16187392;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,181
	ctx.r4.u64 = ctx.r4.u64 | 181;
	// bl 0x82d04220
	ctx.lr = 0x8308FFBC;
	sub_82D04220(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x8308FFDC;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8308FFF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309000c
	if (cr6.eq) goto loc_8309000C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x8309000C;
	sub_83103100(ctx, base);
loc_8309000C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309002c
	if (cr6.lt) goto loc_8309002C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8309002C;
	sub_825952B8(ctx, base);
loc_8309002C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83090034"))) PPC_WEAK_FUNC(sub_83090034);
PPC_FUNC_IMPL(__imp__sub_83090034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83090038"))) PPC_WEAK_FUNC(sub_83090038);
PPC_FUNC_IMPL(__imp__sub_83090038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83090040;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r29,r11,16406
	ctx.r29.s64 = ctx.r11.s64 + 16406;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x8308da10
	ctx.lr = 0x83090078;
	sub_8308DA10(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,16536
	ctx.r9.s64 = ctx.r10.s64 + 16536;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// li r22,2
	ctx.r22.s64 = 2;
	// stb r30,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r30.u8);
	// li r27,15
	ctx.r27.s64 = 15;
	// stb r23,552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 552, ctx.r23.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// stw r22,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r22.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r30,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// stb r30,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r30.u8);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stb r30,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r30.u8);
	// stw r27,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r27.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stb r30,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r30.u8);
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
	// stw r21,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r21.u32);
	// stb r30,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x830900E0;
	sub_8259CC28(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r5,384
	ctx.r5.s64 = 384;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83090108;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,384
	ctx.r5.s64 = 384;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x831ce980
	ctx.lr = 0x83090118;
	sub_831CE980(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
loc_83090128:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83090128
	if (!cr6.eq) goto loc_83090128;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83090150;
	sub_8259CC28(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83090168
	if (!cr6.eq) goto loc_83090168;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308e540
	ctx.lr = 0x83090168;
	sub_8308E540(ctx, base);
loc_83090168:
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lbz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// stb r10,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r10.u8);
	// stw r25,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r25.u32);
	// stw r24,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r24.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830901d4
	if (cr6.eq) goto loc_830901D4;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82595718
	ctx.lr = 0x830901B4;
	sub_82595718(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830901d4
	if (cr6.eq) goto loc_830901D4;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x831ce980
	ctx.lr = 0x830901CC;
	sub_831CE980(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_830901D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308fd80
	ctx.lr = 0x830901DC;
	sub_8308FD80(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830901f8
	if (cr6.lt) goto loc_830901F8;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x830901F8;
	sub_825952B8(ctx, base);
loc_830901F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83090204"))) PPC_WEAK_FUNC(sub_83090204);
PPC_FUNC_IMPL(__imp__sub_83090204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83090208"))) PPC_WEAK_FUNC(sub_83090208);
PPC_FUNC_IMPL(__imp__sub_83090208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83090210;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// bl 0x8308e078
	ctx.lr = 0x83090234;
	sub_8308E078(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r29,r11,16407
	ctx.r29.s64 = ctx.r11.s64 + 16407;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,17
	ctx.r4.s64 = ctx.r29.s64 + 17;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8308da10
	ctx.lr = 0x83090250;
	sub_8308DA10(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,16536
	ctx.r8.s64 = ctx.r10.s64 + 16536;
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// li r23,2
	ctx.r23.s64 = 2;
	// stb r30,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r30.u8);
	// li r24,15
	ctx.r24.s64 = 15;
	// stb r9,552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 552, ctx.r9.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// stw r23,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r30,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r30,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r30.u64);
	// stb r30,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r30.u8);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stb r30,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r30.u8);
	// stw r24,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r24.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stb r30,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r30.u8);
	// stb r30,624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 624, ctx.r30.u8);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// stw r21,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r21.u32);
	// bl 0x8259cc28
	ctx.lr = 0x830902BC;
	sub_8259CC28(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r5,384
	ctx.r5.s64 = 384;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x830902E4;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8309034c
	if (cr6.eq) goto loc_8309034C;
	// li r5,384
	ctx.r5.s64 = 384;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x830902FC;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83090308;
	sub_837B0C10(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83090320
	if (!cr6.eq) goto loc_83090320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308e540
	ctx.lr = 0x83090320;
	sub_8308E540(ctx, base);
loc_83090320:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8309033c
	if (cr6.lt) goto loc_8309033C;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8309033C;
	sub_825952B8(ctx, base);
loc_8309033C:
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// b 0x83090354
	goto loc_83090354;
loc_8309034C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8308e540
	ctx.lr = 0x83090354;
	sub_8308E540(ctx, base);
loc_83090354:
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r25.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r26,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r26.u32);
	// stw r25,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r25.u32);
	// bl 0x8308fd80
	ctx.lr = 0x83090378;
	sub_8308FD80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83090384"))) PPC_WEAK_FUNC(sub_83090384);
PPC_FUNC_IMPL(__imp__sub_83090384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83090388"))) PPC_WEAK_FUNC(sub_83090388);
PPC_FUNC_IMPL(__imp__sub_83090388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83090390;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r11,249
	ctx.r11.s64 = 16318464;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// ori r30,r11,15
	ctx.r30.u64 = ctx.r11.u64 | 15;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d04220
	ctx.lr = 0x830903C4;
	sub_82D04220(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(ctx.r27.u32, 13, xer);
	// addi r28,r11,16448
	ctx.r28.s64 = ctx.r11.s64 + 16448;
	// bgt cr6,0x830904c0
	if (cr6.gt) goto loc_830904C0;
	// lis r12,-31991
	ctx.r12.s64 = -2096562176;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1012
	ctx.r12.s64 = ctx.r12.s64 + 1012;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u32) {
	case 0:
		goto loc_8309042C;
	case 1:
		goto loc_8309042C;
	case 2:
		goto loc_8309042C;
	case 3:
		goto loc_8309043C;
	case 4:
		goto loc_830905F0;
	case 5:
		goto loc_830904C0;
	case 6:
		goto loc_830904C0;
	case 7:
		goto loc_830905F0;
	case 8:
		goto loc_8309042C;
	case 9:
		goto loc_8309042C;
	case 10:
		goto loc_8309042C;
	case 11:
		goto loc_8309042C;
	case 12:
		goto loc_8309042C;
	case 13:
		goto loc_8309042C;
	default:
		return;
	}
	// lwz r24,1068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1068);
	// lwz r24,1068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1068);
	// lwz r24,1068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1068);
	// lwz r24,1084(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1084);
	// lwz r24,1520(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1520);
	// lwz r24,1216(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1216);
	// lwz r24,1216(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1216);
	// lwz r24,1520(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1520);
	// lwz r24,1068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1068);
	// lwz r24,1068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1068);
	// lwz r24,1068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1068);
	// lwz r24,1068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1068);
	// lwz r24,1068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1068);
	// lwz r24,1068(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1068);
loc_8309042C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83090434;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8309043C:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089f30
	ctx.lr = 0x8309044C;
	sub_83089F30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,247
	ctx.r4.s64 = 16187392;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x830904b4
	if (!cr6.eq) goto loc_830904B4;
	// ori r4,r4,151
	ctx.r4.u64 = ctx.r4.u64 | 151;
	// bl 0x82d04220
	ctx.lr = 0x83090468;
	sub_82D04220(ctx, base);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d04220
	ctx.lr = 0x83090480;
	sub_82D04220(ctx, base);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x83090490;
	sub_825A1EB8(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x830904A4;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r27,5
	ctx.r27.s64 = 5;
	// bl 0x8387e8e0
	ctx.lr = 0x830904B0;
	sub_8387E8E0(ctx, base);
	// b 0x830905f0
	goto loc_830905F0;
loc_830904B4:
	// ori r4,r4,90
	ctx.r4.u64 = ctx.r4.u64 | 90;
	// bl 0x82d04220
	ctx.lr = 0x830904BC;
	sub_82D04220(ctx, base);
	// b 0x830905f0
	goto loc_830905F0;
loc_830904C0:
	// addi r4,r28,-27
	ctx.r4.s64 = ctx.r28.s64 + -27;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x830904CC;
	sub_837B0C10(ctx, base);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089f30
	ctx.lr = 0x830904DC;
	sub_83089F30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830904f0
	if (cr6.eq) goto loc_830904F0;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(ctx.r27.s32, 5, xer);
	// bne cr6,0x83090504
	if (!cr6.eq) goto loc_83090504;
loc_830904F0:
	// lis r4,247
	ctx.r4.s64 = 16187392;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,151
	ctx.r4.u64 = ctx.r4.u64 | 151;
	// bl 0x82d04220
	ctx.lr = 0x83090500;
	sub_82D04220(ctx, base);
	// li r27,5
	ctx.r27.s64 = 5;
loc_83090504:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83090520
	if (!cr6.eq) goto loc_83090520;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d04220
	ctx.lr = 0x8309051C;
	sub_82D04220(ctx, base);
	// b 0x830905c8
	goto loc_830905C8;
loc_83090520:
	// addi r4,r28,-26
	ctx.r4.s64 = ctx.r28.s64 + -26;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x8309052C;
	sub_837B0C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d04220
	ctx.lr = 0x83090538;
	sub_82D04220(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8309054c
	if (!cr6.lt) goto loc_8309054C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8309054C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83090550:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83090550
	if (!cr6.eq) goto loc_83090550;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83090574;
	sub_8259CC28(ctx, base);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x83090584;
	sub_825A1EB8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x83090598
	if (!cr6.lt) goto loc_83090598;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_83090598:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8309059C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8309059c
	if (!cr6.eq) goto loc_8309059C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830905C0;
	sub_825A1EB8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x830905C8;
	sub_8387E8E0(ctx, base);
loc_830905C8:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830905e4
	if (cr6.lt) goto loc_830905E4;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x830905E4;
	sub_825952B8(ctx, base);
loc_830905E4:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_830905F0:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bne cr6,0x83090660
	if (!cr6.eq) goto loc_83090660;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,104(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,76(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// bl 0x8308e5c0
	ctx.lr = 0x8309061C;
	sub_8308E5C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x83090630;
	sub_8259CB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83090638;
	sub_8387E8E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x83090648;
	sub_825A1EB8(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x8309065C;
	sub_825A1DA8(ctx, base);
	// b 0x83090674
	goto loc_83090674;
loc_83090660:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x83090674;
	sub_8259CB28(ctx, base);
loc_83090674:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x83090694;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830906B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830906c4
	if (cr6.eq) goto loc_830906C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x830906C4;
	sub_83103100(ctx, base);
loc_830906C4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830906e0
	if (cr6.lt) goto loc_830906E0;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x830906E0;
	sub_825952B8(ctx, base);
loc_830906E0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83090708
	if (cr6.lt) goto loc_83090708;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x83090708;
	sub_825952B8(ctx, base);
loc_83090708:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83090710"))) PPC_WEAK_FUNC(sub_83090710);
PPC_FUNC_IMPL(__imp__sub_83090710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83090718;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83090784
	if (cr6.gt) goto loc_83090784;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lbz r9,10056(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10056);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83090784
	if (!cr6.eq) goto loc_83090784;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,3
	ctx.r8.u64 = ctx.r10.u64 | 3;
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
	// bl 0x83103068
	ctx.lr = 0x83090768;
	sub_83103068(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8309077C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090784:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x83090f64
	if (cr6.gt) goto loc_83090F64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,6
	ctx.r30.s64 = 6;
	// lis r12,-31991
	ctx.r12.s64 = -2096562176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1964
	ctx.r12.s64 = ctx.r12.s64 + 1964;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_830907F0;
	case 1:
		goto loc_83090858;
	case 2:
		goto loc_830908F4;
	case 3:
		goto loc_83090900;
	case 4:
		goto loc_8309092C;
	case 5:
		goto loc_83090938;
	case 6:
		goto loc_8309081C;
	case 7:
		goto loc_83090F64;
	case 8:
		goto loc_830909A4;
	case 9:
		goto loc_830909D4;
	case 10:
		goto loc_83090B00;
	case 11:
		goto loc_83090B58;
	case 12:
		goto loc_83090BBC;
	case 13:
		goto loc_83090CE4;
	case 14:
		goto loc_83090D54;
	case 15:
		goto loc_83090DAC;
	case 16:
		goto loc_83090E78;
	default:
		return;
	}
	// lwz r24,2032(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2032);
	// lwz r24,2136(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	// lwz r24,2292(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2292);
	// lwz r24,2304(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2304);
	// lwz r24,2348(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2348);
	// lwz r24,2360(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2360);
	// lwz r24,2076(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2076);
	// lwz r24,3940(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3940);
	// lwz r24,2468(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2468);
	// lwz r24,2516(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2516);
	// lwz r24,2816(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2816);
	// lwz r24,2904(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2904);
	// lwz r24,3004(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3004);
	// lwz r24,3300(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3300);
	// lwz r24,3412(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3412);
	// lwz r24,3500(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3500);
	// lwz r24,3704(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3704);
loc_830907F0:
	// lbz r11,138(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 138);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83090804
	if (!cr6.eq) goto loc_83090804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308de50
	ctx.lr = 0x83090804;
	sub_8308DE50(ctx, base);
loc_83090804:
	// lbz r11,137(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 137);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83090f6c
	if (cr6.eq) goto loc_83090F6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308fea8
	ctx.lr = 0x83090818;
	sub_8308FEA8(ctx, base);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_8309081C:
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83090850
	if (cr6.eq) goto loc_83090850;
	// bl 0x83103bb8
	ctx.lr = 0x8309082C;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// bl 0x83103d60
	ctx.lr = 0x83090840;
	sub_83103D60(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// bl 0x83103d20
	ctx.lr = 0x8309084C;
	sub_83103D20(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
loc_83090850:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_83090858:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089ad0
	ctx.lr = 0x83090868;
	sub_83089AD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830908cc
	if (!cr6.eq) goto loc_830908CC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830908a8
	if (cr6.eq) goto loc_830908A8;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830908A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830908A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308dc48
	ctx.lr = 0x830908B0;
	sub_8308DC48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830908C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830908CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,592(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 592);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830908E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308fce0
	ctx.lr = 0x830908EC;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830908F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x83090f58
	goto loc_83090F58;
loc_83090900:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090914;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r9.u8);
	// bl 0x8308fce0
	ctx.lr = 0x83090924;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8309092C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x83090f58
	goto loc_83090F58;
loc_83090938:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309094C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83090f6c
	if (cr6.eq) goto loc_83090F6C;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83090978
	if (!cr6.eq) goto loc_83090978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83090978:
	// lbz r11,117(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// bl 0x8308fce0
	ctx.lr = 0x8309099C;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830909A4:
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308dcc8
	ctx.lr = 0x830909B8;
	sub_8308DCC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r28,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r28.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_830909D4:
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830909ec
	if (!cr6.eq) goto loc_830909EC;
	// bl 0x82d73e70
	ctx.lr = 0x830909E8;
	sub_82D73E70(ctx, base);
	// stb r27,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r27.u8);
loc_830909EC:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089e38
	ctx.lr = 0x830909FC;
	sub_83089E38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83090aa4
	if (!cr6.eq) goto loc_83090AA4;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83090a88
	if (!cr6.eq) goto loc_83090A88;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r28.u8);
	// stb r28,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r28.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// addi r30,r31,560
	ctx.r30.s64 = ctx.r31.s64 + 560;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r29,r31,564
	ctx.r29.s64 = ctx.r31.s64 + 564;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8308e478
	ctx.lr = 0x83090A3C;
	sub_8308E478(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x83090a50
	if (!cr6.lt) goto loc_83090A50;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83090A50:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8308cc10
	ctx.lr = 0x83090A60;
	sub_8308CC10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x83090A74;
	sub_83103100(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x83090A78;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x83090A7C;
	sub_83524138(ctx, base);
	// std r3,576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 576, ctx.r3.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83090A88;
	sub_8387E8E0(ctx, base);
loc_83090A88:
	// lbz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// lbz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 560);
	// stw r28,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83090aa8
	if (!cr6.eq) goto loc_83090AA8;
loc_83090AA4:
	// stb r27,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r27.u8);
loc_83090AA8:
	// lbz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83090ac8
	if (!cr6.eq) goto loc_83090AC8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x83094a90
	ctx.lr = 0x83090ABC;
	sub_83094A90(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83090ac8
	if (!cr6.eq) goto loc_83090AC8;
	// stb r27,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r27.u8);
loc_83090AC8:
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83090ae8
	if (cr6.eq) goto loc_83090AE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090AE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83090AE8:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x8308fce0
	ctx.lr = 0x83090AF8;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090B00:
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83090b40
	if (cr6.eq) goto loc_83090B40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// lbz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83090b40
	if (!cr6.eq) goto loc_83090B40;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x83094ba8
	ctx.lr = 0x83090B40;
	sub_83094BA8(ctx, base);
loc_83090B40:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x8308fce0
	ctx.lr = 0x83090B50;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090B58:
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83090b6c
	if (!cr6.eq) goto loc_83090B6C;
	// bl 0x82d73f90
	ctx.lr = 0x83090B68;
	sub_82D73F90(ctx, base);
	// stb r28,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r28.u8);
loc_83090B6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308dd08
	ctx.lr = 0x83090B74;
	sub_8308DD08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090B94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83090bb4
	if (!cr6.eq) goto loc_83090BB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090BB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83090BB4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_83090BBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090BD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090BF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83090C04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83090c3c
	if (cr6.eq) goto loc_83090C3C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83090c3c
	if (cr6.eq) goto loc_83090C3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83090388
	ctx.lr = 0x83090C24;
	sub_83090388(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x8308fce0
	ctx.lr = 0x83090C34;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090C3C:
	// lbz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 584);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83090c68
	if (!cr6.eq) goto loc_83090C68;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83090c68
	if (!cr6.eq) goto loc_83090C68;
	// bl 0x8306ab18
	ctx.lr = 0x83090C58;
	sub_8306AB18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83090c68
	if (!cr6.eq) goto loc_83090C68;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83090C68:
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83090c94
	if (!cr6.eq) goto loc_83090C94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090C88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
loc_83090C94:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83090cb4
	if (!cr6.eq) goto loc_83090CB4;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x8308bfb0
	ctx.lr = 0x83090CB4;
	sub_8308BFB0(ctx, base);
loc_83090CB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308fc70
	ctx.lr = 0x83090CBC;
	sub_8308FC70(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x83090d94
	if (!cr6.eq) goto loc_83090D94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308ff88
	ctx.lr = 0x83090CCC;
	sub_8308FF88(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x8308fce0
	ctx.lr = 0x83090CDC;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090CE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090CF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83090d74
	if (cr6.eq) goto loc_83090D74;
	// lbz r11,117(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83090d94
	if (!cr6.eq) goto loc_83090D94;
	// lbz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 158);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83090d94
	if (!cr6.eq) goto loc_83090D94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090D3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// bl 0x8308fce0
	ctx.lr = 0x83090D4C;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090D54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090D68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
loc_83090D74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090D88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
loc_83090D94:
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x8308fce0
	ctx.lr = 0x83090DA4;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090DAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090DC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// lbz r11,159(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 159);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83090e58
	if (!cr6.eq) goto loc_83090E58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090DEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// bne cr6,0x83090e60
	if (!cr6.eq) goto loc_83090E60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83090e60
	if (!cr6.eq) goto loc_83090E60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r11.u8);
	// bl 0x8308fce0
	ctx.lr = 0x83090E50;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090E58:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_83090E60:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r11.u8);
	// bl 0x8308fce0
	ctx.lr = 0x83090E70;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090E78:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83090e94
	if (cr6.eq) goto loc_83090E94;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83090e94
	if (cr6.eq) goto loc_83090E94;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83090eb4
	if (!cr6.eq) goto loc_83090EB4;
loc_83090E94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090EA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83090f64
	if (cr6.eq) goto loc_83090F64;
loc_83090EB4:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83090eec
	if (!cr6.eq) goto loc_83090EEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308ddc8
	ctx.lr = 0x83090EC8;
	sub_8308DDC8(ctx, base);
loc_83090EC8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x83090f48
	if (!cr6.eq) goto loc_83090F48;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83090f34
	if (!cr6.eq) goto loc_83090F34;
	// bl 0x830ff290
	ctx.lr = 0x83090EE4;
	sub_830FF290(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83090f44
	goto loc_83090F44;
loc_83090EEC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83090ec8
	if (cr6.eq) goto loc_83090EC8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83090ec8
	if (cr6.eq) goto loc_83090EC8;
	// lbz r11,117(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83090ec8
	if (!cr6.eq) goto loc_83090EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090F1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// bl 0x8308fce0
	ctx.lr = 0x83090F2C;
	sub_8308FCE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83090F34:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83090f48
	if (!cr6.eq) goto loc_83090F48;
	// bl 0x830ff290
	ctx.lr = 0x83090F40;
	sub_830FF290(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_83090F44:
	// stb r11,202(r3)
	PPC_STORE_U8(ctx.r3.u32 + 202, ctx.r11.u8);
loc_83090F48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308dc48
	ctx.lr = 0x83090F50;
	sub_8308DC48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_83090F58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83090F64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83090F64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308fce0
	ctx.lr = 0x83090F6C;
	sub_8308FCE0(ctx, base);
loc_83090F6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83090F74"))) PPC_WEAK_FUNC(sub_83090F74);
PPC_FUNC_IMPL(__imp__sub_83090F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83090F78"))) PPC_WEAK_FUNC(sub_83090F78);
PPC_FUNC_IMPL(__imp__sub_83090F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83090F80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r11,16696
	ctx.r4.s64 = ctx.r11.s64 + 16696;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x83103328
	ctx.lr = 0x83090FA8;
	sub_83103328(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r8,r10,16804
	ctx.r8.s64 = ctx.r10.s64 + 16804;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83090FC4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83090fc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83090FC4;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r5,384
	ctx.r5.s64 = 384;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r10,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83091018;
	sub_831CDCF0(ctx, base);
	// stw r28,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r26,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r29.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stb r30,536(r31)
	PPC_STORE_U8(ctx.r31.u32 + 536, ctx.r30.u8);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// beq cr6,0x83091044
	if (cr6.eq) goto loc_83091044;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_83091044:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309104C"))) PPC_WEAK_FUNC(sub_8309104C);
PPC_FUNC_IMPL(__imp__sub_8309104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83091050"))) PPC_WEAK_FUNC(sub_83091050);
PPC_FUNC_IMPL(__imp__sub_83091050) {
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
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,16804
	ctx.r9.s64 = ctx.r10.s64 + 16804;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8309108c
	if (cr6.eq) goto loc_8309108C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_8309108C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x83091094;
	sub_831032A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830910ac
	if (cr6.eq) goto loc_830910AC;
	// bl 0x82416268
	ctx.lr = 0x830910A8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830910AC:
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

__attribute__((alias("__imp__sub_830910C4"))) PPC_WEAK_FUNC(sub_830910C4);
PPC_FUNC_IMPL(__imp__sub_830910C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830910C8"))) PPC_WEAK_FUNC(sub_830910C8);
PPC_FUNC_IMPL(__imp__sub_830910C8) {
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
	// lwz r3,532(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830910fc
	if (!cr6.eq) goto loc_830910FC;
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
loc_830910FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309110C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83091120
	if (!cr6.eq) goto loc_83091120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,536(r31)
	PPC_STORE_U8(ctx.r31.u32 + 536, ctx.r11.u8);
loc_83091120:
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091134;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83091148"))) PPC_WEAK_FUNC(sub_83091148);
PPC_FUNC_IMPL(__imp__sub_83091148) {
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
	// lwz r3,532(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83091180
	if (!cr6.eq) goto loc_83091180;
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
loc_83091180:
	// lbz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830911c8
	if (!cr6.eq) goto loc_830911C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309119C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830911c0
	if (!cr6.eq) goto loc_830911C0;
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
loc_830911C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,536(r31)
	PPC_STORE_U8(ctx.r31.u32 + 536, ctx.r11.u8);
loc_830911C8:
	// lbz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 536);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830911f8
	if (!cr6.eq) goto loc_830911F8;
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830911f8
	if (cr6.eq) goto loc_830911F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830911F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
loc_830911F8:
	// lbz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 536);
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

__attribute__((alias("__imp__sub_83091210"))) PPC_WEAK_FUNC(sub_83091210);
PPC_FUNC_IMPL(__imp__sub_83091210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091224
	if (!cr6.eq) goto loc_83091224;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83091224:
	// lwz r3,532(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83091238"))) PPC_WEAK_FUNC(sub_83091238);
PPC_FUNC_IMPL(__imp__sub_83091238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83091240;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
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
	// li r4,540
	ctx.r4.s64 = 540;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x83091270;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83091298
	if (cr6.eq) goto loc_83091298;
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
	// bl 0x83090f78
	ctx.lr = 0x83091290;
	sub_83090F78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83091298:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830912A4"))) PPC_WEAK_FUNC(sub_830912A4);
PPC_FUNC_IMPL(__imp__sub_830912A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830912A8"))) PPC_WEAK_FUNC(sub_830912A8);
PPC_FUNC_IMPL(__imp__sub_830912A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830912B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83067d70
	ctx.lr = 0x830912BC;
	sub_83067D70(ctx, base);
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091324
	if (!cr6.eq) goto loc_83091324;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83091324
	if (cr6.eq) goto loc_83091324;
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// lwz r5,520(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308e0d8
	ctx.lr = 0x830912EC;
	sub_8308E0D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,524(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// bl 0x8308e220
	ctx.lr = 0x830912F8;
	sub_8308E220(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837cfda8
	ctx.lr = 0x83091324;
	sub_837CFDA8(ctx, base);
loc_83091324:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309132C"))) PPC_WEAK_FUNC(sub_8309132C);
PPC_FUNC_IMPL(__imp__sub_8309132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83091330"))) PPC_WEAK_FUNC(sub_83091330);
PPC_FUNC_IMPL(__imp__sub_83091330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83091338;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,16880
	ctx.r4.s64 = ctx.r11.s64 + 16880;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x8308da10
	ctx.lr = 0x83091368;
	sub_8308DA10(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,17008
	ctx.r9.s64 = ctx.r10.s64 + 17008;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// lwz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// stb r11,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r11.u8);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x830913e0
	if (cr6.eq) goto loc_830913E0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x830913E0;
	sub_825749E0(ctx, base);
loc_830913E0:
	// li r5,80
	ctx.r5.s64 = 80;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x831cdcf0
	ctx.lr = 0x830913F8;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83091404"))) PPC_WEAK_FUNC(sub_83091404);
PPC_FUNC_IMPL(__imp__sub_83091404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83091408"))) PPC_WEAK_FUNC(sub_83091408);
PPC_FUNC_IMPL(__imp__sub_83091408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83091410;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x8308e078
	ctx.lr = 0x83091430;
	sub_8308E078(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16896
	ctx.r4.s64 = ctx.r11.s64 + 16896;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308da10
	ctx.lr = 0x83091448;
	sub_8308DA10(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// addi r8,r9,17008
	ctx.r8.s64 = ctx.r9.s64 + 17008;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// stb r11,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r11.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// beq cr6,0x830914b8
	if (cr6.eq) goto loc_830914B8;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x830914B8;
	sub_825749E0(ctx, base);
loc_830914B8:
	// li r5,80
	ctx.r5.s64 = 80;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x831cdcf0
	ctx.lr = 0x830914D0;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830914DC"))) PPC_WEAK_FUNC(sub_830914DC);
PPC_FUNC_IMPL(__imp__sub_830914DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830914E0"))) PPC_WEAK_FUNC(sub_830914E0);
PPC_FUNC_IMPL(__imp__sub_830914E0) {
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
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,17008
	ctx.r10.s64 = ctx.r11.s64 + 17008;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83091514
	if (cr6.eq) goto loc_83091514;
	// bl 0x8308f5f8
	ctx.lr = 0x83091514;
	sub_8308F5F8(ctx, base);
loc_83091514:
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8309154c
	if (cr6.eq) goto loc_8309154C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x83091528;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83091544
	if (cr6.gt) goto loc_83091544;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83091544:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
loc_8309154C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308dae8
	ctx.lr = 0x83091554;
	sub_8308DAE8(ctx, base);
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

__attribute__((alias("__imp__sub_8309156C"))) PPC_WEAK_FUNC(sub_8309156C);
PPC_FUNC_IMPL(__imp__sub_8309156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83091570"))) PPC_WEAK_FUNC(sub_83091570);
PPC_FUNC_IMPL(__imp__sub_83091570) {
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
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8309159c
	if (!cr6.eq) goto loc_8309159C;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x83091740
	goto loc_83091740;
loc_8309159C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830915B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x83091718
	if (cr6.gt) goto loc_83091718;
	// lis r12,-31991
	ctx.r12.s64 = -2096562176;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5584
	ctx.r12.s64 = ctx.r12.s64 + 5584;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_83091604;
	case 1:
		goto loc_830916E8;
	case 2:
		goto loc_830916F0;
	case 3:
		goto loc_830916F8;
	case 4:
		goto loc_83091700;
	case 5:
		goto loc_83091708;
	case 6:
		goto loc_83091710;
	case 7:
		goto loc_83091718;
	case 8:
		goto loc_83091718;
	case 9:
		goto loc_83091718;
	case 10:
		goto loc_83091718;
	case 11:
		goto loc_83091718;
	case 12:
		goto loc_83091718;
	default:
		return;
	}
	// lwz r24,5636(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5636);
	// lwz r24,5864(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5864);
	// lwz r24,5872(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5872);
	// lwz r24,5880(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5880);
	// lwz r24,5888(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5888);
	// lwz r24,5896(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5896);
	// lwz r24,5904(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5904);
	// lwz r24,5912(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5912);
	// lwz r24,5912(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5912);
	// lwz r24,5912(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5912);
	// lwz r24,5912(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5912);
	// lwz r24,5912(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5912);
	// lwz r24,5912(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5912);
loc_83091604:
	// lbz r11,173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830916b8
	if (!cr6.eq) goto loc_830916B8;
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308f798
	ctx.lr = 0x83091620;
	sub_8308F798(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091634
	if (!cr6.eq) goto loc_83091634;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x83091740
	goto loc_83091740;
loc_83091634:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8308f908
	ctx.lr = 0x83091640;
	sub_8308F908(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091654
	if (!cr6.eq) goto loc_83091654;
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x83091740
	goto loc_83091740;
loc_83091654:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x8308f9a0
	ctx.lr = 0x83091660;
	sub_8308F9A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091674
	if (!cr6.eq) goto loc_83091674;
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x83091740
	goto loc_83091740;
loc_83091674:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8308fa38
	ctx.lr = 0x83091680;
	sub_8308FA38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091694
	if (!cr6.eq) goto loc_83091694;
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x83091740
	goto loc_83091740;
loc_83091694:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308f7f8
	ctx.lr = 0x8309169C;
	sub_8308F7F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,0
	ctx.r9.s64 = ctx.r11.s64 + 0;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// b 0x83091740
	goto loc_83091740;
loc_830916B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830916CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r8,8
	ctx.r8.s64 = 8;
	// subf r7,r3,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r3.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// b 0x83091740
	goto loc_83091740;
loc_830916E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83091740
	goto loc_83091740;
loc_830916F0:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83091740
	goto loc_83091740;
loc_830916F8:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x83091740
	goto loc_83091740;
loc_83091700:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83091740
	goto loc_83091740;
loc_83091708:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x83091740
	goto loc_83091740;
loc_83091710:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x83091740
	goto loc_83091740;
loc_83091718:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089f30
	ctx.lr = 0x83091728;
	sub_83089F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,0
	ctx.r10.s64 = ctx.r11.s64 + 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
loc_83091740:
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

__attribute__((alias("__imp__sub_83091758"))) PPC_WEAK_FUNC(sub_83091758);
PPC_FUNC_IMPL(__imp__sub_83091758) {
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
	// lbz r11,173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830917e4
	if (!cr6.eq) goto loc_830917E4;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x8308e200
	ctx.lr = 0x83091780;
	sub_8308E200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091800
	if (!cr6.eq) goto loc_83091800;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830917b0
	if (!cr6.eq) goto loc_830917B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8306a968
	ctx.lr = 0x830917A4;
	sub_8306A968(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830917f4
	goto loc_830917F4;
loc_830917B0:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8308f408
	ctx.lr = 0x830917B8;
	sub_8308F408(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// bl 0x8308f748
	ctx.lr = 0x830917C0;
	sub_8308F748(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
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
loc_830917E4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091800
	if (!cr6.eq) goto loc_83091800;
	// li r4,1
	ctx.r4.s64 = 1;
loc_830917F4:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8306a968
	ctx.lr = 0x830917FC;
	sub_8306A968(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_83091800:
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

__attribute__((alias("__imp__sub_83091814"))) PPC_WEAK_FUNC(sub_83091814);
PPC_FUNC_IMPL(__imp__sub_83091814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83091818"))) PPC_WEAK_FUNC(sub_83091818);
PPC_FUNC_IMPL(__imp__sub_83091818) {
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
	// lbz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830918a4
	if (!cr6.eq) goto loc_830918A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830918a4
	if (!cr6.eq) goto loc_830918A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x830918a4
	if (!cr6.eq) goto loc_830918A4;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83091890
	if (cr6.eq) goto loc_83091890;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x830918a4
	if (!cr6.gt) goto loc_830918A4;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x830918a4
	if (cr6.gt) goto loc_830918A4;
loc_83091890:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830918A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830918A4:
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

__attribute__((alias("__imp__sub_830918B8"))) PPC_WEAK_FUNC(sub_830918B8);
PPC_FUNC_IMPL(__imp__sub_830918B8) {
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
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r9,-31754
	ctx.r9.s64 = -2081030144;
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lwz r3,21944(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21944);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x8308a1e8
	ctx.lr = 0x83091904;
	sub_8308A1E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83091914"))) PPC_WEAK_FUNC(sub_83091914);
PPC_FUNC_IMPL(__imp__sub_83091914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83091918"))) PPC_WEAK_FUNC(sub_83091918);
PPC_FUNC_IMPL(__imp__sub_83091918) {
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
	// bl 0x830914e0
	ctx.lr = 0x83091938;
	sub_830914E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83091950
	if (cr6.eq) goto loc_83091950;
	// bl 0x82416268
	ctx.lr = 0x8309194C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83091950:
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

__attribute__((alias("__imp__sub_83091968"))) PPC_WEAK_FUNC(sub_83091968);
PPC_FUNC_IMPL(__imp__sub_83091968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83091970;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// addi r26,r11,16916
	ctx.r26.s64 = ctx.r11.s64 + 16916;
	// bgt cr6,0x83091aac
	if (cr6.gt) goto loc_83091AAC;
	// lis r12,-31991
	ctx.r12.s64 = -2096562176;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6588
	ctx.r12.s64 = ctx.r12.s64 + 6588;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_830919F4;
	case 1:
		goto loc_830919F4;
	case 2:
		goto loc_83091A04;
	case 3:
		goto loc_83091AAC;
	case 4:
		goto loc_83091AAC;
	case 5:
		goto loc_83091A1C;
	case 6:
		goto loc_83091A1C;
	case 7:
		goto loc_83091A1C;
	case 8:
		goto loc_83091AAC;
	case 9:
		goto loc_83091A10;
	case 10:
		goto loc_83091A10;
	case 11:
		goto loc_83091A10;
	case 12:
		goto loc_83091A10;
	case 13:
		goto loc_83091A10;
	default:
		return;
	}
	// lwz r24,6644(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6644);
	// lwz r24,6644(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6644);
	// lwz r24,6660(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6660);
	// lwz r24,6828(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6828);
	// lwz r24,6828(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6828);
	// lwz r24,6684(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6684);
	// lwz r24,6684(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6684);
	// lwz r24,6684(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6684);
	// lwz r24,6828(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6828);
	// lwz r24,6672(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6672);
	// lwz r24,6672(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6672);
	// lwz r24,6672(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6672);
	// lwz r24,6672(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6672);
	// lwz r24,6672(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6672);
loc_830919F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x830919FC;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83091A04:
	// lis r4,247
	ctx.r4.s64 = 16187392;
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// b 0x83091ab4
	goto loc_83091AB4;
loc_83091A10:
	// lis r4,247
	ctx.r4.s64 = 16187392;
	// ori r4,r4,173
	ctx.r4.u64 = ctx.r4.u64 | 173;
	// b 0x83091ab4
	goto loc_83091AB4;
loc_83091A1C:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089f30
	ctx.lr = 0x83091A2C;
	sub_83089F30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83091a4c
	if (cr6.eq) goto loc_83091A4C;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// beq cr6,0x83091a4c
	if (cr6.eq) goto loc_83091A4C;
	// lis r4,247
	ctx.r4.s64 = 16187392;
	// ori r4,r4,65
	ctx.r4.u64 = ctx.r4.u64 | 65;
	// b 0x83091ab4
	goto loc_83091AB4;
loc_83091A4C:
	// lis r4,247
	ctx.r4.s64 = 16187392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,151
	ctx.r4.u64 = ctx.r4.u64 | 151;
	// bl 0x82d04220
	ctx.lr = 0x83091A5C;
	sub_82D04220(ctx, base);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// lis r4,249
	ctx.r4.s64 = 16318464;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x82d04220
	ctx.lr = 0x83091A78;
	sub_82D04220(ctx, base);
	// addi r4,r26,-4
	ctx.r4.s64 = ctx.r26.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x83091A88;
	sub_825A1EB8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x83091A9C;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r28,5
	ctx.r28.s64 = 5;
	// bl 0x8387e8e0
	ctx.lr = 0x83091AA8;
	sub_8387E8E0(ctx, base);
	// b 0x83091abc
	goto loc_83091ABC;
loc_83091AAC:
	// lis r4,249
	ctx.r4.s64 = 16318464;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
loc_83091AB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d04220
	ctx.lr = 0x83091ABC;
	sub_82D04220(ctx, base);
loc_83091ABC:
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bne cr6,0x83091b50
	if (!cr6.eq) goto loc_83091B50;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x8308e5c0
	ctx.lr = 0x83091AEC;
	sub_8308E5C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x83091B00;
	sub_8259CB28(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83091b1c
	if (cr6.lt) goto loc_83091B1C;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x83091B1C;
	sub_825952B8(ctx, base);
loc_83091B1C:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x83091B38;
	sub_825A1EB8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x83091B4C;
	sub_825A1DA8(ctx, base);
	// b 0x83091b64
	goto loc_83091B64;
loc_83091B50:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x83091B64;
	sub_8259CB28(ctx, base);
loc_83091B64:
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cb28
	ctx.lr = 0x83091B84;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091BA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83091bb4
	if (cr6.eq) goto loc_83091BB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x83091BB4;
	sub_83103100(ctx, base);
loc_83091BB4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83091bd0
	if (cr6.lt) goto loc_83091BD0;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83091BD0;
	sub_825952B8(ctx, base);
loc_83091BD0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83091bf8
	if (cr6.lt) goto loc_83091BF8;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x83091BF8;
	sub_825952B8(ctx, base);
loc_83091BF8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83091C00"))) PPC_WEAK_FUNC(sub_83091C00);
PPC_FUNC_IMPL(__imp__sub_83091C00) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83091c78
	if (cr6.gt) goto loc_83091C78;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lbz r9,10056(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10056);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83091c78
	if (!cr6.eq) goto loc_83091C78;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,3
	ctx.r8.u64 = ctx.r10.u64 | 3;
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
	// bl 0x83103068
	ctx.lr = 0x83091C60;
	sub_83103068(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83091C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83092278
	goto loc_83092278;
loc_83091C78:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83092270
	if (cr6.gt) goto loc_83092270;
	// lis r12,-31991
	ctx.r12.s64 = -2096562176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,7320
	ctx.r12.s64 = ctx.r12.s64 + 7320;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83091CC8;
	case 1:
		goto loc_83091CF4;
	case 2:
		goto loc_83091D84;
	case 3:
		goto loc_83092270;
	case 4:
		goto loc_83091E0C;
	case 5:
		goto loc_83091E34;
	case 6:
		goto loc_83091E6C;
	case 7:
		goto loc_83091F68;
	case 8:
		goto loc_83091FC4;
	case 9:
		goto loc_830920B8;
	case 10:
		goto loc_83092150;
	case 11:
		goto loc_83092204;
	default:
		return;
	}
	// lwz r24,7368(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7368);
	// lwz r24,7412(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7412);
	// lwz r24,7556(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7556);
	// lwz r24,8816(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8816);
	// lwz r24,7692(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7692);
	// lwz r24,7732(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7732);
	// lwz r24,7788(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7788);
	// lwz r24,8040(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8040);
	// lwz r24,8132(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8132);
	// lwz r24,8376(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8376);
	// lwz r24,8528(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8528);
	// lwz r24,8708(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8708);
loc_83091CC8:
	// lbz r11,138(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 138);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091cdc
	if (!cr6.eq) goto loc_83091CDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308de50
	ctx.lr = 0x83091CDC;
	sub_8308DE50(ctx, base);
loc_83091CDC:
	// lbz r11,137(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 137);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83092278
	if (cr6.eq) goto loc_83092278;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x83092270
	goto loc_83092270;
loc_83091CF4:
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x83089ad0
	ctx.lr = 0x83091D04;
	sub_83089AD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83091d68
	if (!cr6.eq) goto loc_83091D68;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// beq cr6,0x83091d48
	if (cr6.eq) goto loc_83091D48;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83091D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308dc48
	ctx.lr = 0x83091D50;
	sub_8308DC48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091D64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83092278
	goto loc_83092278;
loc_83091D68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091D80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83092270
	goto loc_83092270;
loc_83091D84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83092278
	if (cr6.eq) goto loc_83092278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83091758
	ctx.lr = 0x83091DAC;
	sub_83091758(ctx, base);
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83091dec
	if (!cr6.eq) goto loc_83091DEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091DCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83091dec
	if (!cr6.eq) goto loc_83091DEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091DEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83091DEC:
	// lbz r11,117(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// b 0x83092270
	goto loc_83092270;
loc_83091E0C:
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308dcc8
	ctx.lr = 0x83091E20;
	sub_8308DCC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_83091E34:
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091e4c
	if (!cr6.eq) goto loc_83091E4C;
	// bl 0x82d73e70
	ctx.lr = 0x83091E44;
	sub_82D73E70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
loc_83091E4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// b 0x83092270
	goto loc_83092270;
loc_83091E6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091E80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83091ea4
	if (!cr6.eq) goto loc_83091EA4;
	// bl 0x82d73f90
	ctx.lr = 0x83091E9C;
	sub_82D73F90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
loc_83091EA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091EB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83091f60
	if (!cr6.eq) goto loc_83091F60;
	// lbz r11,173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83091f00
	if (!cr6.eq) goto loc_83091F00;
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8308f630
	ctx.lr = 0x83091EDC;
	sub_8308F630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83091ef8
	if (cr6.eq) goto loc_83091EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830918b8
	ctx.lr = 0x83091EF4;
	sub_830918B8(ctx, base);
	// b 0x83091f00
	goto loc_83091F00;
loc_83091EF8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8308f4e0
	ctx.lr = 0x83091F00;
	sub_8308F4E0(ctx, base);
loc_83091F00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83091f60
	if (!cr6.eq) goto loc_83091F60;
	// lbz r11,178(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 178);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83091f40
	if (!cr6.eq) goto loc_83091F40;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x83094ba8
	ctx.lr = 0x83091F30;
	sub_83094BA8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83091f40
	if (!cr6.eq) goto loc_83091F40;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
loc_83091F40:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83091f60
	if (cr6.eq) goto loc_83091F60;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83091f60
	if (cr6.eq) goto loc_83091F60;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8308f688
	ctx.lr = 0x83091F60;
	sub_8308F688(ctx, base);
loc_83091F60:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_83091F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308dd08
	ctx.lr = 0x83091F70;
	sub_8308DD08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83091fbc
	if (!cr6.eq) goto loc_83091FBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091F9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83091fbc
	if (!cr6.eq) goto loc_83091FBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091FBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83091FBC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_83091FC4:
	// lbz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83091ff0
	if (!cr6.eq) goto loc_83091FF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83091FE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
loc_83091FF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83092018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309202c
	if (cr6.eq) goto loc_8309202C;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_8309202C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8309206c
	if (cr6.eq) goto loc_8309206C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8309206c
	if (cr6.eq) goto loc_8309206C;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x8308d240
	ctx.lr = 0x83092054;
	sub_8308D240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83091968
	ctx.lr = 0x83092060;
	sub_83091968(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// b 0x83092270
	goto loc_83092270;
loc_8309206C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830920ac
	if (!cr6.eq) goto loc_830920AC;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// bl 0x8308bfb0
	ctx.lr = 0x830920AC;
	sub_8308BFB0(ctx, base);
loc_830920AC:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x83092270
	goto loc_83092270;
loc_830920B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830920CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83092110
	if (!cr6.eq) goto loc_83092110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830920F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x83092270
	goto loc_83092270;
loc_83092110:
	// lbz r10,117(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830920ac
	if (!cr6.eq) goto loc_830920AC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830920ac
	if (cr6.eq) goto loc_830920AC;
	// lbz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 158);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830920ac
	if (!cr6.eq) goto loc_830920AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092144;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// b 0x83092270
	goto loc_83092270;
loc_83092150:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
	// lbz r11,159(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 159);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830921f0
	if (!cr6.eq) goto loc_830921F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// bne cr6,0x830921f8
	if (!cr6.eq) goto loc_830921F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830921C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830921f8
	if (!cr6.eq) goto loc_830921F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830921E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r11.u8);
	// b 0x83092270
	goto loc_83092270;
loc_830921F0:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_830921F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r11.u8);
	// b 0x83092270
	goto loc_83092270;
loc_83092204:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83092220
	if (cr6.eq) goto loc_83092220;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83092220
	if (cr6.eq) goto loc_83092220;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83092240
	if (!cr6.eq) goto loc_83092240;
loc_83092220:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092234;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83092270
	if (cr6.eq) goto loc_83092270;
loc_83092240:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83092290
	if (!cr6.eq) goto loc_83092290;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308ddc8
	ctx.lr = 0x83092254;
	sub_8308DDC8(ctx, base);
loc_83092254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308dc48
	ctx.lr = 0x8309225C;
	sub_8308DC48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092270;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83092270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83091818
	ctx.lr = 0x83092278;
	sub_83091818(ctx, base);
loc_83092278:
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
loc_83092290:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83092254
	if (cr6.eq) goto loc_83092254;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83092254
	if (cr6.eq) goto loc_83092254;
	// lbz r11,117(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 117);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83092254
	if (!cr6.eq) goto loc_83092254;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830922C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// b 0x83092270
	goto loc_83092270;
}

__attribute__((alias("__imp__sub_830922CC"))) PPC_WEAK_FUNC(sub_830922CC);
PPC_FUNC_IMPL(__imp__sub_830922CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830922D0"))) PPC_WEAK_FUNC(sub_830922D0);
PPC_FUNC_IMPL(__imp__sub_830922D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830922D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r11,17160
	ctx.r4.s64 = ctx.r11.s64 + 17160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x83103328
	ctx.lr = 0x83092304;
	sub_83103328(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r8,r10,17268
	ctx.r8.s64 = ctx.r10.s64 + 17268;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83092320:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83092320
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83092320;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r5,384
	ctx.r5.s64 = 384;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r10,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83092374;
	sub_831CDCF0(ctx, base);
	// stw r28,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r26,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r25.u32);
	// stw r29,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r29.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stb r30,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r30.u8);
	// stb r30,549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 549, ctx.r30.u8);
	// stb r30,550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 550, ctx.r30.u8);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// beq cr6,0x830923b4
	if (cr6.eq) goto loc_830923B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_830923B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830923BC"))) PPC_WEAK_FUNC(sub_830923BC);
PPC_FUNC_IMPL(__imp__sub_830923BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830923C0"))) PPC_WEAK_FUNC(sub_830923C0);
PPC_FUNC_IMPL(__imp__sub_830923C0) {
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
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,17268
	ctx.r9.s64 = ctx.r10.s64 + 17268;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x830923fc
	if (cr6.eq) goto loc_830923FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_830923FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x83092404;
	sub_831032A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309241c
	if (cr6.eq) goto loc_8309241C;
	// bl 0x82416268
	ctx.lr = 0x83092418;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8309241C:
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

__attribute__((alias("__imp__sub_83092434"))) PPC_WEAK_FUNC(sub_83092434);
PPC_FUNC_IMPL(__imp__sub_83092434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83092438"))) PPC_WEAK_FUNC(sub_83092438);
PPC_FUNC_IMPL(__imp__sub_83092438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83092440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309245C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83092474
	if (!cr6.eq) goto loc_83092474;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83092474:
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// beq cr6,0x830924dc
	if (cr6.eq) goto loc_830924DC;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x831ce980
	ctx.lr = 0x830924B4;
	sub_831CE980(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// li r5,256
	ctx.r5.s64 = 256;
	// stb r29,127(r11)
	PPC_STORE_U8(ctx.r11.u32 + 127, ctx.r29.u8);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x831ce980
	ctx.lr = 0x830924D4;
	sub_831CE980(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stb r29,383(r10)
	PPC_STORE_U8(ctx.r10.u32 + 383, ctx.r29.u8);
loc_830924DC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830924E8"))) PPC_WEAK_FUNC(sub_830924E8);
PPC_FUNC_IMPL(__imp__sub_830924E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830924fc
	if (!cr6.eq) goto loc_830924FC;
	// lwz r3,540(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// blr 
	return;
loc_830924FC:
	// lwz r3,536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83092510"))) PPC_WEAK_FUNC(sub_83092510);
PPC_FUNC_IMPL(__imp__sub_83092510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83092518;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83092538
	if (!cr6.eq) goto loc_83092538;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83092538:
	// lbz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 548);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309259c
	if (!cr6.eq) goto loc_8309259C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83092598
	if (!cr6.eq) goto loc_83092598;
	// lbz r11,549(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 549);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309258c
	if (!cr6.eq) goto loc_8309258C;
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092584;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 549, ctx.r9.u8);
loc_8309258C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83092598:
	// stb r29,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r29.u8);
loc_8309259C:
	// lbz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 548);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830925f4
	if (!cr6.eq) goto loc_830925F4;
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830925cc
	if (cr6.eq) goto loc_830925CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830925C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
loc_830925CC:
	// lbz r11,550(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 550);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830925f4
	if (!cr6.eq) goto loc_830925F4;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830925f4
	if (cr6.eq) goto loc_830925F4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830925F0;
	sub_825952B8(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_830925F4:
	// lbz r3,548(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 548);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83092600"))) PPC_WEAK_FUNC(sub_83092600);
PPC_FUNC_IMPL(__imp__sub_83092600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83092608;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
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
	// li r4,552
	ctx.r4.s64 = 552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x8309263C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83092668
	if (cr6.eq) goto loc_83092668;
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
	// bl 0x830922d0
	ctx.lr = 0x83092660;
	sub_830922D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83092668:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83092674"))) PPC_WEAK_FUNC(sub_83092674);
PPC_FUNC_IMPL(__imp__sub_83092674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83092678"))) PPC_WEAK_FUNC(sub_83092678);
PPC_FUNC_IMPL(__imp__sub_83092678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83092680;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83067d70
	ctx.lr = 0x8309268C;
	sub_83067D70(ctx, base);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8309276c
	if (!cr6.eq) goto loc_8309276C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309276c
	if (cr6.eq) goto loc_8309276C;
	// addi r29,r31,92
	ctx.r29.s64 = ctx.r31.s64 + 92;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// lwz r5,520(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308e0d8
	ctx.lr = 0x830926BC;
	sub_8308E0D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8308e220
	ctx.lr = 0x830926C8;
	sub_8308E220(ctx, base);
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8308dfd8
	ctx.lr = 0x830926D4;
	sub_8308DFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830926e4
	if (!cr6.eq) goto loc_830926E4;
	// li r28,3
	ctx.r28.s64 = 3;
loc_830926E4:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83092724
	if (!cr6.eq) goto loc_83092724;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83092724
	if (!cr6.eq) goto loc_83092724;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r4,r11,57344
	ctx.r4.u64 = ctx.r11.u64 | 57344;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8309271C;
	sub_82595718(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// stb r30,550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 550, ctx.r30.u8);
loc_83092724:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,524(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83092748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x83092768
	if (!cr6.eq) goto loc_83092768;
	// bl 0x837cfda8
	ctx.lr = 0x8309275C;
	sub_837CFDA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83092768:
	// bl 0x837cfda8
	ctx.lr = 0x8309276C;
	sub_837CFDA8(ctx, base);
loc_8309276C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83092778"))) PPC_WEAK_FUNC(sub_83092778);
PPC_FUNC_IMPL(__imp__sub_83092778) {
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
	// lwz r11,544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x830927c4
	if (cr6.lt) goto loc_830927C4;
	// beq cr6,0x830927b8
	if (cr6.eq) goto loc_830927B8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r11.u32);
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
loc_830927B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83092438
	ctx.lr = 0x830927C0;
	sub_83092438(ctx, base);
	// b 0x830927cc
	goto loc_830927CC;
loc_830927C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83092678
	ctx.lr = 0x830927CC;
	sub_83092678(ctx, base);
loc_830927CC:
	// stw r3,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_830927E4"))) PPC_WEAK_FUNC(sub_830927E4);
PPC_FUNC_IMPL(__imp__sub_830927E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830927E8"))) PPC_WEAK_FUNC(sub_830927E8);
PPC_FUNC_IMPL(__imp__sub_830927E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r11,22388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22388);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83092804"))) PPC_WEAK_FUNC(sub_83092804);
PPC_FUNC_IMPL(__imp__sub_83092804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83092808"))) PPC_WEAK_FUNC(sub_83092808);
PPC_FUNC_IMPL(__imp__sub_83092808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r11,22388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22388);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83092824"))) PPC_WEAK_FUNC(sub_83092824);
PPC_FUNC_IMPL(__imp__sub_83092824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83092828"))) PPC_WEAK_FUNC(sub_83092828);
PPC_FUNC_IMPL(__imp__sub_83092828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,449(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,449(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83092874
	if (!cr6.eq) goto loc_83092874;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,449(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8309286c
	if (!cr6.eq) goto loc_8309286C;
loc_83092858:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,449(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83092858
	if (cr6.eq) goto loc_83092858;
loc_8309286C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83092874:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,449(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830928ac
	if (!cr6.eq) goto loc_830928AC;
loc_83092884:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x830928ac
	if (!cr6.eq) goto loc_830928AC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,449(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83092884
	if (cr6.eq) goto loc_83092884;
loc_830928AC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830928B4"))) PPC_WEAK_FUNC(sub_830928B4);
PPC_FUNC_IMPL(__imp__sub_830928B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830928B8"))) PPC_WEAK_FUNC(sub_830928B8);
PPC_FUNC_IMPL(__imp__sub_830928B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,449(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830928d4
	if (cr6.eq) goto loc_830928D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830928D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,449(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83092910
	if (!cr6.eq) goto loc_83092910;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,449(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83092908
	if (!cr6.eq) goto loc_83092908;
loc_830928F4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,449(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830928f4
	if (cr6.eq) goto loc_830928F4;
loc_83092908:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83092910:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,449(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83092948
	if (!cr6.eq) goto loc_83092948;
loc_83092920:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83092948
	if (!cr6.eq) goto loc_83092948;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,449(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83092920
	if (cr6.eq) goto loc_83092920;
loc_83092948:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,449(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83092960"))) PPC_WEAK_FUNC(sub_83092960);
PPC_FUNC_IMPL(__imp__sub_83092960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83092968;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r27,r29,28
	ctx.r27.s64 = ctx.r29.s64 + 28;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x830929B0;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 156;
	// bl 0x831cdcf0
	ctx.lr = 0x830929C0;
	sub_831CDCF0(ctx, base);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
loc_830929E0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830929e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830929E0;
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// stw r11,412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 412, ctx.r11.u32);
	// lbz r10,416(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 416);
	// stb r10,416(r29)
	PPC_STORE_U8(ctx.r29.u32 + 416, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83092A0C"))) PPC_WEAK_FUNC(sub_83092A0C);
PPC_FUNC_IMPL(__imp__sub_83092A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83092A10"))) PPC_WEAK_FUNC(sub_83092A10);
PPC_FUNC_IMPL(__imp__sub_83092A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83092A18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 + 28;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83092A60;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// bl 0x831cdcf0
	ctx.lr = 0x83092A70;
	sub_831CDCF0(ctx, base);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
loc_83092A90:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83092a90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83092A90;
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// stw r11,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r11.u32);
	// lbz r10,416(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 416);
	// stb r10,416(r30)
	PPC_STORE_U8(ctx.r30.u32 + 416, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83092ABC"))) PPC_WEAK_FUNC(sub_83092ABC);
PPC_FUNC_IMPL(__imp__sub_83092ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83092AC0"))) PPC_WEAK_FUNC(sub_83092AC0);
PPC_FUNC_IMPL(__imp__sub_83092AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,449(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83092ae0
	if (!cr6.eq) goto loc_83092AE0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_83092AE0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x83092b08
	if (!cr6.eq) goto loc_83092B08;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83092B08:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x83092b28
	if (!cr6.eq) goto loc_83092B28;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83092B28:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83092B38"))) PPC_WEAK_FUNC(sub_83092B38);
PPC_FUNC_IMPL(__imp__sub_83092B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r11,449(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 449);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83092B50:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x83092b64
	if (!cr6.lt) goto loc_83092B64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83092bb8
	goto loc_83092BB8;
loc_83092B64:
	// bgt cr6,0x83092bb4
	if (cr6.gt) goto loc_83092BB4;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83092b80
	if (!cr6.lt) goto loc_83092B80;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83092bb8
	goto loc_83092BB8;
loc_83092B80:
	// bgt cr6,0x83092bb4
	if (cr6.gt) goto loc_83092BB4;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83092b9c
	if (!cr6.lt) goto loc_83092B9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83092bb8
	goto loc_83092BB8;
loc_83092B9C:
	// bgt cr6,0x83092bb4
	if (cr6.gt) goto loc_83092BB4;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83092bb8
	if (cr6.lt) goto loc_83092BB8;
loc_83092BB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83092BB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83092bcc
	if (cr6.eq) goto loc_83092BCC;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x83092bd4
	goto loc_83092BD4;
loc_83092BCC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_83092BD4:
	// lbz r11,449(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 449);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83092b50
	if (cr6.eq) goto loc_83092B50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83092BE4"))) PPC_WEAK_FUNC(sub_83092BE4);
PPC_FUNC_IMPL(__imp__sub_83092BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83092BE8"))) PPC_WEAK_FUNC(sub_83092BE8);
PPC_FUNC_IMPL(__imp__sub_83092BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83092BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,449(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 449);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83092c38
	if (!cr6.eq) goto loc_83092C38;
	// li r29,2
	ctx.r29.s64 = 2;
loc_83092C0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83092be8
	ctx.lr = 0x83092C18;
	sub_83092BE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x83092C2C;
	sub_825952B8(ctx, base);
	// lbz r11,449(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 449);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83092c0c
	if (cr6.eq) goto loc_83092C0C;
loc_83092C38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83092C40"))) PPC_WEAK_FUNC(sub_83092C40);
PPC_FUNC_IMPL(__imp__sub_83092C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,449(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83092c60
	if (!cr6.eq) goto loc_83092C60;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_83092C60:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x83092c88
	if (!cr6.eq) goto loc_83092C88;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83092C88:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x83092ca8
	if (!cr6.eq) goto loc_83092CA8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83092CA8:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83092CB8"))) PPC_WEAK_FUNC(sub_83092CB8);
PPC_FUNC_IMPL(__imp__sub_83092CB8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,452
	ctx.r4.s64 = 452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83092CEC;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,448(r7)
	PPC_STORE_U8(ctx.r7.u32 + 448, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,449(r6)
	PPC_STORE_U8(ctx.r6.u32 + 449, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83092D30"))) PPC_WEAK_FUNC(sub_83092D30);
PPC_FUNC_IMPL(__imp__sub_83092D30) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x83092a10
	ctx.lr = 0x83092D70;
	sub_83092A10(ctx, base);
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

__attribute__((alias("__imp__sub_83092D88"))) PPC_WEAK_FUNC(sub_83092D88);
PPC_FUNC_IMPL(__imp__sub_83092D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83092D90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,150
	ctx.r10.s64 = 9830400;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,20441
	ctx.r9.u64 = ctx.r10.u64 | 20441;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83092dd4
	if (cr6.lt) goto loc_83092DD4;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83092DC8;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x83092DD4;
	sub_831CC150(ctx, base);
loc_83092DD4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x83092e04
	if (!cr6.eq) goto loc_83092E04;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x83092e44
	goto loc_83092E44;
loc_83092E04:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83092e2c
	if (cr6.eq) goto loc_83092E2C;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x83092e44
	if (!cr6.eq) goto loc_83092E44;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x83092e44
	goto loc_83092E44;
loc_83092E2C:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x83092e44
	if (!cr6.eq) goto loc_83092E44;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_83092E44:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83092f68
	if (!cr6.eq) goto loc_83092F68;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83092E60:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x83092ee8
	if (!cr6.eq) goto loc_83092EE8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83092ea8
	if (!cr6.eq) goto loc_83092EA8;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,448(r10)
	PPC_STORE_U8(ctx.r10.u32 + 448, ctx.r29.u8);
	// stb r29,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,448(r8)
	PPC_STORE_U8(ctx.r8.u32 + 448, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x83092f58
	goto loc_83092F58;
loc_83092EA8:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83092ec0
	if (!cr6.eq) goto loc_83092EC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83092c40
	ctx.lr = 0x83092EC0;
	sub_83092C40(ctx, base);
loc_83092EC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,448(r9)
	PPC_STORE_U8(ctx.r9.u32 + 448, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x83092ac0
	ctx.lr = 0x83092EE4;
	sub_83092AC0(ctx, base);
	// b 0x83092f58
	goto loc_83092F58;
loc_83092EE8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83092f1c
	if (!cr6.eq) goto loc_83092F1C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,448(r10)
	PPC_STORE_U8(ctx.r10.u32 + 448, ctx.r29.u8);
	// stb r29,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,448(r8)
	PPC_STORE_U8(ctx.r8.u32 + 448, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x83092f58
	goto loc_83092F58;
loc_83092F1C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83092f34
	if (!cr6.eq) goto loc_83092F34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83092ac0
	ctx.lr = 0x83092F34;
	sub_83092AC0(ctx, base);
loc_83092F34:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,448(r9)
	PPC_STORE_U8(ctx.r9.u32 + 448, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x83092c40
	ctx.lr = 0x83092F58;
	sub_83092C40(ctx, base);
loc_83092F58:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83092e60
	if (cr6.eq) goto loc_83092E60;
loc_83092F68:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,448(r10)
	PPC_STORE_U8(ctx.r10.u32 + 448, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83092F84"))) PPC_WEAK_FUNC(sub_83092F84);
PPC_FUNC_IMPL(__imp__sub_83092F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83092F88"))) PPC_WEAK_FUNC(sub_83092F88);
PPC_FUNC_IMPL(__imp__sub_83092F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83092F90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83093010
	if (cr6.eq) goto loc_83093010;
loc_83092FB4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x838281d0
	ctx.lr = 0x83092FC8;
	sub_838281D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x838281d0
	ctx.lr = 0x83092FE0;
	sub_838281D0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r6,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r6.u32);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// bne cr6,0x83092fb4
	if (!cr6.eq) goto loc_83092FB4;
loc_83093010:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8309303c
	if (cr6.eq) goto loc_8309303C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309303c
	if (cr6.eq) goto loc_8309303C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8309303C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83093050"))) PPC_WEAK_FUNC(sub_83093050);
PPC_FUNC_IMPL(__imp__sub_83093050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83093058;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830930d8
	if (cr6.eq) goto loc_830930D8;
loc_8309307C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838281d0
	ctx.lr = 0x83093084;
	sub_838281D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838281d0
	ctx.lr = 0x83093090;
	sub_838281D0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// bne cr6,0x8309307c
	if (!cr6.eq) goto loc_8309307C;
loc_830930D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// beq cr6,0x83093104
	if (cr6.eq) goto loc_83093104;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093104
	if (cr6.eq) goto loc_83093104;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83093104:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83093118"))) PPC_WEAK_FUNC(sub_83093118);
PPC_FUNC_IMPL(__imp__sub_83093118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83093120;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,449(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 449);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093148
	if (cr6.eq) goto loc_83093148;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x83093148;
	sub_831CC188(ctx, base);
loc_83093148:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83092828
	ctx.lr = 0x83093154;
	sub_83092828(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,449(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x83093170
	if (cr6.eq) goto loc_83093170;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x83093194
	goto loc_83093194;
loc_83093170:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,449(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 449);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83093188
	if (cr6.eq) goto loc_83093188;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x83093194
	goto loc_83093194;
loc_83093188:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x83093280
	if (!cr6.eq) goto loc_83093280;
loc_83093194:
	// lbz r11,449(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 449);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830931a8
	if (!cr6.eq) goto loc_830931A8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_830931A8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x830931c0
	if (!cr6.eq) goto loc_830931C0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x830931d8
	goto loc_830931D8;
loc_830931C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x830931d4
	if (!cr6.eq) goto loc_830931D4;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x830931d8
	goto loc_830931D8;
loc_830931D4:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_830931D8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83093228
	if (!cr6.eq) goto loc_83093228;
	// lbz r11,449(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 449);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830931fc
	if (cr6.eq) goto loc_830931FC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x83093224
	goto loc_83093224;
loc_830931FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,449(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83093224
	if (!cr6.eq) goto loc_83093224;
loc_83093210:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,449(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83093210
	if (cr6.eq) goto loc_83093210;
loc_83093224:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_83093228:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83093314
	if (!cr6.eq) goto loc_83093314;
	// lbz r11,449(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 449);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093250
	if (cr6.eq) goto loc_83093250;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x83093314
	goto loc_83093314;
loc_83093250:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,449(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83093278
	if (!cr6.eq) goto loc_83093278;
loc_83093264:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,449(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83093264
	if (cr6.eq) goto loc_83093264;
loc_83093278:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x83093314
	goto loc_83093314;
loc_83093280:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x830932a0
	if (!cr6.eq) goto loc_830932A0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x830932c8
	goto loc_830932C8;
loc_830932A0:
	// lbz r11,449(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 449);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830932b4
	if (!cr6.eq) goto loc_830932B4;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_830932B4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_830932C8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x830932e0
	if (!cr6.eq) goto loc_830932E0;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x830932fc
	goto loc_830932FC;
loc_830932E0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x830932f8
	if (!cr6.eq) goto loc_830932F8;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x830932fc
	goto loc_830932FC;
loc_830932F8:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_830932FC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,448(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 448);
	// lbz r10,448(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 448);
	// stb r9,448(r25)
	PPC_STORE_U8(ctx.r25.u32 + 448, ctx.r9.u8);
	// stb r10,448(r26)
	PPC_STORE_U8(ctx.r26.u32 + 448, ctx.r10.u8);
loc_83093314:
	// lbz r11,448(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 448);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830934ac
	if (!cr6.eq) goto loc_830934AC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x830934a8
	if (cr6.eq) goto loc_830934A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83093338:
	// lbz r11,448(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 448);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830934a8
	if (!cr6.eq) goto loc_830934A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x830933f0
	if (!cr6.eq) goto loc_830933F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83093378
	if (!cr6.eq) goto loc_83093378;
	// stb r29,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83092c40
	ctx.lr = 0x83093374;
	sub_83092C40(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83093378:
	// lbz r10,449(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83093444
	if (!cr6.eq) goto loc_83093444;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,448(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 448);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x830933a4
	if (!cr6.eq) goto loc_830933A4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,448(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 448);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x83093440
	if (cr6.eq) goto loc_83093440;
loc_830933A4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,448(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 448);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x830933cc
	if (!cr6.eq) goto loc_830933CC;
	// stb r29,448(r10)
	PPC_STORE_U8(ctx.r10.u32 + 448, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83092ac0
	ctx.lr = 0x830933C8;
	sub_83092AC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_830933CC:
	// lbz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 448);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r10.u8);
	// stb r29,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,448(r9)
	PPC_STORE_U8(ctx.r9.u32 + 448, ctx.r29.u8);
	// bl 0x83092c40
	ctx.lr = 0x830933EC;
	sub_83092C40(ctx, base);
	// b 0x830934a8
	goto loc_830934A8;
loc_830933F0:
	// lbz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83093414
	if (!cr6.eq) goto loc_83093414;
	// stb r29,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83092ac0
	ctx.lr = 0x83093410;
	sub_83092AC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83093414:
	// lbz r10,449(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 449);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83093444
	if (!cr6.eq) goto loc_83093444;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,448(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 448);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83093460
	if (!cr6.eq) goto loc_83093460;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,448(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 448);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83093460
	if (!cr6.eq) goto loc_83093460;
loc_83093440:
	// stb r30,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r30.u8);
loc_83093444:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x83093338
	if (!cr6.eq) goto loc_83093338;
	// b 0x830934a8
	goto loc_830934A8;
loc_83093460:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,448(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 448);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83093488
	if (!cr6.eq) goto loc_83093488;
	// stb r29,448(r10)
	PPC_STORE_U8(ctx.r10.u32 + 448, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83092c40
	ctx.lr = 0x83093484;
	sub_83092C40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83093488:
	// lbz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 448);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r10.u8);
	// stb r29,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,448(r9)
	PPC_STORE_U8(ctx.r9.u32 + 448, ctx.r29.u8);
	// bl 0x83092ac0
	ctx.lr = 0x830934A8;
	sub_83092AC0(ctx, base);
loc_830934A8:
	// stb r29,448(r28)
	PPC_STORE_U8(ctx.r28.u32 + 448, ctx.r29.u8);
loc_830934AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830934C0;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830934d4
	if (cr6.eq) goto loc_830934D4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_830934D4:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830934E4"))) PPC_WEAK_FUNC(sub_830934E4);
PPC_FUNC_IMPL(__imp__sub_830934E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830934E8"))) PPC_WEAK_FUNC(sub_830934E8);
PPC_FUNC_IMPL(__imp__sub_830934E8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83092be8
	ctx.lr = 0x83093508;
	sub_83092BE8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8309353C"))) PPC_WEAK_FUNC(sub_8309353C);
PPC_FUNC_IMPL(__imp__sub_8309353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83093540"))) PPC_WEAK_FUNC(sub_83093540);
PPC_FUNC_IMPL(__imp__sub_83093540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83093548;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x83093594
	if (!cr6.eq) goto loc_83093594;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x83093594
	if (!cr6.eq) goto loc_83093594;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830934e8
	ctx.lr = 0x8309357C;
	sub_830934E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83093594:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x830935c4
	if (cr6.eq) goto loc_830935C4;
loc_8309359C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83092828
	ctx.lr = 0x830935A8;
	sub_83092828(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83093118
	ctx.lr = 0x830935B8;
	sub_83093118(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x8309359c
	if (!cr6.eq) goto loc_8309359C;
loc_830935C4:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830935D4"))) PPC_WEAK_FUNC(sub_830935D4);
PPC_FUNC_IMPL(__imp__sub_830935D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830935D8"))) PPC_WEAK_FUNC(sub_830935D8);
PPC_FUNC_IMPL(__imp__sub_830935D8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8309361c
	if (cr6.eq) goto loc_8309361C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309361c
	if (cr6.eq) goto loc_8309361C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_8309361C:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x8309364c
	if (cr6.eq) goto loc_8309364C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8309364c
	if (cr6.eq) goto loc_8309364C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_8309364C:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8309367c
	if (cr6.eq) goto loc_8309367C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309367c
	if (cr6.eq) goto loc_8309367C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_8309367C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x83092f88
	ctx.lr = 0x83093698;
	sub_83092F88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830936B0"))) PPC_WEAK_FUNC(sub_830936B0);
PPC_FUNC_IMPL(__imp__sub_830936B0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x830936f4
	if (cr6.eq) goto loc_830936F4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830936f4
	if (cr6.eq) goto loc_830936F4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_830936F4:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x83093724
	if (cr6.eq) goto loc_83093724;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83093724
	if (cr6.eq) goto loc_83093724;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_83093724:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x83093754
	if (cr6.eq) goto loc_83093754;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093754
	if (cr6.eq) goto loc_83093754;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_83093754:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x83093050
	ctx.lr = 0x83093770;
	sub_83093050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83093788"))) PPC_WEAK_FUNC(sub_83093788);
PPC_FUNC_IMPL(__imp__sub_83093788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83093790;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r11,449(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 449);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830938f8
	if (!cr6.eq) goto loc_830938F8;
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
loc_830937C4:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8309386c
	if (cr6.eq) goto loc_8309386C;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x830937f0
	if (!cr6.lt) goto loc_830937F0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830938d4
	goto loc_830938D4;
loc_830937F0:
	// bgt cr6,0x83093858
	if (cr6.gt) goto loc_83093858;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83093818
	if (!cr6.lt) goto loc_83093818;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830938d4
	goto loc_830938D4;
loc_83093818:
	// bgt cr6,0x83093858
	if (cr6.gt) goto loc_83093858;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83093840
	if (!cr6.lt) goto loc_83093840;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830938d4
	goto loc_830938D4;
loc_83093840:
	// bgt cr6,0x83093858
	if (cr6.gt) goto loc_83093858;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x8309385c
	if (cr6.lt) goto loc_8309385C;
loc_83093858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8309385C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830938d4
	goto loc_830938D4;
loc_8309386C:
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bge cr6,0x8309387c
	if (!cr6.lt) goto loc_8309387C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x830938d0
	goto loc_830938D0;
loc_8309387C:
	// bgt cr6,0x830938cc
	if (cr6.gt) goto loc_830938CC;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83093898
	if (!cr6.lt) goto loc_83093898;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x830938d0
	goto loc_830938D0;
loc_83093898:
	// bgt cr6,0x830938cc
	if (cr6.gt) goto loc_830938CC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x830938b4
	if (!cr6.lt) goto loc_830938B4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x830938d0
	goto loc_830938D0;
loc_830938B4:
	// bgt cr6,0x830938cc
	if (cr6.gt) goto loc_830938CC;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x830938d0
	if (cr6.lt) goto loc_830938D0;
loc_830938CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830938D0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_830938D4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830938e8
	if (cr6.eq) goto loc_830938E8;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x830938ec
	goto loc_830938EC;
loc_830938E8:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_830938EC:
	// lbz r11,449(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 449);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830937c4
	if (cr6.eq) goto loc_830937C4;
loc_830938F8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093958
	if (cr6.eq) goto loc_83093958;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x83093950
	if (!cr6.eq) goto loc_83093950;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83092d88
	ctx.lr = 0x83093934;
	sub_83092D88(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r26.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83093950:
	// bl 0x830928b8
	ctx.lr = 0x83093954;
	sub_830928B8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83093958:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83093970
	if (!cr6.lt) goto loc_83093970;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x830939c4
	goto loc_830939C4;
loc_83093970:
	// bgt cr6,0x830939c0
	if (cr6.gt) goto loc_830939C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8309398c
	if (!cr6.lt) goto loc_8309398C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x830939c4
	goto loc_830939C4;
loc_8309398C:
	// bgt cr6,0x830939c0
	if (cr6.gt) goto loc_830939C0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x830939a8
	if (!cr6.lt) goto loc_830939A8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x830939c4
	goto loc_830939C4;
loc_830939A8:
	// bgt cr6,0x830939c0
	if (cr6.gt) goto loc_830939C0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x830939c4
	if (cr6.lt) goto loc_830939C4;
loc_830939C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830939C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093a04
	if (cr6.eq) goto loc_83093A04;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83092d88
	ctx.lr = 0x830939E8;
	sub_83092D88(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r26.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83093A04:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83093A18;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83093A30"))) PPC_WEAK_FUNC(sub_83093A30);
PPC_FUNC_IMPL(__imp__sub_83093A30) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r11,22388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22388);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093a90
	if (cr6.eq) goto loc_83093A90;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83093a90
	if (cr6.eq) goto loc_83093A90;
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83093a90
	if (cr6.eq) goto loc_83093A90;
loc_83093A70:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83093aa8
	if (!cr6.eq) goto loc_83093AA8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83092828
	ctx.lr = 0x83093A84;
	sub_83092828(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83093a70
	if (!cr6.eq) goto loc_83093A70;
loc_83093A90:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_83093AA8:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83093AC0"))) PPC_WEAK_FUNC(sub_83093AC0);
PPC_FUNC_IMPL(__imp__sub_83093AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83093AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83092b38
	ctx.lr = 0x83093AE4;
	sub_83092B38(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x83093b84
	if (cr6.eq) goto loc_83093B84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83093b0c
	if (!cr6.lt) goto loc_83093B0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83093b60
	goto loc_83093B60;
loc_83093B0C:
	// bgt cr6,0x83093b5c
	if (cr6.gt) goto loc_83093B5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83093b28
	if (!cr6.lt) goto loc_83093B28;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83093b60
	goto loc_83093B60;
loc_83093B28:
	// bgt cr6,0x83093b5c
	if (cr6.gt) goto loc_83093B5C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83093b44
	if (!cr6.lt) goto loc_83093B44;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83093b60
	goto loc_83093B60;
loc_83093B44:
	// bgt cr6,0x83093b5c
	if (cr6.gt) goto loc_83093B5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83093b60
	if (cr6.lt) goto loc_83093B60;
loc_83093B5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83093B60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83093b84
	if (!cr6.eq) goto loc_83093B84;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83093B84:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83093BA0"))) PPC_WEAK_FUNC(sub_83093BA0);
PPC_FUNC_IMPL(__imp__sub_83093BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83093BA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x83093bcc
	if (cr6.eq) goto loc_83093BCC;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83093BCC:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83093be0
	if (cr6.eq) goto loc_83093BE0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83093BE0:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r30,r7,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r28,r8,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bge cr6,0x83093ccc
	if (!cr6.lt) goto loc_83093CCC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x83093c30
	if (cr6.eq) goto loc_83093C30;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093c30
	if (cr6.eq) goto loc_83093C30;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83093C30:
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// beq cr6,0x83093c58
	if (cr6.eq) goto loc_83093C58;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093c58
	if (cr6.eq) goto loc_83093C58;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_83093C58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x830935d8
	ctx.lr = 0x83093C80;
	sub_830935D8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83093d6c
	if (cr6.eq) goto loc_83093D6C;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_83093C8C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83093cc4
	if (cr6.eq) goto loc_83093CC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83093cb4
	if (cr6.gt) goto loc_83093CB4;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_83093CB4:
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x83093cc4
	if (!cr0.eq) goto loc_83093CC4;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_83093CC4:
	// bdnz 0x83093c8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83093C8C;
	// b 0x83093d6c
	goto loc_83093D6C;
loc_83093CCC:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// beq cr6,0x83093cf0
	if (cr6.eq) goto loc_83093CF0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83093cf0
	if (cr6.eq) goto loc_83093CF0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_83093CF0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x83093d28
	if (cr6.eq) goto loc_83093D28;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093d28
	if (cr6.eq) goto loc_83093D28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83093D28:
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830936b0
	ctx.lr = 0x83093D40;
	sub_830936B0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83093d6c
	if (cr6.eq) goto loc_83093D6C;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_83093D4C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093d68
	if (cr6.eq) goto loc_83093D68;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x83093d68
	if (!cr0.eq) goto loc_83093D68;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_83093D68:
	// bdnz 0x83093d4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83093D4C;
loc_83093D6C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83093d90
	if (cr6.eq) goto loc_83093D90;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83093d90
	if (cr6.eq) goto loc_83093D90;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83093D90:
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + ctx.r28.u64;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x83093dc0
	if (cr6.eq) goto loc_83093DC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093dc0
	if (cr6.eq) goto loc_83093DC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_83093DC0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83093DC8"))) PPC_WEAK_FUNC(sub_83093DC8);
PPC_FUNC_IMPL(__imp__sub_83093DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83093DD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
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
	// li r4,452
	ctx.r4.s64 = 452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83093DF4;
	sub_82595718(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r11,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r11.u8);
	// stb r11,449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 449, ctx.r11.u8);
	// bl 0x83092a10
	ctx.lr = 0x83093E2C;
	sub_83092A10(ctx, base);
	// addic. r3,r31,12
	xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r3.s64 = ctx.r31.s64 + 12;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83093e3c
	if (cr0.eq) goto loc_83093E3C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83092960
	ctx.lr = 0x83093E3C;
	sub_83092960(ctx, base);
loc_83093E3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83093E48"))) PPC_WEAK_FUNC(sub_83093E48);
PPC_FUNC_IMPL(__imp__sub_83093E48) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r31,22388(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22388);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83093e84
	if (!cr6.eq) goto loc_83093E84;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_83093E84:
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83093ac0
	ctx.lr = 0x83093E90;
	sub_83093AC0(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83093ea8
	if (cr6.eq) goto loc_83093EA8;
	// lbz r3,444(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 444);
loc_83093EA8:
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

__attribute__((alias("__imp__sub_83093EBC"))) PPC_WEAK_FUNC(sub_83093EBC);
PPC_FUNC_IMPL(__imp__sub_83093EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83093EC0"))) PPC_WEAK_FUNC(sub_83093EC0);
PPC_FUNC_IMPL(__imp__sub_83093EC0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,22388(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22388);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83093ef0
	if (!cr6.eq) goto loc_83093EF0;
loc_83093EE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83093f1c
	goto loc_83093F1C;
loc_83093EF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83093e48
	ctx.lr = 0x83093EF8;
	sub_83093E48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093ee8
	if (cr6.eq) goto loc_83093EE8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83093ac0
	ctx.lr = 0x83093F14;
	sub_83093AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
loc_83093F1C:
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

__attribute__((alias("__imp__sub_83093F34"))) PPC_WEAK_FUNC(sub_83093F34);
PPC_FUNC_IMPL(__imp__sub_83093F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83093F38"))) PPC_WEAK_FUNC(sub_83093F38);
PPC_FUNC_IMPL(__imp__sub_83093F38) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,22388(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22388);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83093f68
	if (!cr6.eq) goto loc_83093F68;
loc_83093F60:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x83093f94
	goto loc_83093F94;
loc_83093F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83093e48
	ctx.lr = 0x83093F70;
	sub_83093E48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83093f60
	if (cr6.eq) goto loc_83093F60;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83093ac0
	ctx.lr = 0x83093F8C;
	sub_83093AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
loc_83093F94:
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

__attribute__((alias("__imp__sub_83093FAC"))) PPC_WEAK_FUNC(sub_83093FAC);
PPC_FUNC_IMPL(__imp__sub_83093FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83093FB0"))) PPC_WEAK_FUNC(sub_83093FB0);
PPC_FUNC_IMPL(__imp__sub_83093FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83093FB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31754
	ctx.r29.s64 = -2081030144;
	// lwz r31,22388(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8309408c
	if (cr6.eq) goto loc_8309408C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x83094054
	if (cr6.eq) goto loc_83094054;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83093FE8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83094018
	if (!cr6.eq) goto loc_83094018;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83094018
	if (cr6.eq) goto loc_83094018;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x825952b8
	ctx.lr = 0x83094010;
	sub_825952B8(ctx, base);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// lwz r31,22388(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
loc_83094018:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8309403c
	if (cr6.eq) goto loc_8309403C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83094034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// lwz r31,22388(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
loc_8309403C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83092828
	ctx.lr = 0x83094044;
	sub_83092828(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x83093fe8
	if (!cr6.eq) goto loc_83093FE8;
loc_83094054:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83092be8
	ctx.lr = 0x83094064;
	sub_83092BE8(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,22388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// bl 0x8344cfa0
	ctx.lr = 0x8309408C;
	sub_8344CFA0(ctx, base);
loc_8309408C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83094094"))) PPC_WEAK_FUNC(sub_83094094);
PPC_FUNC_IMPL(__imp__sub_83094094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83094098"))) PPC_WEAK_FUNC(sub_83094098);
PPC_FUNC_IMPL(__imp__sub_83094098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830940A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83094280
	if (!cr6.gt) goto loc_83094280;
	// addi r26,r3,72
	ctx.r26.s64 = ctx.r3.s64 + 72;
	// addi r29,r3,88
	ctx.r29.s64 = ctx.r3.s64 + 88;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_830940C4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830940dc
	if (cr6.eq) goto loc_830940DC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_830940DC:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x830940ec
	if (cr6.gt) goto loc_830940EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_830940EC:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83093ac0
	ctx.lr = 0x83094108;
	sub_83093AC0(ctx, base);
	// lwz r8,76(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83094204
	if (cr6.eq) goto loc_83094204;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83094244
	if (cr6.eq) goto loc_83094244;
	// lwz r11,544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83094280
	if (!cr6.eq) goto loc_83094280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83094140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r3.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x83094194
	if (!cr6.eq) goto loc_83094194;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83094194
	if (!cr6.eq) goto loc_83094194;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82595718
	ctx.lr = 0x8309417C;
	sub_82595718(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,112(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// bl 0x831ce980
	ctx.lr = 0x83094194;
	sub_831CE980(ctx, base);
loc_83094194:
	// stb r25,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r25.u8);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830941b8
	if (cr6.eq) goto loc_830941B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830941B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
loc_830941B8:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830941f0
	if (cr6.eq) goto loc_830941F0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x830941e0
	if (cr6.gt) goto loc_830941E0;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
loc_830941E0:
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bne 0x830941f0
	if (!cr0.eq) goto loc_830941F0;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
loc_830941F0:
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x830940c4
	if (cr6.gt) goto loc_830940C4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83094204:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83094280
	if (cr6.eq) goto loc_83094280;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8309422c
	if (cr6.gt) goto loc_8309422C;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
loc_8309422C:
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bne 0x83094280
	if (!cr0.eq) goto loc_83094280;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83094244:
	// lbz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 112);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83094280
	if (cr6.eq) goto loc_83094280;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83092600
	ctx.lr = 0x8309426C;
	sub_83092600(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83103100
	ctx.lr = 0x8309427C;
	sub_83103100(ctx, base);
	// stb r27,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r27.u8);
loc_83094280:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83094288"))) PPC_WEAK_FUNC(sub_83094288);
PPC_FUNC_IMPL(__imp__sub_83094288) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830942c0
	if (cr6.eq) goto loc_830942C0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830942c0
	if (cr6.eq) goto loc_830942C0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_830942C0:
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x830942ec
	if (cr6.eq) goto loc_830942EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830942ec
	if (cr6.eq) goto loc_830942EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_830942EC:
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq cr6,0x83094314
	if (cr6.eq) goto loc_83094314;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83094314
	if (cr6.eq) goto loc_83094314;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_83094314:
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83093ba0
	ctx.lr = 0x83094328;
	sub_83093BA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83094340"))) PPC_WEAK_FUNC(sub_83094340);
PPC_FUNC_IMPL(__imp__sub_83094340) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83093dc8
	ctx.lr = 0x83094368;
	sub_83093DC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83093788
	ctx.lr = 0x8309437C;
	sub_83093788(ctx, base);
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

__attribute__((alias("__imp__sub_83094398"))) PPC_WEAK_FUNC(sub_83094398);
PPC_FUNC_IMPL(__imp__sub_83094398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830943A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31754
	ctx.r29.s64 = -2081030144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,22388(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8309453c
	if (cr6.eq) goto loc_8309453C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83093ac0
	ctx.lr = 0x830943C8;
	sub_83093AC0(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x8309453c
	if (cr6.eq) goto loc_8309453C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83094410
	if (!cr6.eq) goto loc_83094410;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83094410
	if (cr6.eq) goto loc_83094410;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x825952b8
	ctx.lr = 0x83094408;
	sub_825952B8(ctx, base);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// lwz r30,22388(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
loc_83094410:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83094434
	if (cr6.eq) goto loc_83094434;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309442C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// lwz r30,22388(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
loc_83094434:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83093118
	ctx.lr = 0x83094444;
	sub_83093118(ctx, base);
	// lwz r11,22388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_83094460:
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x8309453c
	if (cr6.eq) goto loc_8309453C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// beq cr6,0x83094478
	if (cr6.eq) goto loc_83094478;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_83094478:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8309448c
	if (cr6.gt) goto loc_8309448C;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
loc_8309448C:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// beq cr6,0x830944b0
	if (cr6.eq) goto loc_830944B0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x830944f4
	goto loc_830944F4;
loc_830944B0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x830944c8
	if (cr6.eq) goto loc_830944C8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x830944f4
	goto loc_830944F4;
loc_830944C8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x830944e0
	if (cr6.eq) goto loc_830944E0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x830944f4
	goto loc_830944F4;
loc_830944E0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_830944F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83094508
	if (!cr6.eq) goto loc_83094508;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x83094460
	goto loc_83094460;
loc_83094508:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// beq cr6,0x8309452c
	if (cr6.eq) goto loc_8309452C;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309452c
	if (cr6.eq) goto loc_8309452C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8309452C:
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83094288
	ctx.lr = 0x8309453C;
	sub_83094288(ctx, base);
loc_8309453C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83094544"))) PPC_WEAK_FUNC(sub_83094544);
PPC_FUNC_IMPL(__imp__sub_83094544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83094548"))) PPC_WEAK_FUNC(sub_83094548);
PPC_FUNC_IMPL(__imp__sub_83094548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83094550;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bgt cr6,0x83094578
	if (cr6.gt) goto loc_83094578;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82dc7080
	ctx.lr = 0x83094578;
	sub_82DC7080(ctx, base);
loc_83094578:
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
	// bgt cr6,0x83094594
	if (cr6.gt) goto loc_83094594;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_83094594:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830945c8
	if (!cr6.eq) goto loc_830945C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830945C0;
	sub_82595718(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
loc_830945C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830945f8
	if (cr6.eq) goto loc_830945F8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_830945F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8309460C"))) PPC_WEAK_FUNC(sub_8309460C);
PPC_FUNC_IMPL(__imp__sub_8309460C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83094610"))) PPC_WEAK_FUNC(sub_83094610);
PPC_FUNC_IMPL(__imp__sub_83094610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83094618;
	__savegprlr_29(ctx, base);
	// stwu r1,-1008(r1)
	ea = -1008 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31754
	ctx.r29.s64 = -2081030144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,22388(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830946e8
	if (cr6.eq) goto loc_830946E8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83093ac0
	ctx.lr = 0x83094640;
	sub_83093AC0(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83094664
	if (cr6.eq) goto loc_83094664;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83094664:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83094680;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x831cdcf0
	ctx.lr = 0x83094690;
	sub_831CDCF0(ctx, base);
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r10.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x83092d30
	ctx.lr = 0x830946C4;
	sub_83092D30(ctx, base);
	// lwz r11,22388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83094340
	ctx.lr = 0x830946D8;
	sub_83094340(ctx, base);
	// lwz r11,22388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22388);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// bl 0x83094548
	ctx.lr = 0x830946E8;
	sub_83094548(ctx, base);
loc_830946E8:
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830946F0"))) PPC_WEAK_FUNC(sub_830946F0);
PPC_FUNC_IMPL(__imp__sub_830946F0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,22388(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22388);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8309475c
	if (cr6.eq) goto loc_8309475C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83093ac0
	ctx.lr = 0x83094728;
	sub_83093AC0(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8309475c
	if (cr6.eq) goto loc_8309475C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83094754
	if (!cr6.gt) goto loc_83094754;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x8309475c
	goto loc_8309475C;
loc_83094754:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83094398
	ctx.lr = 0x8309475C;
	sub_83094398(ctx, base);
loc_8309475C:
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

__attribute__((alias("__imp__sub_83094774"))) PPC_WEAK_FUNC(sub_83094774);
PPC_FUNC_IMPL(__imp__sub_83094774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83094778"))) PPC_WEAK_FUNC(sub_83094778);
PPC_FUNC_IMPL(__imp__sub_83094778) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// addi r9,r11,17440
	ctx.r9.s64 = ctx.r11.s64 + 17440;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// stw r11,22388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22388, ctx.r11.u32);
	// bl 0x8344cfa0
	ctx.lr = 0x830947B0;
	sub_8344CFA0(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x830947C4;
	sub_825952B8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x83093540
	ctx.lr = 0x830947E0;
	sub_83093540(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x825952b8
	ctx.lr = 0x830947F0;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x830947F8;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_83094810"))) PPC_WEAK_FUNC(sub_83094810);
PPC_FUNC_IMPL(__imp__sub_83094810) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,17344
	ctx.r4.s64 = ctx.r11.s64 + 17344;
	// bl 0x83103328
	ctx.lr = 0x83094830;
	sub_83103328(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r9,r10,17440
	ctx.r9.s64 = ctx.r10.s64 + 17440;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83092cb8
	ctx.lr = 0x8309484C;
	sub_83092CB8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838a2b30
	ctx.lr = 0x83094858;
	sub_838A2B30(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_83094878"))) PPC_WEAK_FUNC(sub_83094878);
PPC_FUNC_IMPL(__imp__sub_83094878) {
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
	// bl 0x83094778
	ctx.lr = 0x83094898;
	sub_83094778(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830948b0
	if (cr6.eq) goto loc_830948B0;
	// bl 0x82416268
	ctx.lr = 0x830948AC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830948B0:
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

__attribute__((alias("__imp__sub_830948C8"))) PPC_WEAK_FUNC(sub_830948C8);
PPC_FUNC_IMPL(__imp__sub_830948C8) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r3,22388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83094918
	if (!cr6.eq) goto loc_83094918;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83094900;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83094910
	if (cr6.eq) goto loc_83094910;
	// bl 0x83094810
	ctx.lr = 0x8309490C;
	sub_83094810(ctx, base);
	// b 0x83094914
	goto loc_83094914;
loc_83094910:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83094914:
	// stw r3,22388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22388, ctx.r3.u32);
loc_83094918:
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

__attribute__((alias("__imp__sub_8309492C"))) PPC_WEAK_FUNC(sub_8309492C);
PPC_FUNC_IMPL(__imp__sub_8309492C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83094930"))) PPC_WEAK_FUNC(sub_83094930);
PPC_FUNC_IMPL(__imp__sub_83094930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83094938;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8309495c
	if (!cr6.eq) goto loc_8309495C;
loc_83094950:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8309495C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83094950
	if (cr6.eq) goto loc_83094950;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r11,17596
	ctx.r9.s64 = ctx.r11.s64 + 17596;
	// li r5,116
	ctx.r5.s64 = 116;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831cdcf0
	ctx.lr = 0x83094988;
	sub_831CDCF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83094d50
	ctx.lr = 0x83094990;
	sub_83094D50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83094d58
	ctx.lr = 0x830949A0;
	sub_83094D58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82edef70
	ctx.lr = 0x830949AC;
	sub_82EDEF70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830949B8"))) PPC_WEAK_FUNC(sub_830949B8);
PPC_FUNC_IMPL(__imp__sub_830949B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83094a30
	if (cr6.eq) goto loc_83094A30;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,32
	ctx.r5.s64 = 32;
	// bne cr6,0x83094a04
	if (!cr6.eq) goto loc_83094A04;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x830949F0;
	sub_831CDCF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83094A04:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x83094A10;
	sub_831CE980(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x831ce980
	ctx.lr = 0x83094A20;
	sub_831CE980(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83094A30;
	sub_831CE980(ctx, base);
loc_83094A30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83094A44"))) PPC_WEAK_FUNC(sub_83094A44);
PPC_FUNC_IMPL(__imp__sub_83094A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83094A48"))) PPC_WEAK_FUNC(sub_83094A48);
PPC_FUNC_IMPL(__imp__sub_83094A48) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,23660
	ctx.r9.s64 = ctx.r11.s64 + 23660;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83094a7c
	if (cr6.eq) goto loc_83094A7C;
	// bl 0x82416268
	ctx.lr = 0x83094A78;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83094A7C:
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

__attribute__((alias("__imp__sub_83094A90"))) PPC_WEAK_FUNC(sub_83094A90);
PPC_FUNC_IMPL(__imp__sub_83094A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83094A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83094ab4
	if (!cr6.eq) goto loc_83094AB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83094AB4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8308f630
	ctx.lr = 0x83094AC0;
	sub_8308F630(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8308f6e8
	ctx.lr = 0x83094AC8;
	sub_8308F6E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8308f700
	ctx.lr = 0x83094AD4;
	sub_8308F700(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x831cdcf0
	ctx.lr = 0x83094AF0;
	sub_831CDCF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83094930
	ctx.lr = 0x83094B00;
	sub_83094930(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x831cdcf0
	ctx.lr = 0x83094B14;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830949b8
	ctx.lr = 0x83094B20;
	sub_830949B8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83094b6c
	if (cr6.eq) goto loc_83094B6C;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r8,32
	ctx.r8.s64 = 32;
loc_83094B3C:
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// subfc r3,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// xor r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// stbu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83094b3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83094B3C;
loc_83094B6C:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831ce980
	ctx.lr = 0x83094B7C;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// bl 0x8377c758
	ctx.lr = 0x83094B88;
	sub_8377C758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83094B98;
	sub_831CE980(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83094BA4"))) PPC_WEAK_FUNC(sub_83094BA4);
PPC_FUNC_IMPL(__imp__sub_83094BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83094BA8"))) PPC_WEAK_FUNC(sub_83094BA8);
PPC_FUNC_IMPL(__imp__sub_83094BA8) {
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
	ctx.lr = 0x83094BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83094bcc
	if (!cr6.eq) goto loc_83094BCC;
loc_83094BC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83094BCC:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8308f630
	ctx.lr = 0x83094BD8;
	sub_8308F630(ctx, base);
	// lbz r10,146(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83094cdc
	if (!cr6.eq) goto loc_83094CDC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8308f6e8
	ctx.lr = 0x83094BEC;
	sub_8308F6E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8308f700
	ctx.lr = 0x83094BF8;
	sub_8308F700(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x831cdcf0
	ctx.lr = 0x83094C14;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x830949b8
	ctx.lr = 0x83094C20;
	sub_830949B8(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83094c6c
	if (cr6.eq) goto loc_83094C6C;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r8,32
	ctx.r8.s64 = 32;
loc_83094C3C:
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// subfc r3,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// xor r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// stbu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83094c3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83094C3C;
loc_83094C6C:
	// li r5,31
	ctx.r5.s64 = 31;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x831cdcf0
	ctx.lr = 0x83094C80;
	sub_831CDCF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83094930
	ctx.lr = 0x83094C90;
	sub_83094930(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
loc_83094C9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83094cbc
	if (!cr0.eq) goto loc_83094CBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x83094c9c
	if (!cr6.eq) goto loc_83094C9C;
loc_83094CBC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83094bc0
	if (!cr6.eq) goto loc_83094BC0;
	// stb r29,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r29.u8);
	// bl 0x8377c758
	ctx.lr = 0x83094CCC;
	sub_8377C758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83094CDC;
	sub_831CE980(ctx, base);
loc_83094CDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83094CE8"))) PPC_WEAK_FUNC(sub_83094CE8);
PPC_FUNC_IMPL(__imp__sub_83094CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83094CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83094D14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83094D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83094D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83094D50"))) PPC_WEAK_FUNC(sub_83094D50);
PPC_FUNC_IMPL(__imp__sub_83094D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82ef2aa8
	sub_82EF2AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83094D58"))) PPC_WEAK_FUNC(sub_83094D58);
PPC_FUNC_IMPL(__imp__sub_83094D58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x830954c0
	sub_830954C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83094D60"))) PPC_WEAK_FUNC(sub_83094D60);
PPC_FUNC_IMPL(__imp__sub_83094D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83094D68;
	__savegprlr_15(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,17034
	ctx.r10.s64 = 1116340224;
	// lis r9,28983
	ctx.r9.s64 = 1899429888;
	// lis r8,-19008
	ctx.r8.s64 = -1245708288;
	// ori r10,r10,12184
	ctx.r10.u64 = ctx.r10.u64 | 12184;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// ori r9,r9,17553
	ctx.r9.u64 = ctx.r9.u64 | 17553;
	// ori r8,r8,64463
	ctx.r8.u64 = ctx.r8.u64 | 64463;
	// stw r10,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r10.u32);
	// lis r7,-5707
	ctx.r7.s64 = -374013952;
	// stw r9,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r9.u32);
	// lis r6,14678
	ctx.r6.s64 = 961937408;
	// stw r8,24(r1)
	PPC_STORE_U32(ctx.r1.u32 + 24, ctx.r8.u32);
	// lis r5,23025
	ctx.r5.s64 = 1508966400;
	// lis r4,-28097
	ctx.r4.s64 = -1841364992;
	// lis r11,-21732
	ctx.r11.s64 = -1424228352;
	// lis r31,-10233
	ctx.r31.s64 = -670629888;
	// lis r30,4739
	ctx.r30.s64 = 310575104;
	// lis r29,9265
	ctx.r29.s64 = 607191040;
	// ori r7,r7,56229
	ctx.r7.u64 = ctx.r7.u64 | 56229;
	// ori r6,r6,49755
	ctx.r6.u64 = ctx.r6.u64 | 49755;
	// ori r5,r5,4593
	ctx.r5.u64 = ctx.r5.u64 | 4593;
	// stw r7,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r7.u32);
	// ori r4,r4,33444
	ctx.r4.u64 = ctx.r4.u64 | 33444;
	// stw r6,32(r1)
	PPC_STORE_U32(ctx.r1.u32 + 32, ctx.r6.u32);
	// ori r11,r11,24277
	ctx.r11.u64 = ctx.r11.u64 | 24277;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// ori r10,r31,43672
	ctx.r10.u64 = ctx.r31.u64 | 43672;
	// stw r4,40(r1)
	PPC_STORE_U32(ctx.r1.u32 + 40, ctx.r4.u32);
	// ori r9,r30,23297
	ctx.r9.u64 = ctx.r30.u64 | 23297;
	// stw r11,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r11.u32);
	// ori r8,r29,34238
	ctx.r8.u64 = ctx.r29.u64 | 34238;
	// stw r10,48(r1)
	PPC_STORE_U32(ctx.r1.u32 + 48, ctx.r10.u32);
	// lis r28,21772
	ctx.r28.s64 = 1426849792;
	// stw r9,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r9.u32);
	// lis r27,29374
	ctx.r27.s64 = 1925054464;
	// stw r8,56(r1)
	PPC_STORE_U32(ctx.r1.u32 + 56, ctx.r8.u32);
	// lis r26,-32546
	ctx.r26.s64 = -2132934656;
	// lis r25,-25636
	ctx.r25.s64 = -1680080896;
	// lis r24,-15973
	ctx.r24.s64 = -1046806528;
	// lis r23,-7013
	ctx.r23.s64 = -459603968;
	// lis r22,-4162
	ctx.r22.s64 = -272760832;
	// lis r21,4033
	ctx.r21.s64 = 264306688;
	// ori r7,r28,32195
	ctx.r7.u64 = ctx.r28.u64 | 32195;
	// ori r6,r27,23924
	ctx.r6.u64 = ctx.r27.u64 | 23924;
	// ori r5,r26,45566
	ctx.r5.u64 = ctx.r26.u64 | 45566;
	// stw r7,60(r1)
	PPC_STORE_U32(ctx.r1.u32 + 60, ctx.r7.u32);
	// ori r4,r25,1703
	ctx.r4.u64 = ctx.r25.u64 | 1703;
	// stw r6,64(r1)
	PPC_STORE_U32(ctx.r1.u32 + 64, ctx.r6.u32);
	// ori r11,r24,61812
	ctx.r11.u64 = ctx.r24.u64 | 61812;
	// stw r5,68(r1)
	PPC_STORE_U32(ctx.r1.u32 + 68, ctx.r5.u32);
	// ori r10,r23,27073
	ctx.r10.u64 = ctx.r23.u64 | 27073;
	// stw r4,72(r1)
	PPC_STORE_U32(ctx.r1.u32 + 72, ctx.r4.u32);
	// ori r9,r22,18310
	ctx.r9.u64 = ctx.r22.u64 | 18310;
	// stw r11,76(r1)
	PPC_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// ori r8,r21,40390
	ctx.r8.u64 = ctx.r21.u64 | 40390;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r20,9228
	ctx.r20.s64 = 604766208;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r19,11753
	ctx.r19.s64 = 770244608;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lis r18,19060
	ctx.r18.s64 = 1249116160;
	// lis r17,23728
	ctx.r17.s64 = 1555038208;
	// lis r16,30457
	ctx.r16.s64 = 1996029952;
	// ori r7,r20,41420
	ctx.r7.u64 = ctx.r20.u64 | 41420;
	// ori r6,r19,11375
	ctx.r6.u64 = ctx.r19.u64 | 11375;
	// ori r5,r18,33962
	ctx.r5.u64 = ctx.r18.u64 | 33962;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// ori r4,r17,43484
	ctx.r4.u64 = ctx.r17.u64 | 43484;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// ori r11,r16,35034
	ctx.r11.u64 = ctx.r16.u64 | 35034;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r10,-26562
	ctx.r10.s64 = -1740767232;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// lis r9,-22479
	ctx.r9.s64 = -1473183744;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r8,-20477
	ctx.r8.s64 = -1341980672;
	// ori r7,r10,20818
	ctx.r7.u64 = ctx.r10.u64 | 20818;
	// ori r6,r9,50797
	ctx.r6.u64 = ctx.r9.u64 | 50797;
	// ori r5,r8,10184
	ctx.r5.u64 = ctx.r8.u64 | 10184;
	// lis r4,-16551
	ctx.r4.s64 = -1084686336;
	// lis r10,-10841
	ctx.r10.s64 = -710475776;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lis r9,1738
	ctx.r9.s64 = 113901568;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// ori r4,r4,32711
	ctx.r4.u64 = ctx.r4.u64 | 32711;
	// ori r10,r10,37191
	ctx.r10.u64 = ctx.r10.u64 | 37191;
	// ori r9,r9,25425
	ctx.r9.u64 = ctx.r9.u64 | 25425;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r11,-14624
	ctx.r11.s64 = -958398464;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r8,5161
	ctx.r8.s64 = 338231296;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r7,10167
	ctx.r7.s64 = 666304512;
	// lis r6,11803
	ctx.r6.s64 = 773521408;
	// lis r5,19756
	ctx.r5.s64 = 1294729216;
	// lis r31,21304
	ctx.r31.s64 = 1396178944;
	// lis r29,30314
	ctx.r29.s64 = 1986658304;
	// lis r28,-32318
	ctx.r28.s64 = -2117992448;
	// ori r11,r11,3059
	ctx.r11.u64 = ctx.r11.u64 | 3059;
	// ori r8,r8,10599
	ctx.r8.u64 = ctx.r8.u64 | 10599;
	// ori r7,r7,2693
	ctx.r7.u64 = ctx.r7.u64 | 2693;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ori r6,r6,8504
	ctx.r6.u64 = ctx.r6.u64 | 8504;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// ori r5,r5,28156
	ctx.r5.u64 = ctx.r5.u64 | 28156;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// ori r4,r31,3347
	ctx.r4.u64 = ctx.r31.u64 | 3347;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// ori r10,r29,2747
	ctx.r10.u64 = ctx.r29.u64 | 2747;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// ori r9,r28,51502
	ctx.r9.u64 = ctx.r28.u64 | 51502;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lis r30,25866
	ctx.r30.s64 = 1695154176;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lis r27,-28046
	ctx.r27.s64 = -1838022656;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lis r26,-23873
	ctx.r26.s64 = -1564540928;
	// lis r25,-22502
	ctx.r25.s64 = -1474691072;
	// lis r24,-15797
	ctx.r24.s64 = -1035272192;
	// lis r23,-14484
	ctx.r23.s64 = -949223424;
	// lis r21,-10599
	ctx.r21.s64 = -694616064;
	// lis r20,-3058
	ctx.r20.s64 = -200409088;
	// ori r11,r30,29524
	ctx.r11.u64 = ctx.r30.u64 | 29524;
	// ori r8,r27,11397
	ctx.r8.u64 = ctx.r27.u64 | 11397;
	// ori r7,r26,59553
	ctx.r7.u64 = ctx.r26.u64 | 59553;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// ori r6,r25,26187
	ctx.r6.u64 = ctx.r25.u64 | 26187;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// ori r5,r24,35696
	ctx.r5.u64 = ctx.r24.u64 | 35696;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// ori r4,r23,20899
	ctx.r4.u64 = ctx.r23.u64 | 20899;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// ori r10,r21,1572
	ctx.r10.u64 = ctx.r21.u64 | 1572;
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// ori r9,r20,13701
	ctx.r9.u64 = ctx.r20.u64 | 13701;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lis r22,-11886
	ctx.r22.s64 = -778960896;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lis r19,4202
	ctx.r19.s64 = 275382272;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lis r18,6564
	ctx.r18.s64 = 430178304;
	// lis r17,7735
	ctx.r17.s64 = 506920960;
	// lis r16,10056
	ctx.r16.s64 = 659030016;
	// ori r11,r22,59417
	ctx.r11.u64 = ctx.r22.u64 | 59417;
	// ori r8,r19,41072
	ctx.r8.u64 = ctx.r19.u64 | 41072;
	// ori r7,r18,49430
	ctx.r7.u64 = ctx.r18.u64 | 49430;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// ori r6,r17,27656
	ctx.r6.u64 = ctx.r17.u64 | 27656;
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// ori r5,r16,30540
	ctx.r5.u64 = ctx.r16.u64 | 30540;
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// lis r4,13488
	ctx.r4.s64 = 883949568;
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// lis r10,14620
	ctx.r10.s64 = 958136320;
	// stw r5,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r5.u32);
	// lis r9,20184
	ctx.r9.s64 = 1322778624;
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// ori r8,r4,48309
	ctx.r8.u64 = ctx.r4.u64 | 48309;
	// ori r7,r10,3251
	ctx.r7.u64 = ctx.r10.u64 | 3251;
	// ori r6,r9,43594
	ctx.r6.u64 = ctx.r9.u64 | 43594;
	// lis r5,23452
	ctx.r5.s64 = 1536950272;
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// lis r4,26670
	ctx.r4.s64 = 1747845120;
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// lis r9,30885
	ctx.r9.s64 = 2024079360;
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// lis r10,29839
	ctx.r10.s64 = 1955528704;
	// ori r5,r5,51791
	ctx.r5.u64 = ctx.r5.u64 | 51791;
	// ori r4,r4,28659
	ctx.r4.u64 = ctx.r4.u64 | 28659;
	// ori r9,r9,25455
	ctx.r9.u64 = ctx.r9.u64 | 25455;
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// lis r8,-31544
	ctx.r8.s64 = -2067267584;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// lis r7,-29497
	ctx.r7.s64 = -1933115392;
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// lis r6,-28482
	ctx.r6.s64 = -1866596352;
	// lis r31,-23472
	ctx.r31.s64 = -1538260992;
	// lis r30,-16647
	ctx.r30.s64 = -1090977792;
	// lis r29,-14735
	ctx.r29.s64 = -965672960;
	// ori r10,r10,33518
	ctx.r10.u64 = ctx.r10.u64 | 33518;
	// ori r8,r8,30740
	ctx.r8.u64 = ctx.r8.u64 | 30740;
	// ori r7,r7,520
	ctx.r7.u64 = ctx.r7.u64 | 520;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// ori r6,r6,65530
	ctx.r6.u64 = ctx.r6.u64 | 65530;
	// stw r8,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// ori r5,r31,27883
	ctx.r5.u64 = ctx.r31.u64 | 27883;
	// stw r7,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// ori r4,r30,41975
	ctx.r4.u64 = ctx.r30.u64 | 41975;
	// stw r6,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r6.u32);
	// ori r9,r29,30962
	ctx.r9.u64 = ctx.r29.u64 | 30962;
	// stw r5,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r5.u32);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r4,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r4.u32);
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
loc_83095080:
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// rlwimi r9,r31,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lbz r7,13(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// rlwimi r8,r31,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r6,17(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r5,7(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwimi r4,r9,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lbz r30,11(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// lbz r29,10(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rlwimi r5,r4,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// lbz r28,15(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r27,14(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// rlwimi r29,r8,8,0,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r29.u64 & 0xFFFFFFFF000000FF);
	// lbz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r26,19(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// rlwimi r30,r29,8,0,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFFFFFF00) | (ctx.r30.u64 & 0xFFFFFFFF000000FF);
	// lbz r25,18(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// rlwimi r7,r31,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbzu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// rlwimi r6,r9,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// rlwimi r27,r7,8,0,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r27.u64 & 0xFFFFFFFF000000FF);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwimi r28,r27,8,0,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r27.u32, 8) & 0xFFFFFF00) | (ctx.r28.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r25,r6,8,0,23
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r25.u64 & 0xFFFFFFFF000000FF);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// rlwimi r26,r25,8,0,23
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r25.u32, 8) & 0xFFFFFF00) | (ctx.r26.u64 & 0xFFFFFFFF000000FF);
	// stwu r26,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83095080
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83095080;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r1,328
	ctx.r11.s64 = ctx.r1.s64 + 328;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83095120:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,-52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -52);
	// lwz r8,-48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -48);
	// rotlwi r25,r10,13
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 13);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r26,r10,15
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r10.u32, 15);
	// rotlwi r6,r9,14
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 14);
	// lwz r31,-56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	// rotlwi r4,r9,25
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 25);
	// lwz r30,-16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// rotlwi r24,r8,14
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r8.u32, 14);
	// lwz r29,-20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// rotlwi r23,r8,25
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r8.u32, 25);
	// lwz r7,-44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	// rotlwi r22,r5,15
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r5.u32, 15);
	// lwz r21,-40(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	// rotlwi r20,r5,13
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r5.u32, 13);
	// lwz r28,-12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// lwz r27,-8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// xor r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r25.u64;
	// xor r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// rlwinm r19,r9,29,3,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r25,r24,r23
	ctx.r25.u64 = ctx.r24.u64 ^ ctx.r23.u64;
	// rlwinm r5,r5,22,10,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r24,r8,29,3,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r23,r22,r20
	ctx.r23.u64 = ctx.r22.u64 ^ ctx.r20.u64;
	// xor r6,r26,r10
	ctx.r6.u64 = ctx.r26.u64 ^ ctx.r10.u64;
	// xor r10,r4,r19
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r19.u64;
	// xor r5,r23,r5
	ctx.r5.u64 = ctx.r23.u64 ^ ctx.r5.u64;
	// xor r4,r25,r24
	ctx.r4.u64 = ctx.r25.u64 ^ ctx.r24.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rotlwi r31,r7,25
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r7.u32, 25);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// rotlwi r5,r7,14
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 14);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r6,r10,13
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 13);
	// rotlwi r4,r10,15
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 15);
	// rotlwi r25,r21,25
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r21.u32, 25);
	// rotlwi r26,r21,14
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r21.u32, 14);
	// rotlwi r30,r9,15
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 15);
	// rotlwi r29,r9,13
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 13);
	// xor r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r31.u64;
	// xor r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// xor r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r25.u64;
	// rlwinm r31,r7,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r6,r9,22,10,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r25,r21,29,3,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// xor r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r31.u64;
	// xor r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// xor r5,r26,r25
	ctx.r5.u64 = ctx.r26.u64 ^ ctx.r25.u64;
	// xor r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r6.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x83095120
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83095120;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r25,4(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r23,12(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r22,16(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r21,20(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r20,24(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r19,28(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83095280:
	// rotlwi r4,r10,21
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 21);
	// rotlwi r31,r10,7
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// andc r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// xor r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// and r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rotlwi r18,r10,26
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r10.u32, 26);
	// addi r17,r1,272
	ctx.r17.s64 = ctx.r1.s64 + 272;
	// or r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 | ctx.r27.u64;
	// xor r31,r31,r18
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r18.u64;
	// addi r29,r1,16
	ctx.r29.s64 = ctx.r1.s64 + 16;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lwzx r4,r11,r17
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// rotlwi r18,r9,19
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r9.u32, 19);
	// or r27,r7,r9
	ctx.r27.u64 = ctx.r7.u64 | ctx.r9.u64;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rotlwi r29,r9,10
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 10);
	// and r27,r27,r5
	ctx.r27.u64 = ctx.r27.u64 & ctx.r5.u64;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// xor r29,r18,r29
	ctx.r29.u64 = ctx.r18.u64 ^ ctx.r29.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rotlwi r28,r9,30
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r9.u32, 30);
	// and r17,r7,r9
	ctx.r17.u64 = ctx.r7.u64 & ctx.r9.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// add r8,r4,r30
	ctx.r8.u64 = ctx.r4.u64 + ctx.r30.u64;
	// xor r30,r29,r28
	ctx.r30.u64 = ctx.r29.u64 ^ ctx.r28.u64;
	// or r29,r27,r17
	ctx.r29.u64 = ctx.r27.u64 | ctx.r17.u64;
	// rotlwi r27,r8,7
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 7);
	// rotlwi r28,r8,21
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r8.u32, 21);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// xor r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// and r18,r10,r8
	ctx.r18.u64 = ctx.r10.u64 & ctx.r8.u64;
	// andc r17,r31,r8
	ctx.r17.u64 = ctx.r31.u64 & ~ctx.r8.u64;
	// rotlwi r16,r8,26
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r8.u32, 26);
	// addi r27,r1,276
	ctx.r27.s64 = ctx.r1.s64 + 276;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// add r7,r4,r29
	ctx.r7.u64 = ctx.r4.u64 + ctx.r29.u64;
	// or r29,r17,r18
	ctx.r29.u64 = ctx.r17.u64 | ctx.r18.u64;
	// xor r4,r28,r16
	ctx.r4.u64 = ctx.r28.u64 ^ ctx.r16.u64;
	// addi r18,r1,20
	ctx.r18.s64 = ctx.r1.s64 + 20;
	// lwzx r28,r11,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// or r27,r9,r7
	ctx.r27.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rotlwi r17,r7,19
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 19);
	// rotlwi r16,r7,10
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r7.u32, 10);
	// lwzx r29,r11,r18
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// and r27,r27,r30
	ctx.r27.u64 = ctx.r27.u64 & ctx.r30.u64;
	// and r18,r9,r7
	ctx.r18.u64 = ctx.r9.u64 & ctx.r7.u64;
	// xor r17,r17,r16
	ctx.r17.u64 = ctx.r17.u64 ^ ctx.r16.u64;
	// rotlwi r15,r7,30
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r7.u32, 30);
	// add r28,r4,r29
	ctx.r28.u64 = ctx.r4.u64 + ctx.r29.u64;
	// or r29,r27,r18
	ctx.r29.u64 = ctx.r27.u64 | ctx.r18.u64;
	// xor r4,r17,r15
	ctx.r4.u64 = ctx.r17.u64 ^ ctx.r15.u64;
	// add r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 + ctx.r6.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// add r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 + ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rotlwi r28,r9,19
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r9.u32, 19);
	// rotlwi r27,r9,10
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 10);
	// or r18,r7,r9
	ctx.r18.u64 = ctx.r7.u64 | ctx.r9.u64;
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// xor r6,r28,r27
	ctx.r6.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// rotlwi r5,r9,30
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 30);
	// and r28,r18,r29
	ctx.r28.u64 = ctx.r18.u64 & ctx.r29.u64;
	// and r27,r7,r9
	ctx.r27.u64 = ctx.r7.u64 & ctx.r9.u64;
	// xor r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// or r5,r28,r27
	ctx.r5.u64 = ctx.r28.u64 | ctx.r27.u64;
	// rotlwi r18,r10,21
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r10.u32, 21);
	// rotlwi r28,r10,7
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// add r27,r6,r5
	ctx.r27.u64 = ctx.r6.u64 + ctx.r5.u64;
	// xor r6,r18,r28
	ctx.r6.u64 = ctx.r18.u64 ^ ctx.r28.u64;
	// rotlwi r18,r10,26
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r10.u32, 26);
	// and r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 & ctx.r10.u64;
	// andc r28,r4,r10
	ctx.r28.u64 = ctx.r4.u64 & ~ctx.r10.u64;
	// xor r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r18.u64;
	// or r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 | ctx.r5.u64;
	// addi r17,r1,280
	ctx.r17.s64 = ctx.r1.s64 + 280;
	// addi r18,r1,24
	ctx.r18.s64 = ctx.r1.s64 + 24;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwzx r5,r11,r17
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// addi r17,r1,28
	ctx.r17.s64 = ctx.r1.s64 + 28;
	// add r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwzx r6,r11,r18
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// addi r18,r1,284
	ctx.r18.s64 = ctx.r1.s64 + 284;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r31,r11,r17
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// add r8,r5,r30
	ctx.r8.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lwzx r30,r11,r18
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// add r7,r5,r27
	ctx.r7.u64 = ctx.r5.u64 + ctx.r27.u64;
	// rotlwi r27,r8,7
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 7);
	// rotlwi r5,r8,21
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 21);
	// and r18,r10,r8
	ctx.r18.u64 = ctx.r10.u64 & ctx.r8.u64;
	// xor r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r27.u64;
	// andc r17,r28,r8
	ctx.r17.u64 = ctx.r28.u64 & ~ctx.r8.u64;
	// rotlwi r16,r8,26
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r8.u32, 26);
	// or r27,r17,r18
	ctx.r27.u64 = ctx.r17.u64 | ctx.r18.u64;
	// xor r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r16.u64;
	// or r18,r9,r7
	ctx.r18.u64 = ctx.r9.u64 | ctx.r7.u64;
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + ctx.r27.u64;
	// rotlwi r27,r7,19
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 19);
	// rotlwi r17,r7,10
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 10);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// and r16,r9,r7
	ctx.r16.u64 = ctx.r9.u64 & ctx.r7.u64;
	// and r18,r18,r6
	ctx.r18.u64 = ctx.r18.u64 & ctx.r6.u64;
	// rotlwi r15,r7,30
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r7.u32, 30);
	// xor r27,r27,r17
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r17.u64;
	// add r30,r5,r31
	ctx.r30.u64 = ctx.r5.u64 + ctx.r31.u64;
	// xor r5,r27,r15
	ctx.r5.u64 = ctx.r27.u64 ^ ctx.r15.u64;
	// or r31,r18,r16
	ctx.r31.u64 = ctx.r18.u64 | ctx.r16.u64;
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r31,r5,r31
	ctx.r31.u64 = ctx.r5.u64 + ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r10,r4,r29
	ctx.r10.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r9,r4,r31
	ctx.r9.u64 = ctx.r4.u64 + ctx.r31.u64;
	// bdnz 0x83095280
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83095280;
	// add r11,r26,r9
	ctx.r11.u64 = ctx.r26.u64 + ctx.r9.u64;
	// add r9,r25,r7
	ctx.r9.u64 = ctx.r25.u64 + ctx.r7.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// add r7,r24,r5
	ctx.r7.u64 = ctx.r24.u64 + ctx.r5.u64;
	// add r4,r22,r10
	ctx.r4.u64 = ctx.r22.u64 + ctx.r10.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// add r11,r21,r8
	ctx.r11.u64 = ctx.r21.u64 + ctx.r8.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// add r5,r23,r30
	ctx.r5.u64 = ctx.r23.u64 + ctx.r30.u64;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// add r10,r20,r6
	ctx.r10.u64 = ctx.r20.u64 + ctx.r6.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// add r9,r19,r28
	ctx.r9.u64 = ctx.r19.u64 + ctx.r28.u64;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830954BC"))) PPC_WEAK_FUNC(sub_830954BC);
PPC_FUNC_IMPL(__imp__sub_830954BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830954C0"))) PPC_WEAK_FUNC(sub_830954C0);
PPC_FUNC_IMPL(__imp__sub_830954C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830954C8;
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8309558c
	if (cr6.eq) goto loc_8309558C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095598
	if (cr6.eq) goto loc_83095598;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83095598
	if (cr6.eq) goto loc_83095598;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83095510
	if (cr6.eq) goto loc_83095510;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83095510:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8309559c
	if (!cr6.eq) goto loc_8309559C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83095520:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8309558c
	if (!cr6.eq) goto loc_8309558C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r10.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r8,8
	xer.ca = ctx.r8.u32 > 4294967287;
	ctx.r11.s64 = ctx.r8.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bne 0x83095570
	if (!cr0.eq) goto loc_83095570;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne 0x83095570
	if (!cr0.eq) goto loc_83095570;
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
loc_83095570:
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// bne cr6,0x83095580
	if (!cr6.eq) goto loc_83095580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83094d60
	ctx.lr = 0x83095580;
	sub_83094D60(ctx, base);
loc_83095580:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83095520
	if (!cr6.eq) goto loc_83095520;
loc_8309558C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83095598:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8309559C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830955A4"))) PPC_WEAK_FUNC(sub_830955A4);
PPC_FUNC_IMPL(__imp__sub_830955A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830955A8"))) PPC_WEAK_FUNC(sub_830955A8);
PPC_FUNC_IMPL(__imp__sub_830955A8) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// bl 0x83096d00
	ctx.lr = 0x830955C4;
	sub_83096D00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830955e0
	if (cr6.eq) goto loc_830955E0;
	// bl 0x83096d00
	ctx.lr = 0x830955D0;
	sub_83096D00(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x83096d10
	ctx.lr = 0x830955E0;
	sub_83096D10(ctx, base);
loc_830955E0:
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

__attribute__((alias("__imp__sub_830955F4"))) PPC_WEAK_FUNC(sub_830955F4);
PPC_FUNC_IMPL(__imp__sub_830955F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830955F8"))) PPC_WEAK_FUNC(sub_830955F8);
PPC_FUNC_IMPL(__imp__sub_830955F8) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// bl 0x83096d00
	ctx.lr = 0x83095614;
	sub_83096D00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095630
	if (cr6.eq) goto loc_83095630;
	// bl 0x83096d00
	ctx.lr = 0x83095620;
	sub_83096D00(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x83096d58
	ctx.lr = 0x83095630;
	sub_83096D58(ctx, base);
loc_83095630:
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

__attribute__((alias("__imp__sub_83095644"))) PPC_WEAK_FUNC(sub_83095644);
PPC_FUNC_IMPL(__imp__sub_83095644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83095648"))) PPC_WEAK_FUNC(sub_83095648);
PPC_FUNC_IMPL(__imp__sub_83095648) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,25
	ctx.r30.s64 = 25;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,696
	ctx.r4.s64 = 696;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83095678;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095714
	if (cr6.eq) goto loc_83095714;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830e8bb0
	ctx.lr = 0x83095688;
	sub_830E8BB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830956c8
	if (cr6.eq) goto loc_830956C8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830956A8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830956e4
	if (cr6.eq) goto loc_830956E4;
	// bl 0x83096238
	ctx.lr = 0x830956B4;
	sub_83096238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830956e4
	if (cr6.eq) goto loc_830956E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e8c08
	ctx.lr = 0x830956C8;
	sub_830E8C08(ctx, base);
loc_830956C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830956CC:
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
loc_830956E4:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x830956F4;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8309570C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x83095714;
	sub_82595170(ctx, base);
loc_83095714:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830956cc
	goto loc_830956CC;
}

__attribute__((alias("__imp__sub_8309571C"))) PPC_WEAK_FUNC(sub_8309571C);
PPC_FUNC_IMPL(__imp__sub_8309571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83095720"))) PPC_WEAK_FUNC(sub_83095720);
PPC_FUNC_IMPL(__imp__sub_83095720) {
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
	// bl 0x830978b0
	ctx.lr = 0x83095738;
	sub_830978B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83095754"))) PPC_WEAK_FUNC(sub_83095754);
PPC_FUNC_IMPL(__imp__sub_83095754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83095758"))) PPC_WEAK_FUNC(sub_83095758);
PPC_FUNC_IMPL(__imp__sub_83095758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83095760;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x8309576C;
	sub_830A6BF8(ctx, base);
	// bl 0x83578d58
	ctx.lr = 0x83095770;
	sub_83578D58(ctx, base);
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x83095780;
	sub_831F8200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ab790
	ctx.lr = 0x8309578C;
	sub_830AB790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x83095794;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a6e40
	ctx.lr = 0x830957A0;
	sub_830A6E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x830957A8;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x830957bc
	if (!cr6.eq) goto loc_830957BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a6f18
	ctx.lr = 0x830957BC;
	sub_830A6F18(ctx, base);
loc_830957BC:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830957f4
	if (cr6.eq) goto loc_830957F4;
	// bl 0x830a6bf8
	ctx.lr = 0x830957CC;
	sub_830A6BF8(ctx, base);
	// bl 0x82638f20
	ctx.lr = 0x830957D0;
	sub_82638F20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830f17f0
	ctx.lr = 0x830957D8;
	sub_830F17F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6e40
	ctx.lr = 0x830957E4;
	sub_830A6E40(ctx, base);
	// bl 0x830f17f0
	ctx.lr = 0x830957E8;
	sub_830F17F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x830982e0
	ctx.lr = 0x830957F4;
	sub_830982E0(ctx, base);
loc_830957F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83095804"))) PPC_WEAK_FUNC(sub_83095804);
PPC_FUNC_IMPL(__imp__sub_83095804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83095808"))) PPC_WEAK_FUNC(sub_83095808);
PPC_FUNC_IMPL(__imp__sub_83095808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83095810;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095864
	if (cr6.eq) goto loc_83095864;
	// bl 0x830a0050
	ctx.lr = 0x83095830;
	sub_830A0050(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83095864
	if (!cr6.eq) goto loc_83095864;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x830a0be8
	ctx.lr = 0x83095844;
	sub_830A0BE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095860
	if (cr6.eq) goto loc_83095860;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8309d338
	ctx.lr = 0x83095858;
	sub_8309D338(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8309c980
	ctx.lr = 0x83095860;
	sub_8309C980(ctx, base);
loc_83095860:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83095864:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830958a0
	if (cr6.eq) goto loc_830958A0;
	// bl 0x830a0050
	ctx.lr = 0x83095874;
	sub_830A0050(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830958a0
	if (!cr6.eq) goto loc_830958A0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x830a0be8
	ctx.lr = 0x83095888;
	sub_830A0BE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8309589c
	if (cr6.eq) goto loc_8309589C;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8309b1a8
	ctx.lr = 0x8309589C;
	sub_8309B1A8(ctx, base);
loc_8309589C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830958A0:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830958dc
	if (cr6.eq) goto loc_830958DC;
	// bl 0x830a0050
	ctx.lr = 0x830958B0;
	sub_830A0050(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830958dc
	if (!cr6.eq) goto loc_830958DC;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x830a0be8
	ctx.lr = 0x830958C4;
	sub_830A0BE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830958d8
	if (cr6.eq) goto loc_830958D8;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x83097ee8
	ctx.lr = 0x830958D8;
	sub_83097EE8(ctx, base);
loc_830958D8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830958DC:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095918
	if (cr6.eq) goto loc_83095918;
	// bl 0x830a0050
	ctx.lr = 0x830958EC;
	sub_830A0050(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83095918
	if (!cr6.eq) goto loc_83095918;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x830a0be8
	ctx.lr = 0x83095900;
	sub_830A0BE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095914
	if (cr6.eq) goto loc_83095914;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x830981a8
	ctx.lr = 0x83095914;
	sub_830981A8(ctx, base);
loc_83095914:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83095918:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095958
	if (cr6.eq) goto loc_83095958;
	// bl 0x830a0050
	ctx.lr = 0x83095928;
	sub_830A0050(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83095958
	if (!cr6.eq) goto loc_83095958;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x830a0be8
	ctx.lr = 0x8309593C;
	sub_830A0BE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095954
	if (cr6.eq) goto loc_83095954;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8309b088
	ctx.lr = 0x83095954;
	sub_8309B088(ctx, base);
loc_83095954:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83095958:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x83096a50
	ctx.lr = 0x83095960;
	sub_83096A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830a7028
	ctx.lr = 0x83095968;
	sub_830A7028(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x830a7050
	ctx.lr = 0x83095974;
	sub_830A7050(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 & ctx.r30.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83095998
	if (cr6.eq) goto loc_83095998;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83095998:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830959A0"))) PPC_WEAK_FUNC(sub_830959A0);
PPC_FUNC_IMPL(__imp__sub_830959A0) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830959d0
	if (cr6.eq) goto loc_830959D0;
	// bl 0x8309bc00
	ctx.lr = 0x830959C4;
	sub_8309BC00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830959d8
	if (cr6.eq) goto loc_830959D8;
loc_830959D0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_830959D8:
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

__attribute__((alias("__imp__sub_830959EC"))) PPC_WEAK_FUNC(sub_830959EC);
PPC_FUNC_IMPL(__imp__sub_830959EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830959F0"))) PPC_WEAK_FUNC(sub_830959F0);
PPC_FUNC_IMPL(__imp__sub_830959F0) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095a14
	if (cr6.eq) goto loc_83095A14;
	// bl 0x830a3730
	ctx.lr = 0x83095A14;
	sub_830A3730(ctx, base);
loc_83095A14:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095a24
	if (cr6.eq) goto loc_83095A24;
	// bl 0x830a3730
	ctx.lr = 0x83095A24;
	sub_830A3730(ctx, base);
loc_83095A24:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095a34
	if (cr6.eq) goto loc_83095A34;
	// bl 0x830a3730
	ctx.lr = 0x83095A34;
	sub_830A3730(ctx, base);
loc_83095A34:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095a44
	if (cr6.eq) goto loc_83095A44;
	// bl 0x830a3730
	ctx.lr = 0x83095A44;
	sub_830A3730(ctx, base);
loc_83095A44:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095a54
	if (cr6.eq) goto loc_83095A54;
	// bl 0x830a3730
	ctx.lr = 0x83095A54;
	sub_830A3730(ctx, base);
loc_83095A54:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83095A70"))) PPC_WEAK_FUNC(sub_83095A70);
PPC_FUNC_IMPL(__imp__sub_83095A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83095A78;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,552
	ctx.r31.s64 = 552;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
loc_83095A90:
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x83095aa0
	if (cr6.lt) goto loc_83095AA0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83095aac
	goto loc_83095AAC;
loc_83095AA0:
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_83095AAC:
	// bl 0x830a6bf8
	ctx.lr = 0x83095AB0;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf0
	ctx.lr = 0x83095AB4;
	sub_8357ECF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x830a7240
	ctx.lr = 0x83095AC0;
	sub_830A7240(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,560
	cr6.compare<uint32_t>(ctx.r31.u32, 560, xer);
	// blt cr6,0x83095a90
	if (cr6.lt) goto loc_83095A90;
	// bl 0x830a6bf8
	ctx.lr = 0x83095AD4;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf0
	ctx.lr = 0x83095AD8;
	sub_8357ECF0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x830a7328
	ctx.lr = 0x83095AE0;
	sub_830A7328(ctx, base);
	// addi r31,r27,12
	ctx.r31.s64 = ctx.r27.s64 + 12;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096bc8
	ctx.lr = 0x83095AF0;
	sub_83096BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a58
	ctx.lr = 0x83095AF8;
	sub_83096A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83095b2c
	if (!cr6.eq) goto loc_83095B2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dcd5d0
	ctx.lr = 0x83095B0C;
	sub_82DCD5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83095b2c
	if (!cr6.eq) goto loc_83095B2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a68
	ctx.lr = 0x83095B20;
	sub_83096A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095b54
	if (cr6.eq) goto loc_83095B54;
loc_83095B2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129788
	ctx.lr = 0x83095B34;
	sub_83129788(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x83095B40;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830a7028
	ctx.lr = 0x83095B48;
	sub_830A7028(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x830a7038
	ctx.lr = 0x83095B54;
	sub_830A7038(ctx, base);
loc_83095B54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a58
	ctx.lr = 0x83095B5C;
	sub_83096A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,25
	ctx.r29.s64 = 25;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095be8
	if (cr6.eq) goto loc_83095BE8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,972
	ctx.r4.s64 = 972;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83095B80;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095bc8
	if (cr6.eq) goto loc_83095BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x83095B94;
	sub_825832D8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x83095BA0;
	sub_825832E0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129788
	ctx.lr = 0x83095BAC;
	sub_83129788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x8309c458
	ctx.lr = 0x83095BC4;
	sub_8309C458(ctx, base);
	// b 0x83095bcc
	goto loc_83095BCC;
loc_83095BC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83095BCC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r3.u32);
	// beq cr6,0x83095be8
	if (cr6.eq) goto loc_83095BE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a70
	ctx.lr = 0x83095BE0;
	sub_83096A70(ctx, base);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stb r3,944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 944, ctx.r3.u8);
loc_83095BE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a60
	ctx.lr = 0x83095BF0;
	sub_83096A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095c40
	if (cr6.eq) goto loc_83095C40;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,568
	ctx.r4.s64 = 568;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83095C10;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095c38
	if (cr6.eq) goto loc_83095C38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129788
	ctx.lr = 0x83095C24;
	sub_83129788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8309b128
	ctx.lr = 0x83095C34;
	sub_8309B128(ctx, base);
	// b 0x83095c3c
	goto loc_83095C3C;
loc_83095C38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83095C3C:
	// stw r3,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r3.u32);
loc_83095C40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dcd5c8
	ctx.lr = 0x83095C48;
	sub_82DCD5C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095cac
	if (cr6.eq) goto loc_83095CAC;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,576
	ctx.r4.s64 = 576;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83095C68;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095ca4
	if (cr6.eq) goto loc_83095CA4;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// bl 0x82a47d40
	ctx.lr = 0x83095C80;
	sub_82A47D40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129788
	ctx.lr = 0x83095C8C;
	sub_83129788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x830977e8
	ctx.lr = 0x83095CA0;
	sub_830977E8(ctx, base);
	// b 0x83095ca8
	goto loc_83095CA8;
loc_83095CA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83095CA8:
	// stw r3,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r3.u32);
loc_83095CAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a68
	ctx.lr = 0x83095CB4;
	sub_83096A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095d04
	if (cr6.eq) goto loc_83095D04;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x83095CD4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095cfc
	if (cr6.eq) goto loc_83095CFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129788
	ctx.lr = 0x83095CE8;
	sub_83129788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83098110
	ctx.lr = 0x83095CF8;
	sub_83098110(ctx, base);
	// b 0x83095d00
	goto loc_83095D00;
loc_83095CFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83095D00:
	// stw r3,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r3.u32);
loc_83095D04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dcd5d0
	ctx.lr = 0x83095D0C;
	sub_82DCD5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095d5c
	if (cr6.eq) goto loc_83095D5C;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1680
	ctx.r4.s64 = 1680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x83095D2C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095d54
	if (cr6.eq) goto loc_83095D54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129788
	ctx.lr = 0x83095D40;
	sub_83129788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83099cb0
	ctx.lr = 0x83095D50;
	sub_83099CB0(ctx, base);
	// b 0x83095d58
	goto loc_83095D58;
loc_83095D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83095D58:
	// stw r3,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r3.u32);
loc_83095D5C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e9ef8
	ctx.lr = 0x83095D64;
	sub_830E9EF8(ctx, base);
	// bl 0x830f0178
	ctx.lr = 0x83095D68;
	sub_830F0178(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83095D70"))) PPC_WEAK_FUNC(sub_83095D70);
PPC_FUNC_IMPL(__imp__sub_83095D70) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83095dd0
	if (cr6.gt) goto loc_83095DD0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83095db0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83095DB0;
	// bdzf 4*cr6+eq,0x83095dbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83095DBC;
	// bne cr6,0x83095dc8
	if (!cr6.eq) goto loc_83095DC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83095758
	ctx.lr = 0x83095DAC;
	sub_83095758(ctx, base);
	// b 0x83095dd0
	goto loc_83095DD0;
loc_83095DB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83095808
	ctx.lr = 0x83095DB8;
	sub_83095808(ctx, base);
	// b 0x83095dd0
	goto loc_83095DD0;
loc_83095DBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830959a0
	ctx.lr = 0x83095DC4;
	sub_830959A0(ctx, base);
	// b 0x83095dd0
	goto loc_83095DD0;
loc_83095DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830959f0
	ctx.lr = 0x83095DD0;
	sub_830959F0(ctx, base);
loc_83095DD0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_83095DF4"))) PPC_WEAK_FUNC(sub_83095DF4);
PPC_FUNC_IMPL(__imp__sub_83095DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83095DF8"))) PPC_WEAK_FUNC(sub_83095DF8);
PPC_FUNC_IMPL(__imp__sub_83095DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beq cr6,0x83095e4c
	if (cr6.eq) goto loc_83095E4C;
	// subf r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_83095E20:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne cr6,0x83095e20
	if (!cr6.eq) goto loc_83095E20;
loc_83095E4C:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83095E54"))) PPC_WEAK_FUNC(sub_83095E54);
PPC_FUNC_IMPL(__imp__sub_83095E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83095E58"))) PPC_WEAK_FUNC(sub_83095E58);
PPC_FUNC_IMPL(__imp__sub_83095E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83095E60;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,18472
	ctx.r9.s64 = ctx.r11.s64 + 18472;
	// li r30,25
	ctx.r30.s64 = 25;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83095ec4
	if (cr6.eq) goto loc_83095EC4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83095E98;
	sub_82595150(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095eb8
	if (cr6.eq) goto loc_83095EB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83095EB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83095EB8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83095EC0;
	sub_82595170(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_83095EC4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095f0c
	if (cr6.eq) goto loc_83095F0C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83095EE0;
	sub_82595150(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095f00
	if (cr6.eq) goto loc_83095F00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83095F00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83095F00:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83095F08;
	sub_82595170(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_83095F0C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095f54
	if (cr6.eq) goto loc_83095F54;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83095F28;
	sub_82595150(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095f48
	if (cr6.eq) goto loc_83095F48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83095F48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83095F48:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83095F50;
	sub_82595170(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_83095F54:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095f9c
	if (cr6.eq) goto loc_83095F9C;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83095F70;
	sub_82595150(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095f90
	if (cr6.eq) goto loc_83095F90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83095F90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83095F90:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83095F98;
	sub_82595170(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_83095F9C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83095fe4
	if (cr6.eq) goto loc_83095FE4;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83095FB8;
	sub_82595150(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83095fd8
	if (cr6.eq) goto loc_83095FD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83095FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83095FD8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83095FE0;
	sub_82595170(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_83095FE4:
	// bl 0x830a6da0
	ctx.lr = 0x83095FE8;
	sub_830A6DA0(ctx, base);
	// bl 0x830a7158
	ctx.lr = 0x83095FEC;
	sub_830A7158(ctx, base);
	// bl 0x830a8160
	ctx.lr = 0x83095FF0;
	sub_830A8160(ctx, base);
	// bl 0x83096e38
	ctx.lr = 0x83095FF4;
	sub_83096E38(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x830f01d0
	ctx.lr = 0x83096004;
	sub_830F01D0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r8,r9,-22948
	ctx.r8.s64 = ctx.r9.s64 + -22948;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// bl 0x825c3358
	ctx.lr = 0x83096018;
	sub_825C3358(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x83102db0
	ctx.lr = 0x83096020;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e91e8
	ctx.lr = 0x83096028;
	sub_830E91E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83096030"))) PPC_WEAK_FUNC(sub_83096030);
PPC_FUNC_IMPL(__imp__sub_83096030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83096038;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8309622c
	if (cr6.eq) goto loc_8309622C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,12
	ctx.r29.s64 = 12;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw. r10,r10,r29
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83096084
	if (!cr0.eq) goto loc_83096084;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x83095df8
	ctx.lr = 0x83096078;
	sub_83095DF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83096084:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r7,r4,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r4.s64;
	// divw r9,r7,r29
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83096100
	if (cr6.gt) goto loc_83096100;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x830960cc
	if (cr6.eq) goto loc_830960CC;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
loc_830960A8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfsu f12,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x830960a8
	if (!cr6.eq) goto loc_830960A8;
loc_830960CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r8,r29
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83096100:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x830961a8
	if (cr6.gt) goto loc_830961A8;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83096154
	if (cr6.eq) goto loc_83096154;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
loc_83096130:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfsu f12,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83096130
	if (!cr6.eq) goto loc_83096130;
loc_83096154:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x83096228
	if (cr6.eq) goto loc_83096228;
loc_83096168:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83096188
	if (cr6.eq) goto loc_83096188;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_83096188:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x83096168
	if (!cr6.eq) goto loc_83096168;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830961A8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830961c0
	if (cr6.eq) goto loc_830961C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830961C0;
	sub_825952B8(ctx, base);
loc_830961C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r29
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x83476828
	ctx.lr = 0x830961D8;
	sub_83476828(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8309622c
	if (cr6.eq) goto loc_8309622C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83096228
	if (cr6.eq) goto loc_83096228;
loc_830961F8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83096218
	if (cr6.eq) goto loc_83096218;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_83096218:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x830961f8
	if (!cr6.eq) goto loc_830961F8;
loc_83096228:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8309622C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83096238"))) PPC_WEAK_FUNC(sub_83096238);
PPC_FUNC_IMPL(__imp__sub_83096238) {
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
	// bl 0x830e91e8
	ctx.lr = 0x83096254;
	sub_830E91E8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,18472
	ctx.r10.s64 = ctx.r11.s64 + 18472;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x83096a18
	ctx.lr = 0x83096274;
	sub_83096A18(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r7,r9,11960
	ctx.r7.s64 = ctx.r9.s64 + 11960;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x83096da0
	ctx.lr = 0x830962B0;
	sub_83096DA0(ctx, base);
	// bl 0x830a7608
	ctx.lr = 0x830962B4;
	sub_830A7608(ctx, base);
	// bl 0x830a6d28
	ctx.lr = 0x830962B8;
	sub_830A6D28(ctx, base);
	// bl 0x830a6fa8
	ctx.lr = 0x830962BC;
	sub_830A6FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83096ea0
	ctx.lr = 0x830962C4;
	sub_83096EA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830e9240
	ctx.lr = 0x830962CC;
	sub_830E9240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830e95a8
	ctx.lr = 0x830962D4;
	sub_830E95A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83096ea0
	ctx.lr = 0x830962DC;
	sub_83096EA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830e9240
	ctx.lr = 0x830962E4;
	sub_830E9240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830e95a8
	ctx.lr = 0x830962EC;
	sub_830E95A8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83096ea0
	ctx.lr = 0x830962F4;
	sub_83096EA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830e9240
	ctx.lr = 0x830962FC;
	sub_830E9240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830e95a8
	ctx.lr = 0x83096304;
	sub_830E95A8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83096ea0
	ctx.lr = 0x8309630C;
	sub_83096EA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830e9240
	ctx.lr = 0x83096314;
	sub_830E9240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830e95a8
	ctx.lr = 0x8309631C;
	sub_830E95A8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83096ea0
	ctx.lr = 0x83096324;
	sub_83096EA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830e9240
	ctx.lr = 0x8309632C;
	sub_830E9240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830e95a8
	ctx.lr = 0x83096334;
	sub_830E95A8(ctx, base);
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

__attribute__((alias("__imp__sub_83096350"))) PPC_WEAK_FUNC(sub_83096350);
PPC_FUNC_IMPL(__imp__sub_83096350) {
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
	// bl 0x83095e58
	ctx.lr = 0x83096370;
	sub_83095E58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83096388
	if (cr6.eq) goto loc_83096388;
	// bl 0x82416268
	ctx.lr = 0x83096384;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83096388:
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

__attribute__((alias("__imp__sub_830963A0"))) PPC_WEAK_FUNC(sub_830963A0);
PPC_FUNC_IMPL(__imp__sub_830963A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830963A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,18384
	ctx.r8.s64 = ctx.r10.s64 + 18384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,18384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18384);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f13,-12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f12,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// lfs f13,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r4,r7,12092
	ctx.r4.s64 = ctx.r7.s64 + 12092;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// bl 0x82d54828
	ctx.lr = 0x83096434;
	sub_82D54828(ctx, base);
	// lis r6,-31773
	ctx.r6.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r6,12104
	ctx.r4.s64 = ctx.r6.s64 + 12104;
	// bl 0x82d54828
	ctx.lr = 0x83096444;
	sub_82D54828(ctx, base);
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r5,12116
	ctx.r4.s64 = ctx.r5.s64 + 12116;
	// bl 0x82d54828
	ctx.lr = 0x83096454;
	sub_82D54828(ctx, base);
	// lis r4,-31773
	ctx.r4.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r4,12128
	ctx.r4.s64 = ctx.r4.s64 + 12128;
	// bl 0x82d54828
	ctx.lr = 0x83096464;
	sub_82D54828(ctx, base);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,12140
	ctx.r4.s64 = ctx.r11.s64 + 12140;
	// bl 0x82d54828
	ctx.lr = 0x83096474;
	sub_82D54828(ctx, base);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,12152
	ctx.r4.s64 = ctx.r10.s64 + 12152;
	// bl 0x82d54828
	ctx.lr = 0x83096484;
	sub_82D54828(ctx, base);
	// lis r9,-31773
	ctx.r9.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,12164
	ctx.r4.s64 = ctx.r9.s64 + 12164;
	// bl 0x82d54828
	ctx.lr = 0x83096494;
	sub_82D54828(ctx, base);
	// lis r8,-31773
	ctx.r8.s64 = -2082275328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r8,12176
	ctx.r4.s64 = ctx.r8.s64 + 12176;
	// bl 0x82d54828
	ctx.lr = 0x830964A4;
	sub_82D54828(ctx, base);
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r7,11996
	ctx.r4.s64 = ctx.r7.s64 + 11996;
	// bl 0x82d54828
	ctx.lr = 0x830964B4;
	sub_82D54828(ctx, base);
	// lis r6,-31773
	ctx.r6.s64 = -2082275328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r6,12008
	ctx.r4.s64 = ctx.r6.s64 + 12008;
	// bl 0x82d54828
	ctx.lr = 0x830964C4;
	sub_82D54828(ctx, base);
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r5,12020
	ctx.r4.s64 = ctx.r5.s64 + 12020;
	// bl 0x82d54828
	ctx.lr = 0x830964D4;
	sub_82D54828(ctx, base);
	// lis r4,-31773
	ctx.r4.s64 = -2082275328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r4,12032
	ctx.r4.s64 = ctx.r4.s64 + 12032;
	// bl 0x82d54828
	ctx.lr = 0x830964E4;
	sub_82D54828(ctx, base);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,12044
	ctx.r4.s64 = ctx.r11.s64 + 12044;
	// bl 0x82d54828
	ctx.lr = 0x830964F4;
	sub_82D54828(ctx, base);
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,12056
	ctx.r4.s64 = ctx.r10.s64 + 12056;
	// bl 0x82d54828
	ctx.lr = 0x83096504;
	sub_82D54828(ctx, base);
	// lis r9,-31773
	ctx.r9.s64 = -2082275328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r9,12068
	ctx.r4.s64 = ctx.r9.s64 + 12068;
	// bl 0x82d54828
	ctx.lr = 0x83096514;
	sub_82D54828(ctx, base);
	// lis r8,-31773
	ctx.r8.s64 = -2082275328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r8,12080
	ctx.r4.s64 = ctx.r8.s64 + 12080;
	// bl 0x82d54828
	ctx.lr = 0x83096524;
	sub_82D54828(ctx, base);
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r6,-31773
	ctx.r6.s64 = -2082275328;
	// addi r5,r7,11972
	ctx.r5.s64 = ctx.r7.s64 + 11972;
	// addi r4,r6,11984
	ctx.r4.s64 = ctx.r6.s64 + 11984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,11972(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,11984(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83096570"))) PPC_WEAK_FUNC(sub_83096570);
PPC_FUNC_IMPL(__imp__sub_83096570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83096578;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce768
	ctx.lr = 0x83096580;
	__savefpr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r31,312(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83096730
	if (cr6.eq) goto loc_83096730;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x830965A0;
	sub_83102DB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r4,27(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// bl 0x837475e8
	ctx.lr = 0x830965AC;
	sub_837475E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83096728
	if (cr6.eq) goto loc_83096728;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f29,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f27,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f26.f64 = double(temp.f32);
	// lfs f31,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// lfs f25,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f25.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lfs f24,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f24.f64 = double(temp.f32);
	// beq cr6,0x83096628
	if (cr6.eq) goto loc_83096628;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fdivs f30,f8,f6
	ctx.f30.f64 = double(float(ctx.f8.f64 / ctx.f6.f64));
	// fdivs f31,f7,f6
	ctx.f31.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
loc_83096628:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,200
	ctx.r31.s64 = ctx.r3.s64 + 200;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
loc_83096640:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfsu f12,12(r31)
	ea = 12 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82d54828
	ctx.lr = 0x83096664;
	sub_82D54828(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83096640
	if (!cr0.eq) goto loc_83096640;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830963a0
	ctx.lr = 0x83096674;
	sub_830963A0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x83096030
	ctx.lr = 0x83096680;
	sub_83096030(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// stfs f29,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f27,176(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f26,180(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f25,184(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f24,188(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f30,196(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r10,6112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,6112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x830f2958
	ctx.lr = 0x830966C4;
	sub_830F2958(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830966e0
	if (cr6.eq) goto loc_830966E0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x830966E0;
	sub_825952B8(ctx, base);
loc_830966E0:
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// beq cr6,0x83096704
	if (cr6.eq) goto loc_83096704;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83096704;
	sub_825952B8(ctx, base);
loc_83096704:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// beq cr6,0x83096728
	if (cr6.eq) goto loc_83096728;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x83096728;
	sub_825952B8(ctx, base);
loc_83096728:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x83096730;
	sub_83102DB0(ctx, base);
loc_83096730:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7b4
	ctx.lr = 0x8309673C;
	__restfpr_24(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83096740"))) PPC_WEAK_FUNC(sub_83096740);
PPC_FUNC_IMPL(__imp__sub_83096740) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83096764
	if (!cr6.eq) goto loc_83096764;
	// bl 0x82a12978
	ctx.lr = 0x83096764;
	sub_82A12978(ctx, base);
loc_83096764:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83096780
	if (!cr6.eq) goto loc_83096780;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_83096780:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_83096798"))) PPC_WEAK_FUNC(sub_83096798);
PPC_FUNC_IMPL(__imp__sub_83096798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830967A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a23768
	ctx.lr = 0x830967B8;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x830967C8;
	sub_831CE980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x83096834
	if (cr6.eq) goto loc_83096834;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83096834
	if (!cr6.eq) goto loc_83096834;
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83096740
	ctx.lr = 0x830967EC;
	sub_83096740(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,552
	ctx.r30.s64 = ctx.r3.s64 + 552;
loc_830967F4:
	// bl 0x830a6bf8
	ctx.lr = 0x830967F8;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf0
	ctx.lr = 0x830967FC;
	sub_8357ECF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830a7290
	ctx.lr = 0x83096804;
	sub_830A7290(ctx, base);
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bge cr6,0x83096810
	if (!cr6.lt) goto loc_83096810;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_83096810:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x830967f4
	if (cr6.lt) goto loc_830967F4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83096834
	if (cr6.eq) goto loc_83096834;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_83096834:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x8309683C;
	sub_83102DB0(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83096844"))) PPC_WEAK_FUNC(sub_83096844);
PPC_FUNC_IMPL(__imp__sub_83096844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096848"))) PPC_WEAK_FUNC(sub_83096848);
PPC_FUNC_IMPL(__imp__sub_83096848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83096850;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83096a0c
	if (cr6.eq) goto loc_83096A0C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r8,292(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,4472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4472);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x830968a0
	if (!cr6.eq) goto loc_830968A0;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x830968a4
	if (cr6.eq) goto loc_830968A4;
loc_830968A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830968A4:
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830968e4
	if (cr6.eq) goto loc_830968E4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830968e4
	if (!cr6.eq) goto loc_830968E4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830968e4
	if (!cr6.eq) goto loc_830968E4;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830968e4
	if (!cr6.eq) goto loc_830968E4;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83096a0c
	if (cr6.eq) goto loc_83096A0C;
loc_830968E4:
	// bl 0x830a6bf8
	ctx.lr = 0x830968E8;
	sub_830A6BF8(ctx, base);
	// bl 0x830a6c08
	ctx.lr = 0x830968EC;
	sub_830A6C08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830a6e40
	ctx.lr = 0x830968F4;
	sub_830A6E40(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r10,31(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83096914
	if (cr6.eq) goto loc_83096914;
	// bl 0x830a6bf8
	ctx.lr = 0x83096908;
	sub_830A6BF8(ctx, base);
	// bl 0x830a6c08
	ctx.lr = 0x8309690C;
	sub_830A6C08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ab790
	ctx.lr = 0x83096914;
	sub_830AB790(ctx, base);
loc_83096914:
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83096954
	if (cr6.eq) goto loc_83096954;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83096954
	if (!cr6.eq) goto loc_83096954;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83096954
	if (!cr6.eq) goto loc_83096954;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83096954
	if (!cr6.eq) goto loc_83096954;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83096954
	if (!cr6.eq) goto loc_83096954;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8309b1e0
	ctx.lr = 0x83096954;
	sub_8309B1E0(ctx, base);
loc_83096954:
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83096974
	if (cr6.eq) goto loc_83096974;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83098220
	ctx.lr = 0x83096974;
	sub_83098220(ctx, base);
loc_83096974:
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83096994
	if (cr6.eq) goto loc_83096994;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83098ce8
	ctx.lr = 0x83096994;
	sub_83098CE8(ctx, base);
loc_83096994:
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830969cc
	if (cr6.eq) goto loc_830969CC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830969cc
	if (!cr6.eq) goto loc_830969CC;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830969cc
	if (!cr6.eq) goto loc_830969CC;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830969cc
	if (!cr6.eq) goto loc_830969CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83097e60
	ctx.lr = 0x830969CC;
	sub_83097E60(ctx, base);
loc_830969CC:
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83096a00
	if (cr6.eq) goto loc_83096A00;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83096a00
	if (!cr6.eq) goto loc_83096A00;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83096a00
	if (!cr6.eq) goto loc_83096A00;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8309c618
	ctx.lr = 0x83096A00;
	sub_8309C618(ctx, base);
loc_83096A00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83096798
	ctx.lr = 0x83096A0C;
	sub_83096798(ctx, base);
loc_83096A0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83096A14"))) PPC_WEAK_FUNC(sub_83096A14);
PPC_FUNC_IMPL(__imp__sub_83096A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096A18"))) PPC_WEAK_FUNC(sub_83096A18);
PPC_FUNC_IMPL(__imp__sub_83096A18) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r10,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096A50"))) PPC_WEAK_FUNC(sub_83096A50);
PPC_FUNC_IMPL(__imp__sub_83096A50) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,13(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096A58"))) PPC_WEAK_FUNC(sub_83096A58);
PPC_FUNC_IMPL(__imp__sub_83096A58) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,14(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096A60"))) PPC_WEAK_FUNC(sub_83096A60);
PPC_FUNC_IMPL(__imp__sub_83096A60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,15(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096A68"))) PPC_WEAK_FUNC(sub_83096A68);
PPC_FUNC_IMPL(__imp__sub_83096A68) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,18(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096A70"))) PPC_WEAK_FUNC(sub_83096A70);
PPC_FUNC_IMPL(__imp__sub_83096A70) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,19(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096A78"))) PPC_WEAK_FUNC(sub_83096A78);
PPC_FUNC_IMPL(__imp__sub_83096A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83096A80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,18644
	ctx.r31.s64 = ctx.r11.s64 + 18644;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-72
	ctx.r3.s64 = ctx.r31.s64 + -72;
	// bl 0x83523fd8
	ctx.lr = 0x83096A9C;
	sub_83523FD8(ctx, base);
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83096ab8
	if (cr6.eq) goto loc_83096AB8;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x83096AB4;
	sub_83523FD8(ctx, base);
	// b 0x83096acc
	goto loc_83096ACC;
loc_83096AB8:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// bl 0x83767d18
	ctx.lr = 0x83096AC4;
	sub_83767D18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a53140
	ctx.lr = 0x83096ACC;
	sub_82A53140(ctx, base);
loc_83096ACC:
	// bl 0x83096c10
	ctx.lr = 0x83096AD0;
	sub_83096C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83523fd8
	ctx.lr = 0x83096AE0;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83096b10
	if (!cr6.eq) goto loc_83096B10;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x83096b18
	if (!cr6.lt) goto loc_83096B18;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83096b18
	if (!cr6.eq) goto loc_83096B18;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83096b18
	if (!cr6.eq) goto loc_83096B18;
loc_83096B10:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_83096B18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83572958
	ctx.lr = 0x83096B20;
	sub_83572958(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83096B38"))) PPC_WEAK_FUNC(sub_83096B38);
PPC_FUNC_IMPL(__imp__sub_83096B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83096B40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// bl 0x82a47d40
	ctx.lr = 0x83096B58;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83096b80
	if (!cr6.eq) goto loc_83096B80;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82da1d10
	ctx.lr = 0x83096B74;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83096ba8
	if (cr6.eq) goto loc_83096BA8;
loc_83096B80:
	// stb r29,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r29.u8);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stb r29,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r29.u8);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82da1d10
	ctx.lr = 0x83096B98;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83096ba8
	if (cr6.eq) goto loc_83096BA8;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
loc_83096BA8:
	// bl 0x830ff290
	ctx.lr = 0x83096BAC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83096BB0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x83096bbc
	if (!cr6.eq) goto loc_83096BBC;
	// stb r29,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r29.u8);
loc_83096BBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83096BC4"))) PPC_WEAK_FUNC(sub_83096BC4);
PPC_FUNC_IMPL(__imp__sub_83096BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096BC8"))) PPC_WEAK_FUNC(sub_83096BC8);
PPC_FUNC_IMPL(__imp__sub_83096BC8) {
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
	// bl 0x83096a78
	ctx.lr = 0x83096BE8;
	sub_83096A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096b38
	ctx.lr = 0x83096BF4;
	sub_83096B38(ctx, base);
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

__attribute__((alias("__imp__sub_83096C0C"))) PPC_WEAK_FUNC(sub_83096C0C);
PPC_FUNC_IMPL(__imp__sub_83096C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096C10"))) PPC_WEAK_FUNC(sub_83096C10);
PPC_FUNC_IMPL(__imp__sub_83096C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bgt cr6,0x83096cf8
	if (cr6.gt) goto loc_83096CF8;
	// lis r12,-31991
	ctx.r12.s64 = -2096562176;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27696
	ctx.r12.s64 = ctx.r12.s64 + 27696;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_83096CF8;
	case 1:
		goto loc_83096C90;
	case 2:
		goto loc_83096C98;
	case 3:
		goto loc_83096CA8;
	case 4:
		goto loc_83096CA0;
	case 5:
		goto loc_83096C88;
	case 6:
		goto loc_83096CF8;
	case 7:
		goto loc_83096CE8;
	case 8:
		goto loc_83096CF8;
	case 9:
		goto loc_83096CF8;
	case 10:
		goto loc_83096CB8;
	case 11:
		goto loc_83096CB0;
	case 12:
		goto loc_83096CF8;
	case 13:
		goto loc_83096CC8;
	case 14:
		goto loc_83096CF8;
	case 15:
		goto loc_83096CF8;
	case 16:
		goto loc_83096CC0;
	case 17:
		goto loc_83096CF8;
	case 18:
		goto loc_83096CF0;
	case 19:
		goto loc_83096CD0;
	case 20:
		goto loc_83096CD8;
	case 21:
		goto loc_83096CE0;
	default:
		return;
	}
	// lwz r24,27896(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27896);
	// lwz r24,27792(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27792);
	// lwz r24,27800(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27800);
	// lwz r24,27816(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27816);
	// lwz r24,27808(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27808);
	// lwz r24,27784(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27784);
	// lwz r24,27896(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27896);
	// lwz r24,27880(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27880);
	// lwz r24,27896(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27896);
	// lwz r24,27896(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27896);
	// lwz r24,27832(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27832);
	// lwz r24,27824(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27824);
	// lwz r24,27896(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27896);
	// lwz r24,27848(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27848);
	// lwz r24,27896(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27896);
	// lwz r24,27896(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27896);
	// lwz r24,27840(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27840);
	// lwz r24,27896(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27896);
	// lwz r24,27888(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27888);
	// lwz r24,27856(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27856);
	// lwz r24,27864(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27864);
	// lwz r24,27872(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27872);
loc_83096C88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83096C90:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83096C98:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83096CA0:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83096CA8:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83096CB0:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83096CB8:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83096CC0:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83096CC8:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_83096CD0:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_83096CD8:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_83096CE0:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_83096CE8:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_83096CF0:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_83096CF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096D00"))) PPC_WEAK_FUNC(sub_83096D00);
PPC_FUNC_IMPL(__imp__sub_83096D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,22480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22480);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096D0C"))) PPC_WEAK_FUNC(sub_83096D0C);
PPC_FUNC_IMPL(__imp__sub_83096D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096D10"))) PPC_WEAK_FUNC(sub_83096D10);
PPC_FUNC_IMPL(__imp__sub_83096D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// lfs f13,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lfs f12,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096D34"))) PPC_WEAK_FUNC(sub_83096D34);
PPC_FUNC_IMPL(__imp__sub_83096D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096D38"))) PPC_WEAK_FUNC(sub_83096D38);
PPC_FUNC_IMPL(__imp__sub_83096D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096D54"))) PPC_WEAK_FUNC(sub_83096D54);
PPC_FUNC_IMPL(__imp__sub_83096D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096D58"))) PPC_WEAK_FUNC(sub_83096D58);
PPC_FUNC_IMPL(__imp__sub_83096D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// lfs f13,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lfs f12,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096D7C"))) PPC_WEAK_FUNC(sub_83096D7C);
PPC_FUNC_IMPL(__imp__sub_83096D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096D80"))) PPC_WEAK_FUNC(sub_83096D80);
PPC_FUNC_IMPL(__imp__sub_83096D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83096D9C"))) PPC_WEAK_FUNC(sub_83096D9C);
PPC_FUNC_IMPL(__imp__sub_83096D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83096DA0"))) PPC_WEAK_FUNC(sub_83096DA0);
PPC_FUNC_IMPL(__imp__sub_83096DA0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r11,22480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22480);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83096e20
	if (!cr6.eq) goto loc_83096E20;
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83096DD8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83096e18
	if (cr6.eq) goto loc_83096E18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,22480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22480, ctx.r3.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
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
loc_83096E18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,22480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22480, ctx.r11.u32);
loc_83096E20:
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

