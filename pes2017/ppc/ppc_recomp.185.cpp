#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D6A370"))) PPC_WEAK_FUNC(sub_82D6A370);
PPC_FUNC_IMPL(__imp__sub_82D6A370) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,29736
	ctx.r10.s64 = ctx.r11.s64 + 29736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d52380
	ctx.lr = 0x82D6A39C;
	sub_82D52380(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6a3b4
	if (cr6.eq) goto loc_82D6A3B4;
	// bl 0x82416268
	ctx.lr = 0x82D6A3B0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6A3B4:
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

__attribute__((alias("__imp__sub_82D6A3CC"))) PPC_WEAK_FUNC(sub_82D6A3CC);
PPC_FUNC_IMPL(__imp__sub_82D6A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A3D0"))) PPC_WEAK_FUNC(sub_82D6A3D0);
PPC_FUNC_IMPL(__imp__sub_82D6A3D0) {
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
	// bl 0x82d52328
	ctx.lr = 0x82D6A3E8;
	sub_82D52328(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,30240
	ctx.r9.s64 = ctx.r10.s64 + 30240;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D6A41C"))) PPC_WEAK_FUNC(sub_82D6A41C);
PPC_FUNC_IMPL(__imp__sub_82D6A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A420"))) PPC_WEAK_FUNC(sub_82D6A420);
PPC_FUNC_IMPL(__imp__sub_82D6A420) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r3,108
	ctx.r5.s64 = ctx.r3.s64 + 108;
	// addi r4,r11,30112
	ctx.r4.s64 = ctx.r11.s64 + 30112;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6A43C;
	sub_82D2B3A8(ctx, base);
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

__attribute__((alias("__imp__sub_82D6A450"))) PPC_WEAK_FUNC(sub_82D6A450);
PPC_FUNC_IMPL(__imp__sub_82D6A450) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r11,r11,30140
	ctx.r11.s64 = ctx.r11.s64 + 30140;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// beq cr6,0x82d6a480
	if (cr6.eq) goto loc_82D6A480;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82D6A480:
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d521a8
	ctx.lr = 0x82D6A48C;
	sub_82D521A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d6a4a0
	if (cr6.lt) goto loc_82D6A4A0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82D6A4A0:
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

__attribute__((alias("__imp__sub_82D6A4B4"))) PPC_WEAK_FUNC(sub_82D6A4B4);
PPC_FUNC_IMPL(__imp__sub_82D6A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A4B8"))) PPC_WEAK_FUNC(sub_82D6A4B8);
PPC_FUNC_IMPL(__imp__sub_82D6A4B8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,30240
	ctx.r10.s64 = ctx.r11.s64 + 30240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d52380
	ctx.lr = 0x82D6A4E4;
	sub_82D52380(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6a4fc
	if (cr6.eq) goto loc_82D6A4FC;
	// bl 0x82416268
	ctx.lr = 0x82D6A4F8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6A4FC:
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

__attribute__((alias("__imp__sub_82D6A514"))) PPC_WEAK_FUNC(sub_82D6A514);
PPC_FUNC_IMPL(__imp__sub_82D6A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A518"))) PPC_WEAK_FUNC(sub_82D6A518);
PPC_FUNC_IMPL(__imp__sub_82D6A518) {
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
	// bl 0x82d5e138
	ctx.lr = 0x82D6A530;
	sub_82D5E138(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,30792
	ctx.r9.s64 = ctx.r11.s64 + 30792;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82D6A564"))) PPC_WEAK_FUNC(sub_82D6A564);
PPC_FUNC_IMPL(__imp__sub_82D6A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A568"))) PPC_WEAK_FUNC(sub_82D6A568);
PPC_FUNC_IMPL(__imp__sub_82D6A568) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-20788
	ctx.r8.s64 = ctx.r10.s64 + -20788;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D6A5A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d6a5b8
	if (!cr6.lt) goto loc_82D6A5B8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82d6a5bc
	goto loc_82D6A5BC;
loc_82D6A5B8:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_82D6A5BC:
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

__attribute__((alias("__imp__sub_82D6A5D4"))) PPC_WEAK_FUNC(sub_82D6A5D4);
PPC_FUNC_IMPL(__imp__sub_82D6A5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A5D8"))) PPC_WEAK_FUNC(sub_82D6A5D8);
PPC_FUNC_IMPL(__imp__sub_82D6A5D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d6a568
	ctx.lr = 0x82D6A5FC;
	sub_82D6A568(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d6a630
	if (cr6.lt) goto loc_82D6A630;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82D6A618;
	sub_82D2B608(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d6a630
	if (cr6.lt) goto loc_82D6A630;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D6A630;
	sub_82D2AEC8(ctx, base);
loc_82D6A630:
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

__attribute__((alias("__imp__sub_82D6A644"))) PPC_WEAK_FUNC(sub_82D6A644);
PPC_FUNC_IMPL(__imp__sub_82D6A644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A648"))) PPC_WEAK_FUNC(sub_82D6A648);
PPC_FUNC_IMPL(__imp__sub_82D6A648) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d6a568
	ctx.lr = 0x82D6A66C;
	sub_82D6A568(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d6a6a0
	if (cr6.lt) goto loc_82D6A6A0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82D6A688;
	sub_82D2B608(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d6a6a0
	if (cr6.lt) goto loc_82D6A6A0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D6A6A0;
	sub_82D2AEC8(ctx, base);
loc_82D6A6A0:
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

__attribute__((alias("__imp__sub_82D6A6B4"))) PPC_WEAK_FUNC(sub_82D6A6B4);
PPC_FUNC_IMPL(__imp__sub_82D6A6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A6B8"))) PPC_WEAK_FUNC(sub_82D6A6B8);
PPC_FUNC_IMPL(__imp__sub_82D6A6B8) {
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
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d6a568
	ctx.lr = 0x82D6A6DC;
	sub_82D6A568(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d6a710
	if (cr6.lt) goto loc_82D6A710;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82D6A6F8;
	sub_82D2B608(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d6a710
	if (cr6.lt) goto loc_82D6A710;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D6A710;
	sub_82D2AEC8(ctx, base);
loc_82D6A710:
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

__attribute__((alias("__imp__sub_82D6A724"))) PPC_WEAK_FUNC(sub_82D6A724);
PPC_FUNC_IMPL(__imp__sub_82D6A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A728"))) PPC_WEAK_FUNC(sub_82D6A728);
PPC_FUNC_IMPL(__imp__sub_82D6A728) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,30792
	ctx.r10.s64 = ctx.r11.s64 + 30792;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d5e178
	ctx.lr = 0x82D6A754;
	sub_82D5E178(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6a76c
	if (cr6.eq) goto loc_82D6A76C;
	// bl 0x82416268
	ctx.lr = 0x82D6A768;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6A76C:
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

__attribute__((alias("__imp__sub_82D6A784"))) PPC_WEAK_FUNC(sub_82D6A784);
PPC_FUNC_IMPL(__imp__sub_82D6A784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A788"))) PPC_WEAK_FUNC(sub_82D6A788);
PPC_FUNC_IMPL(__imp__sub_82D6A788) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,-20792(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20792);
	// bl 0x82d521a8
	ctx.lr = 0x82D6A7AC;
	sub_82D521A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d6a820
	if (cr6.lt) goto loc_82D6A820;
	// ld r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 92);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,21152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21152);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D6A7F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82d6a81c
	if (cr6.eq) goto loc_82D6A81C;
	// bl 0x82d6a648
	ctx.lr = 0x82D6A808;
	sub_82D6A648(ctx, base);
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
loc_82D6A81C:
	// bl 0x82d6a5d8
	ctx.lr = 0x82D6A820;
	sub_82D6A5D8(ctx, base);
loc_82D6A820:
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

__attribute__((alias("__imp__sub_82D6A834"))) PPC_WEAK_FUNC(sub_82D6A834);
PPC_FUNC_IMPL(__imp__sub_82D6A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A838"))) PPC_WEAK_FUNC(sub_82D6A838);
PPC_FUNC_IMPL(__imp__sub_82D6A838) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d6a884
	if (!cr6.eq) goto loc_82D6A884;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r10,r11,-20788
	ctx.r10.s64 = ctx.r11.s64 + -20788;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x82d2bb40
	ctx.lr = 0x82D6A868;
	sub_82D2BB40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6a884
	if (cr6.eq) goto loc_82D6A884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d6a6b8
	ctx.lr = 0x82D6A87C;
	sub_82D6A6B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d6a888
	if (cr6.lt) goto loc_82D6A888;
loc_82D6A884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D6A888:
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

__attribute__((alias("__imp__sub_82D6A89C"))) PPC_WEAK_FUNC(sub_82D6A89C);
PPC_FUNC_IMPL(__imp__sub_82D6A89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A8A0"))) PPC_WEAK_FUNC(sub_82D6A8A0);
PPC_FUNC_IMPL(__imp__sub_82D6A8A0) {
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
	// bl 0x82d31b88
	ctx.lr = 0x82D6A8B8;
	sub_82D31B88(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31280
	ctx.r9.s64 = ctx.r10.s64 + 31280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D6A8E8"))) PPC_WEAK_FUNC(sub_82D6A8E8);
PPC_FUNC_IMPL(__imp__sub_82D6A8E8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r3,324
	ctx.r5.s64 = ctx.r3.s64 + 324;
	// addi r30,r11,31180
	ctx.r30.s64 = ctx.r11.s64 + 31180;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6A914;
	sub_82D2B3A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6A924;
	sub_82D2B3A8(ctx, base);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d6a938
	if (cr6.eq) goto loc_82D6A938;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D6A938:
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D6A954"))) PPC_WEAK_FUNC(sub_82D6A954);
PPC_FUNC_IMPL(__imp__sub_82D6A954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A958"))) PPC_WEAK_FUNC(sub_82D6A958);
PPC_FUNC_IMPL(__imp__sub_82D6A958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d6a974
	if (cr6.eq) goto loc_82D6A974;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d6a9a4
	if (cr6.eq) goto loc_82D6A9A4;
loc_82D6A96C:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_82D6A974:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d6a99c
	if (cr6.lt) goto loc_82D6A99C;
	// beq cr6,0x82d6a994
	if (cr6.eq) goto loc_82D6A994;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d6a96c
	if (!cr6.lt) goto loc_82D6A96C;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82D6A994:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82D6A99C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D6A9A4:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d6a9cc
	if (cr6.lt) goto loc_82D6A9CC;
	// beq cr6,0x82d6a9c4
	if (cr6.eq) goto loc_82D6A9C4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d6a96c
	if (!cr6.lt) goto loc_82D6A96C;
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82D6A9C4:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82D6A9CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6A9D4"))) PPC_WEAK_FUNC(sub_82D6A9D4);
PPC_FUNC_IMPL(__imp__sub_82D6A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6A9D8"))) PPC_WEAK_FUNC(sub_82D6A9D8);
PPC_FUNC_IMPL(__imp__sub_82D6A9D8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31280
	ctx.r10.s64 = ctx.r11.s64 + 31280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d310b8
	ctx.lr = 0x82D6AA04;
	sub_82D310B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6aa1c
	if (cr6.eq) goto loc_82D6AA1C;
	// bl 0x82416268
	ctx.lr = 0x82D6AA18;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6AA1C:
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

__attribute__((alias("__imp__sub_82D6AA34"))) PPC_WEAK_FUNC(sub_82D6AA34);
PPC_FUNC_IMPL(__imp__sub_82D6AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AA38"))) PPC_WEAK_FUNC(sub_82D6AA38);
PPC_FUNC_IMPL(__imp__sub_82D6AA38) {
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
	// bl 0x82d31b88
	ctx.lr = 0x82D6AA50;
	sub_82D31B88(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31848
	ctx.r9.s64 = ctx.r10.s64 + 31848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D6AA98"))) PPC_WEAK_FUNC(sub_82D6AA98);
PPC_FUNC_IMPL(__imp__sub_82D6AA98) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r3,320
	ctx.r5.s64 = ctx.r3.s64 + 320;
	// addi r30,r11,31736
	ctx.r30.s64 = ctx.r11.s64 + 31736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AAC4;
	sub_82D2B3A8(ctx, base);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// addi r5,r31,324
	ctx.r5.s64 = ctx.r31.s64 + 324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AAD4;
	sub_82D2B3A8(ctx, base);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r5,r31,328
	ctx.r5.s64 = ctx.r31.s64 + 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AAE4;
	sub_82D2B3A8(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// addi r5,r31,332
	ctx.r5.s64 = ctx.r31.s64 + 332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AAF4;
	sub_82D2B3A8(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r5,r31,336
	ctx.r5.s64 = ctx.r31.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AB04;
	sub_82D2B3A8(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// addi r5,r31,340
	ctx.r5.s64 = ctx.r31.s64 + 340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AB14;
	sub_82D2B3A8(ctx, base);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// addi r5,r31,344
	ctx.r5.s64 = ctx.r31.s64 + 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AB24;
	sub_82D2B3A8(ctx, base);
	// addi r5,r31,348
	ctx.r5.s64 = ctx.r31.s64 + 348;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AB34;
	sub_82D2B3A8(ctx, base);
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

__attribute__((alias("__imp__sub_82D6AB4C"))) PPC_WEAK_FUNC(sub_82D6AB4C);
PPC_FUNC_IMPL(__imp__sub_82D6AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AB50"))) PPC_WEAK_FUNC(sub_82D6AB50);
PPC_FUNC_IMPL(__imp__sub_82D6AB50) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31848
	ctx.r10.s64 = ctx.r11.s64 + 31848;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d310b8
	ctx.lr = 0x82D6AB7C;
	sub_82D310B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6ab94
	if (cr6.eq) goto loc_82D6AB94;
	// bl 0x82416268
	ctx.lr = 0x82D6AB90;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6AB94:
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

__attribute__((alias("__imp__sub_82D6ABAC"))) PPC_WEAK_FUNC(sub_82D6ABAC);
PPC_FUNC_IMPL(__imp__sub_82D6ABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6ABB0"))) PPC_WEAK_FUNC(sub_82D6ABB0);
PPC_FUNC_IMPL(__imp__sub_82D6ABB0) {
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
	// bl 0x82d31b88
	ctx.lr = 0x82D6ABC8;
	sub_82D31B88(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,32376
	ctx.r9.s64 = ctx.r10.s64 + 32376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D6ABFC"))) PPC_WEAK_FUNC(sub_82D6ABFC);
PPC_FUNC_IMPL(__imp__sub_82D6ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AC00"))) PPC_WEAK_FUNC(sub_82D6AC00);
PPC_FUNC_IMPL(__imp__sub_82D6AC00) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r3,320
	ctx.r5.s64 = ctx.r3.s64 + 320;
	// addi r30,r11,32256
	ctx.r30.s64 = ctx.r11.s64 + 32256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AC2C;
	sub_82D2B3A8(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r5,r31,324
	ctx.r5.s64 = ctx.r31.s64 + 324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AC3C;
	sub_82D2B3A8(ctx, base);
	// addi r5,r31,328
	ctx.r5.s64 = ctx.r31.s64 + 328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b3a8
	ctx.lr = 0x82D6AC4C;
	sub_82D2B3A8(ctx, base);
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

__attribute__((alias("__imp__sub_82D6AC64"))) PPC_WEAK_FUNC(sub_82D6AC64);
PPC_FUNC_IMPL(__imp__sub_82D6AC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AC68"))) PPC_WEAK_FUNC(sub_82D6AC68);
PPC_FUNC_IMPL(__imp__sub_82D6AC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d6ac9c
	if (!cr6.eq) goto loc_82D6AC9C;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6ac8c
	if (!cr6.eq) goto loc_82D6AC8C;
	// blr 
	return;
loc_82D6AC8C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82D6AC9C:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6acb8
	if (!cr6.eq) goto loc_82D6ACB8;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82D6ACB8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6ACC8"))) PPC_WEAK_FUNC(sub_82D6ACC8);
PPC_FUNC_IMPL(__imp__sub_82D6ACC8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,32376
	ctx.r10.s64 = ctx.r11.s64 + 32376;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d310b8
	ctx.lr = 0x82D6ACF4;
	sub_82D310B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6ad0c
	if (cr6.eq) goto loc_82D6AD0C;
	// bl 0x82416268
	ctx.lr = 0x82D6AD08;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6AD0C:
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

__attribute__((alias("__imp__sub_82D6AD24"))) PPC_WEAK_FUNC(sub_82D6AD24);
PPC_FUNC_IMPL(__imp__sub_82D6AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AD28"))) PPC_WEAK_FUNC(sub_82D6AD28);
PPC_FUNC_IMPL(__imp__sub_82D6AD28) {
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
	// bl 0x82d52328
	ctx.lr = 0x82D6AD40;
	sub_82D52328(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-32536
	ctx.r9.s64 = ctx.r11.s64 + -32536;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82D6AD74"))) PPC_WEAK_FUNC(sub_82D6AD74);
PPC_FUNC_IMPL(__imp__sub_82D6AD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AD78"))) PPC_WEAK_FUNC(sub_82D6AD78);
PPC_FUNC_IMPL(__imp__sub_82D6AD78) {
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
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-20264
	ctx.r7.s64 = ctx.r9.s64 + -20264;
	// lwz r4,-20268(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20268);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82d521a8
	ctx.lr = 0x82D6ADA4;
	sub_82D521A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d6adb0
	if (!cr6.lt) goto loc_82D6ADB0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82D6ADB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6ADC0"))) PPC_WEAK_FUNC(sub_82D6ADC0);
PPC_FUNC_IMPL(__imp__sub_82D6ADC0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-32536
	ctx.r10.s64 = ctx.r11.s64 + -32536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d52380
	ctx.lr = 0x82D6ADEC;
	sub_82D52380(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6ae04
	if (cr6.eq) goto loc_82D6AE04;
	// bl 0x82416268
	ctx.lr = 0x82D6AE00;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6AE04:
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

__attribute__((alias("__imp__sub_82D6AE1C"))) PPC_WEAK_FUNC(sub_82D6AE1C);
PPC_FUNC_IMPL(__imp__sub_82D6AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AE20"))) PPC_WEAK_FUNC(sub_82D6AE20);
PPC_FUNC_IMPL(__imp__sub_82D6AE20) {
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
	// bl 0x82d52328
	ctx.lr = 0x82D6AE38;
	sub_82D52328(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-32048
	ctx.r10.s64 = ctx.r11.s64 + -32048;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D6AE5C"))) PPC_WEAK_FUNC(sub_82D6AE5C);
PPC_FUNC_IMPL(__imp__sub_82D6AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AE60"))) PPC_WEAK_FUNC(sub_82D6AE60);
PPC_FUNC_IMPL(__imp__sub_82D6AE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-20112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20112);
	// bl 0x82d521a8
	ctx.lr = 0x82D6AE7C;
	sub_82D521A8(ctx, base);
	// srawi r3,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 31;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6AE90"))) PPC_WEAK_FUNC(sub_82D6AE90);
PPC_FUNC_IMPL(__imp__sub_82D6AE90) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-32048
	ctx.r10.s64 = ctx.r11.s64 + -32048;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d52380
	ctx.lr = 0x82D6AEBC;
	sub_82D52380(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6aed4
	if (cr6.eq) goto loc_82D6AED4;
	// bl 0x82416268
	ctx.lr = 0x82D6AED0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6AED4:
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

__attribute__((alias("__imp__sub_82D6AEEC"))) PPC_WEAK_FUNC(sub_82D6AEEC);
PPC_FUNC_IMPL(__imp__sub_82D6AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AEF0"))) PPC_WEAK_FUNC(sub_82D6AEF0);
PPC_FUNC_IMPL(__imp__sub_82D6AEF0) {
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
	// bl 0x82d52328
	ctx.lr = 0x82D6AF08;
	sub_82D52328(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-31480
	ctx.r9.s64 = ctx.r11.s64 + -31480;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82D6AF3C"))) PPC_WEAK_FUNC(sub_82D6AF3C);
PPC_FUNC_IMPL(__imp__sub_82D6AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6AF40"))) PPC_WEAK_FUNC(sub_82D6AF40);
PPC_FUNC_IMPL(__imp__sub_82D6AF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r5,r3,104
	ctx.r5.s64 = ctx.r3.s64 + 104;
	// lwz r4,-20004(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20004);
	// b 0x82d2b3a8
	sub_82D2B3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6AF50"))) PPC_WEAK_FUNC(sub_82D6AF50);
PPC_FUNC_IMPL(__imp__sub_82D6AF50) {
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
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-19996
	ctx.r7.s64 = ctx.r9.s64 + -19996;
	// lwz r4,-20000(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20000);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82d521a8
	ctx.lr = 0x82D6AF7C;
	sub_82D521A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d6af88
	if (!cr6.lt) goto loc_82D6AF88;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82D6AF88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6AF98"))) PPC_WEAK_FUNC(sub_82D6AF98);
PPC_FUNC_IMPL(__imp__sub_82D6AF98) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-19996
	ctx.r8.s64 = ctx.r10.s64 + -19996;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D6AFD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d6afe8
	if (!cr6.lt) goto loc_82D6AFE8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82d6afec
	goto loc_82D6AFEC;
loc_82D6AFE8:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_82D6AFEC:
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

__attribute__((alias("__imp__sub_82D6B004"))) PPC_WEAK_FUNC(sub_82D6B004);
PPC_FUNC_IMPL(__imp__sub_82D6B004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6B008"))) PPC_WEAK_FUNC(sub_82D6B008);
PPC_FUNC_IMPL(__imp__sub_82D6B008) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-31480
	ctx.r10.s64 = ctx.r11.s64 + -31480;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d52380
	ctx.lr = 0x82D6B034;
	sub_82D52380(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6b04c
	if (cr6.eq) goto loc_82D6B04C;
	// bl 0x82416268
	ctx.lr = 0x82D6B048;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6B04C:
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

__attribute__((alias("__imp__sub_82D6B064"))) PPC_WEAK_FUNC(sub_82D6B064);
PPC_FUNC_IMPL(__imp__sub_82D6B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6B068"))) PPC_WEAK_FUNC(sub_82D6B068);
PPC_FUNC_IMPL(__imp__sub_82D6B068) {
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
	// bl 0x82d52328
	ctx.lr = 0x82D6B080;
	sub_82D52328(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-30920
	ctx.r9.s64 = ctx.r10.s64 + -30920;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D6B0B0"))) PPC_WEAK_FUNC(sub_82D6B0B0);
PPC_FUNC_IMPL(__imp__sub_82D6B0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r5,r3,104
	ctx.r5.s64 = ctx.r3.s64 + 104;
	// lwz r4,-19868(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19868);
	// b 0x82d2b3a8
	sub_82D2B3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6B0C0"))) PPC_WEAK_FUNC(sub_82D6B0C0);
PPC_FUNC_IMPL(__imp__sub_82D6B0C0) {
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
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-19860
	ctx.r7.s64 = ctx.r9.s64 + -19860;
	// lwz r4,-19864(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19864);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82d521a8
	ctx.lr = 0x82D6B0EC;
	sub_82D521A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d6b0f8
	if (!cr6.lt) goto loc_82D6B0F8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82D6B0F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6B108"))) PPC_WEAK_FUNC(sub_82D6B108);
PPC_FUNC_IMPL(__imp__sub_82D6B108) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-19860
	ctx.r8.s64 = ctx.r10.s64 + -19860;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D6B148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d6b158
	if (!cr6.lt) goto loc_82D6B158;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82d6b15c
	goto loc_82D6B15C;
loc_82D6B158:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_82D6B15C:
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

__attribute__((alias("__imp__sub_82D6B174"))) PPC_WEAK_FUNC(sub_82D6B174);
PPC_FUNC_IMPL(__imp__sub_82D6B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6B178"))) PPC_WEAK_FUNC(sub_82D6B178);
PPC_FUNC_IMPL(__imp__sub_82D6B178) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-30920
	ctx.r10.s64 = ctx.r11.s64 + -30920;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d52380
	ctx.lr = 0x82D6B1A4;
	sub_82D52380(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6b1bc
	if (cr6.eq) goto loc_82D6B1BC;
	// bl 0x82416268
	ctx.lr = 0x82D6B1B8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6B1BC:
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

__attribute__((alias("__imp__sub_82D6B1D4"))) PPC_WEAK_FUNC(sub_82D6B1D4);
PPC_FUNC_IMPL(__imp__sub_82D6B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6B1D8"))) PPC_WEAK_FUNC(sub_82D6B1D8);
PPC_FUNC_IMPL(__imp__sub_82D6B1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6B1E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r30,r11,-30452
	ctx.r30.s64 = ctx.r11.s64 + -30452;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r30,-92
	ctx.r6.s64 = ctx.r30.s64 + -92;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D6B204;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d6b3a0
	if (cr6.eq) goto loc_82D6B3A0;
	// addi r6,r30,-68
	ctx.r6.s64 = ctx.r30.s64 + -68;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D6B224;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d6b3a0
	if (cr6.eq) goto loc_82D6B3A0;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D6B238;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6b3a0
	if (!cr6.eq) goto loc_82D6B3A0;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D6B250;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6b3a0
	if (!cr6.eq) goto loc_82D6B3A0;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D6B268;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6b2c8
	if (cr6.eq) goto loc_82D6B2C8;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,252
	ctx.r4.s64 = 252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D6B28C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6b2b0
	if (cr6.eq) goto loc_82D6B2B0;
	// bl 0x82d73c80
	ctx.lr = 0x82D6B298;
	sub_82D73C80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82D6B2A4;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D6B2B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8387e8e0
	ctx.lr = 0x82D6B2BC;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D6B2C8:
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D6B2D4;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6b31c
	if (cr6.eq) goto loc_82D6B31C;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,252
	ctx.r4.s64 = 252;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82D6B2F8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6b2b0
	if (cr6.eq) goto loc_82D6B2B0;
	// bl 0x82d73620
	ctx.lr = 0x82D6B304;
	sub_82D73620(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82D6B310;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D6B31C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82450880
	ctx.lr = 0x82D6B328;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r4,252
	ctx.r4.s64 = 252;
	// beq cr6,0x82d6b370
	if (cr6.eq) goto loc_82D6B370;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82D6B34C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6b2b0
	if (cr6.eq) goto loc_82D6B2B0;
	// bl 0x82d73580
	ctx.lr = 0x82D6B358;
	sub_82D73580(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82D6B364;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D6B370:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82D6B37C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6b2b0
	if (cr6.eq) goto loc_82D6B2B0;
	// bl 0x82d641d8
	ctx.lr = 0x82D6B388;
	sub_82D641D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82D6B394;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D6B3A0:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,252
	ctx.r4.s64 = 252;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82D6B3B8;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6b3d0
	if (cr6.eq) goto loc_82D6B3D0;
	// bl 0x82d73398
	ctx.lr = 0x82D6B3C8;
	sub_82D73398(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82d6b3d4
	goto loc_82D6B3D4;
loc_82D6B3D0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82D6B3D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6b3f4
	if (cr6.lt) goto loc_82D6B3F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D6B3F4;
	sub_825952B8(ctx, base);
loc_82D6B3F4:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6B410"))) PPC_WEAK_FUNC(sub_82D6B410);
PPC_FUNC_IMPL(__imp__sub_82D6B410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D6B418;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6b438
	if (cr6.lt) goto loc_82D6B438;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82d6b43c
	goto loc_82D6B43C;
loc_82D6B438:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82D6B43C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
loc_82D6B454:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d6b454
	if (!cr6.eq) goto loc_82D6B454;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D6B478;
	sub_8259CC28(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d6b1d8
	ctx.lr = 0x82D6B480;
	sub_82D6B1D8(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// bl 0x8259cb28
	ctx.lr = 0x82D6B49C;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8259cb28
	ctx.lr = 0x82D6B4B0;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,224
	ctx.r4.s64 = ctx.r29.s64 + 224;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8259cb28
	ctx.lr = 0x82D6B4C4;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82D6B4D8;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,140
	ctx.r4.s64 = ctx.r29.s64 + 140;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x8259cb28
	ctx.lr = 0x82D6B4EC;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,168
	ctx.r4.s64 = ctx.r29.s64 + 168;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8259cb28
	ctx.lr = 0x82D6B500;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,196
	ctx.r4.s64 = ctx.r29.s64 + 196;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x8259cb28
	ctx.lr = 0x82D6B514;
	sub_8259CB28(ctx, base);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d64448
	ctx.lr = 0x82D6B520;
	sub_82D64448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82a120f0
	ctx.lr = 0x82D6B52C;
	sub_82A120F0(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d6b548
	if (cr6.eq) goto loc_82D6B548;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D6B548;
	sub_825952B8(ctx, base);
loc_82D6B548:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6B554"))) PPC_WEAK_FUNC(sub_82D6B554);
PPC_FUNC_IMPL(__imp__sub_82D6B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6B558"))) PPC_WEAK_FUNC(sub_82D6B558);
PPC_FUNC_IMPL(__imp__sub_82D6B558) {
	PPC_FUNC_PROLOGUE();
	// fadd f1,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6B560"))) PPC_WEAK_FUNC(sub_82D6B560);
PPC_FUNC_IMPL(__imp__sub_82D6B560) {
	PPC_FUNC_PROLOGUE();
	// fsub f1,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 - ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6B568"))) PPC_WEAK_FUNC(sub_82D6B568);
PPC_FUNC_IMPL(__imp__sub_82D6B568) {
	PPC_FUNC_PROLOGUE();
	// fmul f1,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6B570"))) PPC_WEAK_FUNC(sub_82D6B570);
PPC_FUNC_IMPL(__imp__sub_82D6B570) {
	PPC_FUNC_PROLOGUE();
	// fdiv f1,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 / ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6B578"))) PPC_WEAK_FUNC(sub_82D6B578);
PPC_FUNC_IMPL(__imp__sub_82D6B578) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f0,9000(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82d6b5b8
	if (!cr6.eq) goto loc_82D6B5B8;
	// lfd f1,17056(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17056);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D6B5B8:
	// lfd f0,17056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17056);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82d6b5dc
	if (!cr6.eq) goto loc_82D6B5DC;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82D6B5DC:
	// fsub f1,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 - ctx.f0.f64;
	// bl 0x82d6b578
	ctx.lr = 0x82D6B5E4;
	sub_82D6B578(ctx, base);
	// fmul f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f31.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6B5FC"))) PPC_WEAK_FUNC(sub_82D6B5FC);
PPC_FUNC_IMPL(__imp__sub_82D6B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6B600"))) PPC_WEAK_FUNC(sub_82D6B600);
PPC_FUNC_IMPL(__imp__sub_82D6B600) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d6b610
	if (cr6.eq) goto loc_82D6B610;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D6B610:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6B624"))) PPC_WEAK_FUNC(sub_82D6B624);
PPC_FUNC_IMPL(__imp__sub_82D6B624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6B628"))) PPC_WEAK_FUNC(sub_82D6B628);
PPC_FUNC_IMPL(__imp__sub_82D6B628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6B630;
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
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d6b66c
	if (cr6.eq) goto loc_82D6B66C;
loc_82D6B648:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bctrl 
	ctx.lr = 0x82D6B658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d6b66c
	if (!cr6.eq) goto loc_82D6B66C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d6b648
	if (!cr6.eq) goto loc_82D6B648;
loc_82D6B66C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6B678"))) PPC_WEAK_FUNC(sub_82D6B678);
PPC_FUNC_IMPL(__imp__sub_82D6B678) {
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
	// lwz r11,-88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,-30108
	ctx.r8.s64 = ctx.r10.s64 + -30108;
	// addi r7,r9,-22836
	ctx.r7.s64 = ctx.r9.s64 + -22836;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r3,-72
	ctx.r30.s64 = ctx.r3.s64 + -72;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,-88(r6)
	PPC_STORE_U32(ctx.r6.u32 + -88, ctx.r8.u32);
	// stw r7,-72(r31)
	PPC_STORE_U32(ctx.r31.u32 + -72, ctx.r7.u32);
	// bl 0x82a78610
	ctx.lr = 0x82D6B6C0;
	sub_82A78610(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c498
	ctx.lr = 0x82D6B6C8;
	sub_8246C498(ctx, base);
	// lwz r3,-88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r4,r5,-19992
	ctx.r4.s64 = ctx.r5.s64 + -19992;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r4,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82D6B6F8"))) PPC_WEAK_FUNC(sub_82D6B6F8);
PPC_FUNC_IMPL(__imp__sub_82D6B6F8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6b794
	if (cr6.eq) goto loc_82D6B794;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6b760
	if (cr6.eq) goto loc_82D6B760;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6b760
	if (!cr6.gt) goto loc_82D6B760;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6b770
	goto loc_82D6B770;
loc_82D6B760:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6B770;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6B770:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6b794
	if (cr6.eq) goto loc_82D6B794;
	// li r11,0
	ctx.r11.s64 = 0;
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
loc_82D6B794:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82D6B7B8"))) PPC_WEAK_FUNC(sub_82D6B7B8);
PPC_FUNC_IMPL(__imp__sub_82D6B7B8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6b824
	if (cr6.eq) goto loc_82D6B824;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6b804
	if (cr6.eq) goto loc_82D6B804;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6b804
	if (!cr6.gt) goto loc_82D6B804;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6b814
	goto loc_82D6B814;
loc_82D6B804:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6B814;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6B814:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6b824
	if (cr6.eq) goto loc_82D6B824;
	// stb r3,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r3.u8);
	// b 0x82d6b82c
	goto loc_82D6B82C;
loc_82D6B824:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82D6B82C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r3,5(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
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

__attribute__((alias("__imp__sub_82D6B84C"))) PPC_WEAK_FUNC(sub_82D6B84C);
PPC_FUNC_IMPL(__imp__sub_82D6B84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6B850"))) PPC_WEAK_FUNC(sub_82D6B850);
PPC_FUNC_IMPL(__imp__sub_82D6B850) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6b87c
	if (!cr6.eq) goto loc_82D6B87C;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6B87C;
	sub_82D6B7B8(ctx, base);
loc_82D6B87C:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6b890
	if (!cr6.eq) goto loc_82D6B890;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6B890;
	sub_82D6B7B8(ctx, base);
loc_82D6B890:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bne cr6,0x82d6b8c8
	if (!cr6.eq) goto loc_82D6B8C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6b8d0
	if (cr6.eq) goto loc_82D6B8D0;
loc_82D6B8A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D6B8AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_82D6B8C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6b8a8
	if (cr6.eq) goto loc_82D6B8A8;
loc_82D6B8D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d6b8ac
	goto loc_82D6B8AC;
}

__attribute__((alias("__imp__sub_82D6B8D8"))) PPC_WEAK_FUNC(sub_82D6B8D8);
PPC_FUNC_IMPL(__imp__sub_82D6B8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D6B8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d6b92c
	if (cr6.eq) goto loc_82D6B92C;
loc_82D6B8FC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bctrl 
	ctx.lr = 0x82D6B90C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d6b920
	if (!cr6.eq) goto loc_82D6B920;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82D6B920:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d6b8fc
	if (!cr6.eq) goto loc_82D6B8FC;
loc_82D6B92C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6B938"))) PPC_WEAK_FUNC(sub_82D6B938);
PPC_FUNC_IMPL(__imp__sub_82D6B938) {
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
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d6b678
	ctx.lr = 0x82D6B95C;
	sub_82D6B678(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82D6B970;
	sub_831CCF00(ctx, base);
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

__attribute__((alias("__imp__sub_82D6B988"))) PPC_WEAK_FUNC(sub_82D6B988);
PPC_FUNC_IMPL(__imp__sub_82D6B988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6B990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-88
	ctx.r31.s64 = ctx.r3.s64 + -88;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d6b678
	ctx.lr = 0x82D6B9A8;
	sub_82D6B678(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82D6B9BC;
	sub_831CCF00(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6b9d4
	if (cr6.eq) goto loc_82D6B9D4;
	// bl 0x82416268
	ctx.lr = 0x82D6B9D0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6B9D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6B9DC"))) PPC_WEAK_FUNC(sub_82D6B9DC);
PPC_FUNC_IMPL(__imp__sub_82D6B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6B9E0"))) PPC_WEAK_FUNC(sub_82D6B9E0);
PPC_FUNC_IMPL(__imp__sub_82D6B9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D6B9E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6ba8c
	if (cr6.eq) goto loc_82D6BA8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6ba8c
	if (!cr6.eq) goto loc_82D6BA8C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82416260
	ctx.lr = 0x82D6BA18;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6ba70
	if (cr6.eq) goto loc_82D6BA70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d6ba40
	if (!cr6.eq) goto loc_82D6BA40;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82D6BA40:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8246e218
	ctx.lr = 0x82D6BA4C;
	sub_8246E218(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-30104
	ctx.r9.s64 = ctx.r11.s64 + -30104;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x831cc3c8
	ctx.lr = 0x82D6BA64;
	sub_831CC3C8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// b 0x82d6ba74
	goto loc_82D6BA74;
loc_82D6BA70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D6BA74:
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d6ba8c
	if (cr6.eq) goto loc_82D6BA8C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8246e2b0
	ctx.lr = 0x82D6BA8C;
	sub_8246E2B0(ctx, base);
loc_82D6BA8C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6BA98"))) PPC_WEAK_FUNC(sub_82D6BA98);
PPC_FUNC_IMPL(__imp__sub_82D6BA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6BAA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d6bb18
	if (cr6.eq) goto loc_82D6BB18;
loc_82D6BABC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bad4
	if (cr6.lt) goto loc_82D6BAD4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6bad8
	goto loc_82D6BAD8;
loc_82D6BAD4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82D6BAD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574d38
	ctx.lr = 0x82D6BAE4;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6bb08
	if (cr6.eq) goto loc_82D6BB08;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d72f88
	ctx.lr = 0x82D6BB04;
	sub_82D72F88(ctx, base);
	// b 0x82d6babc
	goto loc_82D6BABC;
loc_82D6BB08:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d6babc
	if (!cr6.eq) goto loc_82D6BABC;
loc_82D6BB18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6BB20"))) PPC_WEAK_FUNC(sub_82D6BB20);
PPC_FUNC_IMPL(__imp__sub_82D6BB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6BB28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bb48
	if (cr6.lt) goto loc_82D6BB48;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82d6bb4c
	goto loc_82D6BB4C;
loc_82D6BB48:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D6BB4C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x82d6bb5c
	if (cr6.eq) goto loc_82D6BB5C;
	// subf r30,r11,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82D6BB5C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d6bb6c
	if (!cr6.eq) goto loc_82D6BB6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82d6bb70
	goto loc_82D6BB70;
loc_82D6BB6C:
	// subf r5,r5,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82D6BB70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246e3e8
	ctx.lr = 0x82D6BB7C;
	sub_8246E3E8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bb8c
	if (cr6.lt) goto loc_82D6BB8C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D6BB8C:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82D6BBA0"))) PPC_WEAK_FUNC(sub_82D6BBA0);
PPC_FUNC_IMPL(__imp__sub_82D6BBA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d6bc18
	if (cr6.eq) goto loc_82D6BC18;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
loc_82D6BBB0:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x82d6bbd4
	if (cr6.eq) goto loc_82D6BBD4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x82d6bbb0
	if (!cr6.eq) goto loc_82D6BBB0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D6BBD4:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d6bc18
	if (cr6.eq) goto loc_82D6BC18;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d6bc18
	if (cr6.eq) goto loc_82D6BC18;
loc_82D6BBE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x82d6bc0c
	if (cr6.eq) goto loc_82D6BC0C;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stb r9,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
loc_82D6BC0C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82d6bbe8
	if (!cr6.eq) goto loc_82D6BBE8;
loc_82D6BC18:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6BC20"))) PPC_WEAK_FUNC(sub_82D6BC20);
PPC_FUNC_IMPL(__imp__sub_82D6BC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D6BC28;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831cc4f0
	ctx.lr = 0x82D6BC3C;
	sub_831CC4F0(ctx, base);
	// lis r30,-31758
	ctx.r30.s64 = -2081292288;
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r4,2300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2300);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r28,2292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2292);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bne cr6,0x82d6bc90
	if (!cr6.eq) goto loc_82D6BC90;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc4f0
	ctx.lr = 0x82D6BC64;
	sub_831CC4F0(ctx, base);
	// lwz r11,2300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6bc84
	if (!cr6.eq) goto loc_82D6BC84;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lwz r11,2264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2264);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2264, ctx.r11.u32);
	// stw r11,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r11.u32);
loc_82D6BC84:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc540
	ctx.lr = 0x82D6BC8C;
	sub_831CC540(ctx, base);
	// lwz r4,2300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2300);
loc_82D6BC90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8246ba90
	ctx.lr = 0x82D6BC98;
	sub_8246BA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6bd08
	if (!cr6.eq) goto loc_82D6BD08;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82d6bcc4
	if (cr6.eq) goto loc_82D6BCC4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x831cc540
	ctx.lr = 0x82D6BCB8;
	sub_831CC540(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D6BCC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d6b9e0
	ctx.lr = 0x82D6BCD0;
	sub_82D6B9E0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82d6bcf0
	if (!cr6.eq) goto loc_82D6BCF0;
	// bl 0x831cf1b0
	ctx.lr = 0x82D6BCDC;
	sub_831CF1B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831cc540
	ctx.lr = 0x82D6BCE4;
	sub_831CC540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D6BCF0:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,2292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2292, ctx.r31.u32);
	// bl 0x8246b910
	ctx.lr = 0x82D6BD00;
	sub_8246B910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cc5d8
	ctx.lr = 0x82D6BD08;
	sub_831CC5D8(ctx, base);
loc_82D6BD08:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831cc540
	ctx.lr = 0x82D6BD10;
	sub_831CC540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6BD1C"))) PPC_WEAK_FUNC(sub_82D6BD1C);
PPC_FUNC_IMPL(__imp__sub_82D6BD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6BD20"))) PPC_WEAK_FUNC(sub_82D6BD20);
PPC_FUNC_IMPL(__imp__sub_82D6BD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6BD28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bd44
	if (cr6.lt) goto loc_82D6BD44;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82d6bd48
	goto loc_82D6BD48;
loc_82D6BD44:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82D6BD48:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bd58
	if (cr6.lt) goto loc_82D6BD58;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6bd5c
	goto loc_82D6BD5C;
loc_82D6BD58:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82D6BD5C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x82d6bd74
	if (cr6.lt) goto loc_82D6BD74;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6bd78
	goto loc_82D6BD78;
loc_82D6BD74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82D6BD78:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d6bd90
	if (cr6.eq) goto loc_82D6BD90;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,13512
	ctx.r7.s64 = ctx.r11.s64 + 13512;
	// bl 0x82e8b6a8
	ctx.lr = 0x82D6BD90;
	sub_82E8B6A8(ctx, base);
loc_82D6BD90:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d6bda4
	if (cr6.lt) goto loc_82D6BDA4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6bda8
	goto loc_82D6BDA8;
loc_82D6BDA4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82D6BDA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x82d6bdc0
	if (cr6.lt) goto loc_82D6BDC0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6bdc4
	goto loc_82D6BDC4;
loc_82D6BDC0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82D6BDC4:
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d6bdd8
	if (cr6.lt) goto loc_82D6BDD8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6bddc
	goto loc_82D6BDDC;
loc_82D6BDD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D6BDDC:
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,9920
	ctx.r5.s64 = ctx.r11.s64 + 9920;
	// bl 0x82d6b628
	ctx.lr = 0x82D6BDEC;
	sub_82D6B628(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d6be04
	if (cr6.eq) goto loc_82D6BE04;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,9920
	ctx.r5.s64 = ctx.r11.s64 + 9920;
	// bl 0x82d6b8d8
	ctx.lr = 0x82D6BE04;
	sub_82D6B8D8(ctx, base);
loc_82D6BE04:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d6bb20
	ctx.lr = 0x82D6BE18;
	sub_82D6BB20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6BE20"))) PPC_WEAK_FUNC(sub_82D6BE20);
PPC_FUNC_IMPL(__imp__sub_82D6BE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D6BE28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82d6be54
	if (!cr6.lt) goto loc_82D6BE54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9148
	ctx.r3.s64 = ctx.r11.s64 + 9148;
	// bl 0x831cc188
	ctx.lr = 0x82D6BE54;
	sub_831CC188(ctx, base);
loc_82D6BE54:
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82d6be6c
	if (cr6.gt) goto loc_82D6BE6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x831cc150
	ctx.lr = 0x82D6BE6C;
	sub_831CC150(ctx, base);
loc_82D6BE6C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d6bf5c
	if (cr6.eq) goto loc_82D6BF5C;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259ca68
	ctx.lr = 0x82D6BE88;
	sub_8259CA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6bf5c
	if (cr6.eq) goto loc_82D6BF5C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bea8
	if (cr6.lt) goto loc_82D6BEA8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6beac
	goto loc_82D6BEAC;
loc_82D6BEA8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82D6BEAC:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bebc
	if (cr6.lt) goto loc_82D6BEBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6bec0
	goto loc_82D6BEC0;
loc_82D6BEBC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D6BEC0:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r5,r29,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r29.s64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82D6BED8;
	sub_831CE420(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x82d6bf04
	if (!cr6.eq) goto loc_82D6BF04;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bef8
	if (cr6.lt) goto loc_82D6BEF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stbx r28,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x82d6bf28
	goto loc_82D6BF28;
loc_82D6BEF8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r28,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x82d6bf28
	goto loc_82D6BF28;
loc_82D6BF04:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bf14
	if (cr6.lt) goto loc_82D6BF14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6bf18
	goto loc_82D6BF18;
loc_82D6BF14:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D6BF18:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82D6BF28;
	sub_831CDCF0(ctx, base);
loc_82D6BF28:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bf50
	if (cr6.lt) goto loc_82D6BF50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D6BF50:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
loc_82D6BF5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6BF68"))) PPC_WEAK_FUNC(sub_82D6BF68);
PPC_FUNC_IMPL(__imp__sub_82D6BF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6BF70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d6bfc8
	if (cr6.eq) goto loc_82D6BFC8;
loc_82D6BF88:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bfa0
	if (cr6.lt) goto loc_82D6BFA0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6bfa4
	goto loc_82D6BFA4;
loc_82D6BFA0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82D6BFA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D6BFB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d6bfc8
	if (cr6.eq) goto loc_82D6BFC8;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d6bf88
	if (!cr6.eq) goto loc_82D6BF88;
loc_82D6BFC8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6bfe8
	if (cr6.lt) goto loc_82D6BFE8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D6BFE8;
	sub_825952B8(ctx, base);
loc_82D6BFE8:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6C008"))) PPC_WEAK_FUNC(sub_82D6C008);
PPC_FUNC_IMPL(__imp__sub_82D6C008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6C010;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d6c068
	if (cr6.eq) goto loc_82D6C068;
loc_82D6C028:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6c040
	if (cr6.lt) goto loc_82D6C040;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6c044
	goto loc_82D6C044;
loc_82D6C040:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82D6C044:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D6C054;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d6c068
	if (cr6.eq) goto loc_82D6C068;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d6c028
	if (!cr6.eq) goto loc_82D6C028;
loc_82D6C068:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6c088
	if (cr6.lt) goto loc_82D6C088;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D6C088;
	sub_825952B8(ctx, base);
loc_82D6C088:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6C0A8"))) PPC_WEAK_FUNC(sub_82D6C0A8);
PPC_FUNC_IMPL(__imp__sub_82D6C0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6C0B0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82470cf8
	ctx.lr = 0x82D6C0D0;
	sub_82470CF8(ctx, base);
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6c17c
	if (cr6.eq) goto loc_82D6C17C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8246bb28
	ctx.lr = 0x82D6C0F0;
	sub_8246BB28(ctx, base);
	// bl 0x824714d8
	ctx.lr = 0x82D6C0F4;
	sub_824714D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6c128
	if (cr6.eq) goto loc_82D6C128;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6C10C;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6c128
	if (cr6.eq) goto loc_82D6C128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6C128;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6C128:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lbz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bctrl 
	ctx.lr = 0x82D6C16C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6c17c
	if (cr6.eq) goto loc_82D6C17C;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82D6C17C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82d6c1b4
	if (cr6.eq) goto loc_82D6C1B4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d6c1a8
	if (!cr6.eq) goto loc_82D6C1A8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82D6C1A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8246c218
	ctx.lr = 0x82D6C1B4;
	sub_8246C218(ctx, base);
loc_82D6C1B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472f48
	ctx.lr = 0x82D6C1BC;
	sub_82472F48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6C1CC"))) PPC_WEAK_FUNC(sub_82D6C1CC);
PPC_FUNC_IMPL(__imp__sub_82D6C1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6C1D0"))) PPC_WEAK_FUNC(sub_82D6C1D0);
PPC_FUNC_IMPL(__imp__sub_82D6C1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D6C1D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d6c214
	if (cr6.eq) goto loc_82D6C214;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6C214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6C214:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506578
	ctx.lr = 0x82D6C220;
	sub_82506578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6c2cc
	if (cr6.eq) goto loc_82D6C2CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8246bb28
	ctx.lr = 0x82D6C240;
	sub_8246BB28(ctx, base);
	// bl 0x82d6bc20
	ctx.lr = 0x82D6C244;
	sub_82D6BC20(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6c278
	if (cr6.eq) goto loc_82D6C278;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6C25C;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6c278
	if (cr6.eq) goto loc_82D6C278;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6C278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6C278:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r5,56(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bctrl 
	ctx.lr = 0x82D6C2CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6C2CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82d6c308
	if (cr6.eq) goto loc_82D6C308;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d6c2fc
	if (!cr6.eq) goto loc_82D6C2FC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82D6C2FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8246c218
	ctx.lr = 0x82D6C308;
	sub_8246C218(ctx, base);
loc_82D6C308:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d6c330
	if (cr6.eq) goto loc_82D6C330;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6C330;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6C330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6C33C"))) PPC_WEAK_FUNC(sub_82D6C33C);
PPC_FUNC_IMPL(__imp__sub_82D6C33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6C340"))) PPC_WEAK_FUNC(sub_82D6C340);
PPC_FUNC_IMPL(__imp__sub_82D6C340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// beq cr6,0x82d6c38c
	if (cr6.eq) goto loc_82D6C38C;
	// subf r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_82D6C368:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne cr6,0x82d6c368
	if (!cr6.eq) goto loc_82D6C368;
loc_82D6C38C:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D6C394"))) PPC_WEAK_FUNC(sub_82D6C394);
PPC_FUNC_IMPL(__imp__sub_82D6C394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6C398"))) PPC_WEAK_FUNC(sub_82D6C398);
PPC_FUNC_IMPL(__imp__sub_82D6C398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D6C3A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82d6c3c8
	if (cr6.gt) goto loc_82D6C3C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9132
	ctx.r3.s64 = ctx.r11.s64 + 9132;
	// bl 0x831cc150
	ctx.lr = 0x82D6C3C8;
	sub_831CC150(ctx, base);
loc_82D6C3C8:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82470da0
	ctx.lr = 0x82D6C3DC;
	sub_82470DA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6c43c
	if (cr6.eq) goto loc_82D6C43C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6c400
	if (cr6.lt) goto loc_82D6C400;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d6c404
	goto loc_82D6C404;
loc_82D6C400:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D6C404:
	// stbx r29,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// blt cr6,0x82d6c430
	if (cr6.lt) goto loc_82D6C430;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D6C430:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stbx r10,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
loc_82D6C43C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6C448"))) PPC_WEAK_FUNC(sub_82D6C448);
PPC_FUNC_IMPL(__imp__sub_82D6C448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82D6C450;
	__savegprlr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x824737f8
	ctx.lr = 0x82D6C46C;
	sub_824737F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6C488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r16,0
	ctx.r16.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d6c4a0
	if (!cr6.eq) goto loc_82D6C4A0;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// b 0x82d6c4b8
	goto loc_82D6C4B8;
loc_82D6C4A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6C4B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82D6C4B8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6C4C8;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c524
	if (!cr6.eq) goto loc_82D6C524;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c4e8
	if (!cr6.eq) goto loc_82D6C4E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6C4E8;
	sub_82D6B7B8(ctx, base);
loc_82D6C4E8:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// beq cr6,0x82d6c514
	if (cr6.eq) goto loc_82D6C514;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c508
	if (!cr6.eq) goto loc_82D6C508;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6C508;
	sub_82D6B7B8(ctx, base);
loc_82D6C508:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x82d6c524
	if (!cr6.eq) goto loc_82D6C524;
loc_82D6C514:
	// stb r11,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r20,r17,1
	ctx.r20.s64 = ctx.r17.s64 + 1;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6C524;
	sub_82D6B6F8(ctx, base);
loc_82D6C524:
	// rlwinm r11,r30,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE00;
	// li r26,10
	ctx.r26.s64 = 10;
	// cmpwi cr6,r11,1024
	cr6.compare<int32_t>(ctx.r11.s32, 1024, xer);
	// bne cr6,0x82d6c53c
	if (!cr6.eq) goto loc_82D6C53C;
	// li r18,8
	ctx.r18.s64 = 8;
	// b 0x82d6c558
	goto loc_82D6C558;
loc_82D6C53C:
	// cmpwi cr6,r11,2048
	cr6.compare<int32_t>(ctx.r11.s32, 2048, xer);
	// bne cr6,0x82d6c54c
	if (!cr6.eq) goto loc_82D6C54C;
	// li r18,16
	ctx.r18.s64 = 16;
	// b 0x82d6c558
	goto loc_82D6C558;
loc_82D6C54C:
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r18,r9,r26
	ctx.r18.u64 = ctx.r9.u64 & ctx.r26.u64;
loc_82D6C558:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6C56C;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c75c
	if (!cr6.eq) goto loc_82D6C75C;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c58c
	if (!cr6.eq) goto loc_82D6C58C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6C58C;
	sub_82D6B7B8(ctx, base);
loc_82D6C58C:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6c75c
	if (!cr6.eq) goto loc_82D6C75C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6C5A4;
	sub_82D6B6F8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6C5B0;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c748
	if (!cr6.eq) goto loc_82D6C748;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c5d0
	if (!cr6.eq) goto loc_82D6C5D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6C5D0;
	sub_82D6B7B8(ctx, base);
loc_82D6C5D0:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// beq cr6,0x82d6c5fc
	if (cr6.eq) goto loc_82D6C5FC;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c5f0
	if (!cr6.eq) goto loc_82D6C5F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6C5F0;
	sub_82D6B7B8(ctx, base);
loc_82D6C5F0:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(ctx.r11.u32, 88, xer);
	// bne cr6,0x82d6c748
	if (!cr6.eq) goto loc_82D6C748;
loc_82D6C5FC:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// beq cr6,0x82d6c60c
	if (cr6.eq) goto loc_82D6C60C;
	// cmpwi cr6,r18,16
	cr6.compare<int32_t>(ctx.r18.s32, 16, xer);
	// bne cr6,0x82d6c748
	if (!cr6.eq) goto loc_82D6C748;
loc_82D6C60C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r18,16
	ctx.r18.s64 = 16;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6C61C;
	sub_82D6B6F8(ctx, base);
loc_82D6C61C:
	// li r26,22
	ctx.r26.s64 = 22;
loc_82D6C620:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// li r24,15
	ctx.r24.s64 = 15;
	// stb r16,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r16.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r27,r17,31
	ctx.r27.s64 = ctx.r17.s64 + 31;
	// addi r28,r11,-30056
	ctx.r28.s64 = ctx.r11.s64 + -30056;
loc_82D6C64C:
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c660
	if (!cr6.eq) goto loc_82D6C660;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6C660;
	sub_82D6B7B8(ctx, base);
loc_82D6C660:
	// lbz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c674
	if (!cr6.eq) goto loc_82D6C674;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6C674;
	sub_82D6B7B8(ctx, base);
loc_82D6C674:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bne cr6,0x82d6c77c
	if (!cr6.eq) goto loc_82D6C77C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6c784
	if (cr6.eq) goto loc_82D6C784;
loc_82D6C68C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82D6C690:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c800
	if (!cr6.eq) goto loc_82D6C800;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c6b0
	if (!cr6.eq) goto loc_82D6C6B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6C6B0;
	sub_82D6B7B8(ctx, base);
loc_82D6C6B0:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// stb r11,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// bl 0x831cf170
	ctx.lr = 0x82D6C6C8;
	sub_831CF170(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6c78c
	if (cr6.eq) goto loc_82D6C78C;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c6e8
	if (!cr6.eq) goto loc_82D6C6E8;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x82d6c6f8
	if (cr6.eq) goto loc_82D6C6F8;
loc_82D6C6E8:
	// cmplw cr6,r20,r27
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r27.u32, xer);
	// bge cr6,0x82d6c6f8
	if (!cr6.lt) goto loc_82D6C6F8;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82D6C6F8:
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bge cr6,0x82d6c70c
	if (!cr6.lt) goto loc_82D6C70C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6C70C:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// beq cr6,0x82d6c7f4
	if (cr6.eq) goto loc_82D6C7F4;
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bge cr6,0x82d6c728
	if (!cr6.lt) goto loc_82D6C728;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6C728:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r24,100(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6C744;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6c64c
	goto loc_82D6C64C;
loc_82D6C748:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// bne cr6,0x82d6c764
	if (!cr6.eq) goto loc_82D6C764;
	// li r18,8
	ctx.r18.s64 = 8;
	// li r26,8
	ctx.r26.s64 = 8;
	// b 0x82d6c620
	goto loc_82D6C620;
loc_82D6C75C:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// beq cr6,0x82d6c620
	if (cr6.eq) goto loc_82D6C620;
loc_82D6C764:
	// cmpwi cr6,r18,10
	cr6.compare<int32_t>(ctx.r18.s32, 10, xer);
	// beq cr6,0x82d6c620
	if (cr6.eq) goto loc_82D6C620;
	// cmpwi cr6,r18,8
	cr6.compare<int32_t>(ctx.r18.s32, 8, xer);
	// bne cr6,0x82d6c61c
	if (!cr6.eq) goto loc_82D6C61C;
	// li r26,8
	ctx.r26.s64 = 8;
	// b 0x82d6c620
	goto loc_82D6C620;
loc_82D6C77C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6c68c
	if (cr6.eq) goto loc_82D6C68C;
loc_82D6C784:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d6c690
	goto loc_82D6C690;
loc_82D6C78C:
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bge cr6,0x82d6c79c
	if (!cr6.lt) goto loc_82D6C79C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6C79C:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6c800
	if (cr6.eq) goto loc_82D6C800;
	// extsb r31,r21
	ctx.r31.s64 = ctx.r21.s8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82d6c800
	if (cr6.eq) goto loc_82D6C800;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c7c8
	if (!cr6.eq) goto loc_82D6C7C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6C7C8;
	sub_82D6B7B8(ctx, base);
loc_82D6C7C8:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x82d6c800
	if (!cr6.eq) goto loc_82D6C800;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82472d98
	ctx.lr = 0x82D6C7E8;
	sub_82472D98(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r24,100(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82D6C7F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6C7FC;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6c64c
	goto loc_82D6C64C;
loc_82D6C800:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d6c834
	if (cr6.eq) goto loc_82D6C834;
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bge cr6,0x82d6c818
	if (!cr6.lt) goto loc_82D6C818;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6C818:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6c830
	if (!cr6.gt) goto loc_82D6C830;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82d6c834
	goto loc_82D6C834;
loc_82D6C830:
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
loc_82D6C834:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d6c848
	if (!cr6.lt) goto loc_82D6C848;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
loc_82D6C848:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6c910
	if (cr6.eq) goto loc_82D6C910;
loc_82D6C854:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d6c8e4
	if (cr6.eq) goto loc_82D6C8E4;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,127
	cr6.compare<int32_t>(ctx.r10.s32, 127, xer);
	// beq cr6,0x82d6c8e4
	if (cr6.eq) goto loc_82D6C8E4;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82d6c894
	if (cr0.eq) goto loc_82D6C894;
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bge cr6,0x82d6c884
	if (!cr6.lt) goto loc_82D6C884;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6C884:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d6c8bc
	if (!cr6.eq) goto loc_82D6C8BC;
loc_82D6C894:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82d6c8c4
	if (!cr6.eq) goto loc_82D6C8C4;
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bge cr6,0x82d6c8ac
	if (!cr6.lt) goto loc_82D6C8AC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6C8AC:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x82d6c8c4
	if (!cr6.lt) goto loc_82D6C8C4;
loc_82D6C8BC:
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// b 0x82d6c8d8
	goto loc_82D6C8D8;
loc_82D6C8C4:
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6c8d8
	if (!cr6.gt) goto loc_82D6C8D8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82D6C8D8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c854
	if (!cr6.eq) goto loc_82D6C854;
loc_82D6C8E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6c910
	if (cr6.eq) goto loc_82D6C910;
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d6c908
	if (!cr6.eq) goto loc_82D6C908;
	// li r11,48
	ctx.r11.s64 = 48;
	// stb r11,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x82d6c914
	goto loc_82D6C914;
loc_82D6C908:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6c914
	if (!cr6.eq) goto loc_82D6C914;
loc_82D6C910:
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
loc_82D6C914:
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// stb r16,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r16.u8);
	// blt cr6,0x82d6c928
	if (cr6.lt) goto loc_82D6C928;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82416268
	ctx.lr = 0x82D6C928;
	sub_82416268(ctx, base);
loc_82D6C928:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d6c93c
	if (cr6.lt) goto loc_82D6C93C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82D6C93C;
	sub_82416268(ctx, base);
loc_82D6C93C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6C948"))) PPC_WEAK_FUNC(sub_82D6C948);
PPC_FUNC_IMPL(__imp__sub_82D6C948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82D6C950;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r8,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x831cc4f0
	ctx.lr = 0x82D6C980;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d6c998
	if (!cr6.lt) goto loc_82D6C998;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D6C998:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc540
	ctx.lr = 0x82D6C9A0;
	sub_831CC540(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824737f8
	ctx.lr = 0x82D6C9A8;
	sub_824737F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6C9B4;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6c9d0
	if (cr6.eq) goto loc_82D6C9D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6C9D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6C9D0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6C9E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r16,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r16.u8);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6CA00;
	sub_82D6B850(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r22,43
	ctx.r22.s64 = 43;
	// li r21,45
	ctx.r21.s64 = 45;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d6ca6c
	if (!cr6.eq) goto loc_82D6CA6C;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6ca28
	if (!cr6.eq) goto loc_82D6CA28;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CA28;
	sub_82D6B7B8(ctx, base);
loc_82D6CA28:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x82d6ca3c
	if (!cr6.eq) goto loc_82D6CA3C;
	// stb r22,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r22.u8);
	// b 0x82d6ca60
	goto loc_82D6CA60;
loc_82D6CA3C:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6ca50
	if (!cr6.eq) goto loc_82D6CA50;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CA50;
	sub_82D6B7B8(ctx, base);
loc_82D6CA50:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x82d6ca6c
	if (!cr6.eq) goto loc_82D6CA6C;
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
loc_82D6CA60:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6CA6C;
	sub_82D6B6F8(ctx, base);
loc_82D6CA6C:
	// li r18,48
	ctx.r18.s64 = 48;
	// li r11,120
	ctx.r11.s64 = 120;
	// stb r18,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r18.u8);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stbu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r31.u32 = ea;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r15,r16
	ctx.r15.u64 = ctx.r16.u64;
	// addi r17,r31,1
	ctx.r17.s64 = ctx.r31.s64 + 1;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6CA98;
	sub_82D6B850(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d6cb38
	if (!cr6.eq) goto loc_82D6CB38;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cabc
	if (!cr6.eq) goto loc_82D6CABC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CABC;
	sub_82D6B7B8(ctx, base);
loc_82D6CABC:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6cb38
	if (!cr6.eq) goto loc_82D6CB38;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6CAD0;
	sub_82D6B6F8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6CADC;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cb34
	if (!cr6.eq) goto loc_82D6CB34;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cafc
	if (!cr6.eq) goto loc_82D6CAFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CAFC;
	sub_82D6B7B8(ctx, base);
loc_82D6CAFC:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// beq cr6,0x82d6cb28
	if (cr6.eq) goto loc_82D6CB28;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cb1c
	if (!cr6.eq) goto loc_82D6CB1C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CB1C;
	sub_82D6B7B8(ctx, base);
loc_82D6CB1C:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(ctx.r11.u32, 88, xer);
	// bne cr6,0x82d6cb34
	if (!cr6.eq) goto loc_82D6CB34;
loc_82D6CB28:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6CB30;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6cb38
	goto loc_82D6CB38;
loc_82D6CB34:
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
loc_82D6CB38:
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bge cr6,0x82d6cb50
	if (!cr6.lt) goto loc_82D6CB50;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_82D6CB50:
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,127
	cr6.compare<uint32_t>(ctx.r10.u32, 127, xer);
	// beq cr6,0x82d6cf64
	if (cr6.eq) goto loc_82D6CF64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82d6cb68
	if (!cr6.lt) goto loc_82D6CB68;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82D6CB68:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6cf64
	if (!cr6.gt) goto loc_82D6CF64;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cb8c
	if (!cr6.eq) goto loc_82D6CB8C;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// b 0x82d6cba4
	goto loc_82D6CBA4;
loc_82D6CB8C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6CBA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82D6CBA4:
	// li r27,15
	ctx.r27.s64 = 15;
	// stb r16,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r16.u8);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r16,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r16.u8);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6CBC8;
	sub_82D6B850(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r23,r11,-9524
	ctx.r23.s64 = ctx.r11.s64 + -9524;
	// bne cr6,0x82d6cd8c
	if (!cr6.eq) goto loc_82D6CD8C;
loc_82D6CBE0:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cbf4
	if (!cr6.eq) goto loc_82D6CBF4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CBF4;
	sub_82D6B7B8(ctx, base);
loc_82D6CBF4:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x82d6cc14
	if (cr6.lt) goto loc_82D6CC14;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x82d6cc14
	if (cr6.gt) goto loc_82D6CC14;
	// addi r31,r11,-48
	ctx.r31.s64 = ctx.r11.s64 + -48;
	// b 0x82d6cc40
	goto loc_82D6CC40;
loc_82D6CC14:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x82d6cc2c
	if (cr6.lt) goto loc_82D6CC2C;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x82d6cc2c
	if (cr6.gt) goto loc_82D6CC2C;
	// addi r31,r11,-87
	ctx.r31.s64 = ctx.r11.s64 + -87;
	// b 0x82d6cc40
	goto loc_82D6CC40;
loc_82D6CC2C:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x82d6ccd0
	if (cr6.lt) goto loc_82D6CCD0;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x82d6ccd0
	if (cr6.gt) goto loc_82D6CCD0;
	// addi r31,r11,-55
	ctx.r31.s64 = ctx.r11.s64 + -55;
loc_82D6CC40:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82d6ccd0
	if (cr6.lt) goto loc_82D6CCD0;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// cmpwi cr6,r24,36
	cr6.compare<int32_t>(ctx.r24.s32, 36, xer);
	// blt cr6,0x82d6cc5c
	if (cr6.lt) goto loc_82D6CC5C;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// b 0x82d6cc94
	goto loc_82D6CC94;
loc_82D6CC5C:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cc70
	if (!cr6.eq) goto loc_82D6CC70;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CC70;
	sub_82D6B7B8(ctx, base);
loc_82D6CC70:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6cc84
	if (!cr6.eq) goto loc_82D6CC84;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x82d6cc94
	if (cr6.eq) goto loc_82D6CC94;
loc_82D6CC84:
	// lbzx r11,r31,r23
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stb r11,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r11.u8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82D6CC94:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x82d6cca4
	if (!cr6.lt) goto loc_82D6CCA4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6CCA4:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// beq cr6,0x82d6cd38
	if (cr6.eq) goto loc_82D6CD38;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x82d6ccc0
	if (!cr6.lt) goto loc_82D6CCC0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6CCC0:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// b 0x82d6cd30
	goto loc_82D6CD30;
loc_82D6CCD0:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x82d6cce0
	if (!cr6.lt) goto loc_82D6CCE0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6CCE0:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6cd58
	if (cr6.eq) goto loc_82D6CD58;
	// extsb r31,r28
	ctx.r31.s64 = ctx.r28.s8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82d6cd58
	if (cr6.eq) goto loc_82D6CD58;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cd0c
	if (!cr6.eq) goto loc_82D6CD0C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CD0C;
	sub_82D6B7B8(ctx, base);
loc_82D6CD0C:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x82d6cd58
	if (!cr6.eq) goto loc_82D6CD58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472d98
	ctx.lr = 0x82D6CD2C;
	sub_82472D98(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82D6CD30:
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82D6CD38:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6CD40;
	sub_82D6B6F8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6CD4C;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6cbe0
	if (cr6.eq) goto loc_82D6CBE0;
loc_82D6CD58:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d6cd8c
	if (cr6.eq) goto loc_82D6CD8C;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x82d6cd70
	if (!cr6.lt) goto loc_82D6CD70;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6CD70:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6cd88
	if (!cr6.gt) goto loc_82D6CD88;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82d6cd8c
	goto loc_82D6CD8C;
loc_82D6CD88:
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
loc_82D6CD8C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d6cda0
	if (!cr6.lt) goto loc_82D6CDA0;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
loc_82D6CDA0:
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d6ce40
	if (!cr6.eq) goto loc_82D6CE40;
loc_82D6CDAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d6ce3c
	if (cr6.eq) goto loc_82D6CE3C;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,127
	cr6.compare<int32_t>(ctx.r10.s32, 127, xer);
	// beq cr6,0x82d6ce3c
	if (cr6.eq) goto loc_82D6CE3C;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82d6cdec
	if (cr0.eq) goto loc_82D6CDEC;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x82d6cddc
	if (!cr6.lt) goto loc_82D6CDDC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6CDDC:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bne cr6,0x82d6ce14
	if (!cr6.eq) goto loc_82D6CE14;
loc_82D6CDEC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82d6ce1c
	if (!cr6.eq) goto loc_82D6CE1C;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x82d6ce04
	if (!cr6.lt) goto loc_82D6CE04;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6CE04:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x82d6ce1c
	if (!cr6.lt) goto loc_82D6CE1C;
loc_82D6CE14:
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// b 0x82d6ce30
	goto loc_82D6CE30;
loc_82D6CE1C:
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6ce30
	if (!cr6.gt) goto loc_82D6CE30;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82D6CE30:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6cdac
	if (cr6.eq) goto loc_82D6CDAC;
loc_82D6CE3C:
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
loc_82D6CE40:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// blt cr6,0x82d6ce50
	if (cr6.lt) goto loc_82D6CE50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x82D6CE50;
	sub_82416268(ctx, base);
loc_82D6CE50:
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6ce6c
	if (cr6.eq) goto loc_82D6CE6C;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x82d6ce6c
	if (!cr6.eq) goto loc_82D6CE6C;
	// stb r18,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r18.u8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82D6CE6C:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6ce80
	if (!cr6.eq) goto loc_82D6CE80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CE80;
	sub_82D6B7B8(ctx, base);
loc_82D6CE80:
	// lbz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6ce94
	if (!cr6.eq) goto loc_82D6CE94;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CE94;
	sub_82D6B7B8(ctx, base);
loc_82D6CE94:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bne cr6,0x82d6d098
	if (!cr6.eq) goto loc_82D6D098;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d0a0
	if (cr6.eq) goto loc_82D6D0A0;
loc_82D6CEAC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82D6CEB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cf18
	if (!cr6.eq) goto loc_82D6CF18;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6ced0
	if (!cr6.eq) goto loc_82D6CED0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CED0;
	sub_82D6B7B8(ctx, base);
loc_82D6CED0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r31,5(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6CEE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// extsb r8,r31
	ctx.r8.s64 = ctx.r31.s8;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x82d6cf18
	if (!cr6.eq) goto loc_82D6CF18;
	// bl 0x831cf160
	ctx.lr = 0x82D6CEFC;
	sub_831CF160(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r9.u8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6CF18;
	sub_82D6B6F8(ctx, base);
loc_82D6CF18:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x82d6d210
	if (!cr6.eq) goto loc_82D6D210;
loc_82D6CF20:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d0d0
	if (!cr6.eq) goto loc_82D6D0D0;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d0c8
	if (cr6.eq) goto loc_82D6D0C8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d0a8
	if (cr6.eq) goto loc_82D6D0A8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d0a8
	if (!cr6.gt) goto loc_82D6D0A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d0b8
	goto loc_82D6D0B8;
loc_82D6CF64:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r23,r11,-9524
	ctx.r23.s64 = ctx.r11.s64 + -9524;
loc_82D6CF6C:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cf80
	if (!cr6.eq) goto loc_82D6CF80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CF80;
	sub_82D6B7B8(ctx, base);
loc_82D6CF80:
	// lbz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cf94
	if (!cr6.eq) goto loc_82D6CF94;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CF94;
	sub_82D6B7B8(ctx, base);
loc_82D6CF94:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bne cr6,0x82d6cff0
	if (!cr6.eq) goto loc_82D6CFF0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6cff8
	if (cr6.eq) goto loc_82D6CFF8;
loc_82D6CFAC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82D6CFB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6ce50
	if (!cr6.eq) goto loc_82D6CE50;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6cfd0
	if (!cr6.eq) goto loc_82D6CFD0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6CFD0;
	sub_82D6B7B8(ctx, base);
loc_82D6CFD0:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x82d6d000
	if (cr6.lt) goto loc_82D6D000;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x82d6d000
	if (cr6.gt) goto loc_82D6D000;
	// addi r31,r11,-48
	ctx.r31.s64 = ctx.r11.s64 + -48;
	// b 0x82d6d02c
	goto loc_82D6D02C;
loc_82D6CFF0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6cfac
	if (cr6.eq) goto loc_82D6CFAC;
loc_82D6CFF8:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d6cfb0
	goto loc_82D6CFB0;
loc_82D6D000:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x82d6d018
	if (cr6.lt) goto loc_82D6D018;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x82d6d018
	if (cr6.gt) goto loc_82D6D018;
	// addi r31,r11,-87
	ctx.r31.s64 = ctx.r11.s64 + -87;
	// b 0x82d6d02c
	goto loc_82D6D02C;
loc_82D6D018:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x82d6ce50
	if (cr6.lt) goto loc_82D6CE50;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x82d6ce50
	if (cr6.gt) goto loc_82D6CE50;
	// addi r31,r11,-55
	ctx.r31.s64 = ctx.r11.s64 + -55;
loc_82D6D02C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82d6ce50
	if (cr6.lt) goto loc_82D6CE50;
	// cmpwi cr6,r24,36
	cr6.compare<int32_t>(ctx.r24.s32, 36, xer);
	// blt cr6,0x82d6d050
	if (cr6.lt) goto loc_82D6D050;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6D04C;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6cf6c
	goto loc_82D6CF6C;
loc_82D6D050:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d064
	if (!cr6.eq) goto loc_82D6D064;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6D064;
	sub_82D6B7B8(ctx, base);
loc_82D6D064:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6d078
	if (!cr6.eq) goto loc_82D6D078;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x82d6d088
	if (cr6.eq) goto loc_82D6D088;
loc_82D6D078:
	// lbzx r11,r31,r23
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r23.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stb r11,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r11.u8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82D6D088:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6D094;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6cf6c
	goto loc_82D6CF6C;
loc_82D6D098:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6ceac
	if (cr6.eq) goto loc_82D6CEAC;
loc_82D6D0A0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d6ceb0
	goto loc_82D6CEB0;
loc_82D6D0A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D0B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D0B8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d0c8
	if (cr6.eq) goto loc_82D6D0C8;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d0cc
	goto loc_82D6D0CC;
loc_82D6D0C8:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D0CC:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D0D0:
	// lbz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d13c
	if (!cr6.eq) goto loc_82D6D13C;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d134
	if (cr6.eq) goto loc_82D6D134;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d114
	if (cr6.eq) goto loc_82D6D114;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d114
	if (!cr6.gt) goto loc_82D6D114;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d124
	goto loc_82D6D124;
loc_82D6D114:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D124;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D124:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d134
	if (cr6.eq) goto loc_82D6D134;
	// stb r3,5(r20)
	PPC_STORE_U8(ctx.r20.u32 + 5, ctx.r3.u8);
	// b 0x82d6d138
	goto loc_82D6D138;
loc_82D6D134:
	// stw r16,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r16.u32);
loc_82D6D138:
	// stb r19,4(r20)
	PPC_STORE_U8(ctx.r20.u32 + 4, ctx.r19.u8);
loc_82D6D13C:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6d1a4
	if (!cr6.eq) goto loc_82D6D1A4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d1ac
	if (cr6.eq) goto loc_82D6D1AC;
loc_82D6D154:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82D6D158:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d1fc
	if (!cr6.eq) goto loc_82D6D1FC;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d1dc
	if (!cr6.eq) goto loc_82D6D1DC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d1d4
	if (cr6.eq) goto loc_82D6D1D4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d1b4
	if (cr6.eq) goto loc_82D6D1B4;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d1b4
	if (!cr6.gt) goto loc_82D6D1B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d1c4
	goto loc_82D6D1C4;
loc_82D6D1A4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d154
	if (cr6.eq) goto loc_82D6D154;
loc_82D6D1AC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d6d158
	goto loc_82D6D158;
loc_82D6D1B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D1C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D1C4:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d1d4
	if (cr6.eq) goto loc_82D6D1D4;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d1d8
	goto loc_82D6D1D8;
loc_82D6D1D4:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D1D8:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D1DC:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6d1fc
	if (!cr6.eq) goto loc_82D6D1FC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6D1F8;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6cf20
	goto loc_82D6CF20;
loc_82D6D1FC:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// bge cr6,0x82d6d210
	if (!cr6.lt) goto loc_82D6D210;
	// stb r18,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r18.u8);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82D6D210:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d27c
	if (!cr6.eq) goto loc_82D6D27C;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d274
	if (cr6.eq) goto loc_82D6D274;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d254
	if (cr6.eq) goto loc_82D6D254;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d254
	if (!cr6.gt) goto loc_82D6D254;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d264
	goto loc_82D6D264;
loc_82D6D254:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D264:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d274
	if (cr6.eq) goto loc_82D6D274;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d278
	goto loc_82D6D278;
loc_82D6D274:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D278:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D27C:
	// lbz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d2e8
	if (!cr6.eq) goto loc_82D6D2E8;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d2e0
	if (cr6.eq) goto loc_82D6D2E0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d2c0
	if (cr6.eq) goto loc_82D6D2C0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d2c0
	if (!cr6.gt) goto loc_82D6D2C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d2d0
	goto loc_82D6D2D0;
loc_82D6D2C0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D2D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D2D0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d2e0
	if (cr6.eq) goto loc_82D6D2E0;
	// stb r3,5(r20)
	PPC_STORE_U8(ctx.r20.u32 + 5, ctx.r3.u8);
	// b 0x82d6d2e4
	goto loc_82D6D2E4;
loc_82D6D2E0:
	// stw r16,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r16.u32);
loc_82D6D2E4:
	// stb r19,4(r20)
	PPC_STORE_U8(ctx.r20.u32 + 4, ctx.r19.u8);
loc_82D6D2E8:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6d350
	if (!cr6.eq) goto loc_82D6D350;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d358
	if (cr6.eq) goto loc_82D6D358;
loc_82D6D300:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82D6D304:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d404
	if (!cr6.eq) goto loc_82D6D404;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d388
	if (!cr6.eq) goto loc_82D6D388;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d380
	if (cr6.eq) goto loc_82D6D380;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d360
	if (cr6.eq) goto loc_82D6D360;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d360
	if (!cr6.gt) goto loc_82D6D360;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d370
	goto loc_82D6D370;
loc_82D6D350:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d300
	if (cr6.eq) goto loc_82D6D300;
loc_82D6D358:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d6d304
	goto loc_82D6D304;
loc_82D6D360:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D370:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d380
	if (cr6.eq) goto loc_82D6D380;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d384
	goto loc_82D6D384;
loc_82D6D380:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D384:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D388:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x82d6d3a8
	if (cr6.lt) goto loc_82D6D3A8;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x82d6d3a8
	if (cr6.gt) goto loc_82D6D3A8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x82d6d3d4
	goto loc_82D6D3D4;
loc_82D6D3A8:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x82d6d3c0
	if (cr6.lt) goto loc_82D6D3C0;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x82d6d3c0
	if (cr6.gt) goto loc_82D6D3C0;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x82d6d3d4
	goto loc_82D6D3D4;
loc_82D6D3C0:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x82d6d404
	if (cr6.lt) goto loc_82D6D404;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x82d6d404
	if (cr6.gt) goto loc_82D6D404;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_82D6D3D4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82d6d404
	if (cr6.lt) goto loc_82D6D404;
	// cmpwi cr6,r24,36
	cr6.compare<int32_t>(ctx.r24.s32, 36, xer);
	// bge cr6,0x82d6d3f4
	if (!cr6.lt) goto loc_82D6D3F4;
	// lbzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stb r11,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r11.u8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82D6D3F4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6D400;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6d210
	goto loc_82D6D210;
loc_82D6D404:
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6dc74
	if (cr6.eq) goto loc_82D6DC74;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d47c
	if (!cr6.eq) goto loc_82D6D47C;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d474
	if (cr6.eq) goto loc_82D6D474;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d454
	if (cr6.eq) goto loc_82D6D454;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d454
	if (!cr6.gt) goto loc_82D6D454;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d464
	goto loc_82D6D464;
loc_82D6D454:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D464;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D464:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d474
	if (cr6.eq) goto loc_82D6D474;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d478
	goto loc_82D6D478;
loc_82D6D474:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D478:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D47C:
	// lbz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d4e8
	if (!cr6.eq) goto loc_82D6D4E8;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d4e0
	if (cr6.eq) goto loc_82D6D4E0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d4c0
	if (cr6.eq) goto loc_82D6D4C0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d4c0
	if (!cr6.gt) goto loc_82D6D4C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d4d0
	goto loc_82D6D4D0;
loc_82D6D4C0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D4D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D4D0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d4e0
	if (cr6.eq) goto loc_82D6D4E0;
	// stb r3,5(r20)
	PPC_STORE_U8(ctx.r20.u32 + 5, ctx.r3.u8);
	// b 0x82d6d4e4
	goto loc_82D6D4E4;
loc_82D6D4E0:
	// stw r16,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r16.u32);
loc_82D6D4E4:
	// stb r19,4(r20)
	PPC_STORE_U8(ctx.r20.u32 + 4, ctx.r19.u8);
loc_82D6D4E8:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6d550
	if (!cr6.eq) goto loc_82D6D550;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d558
	if (cr6.eq) goto loc_82D6D558;
loc_82D6D500:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82D6D504:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6dc74
	if (!cr6.eq) goto loc_82D6DC74;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d588
	if (!cr6.eq) goto loc_82D6D588;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d580
	if (cr6.eq) goto loc_82D6D580;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d560
	if (cr6.eq) goto loc_82D6D560;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d560
	if (!cr6.gt) goto loc_82D6D560;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d570
	goto loc_82D6D570;
loc_82D6D550:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d500
	if (cr6.eq) goto loc_82D6D500;
loc_82D6D558:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d6d504
	goto loc_82D6D504;
loc_82D6D560:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D570:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d580
	if (cr6.eq) goto loc_82D6D580;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d584
	goto loc_82D6D584;
loc_82D6D580:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D584:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D588:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,112
	cr6.compare<uint32_t>(ctx.r11.u32, 112, xer);
	// beq cr6,0x82d6d60c
	if (cr6.eq) goto loc_82D6D60C;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d600
	if (!cr6.eq) goto loc_82D6D600;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d5f8
	if (cr6.eq) goto loc_82D6D5F8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d5d8
	if (cr6.eq) goto loc_82D6D5D8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d5d8
	if (!cr6.gt) goto loc_82D6D5D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d5e8
	goto loc_82D6D5E8;
loc_82D6D5D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D5E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D5E8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d5f8
	if (cr6.eq) goto loc_82D6D5F8;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d5fc
	goto loc_82D6D5FC;
loc_82D6D5F8:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D5FC:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D600:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// bne cr6,0x82d6dc74
	if (!cr6.eq) goto loc_82D6DC74;
loc_82D6D60C:
	// li r11,112
	ctx.r11.s64 = 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r11.u8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6D620;
	sub_82D6B6F8(ctx, base);
	// lbz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// mr r15,r16
	ctx.r15.u64 = ctx.r16.u64;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d6d694
	if (!cr6.eq) goto loc_82D6D694;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d68c
	if (cr6.eq) goto loc_82D6D68C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d66c
	if (cr6.eq) goto loc_82D6D66C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d66c
	if (!cr6.gt) goto loc_82D6D66C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d67c
	goto loc_82D6D67C;
loc_82D6D66C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D67C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D67C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d68c
	if (cr6.eq) goto loc_82D6D68C;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d690
	goto loc_82D6D690;
loc_82D6D68C:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D690:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D694:
	// lbz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d700
	if (!cr6.eq) goto loc_82D6D700;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d6f8
	if (cr6.eq) goto loc_82D6D6F8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d6d8
	if (cr6.eq) goto loc_82D6D6D8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d6d8
	if (!cr6.gt) goto loc_82D6D6D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d6e8
	goto loc_82D6D6E8;
loc_82D6D6D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D6E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D6E8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d6f8
	if (cr6.eq) goto loc_82D6D6F8;
	// stb r3,5(r20)
	PPC_STORE_U8(ctx.r20.u32 + 5, ctx.r3.u8);
	// b 0x82d6d6fc
	goto loc_82D6D6FC;
loc_82D6D6F8:
	// stw r16,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r16.u32);
loc_82D6D6FC:
	// stb r19,4(r20)
	PPC_STORE_U8(ctx.r20.u32 + 4, ctx.r19.u8);
loc_82D6D700:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6d768
	if (!cr6.eq) goto loc_82D6D768;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d770
	if (cr6.eq) goto loc_82D6D770;
loc_82D6D718:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82D6D71C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d83c
	if (!cr6.eq) goto loc_82D6D83C;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d7a0
	if (!cr6.eq) goto loc_82D6D7A0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d798
	if (cr6.eq) goto loc_82D6D798;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d778
	if (cr6.eq) goto loc_82D6D778;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d778
	if (!cr6.gt) goto loc_82D6D778;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d788
	goto loc_82D6D788;
loc_82D6D768:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d718
	if (cr6.eq) goto loc_82D6D718;
loc_82D6D770:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d6d71c
	goto loc_82D6D71C;
loc_82D6D778:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D788:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d798
	if (cr6.eq) goto loc_82D6D798;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d79c
	goto loc_82D6D79C;
loc_82D6D798:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D79C:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D7A0:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x82d6d7b4
	if (!cr6.eq) goto loc_82D6D7B4;
	// stb r22,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r22.u8);
	// b 0x82d6d830
	goto loc_82D6D830;
loc_82D6D7B4:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d820
	if (!cr6.eq) goto loc_82D6D820;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d818
	if (cr6.eq) goto loc_82D6D818;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d7f8
	if (cr6.eq) goto loc_82D6D7F8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d7f8
	if (!cr6.gt) goto loc_82D6D7F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d808
	goto loc_82D6D808;
loc_82D6D7F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D808:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d818
	if (cr6.eq) goto loc_82D6D818;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d81c
	goto loc_82D6D81C;
loc_82D6D818:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D81C:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D820:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x82d6d83c
	if (!cr6.eq) goto loc_82D6D83C;
	// stb r21,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r21.u8);
loc_82D6D830:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82D6D834:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6D83C;
	sub_82D6B6F8(ctx, base);
loc_82D6D83C:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d8a8
	if (!cr6.eq) goto loc_82D6D8A8;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d8a0
	if (cr6.eq) goto loc_82D6D8A0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d880
	if (cr6.eq) goto loc_82D6D880;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d880
	if (!cr6.gt) goto loc_82D6D880;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d890
	goto loc_82D6D890;
loc_82D6D880:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D890;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D890:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d8a0
	if (cr6.eq) goto loc_82D6D8A0;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d8a4
	goto loc_82D6D8A4;
loc_82D6D8A0:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D8A4:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D8A8:
	// lbz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d914
	if (!cr6.eq) goto loc_82D6D914;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d90c
	if (cr6.eq) goto loc_82D6D90C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d8ec
	if (cr6.eq) goto loc_82D6D8EC;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d8ec
	if (!cr6.gt) goto loc_82D6D8EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d8fc
	goto loc_82D6D8FC;
loc_82D6D8EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D8FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D8FC:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d90c
	if (cr6.eq) goto loc_82D6D90C;
	// stb r3,5(r20)
	PPC_STORE_U8(ctx.r20.u32 + 5, ctx.r3.u8);
	// b 0x82d6d910
	goto loc_82D6D910;
loc_82D6D90C:
	// stw r16,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r16.u32);
loc_82D6D910:
	// stb r19,4(r20)
	PPC_STORE_U8(ctx.r20.u32 + 4, ctx.r19.u8);
loc_82D6D914:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6d97c
	if (!cr6.eq) goto loc_82D6D97C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d984
	if (cr6.eq) goto loc_82D6D984;
loc_82D6D92C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82D6D930:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d9c8
	if (!cr6.eq) goto loc_82D6D9C8;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6d9b4
	if (!cr6.eq) goto loc_82D6D9B4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6d9ac
	if (cr6.eq) goto loc_82D6D9AC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6d98c
	if (cr6.eq) goto loc_82D6D98C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6d98c
	if (!cr6.gt) goto loc_82D6D98C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6d99c
	goto loc_82D6D99C;
loc_82D6D97C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d92c
	if (cr6.eq) goto loc_82D6D92C;
loc_82D6D984:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d6d930
	goto loc_82D6D930;
loc_82D6D98C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6D99C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6D99C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6d9ac
	if (cr6.eq) goto loc_82D6D9AC;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6d9b0
	goto loc_82D6D9B0;
loc_82D6D9AC:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6D9B0:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6D9B4:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6d9c8
	if (!cr6.eq) goto loc_82D6D9C8;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// b 0x82d6d834
	goto loc_82D6D834;
loc_82D6D9C8:
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6d9dc
	if (cr6.eq) goto loc_82D6D9DC;
	// stb r18,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r18.u8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82D6D9DC:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6da48
	if (!cr6.eq) goto loc_82D6DA48;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6da40
	if (cr6.eq) goto loc_82D6DA40;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6da20
	if (cr6.eq) goto loc_82D6DA20;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6da20
	if (!cr6.gt) goto loc_82D6DA20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6da30
	goto loc_82D6DA30;
loc_82D6DA20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6DA30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6DA30:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6da40
	if (cr6.eq) goto loc_82D6DA40;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6da44
	goto loc_82D6DA44;
loc_82D6DA40:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6DA44:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6DA48:
	// lbz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6dab4
	if (!cr6.eq) goto loc_82D6DAB4;
	// lwz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6daac
	if (cr6.eq) goto loc_82D6DAAC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6da8c
	if (cr6.eq) goto loc_82D6DA8C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6da8c
	if (!cr6.gt) goto loc_82D6DA8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6da9c
	goto loc_82D6DA9C;
loc_82D6DA8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6DA9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6DA9C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6daac
	if (cr6.eq) goto loc_82D6DAAC;
	// stb r3,5(r20)
	PPC_STORE_U8(ctx.r20.u32 + 5, ctx.r3.u8);
	// b 0x82d6dab0
	goto loc_82D6DAB0;
loc_82D6DAAC:
	// stw r16,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r16.u32);
loc_82D6DAB0:
	// stb r19,4(r20)
	PPC_STORE_U8(ctx.r20.u32 + 4, ctx.r19.u8);
loc_82D6DAB4:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6db1c
	if (!cr6.eq) goto loc_82D6DB1C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6db24
	if (cr6.eq) goto loc_82D6DB24;
loc_82D6DACC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82D6DAD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6dc74
	if (!cr6.eq) goto loc_82D6DC74;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6db54
	if (!cr6.eq) goto loc_82D6DB54;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6db4c
	if (cr6.eq) goto loc_82D6DB4C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6db2c
	if (cr6.eq) goto loc_82D6DB2C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6db2c
	if (!cr6.gt) goto loc_82D6DB2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6db3c
	goto loc_82D6DB3C;
loc_82D6DB1C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6dacc
	if (cr6.eq) goto loc_82D6DACC;
loc_82D6DB24:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82d6dad0
	goto loc_82D6DAD0;
loc_82D6DB2C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6DB3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6DB3C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6db4c
	if (cr6.eq) goto loc_82D6DB4C;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6db50
	goto loc_82D6DB50;
loc_82D6DB4C:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6DB50:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6DB54:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x82d6dc74
	if (cr6.lt) goto loc_82D6DC74;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6dbd0
	if (!cr6.eq) goto loc_82D6DBD0;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6dbc8
	if (cr6.eq) goto loc_82D6DBC8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6dba8
	if (cr6.eq) goto loc_82D6DBA8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6dba8
	if (!cr6.gt) goto loc_82D6DBA8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6dbb8
	goto loc_82D6DBB8;
loc_82D6DBA8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6DBB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6DBB8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6dbc8
	if (cr6.eq) goto loc_82D6DBC8;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6dbcc
	goto loc_82D6DBCC;
loc_82D6DBC8:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6DBCC:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6DBD0:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x82d6dc74
	if (cr6.gt) goto loc_82D6DC74;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bge cr6,0x82d6dc64
	if (!cr6.lt) goto loc_82D6DC64;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6dc54
	if (!cr6.eq) goto loc_82D6DC54;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6dc4c
	if (cr6.eq) goto loc_82D6DC4C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6dc2c
	if (cr6.eq) goto loc_82D6DC2C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6dc2c
	if (!cr6.gt) goto loc_82D6DC2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6dc3c
	goto loc_82D6DC3C;
loc_82D6DC2C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6DC3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6DC3C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6dc4c
	if (cr6.eq) goto loc_82D6DC4C;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6dc50
	goto loc_82D6DC50;
loc_82D6DC4C:
	// stw r16,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r16.u32);
loc_82D6DC50:
	// stb r19,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r19.u8);
loc_82D6DC54:
	// lbz r11,5(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r11,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r11.u8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82D6DC64:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6DC70;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6d9dc
	goto loc_82D6D9DC;
loc_82D6DC74:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d6dc8c
	if (!cr6.eq) goto loc_82D6DC8C;
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6dc90
	if (!cr6.eq) goto loc_82D6DC90;
loc_82D6DC8C:
	// lwz r17,348(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
loc_82D6DC90:
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stb r16,0(r17)
	PPC_STORE_U8(ctx.r17.u32 + 0, ctx.r16.u8);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r14,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r14.u32);
	// blt cr6,0x82d6dcb0
	if (cr6.lt) goto loc_82D6DCB0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82D6DCB0;
	sub_82416268(ctx, base);
loc_82D6DCB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6DCBC"))) PPC_WEAK_FUNC(sub_82D6DCBC);
PPC_FUNC_IMPL(__imp__sub_82D6DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6DCC0"))) PPC_WEAK_FUNC(sub_82D6DCC0);
PPC_FUNC_IMPL(__imp__sub_82D6DCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82D6DCC8;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d6dd10
	if (cr6.eq) goto loc_82D6DD10;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82D6DCF4:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82d6dd00
	if (!cr6.eq) goto loc_82D6DD00;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
loc_82D6DD00:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6dcf4
	if (!cr6.eq) goto loc_82D6DCF4;
loc_82D6DD10:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824730f0
	ctx.lr = 0x82D6DD34;
	sub_824730F0(ctx, base);
	// li r20,1
	ctx.r20.s64 = 1;
	// li r23,-2
	ctx.r23.s64 = -2;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D6DD48:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82d6dfe4
	if (cr6.eq) goto loc_82D6DFE4;
loc_82D6DD5C:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d6dd90
	if (cr6.eq) goto loc_82D6DD90;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_82D6DD74:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82d6dd90
	if (cr6.eq) goto loc_82D6DD90;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6dd74
	if (!cr6.eq) goto loc_82D6DD74;
loc_82D6DD90:
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(ctx.r22.u32, 16, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82d6dda0
	if (!cr6.lt) goto loc_82D6DDA0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6DDA0:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6ddcc
	if (cr6.eq) goto loc_82D6DDCC;
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(ctx.r22.u32, 16, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82d6ddbc
	if (!cr6.lt) goto loc_82D6DDBC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6DDBC:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82d6dfd8
	goto loc_82D6DFD8;
loc_82D6DDCC:
	// add r31,r31,r24
	ctx.r31.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lbzx r9,r31,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82d6dfa8
	if (cr6.eq) goto loc_82D6DFA8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d6dfa8
	if (cr6.eq) goto loc_82D6DFA8;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6de5c
	if (!cr6.eq) goto loc_82D6DE5C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6de54
	if (cr6.eq) goto loc_82D6DE54;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6de34
	if (cr6.eq) goto loc_82D6DE34;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6de34
	if (!cr6.gt) goto loc_82D6DE34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6de44
	goto loc_82D6DE44;
loc_82D6DE34:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6DE44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6DE44:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6de54
	if (cr6.eq) goto loc_82D6DE54;
	// stb r3,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r3.u8);
	// b 0x82d6de58
	goto loc_82D6DE58;
loc_82D6DE54:
	// stw r21,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r21.u32);
loc_82D6DE58:
	// stb r20,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r20.u8);
loc_82D6DE5C:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6dec8
	if (!cr6.eq) goto loc_82D6DEC8;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6dec0
	if (cr6.eq) goto loc_82D6DEC0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6dea0
	if (cr6.eq) goto loc_82D6DEA0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6dea0
	if (!cr6.gt) goto loc_82D6DEA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6deb0
	goto loc_82D6DEB0;
loc_82D6DEA0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6DEB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6DEB0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6dec0
	if (cr6.eq) goto loc_82D6DEC0;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6dec4
	goto loc_82D6DEC4;
loc_82D6DEC0:
	// stw r21,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r21.u32);
loc_82D6DEC4:
	// stb r20,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r20.u8);
loc_82D6DEC8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6df30
	if (!cr6.eq) goto loc_82D6DF30;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6df38
	if (cr6.eq) goto loc_82D6DF38;
loc_82D6DEE0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82D6DEE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6df80
	if (!cr6.eq) goto loc_82D6DF80;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6df68
	if (!cr6.eq) goto loc_82D6DF68;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6df60
	if (cr6.eq) goto loc_82D6DF60;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6df40
	if (cr6.eq) goto loc_82D6DF40;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6df40
	if (!cr6.gt) goto loc_82D6DF40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6df50
	goto loc_82D6DF50;
loc_82D6DF30:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6dee0
	if (cr6.eq) goto loc_82D6DEE0;
loc_82D6DF38:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82d6dee4
	goto loc_82D6DEE4;
loc_82D6DF40:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6DF50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6DF50:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6df60
	if (cr6.eq) goto loc_82D6DF60;
	// stb r3,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r3.u8);
	// b 0x82d6df64
	goto loc_82D6DF64;
loc_82D6DF60:
	// stw r21,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r21.u32);
loc_82D6DF64:
	// stb r20,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r20.u8);
loc_82D6DF68:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// lbzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d6df80
	if (!cr6.eq) goto loc_82D6DF80;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// b 0x82d6dfd8
	goto loc_82D6DFD8;
loc_82D6DF80:
	// cmplwi cr6,r24,127
	cr6.compare<uint32_t>(ctx.r24.u32, 127, xer);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// blt cr6,0x82d6df90
	if (cr6.lt) goto loc_82D6DF90;
	// li r10,127
	ctx.r10.s64 = 127;
loc_82D6DF90:
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(ctx.r22.u32, 16, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82d6dfa0
	if (!cr6.lt) goto loc_82D6DFA0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6DFA0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// b 0x82d6dfcc
	goto loc_82D6DFCC;
loc_82D6DFA8:
	// cmplwi cr6,r24,127
	cr6.compare<uint32_t>(ctx.r24.u32, 127, xer);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// blt cr6,0x82d6dfb8
	if (cr6.lt) goto loc_82D6DFB8;
	// li r10,127
	ctx.r10.s64 = 127;
loc_82D6DFB8:
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(ctx.r22.u32, 16, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bge cr6,0x82d6dfc8
	if (!cr6.lt) goto loc_82D6DFC8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82D6DFC8:
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
loc_82D6DFCC:
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82D6DFD8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r19
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r19.u32, xer);
	// blt cr6,0x82d6dd5c
	if (cr6.lt) goto loc_82D6DD5C;
loc_82D6DFE4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6e114
	if (cr6.eq) goto loc_82D6E114;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6e05c
	if (!cr6.eq) goto loc_82D6E05C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6e054
	if (cr6.eq) goto loc_82D6E054;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6e034
	if (cr6.eq) goto loc_82D6E034;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6e034
	if (!cr6.gt) goto loc_82D6E034;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6e044
	goto loc_82D6E044;
loc_82D6E034:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E044;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E044:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6e054
	if (cr6.eq) goto loc_82D6E054;
	// stb r3,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r3.u8);
	// b 0x82d6e058
	goto loc_82D6E058;
loc_82D6E054:
	// stw r21,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r21.u32);
loc_82D6E058:
	// stb r20,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r20.u8);
loc_82D6E05C:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6e0c8
	if (!cr6.eq) goto loc_82D6E0C8;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6e0c0
	if (cr6.eq) goto loc_82D6E0C0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6e0a0
	if (cr6.eq) goto loc_82D6E0A0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6e0a0
	if (!cr6.gt) goto loc_82D6E0A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6e0b0
	goto loc_82D6E0B0;
loc_82D6E0A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E0B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E0B0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6e0c0
	if (cr6.eq) goto loc_82D6E0C0;
	// stb r3,5(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5, ctx.r3.u8);
	// b 0x82d6e0c4
	goto loc_82D6E0C4;
loc_82D6E0C0:
	// stw r21,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r21.u32);
loc_82D6E0C4:
	// stb r20,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r20.u8);
loc_82D6E0C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bne cr6,0x82d6e104
	if (!cr6.eq) goto loc_82D6E104;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6e10c
	if (cr6.eq) goto loc_82D6E10C;
loc_82D6E0E0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82D6E0E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6e114
	if (!cr6.eq) goto loc_82D6E114;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6E0FC;
	sub_82D6B6F8(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// b 0x82d6dd48
	goto loc_82D6DD48;
loc_82D6E104:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6e0e0
	if (cr6.eq) goto loc_82D6E0E0;
loc_82D6E10C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82d6e0e4
	goto loc_82D6E0E4;
loc_82D6E114:
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(ctx.r22.u32, 16, xer);
	// blt cr6,0x82d6e124
	if (cr6.lt) goto loc_82D6E124;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x82D6E124;
	sub_82416268(ctx, base);
loc_82D6E124:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6E130"))) PPC_WEAK_FUNC(sub_82D6E130);
PPC_FUNC_IMPL(__imp__sub_82D6E130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D6E138;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d6e178
	if (cr6.eq) goto loc_82D6E178;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E178:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506578
	ctx.lr = 0x82D6E184;
	sub_82506578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6e2b4
	if (cr6.eq) goto loc_82D6E2B4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246e3e8
	ctx.lr = 0x82D6E1A0;
	sub_8246E3E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d6e1e0
	if (cr6.eq) goto loc_82D6E1E0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6e1e0
	if (!cr6.gt) goto loc_82D6E1E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6e1f0
	goto loc_82D6E1F0;
loc_82D6E1E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E1F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E1F0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6e23c
	if (cr6.eq) goto loc_82D6E23C;
	// li r29,-2
	ctx.r29.s64 = -2;
loc_82D6E1FC:
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// beq cr6,0x82d6e244
	if (cr6.eq) goto loc_82D6E244;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x82d6e2b0
	if (!cr6.lt) goto loc_82D6E2B0;
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b142a0
	ctx.lr = 0x82D6E21C;
	sub_82B142A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82506438
	ctx.lr = 0x82D6E234;
	sub_82506438(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82d6e1fc
	if (!cr6.eq) goto loc_82D6E1FC;
loc_82D6E23C:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82d6e2b4
	goto loc_82D6E2B4;
loc_82D6E244:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d6e29c
	if (cr6.eq) goto loc_82D6E29C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6e29c
	if (!cr6.gt) goto loc_82D6E29C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// b 0x82d6e2b4
	goto loc_82D6E2B4;
loc_82D6E29C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E2AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d6e2b4
	goto loc_82D6E2B4;
loc_82D6E2B0:
	// li r26,2
	ctx.r26.s64 = 2;
loc_82D6E2B4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6e2c4
	if (!cr6.eq) goto loc_82D6E2C4;
	// ori r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 2;
loc_82D6E2C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82d6e2fc
	if (cr6.eq) goto loc_82D6E2FC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d6e2f0
	if (!cr6.eq) goto loc_82D6E2F0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82D6E2F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8246c218
	ctx.lr = 0x82D6E2FC;
	sub_8246C218(ctx, base);
loc_82D6E2FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d6e324
	if (cr6.eq) goto loc_82D6E324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E324;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6E330"))) PPC_WEAK_FUNC(sub_82D6E330);
PPC_FUNC_IMPL(__imp__sub_82D6E330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D6E338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82d6e36c
	if (cr6.eq) goto loc_82D6E36C;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-30032
	ctx.r8.s64 = ctx.r10.s64 + -30032;
	// addi r7,r9,15320
	ctx.r7.s64 = ctx.r9.s64 + 15320;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
loc_82D6E36C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r8,r9,-19992
	ctx.r8.s64 = ctx.r9.s64 + -19992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r8,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82473310
	ctx.lr = 0x82D6E3A0;
	sub_82473310(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// ori r5,r28,1
	ctx.r5.u64 = ctx.r28.u64 | 1;
	// addi r11,r4,-30108
	ctx.r11.s64 = ctx.r4.s64 + -30108;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x82a79508
	ctx.lr = 0x82D6E3C4;
	sub_82A79508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6E3D0"))) PPC_WEAK_FUNC(sub_82D6E3D0);
PPC_FUNC_IMPL(__imp__sub_82D6E3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D6E3D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r5.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r31,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4000;
	// std r6,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r6.u64);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d6e550
	if (cr6.eq) goto loc_82D6E550;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8246bb28
	ctx.lr = 0x82D6E414;
	sub_8246BB28(ctx, base);
	// bl 0x824737f8
	ctx.lr = 0x82D6E418;
	sub_824737F8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6e44c
	if (cr6.eq) goto loc_82D6E44C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6E430;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6e44c
	if (cr6.eq) goto loc_82D6E44C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E44C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E44C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r29,15
	ctx.r29.s64 = 15;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D6E480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82470ff8
	ctx.lr = 0x82D6E498;
	sub_82470FF8(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82d6e4ac
	if (cr6.lt) goto loc_82D6E4AC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82D6E4AC;
	sub_82416268(ctx, base);
loc_82D6E4AC:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82d6c398
	ctx.lr = 0x82D6E4C4;
	sub_82D6C398(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E4DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82470ff8
	ctx.lr = 0x82D6E4F0;
	sub_82470FF8(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d6e504
	if (cr6.lt) goto loc_82D6E504;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82D6E504;
	sub_82416268(ctx, base);
loc_82D6E504:
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bge cr6,0x82d6e528
	if (!cr6.lt) goto loc_82D6E528;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82D6E528:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d6dcc0
	ctx.lr = 0x82D6E538;
	sub_82D6DCC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x82d6e5ec
	if (cr6.lt) goto loc_82D6E5EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416268
	ctx.lr = 0x82D6E54C;
	sub_82416268(ctx, base);
	// b 0x82d6e5ec
	goto loc_82D6E5EC;
loc_82D6E550:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8246bb28
	ctx.lr = 0x82D6E560;
	sub_8246BB28(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,296
	ctx.r6.s64 = ctx.r1.s64 + 296;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d6c448
	ctx.lr = 0x82D6E57C;
	sub_82D6C448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x831cd210
	ctx.lr = 0x82D6E590;
	sub_831CD210(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6e5c4
	if (cr6.eq) goto loc_82D6E5C4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6E5A8;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6e5c4
	if (cr6.eq) goto loc_82D6E5C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E5C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E5C4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d6e5ec
	if (cr6.eq) goto loc_82D6E5EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6e5ec
	if (!cr6.eq) goto loc_82D6E5EC;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bgt cr6,0x82d6e5ec
	if (cr6.gt) goto loc_82D6E5EC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82D6E5EC:
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d6b850
	ctx.lr = 0x82D6E5F8;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6e610
	if (cr6.eq) goto loc_82D6E610;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82D6E610:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bge cr6,0x82d6e638
	if (!cr6.lt) goto loc_82D6E638;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ld r10,288(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D6E638:
	// ld r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// addic r10,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// subfe r9,r10,r29
	temp.u8 = (~ctx.r10.u32 + ctx.r29.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r29.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r29.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r9.u8);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6E654"))) PPC_WEAK_FUNC(sub_82D6E654);
PPC_FUNC_IMPL(__imp__sub_82D6E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6E658"))) PPC_WEAK_FUNC(sub_82D6E658);
PPC_FUNC_IMPL(__imp__sub_82D6E658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D6E660;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x831cc4f0
	ctx.lr = 0x82D6E6A0;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d6e6b8
	if (!cr6.lt) goto loc_82D6E6B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D6E6B8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc540
	ctx.lr = 0x82D6E6C0;
	sub_831CC540(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,232
	ctx.r6.s64 = ctx.r1.s64 + 232;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6c448
	ctx.lr = 0x82D6E6DC;
	sub_82D6C448(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6E6E8;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6e704
	if (cr6.eq) goto loc_82D6E704;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E704;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E704:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r30,r1,97
	ctx.r30.s64 = ctx.r1.s64 + 97;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82d6e718
	if (cr6.eq) goto loc_82D6E718;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82D6E718:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cd210
	ctx.lr = 0x82D6E72C;
	sub_831CD210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d6b850
	ctx.lr = 0x82D6E73C;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6e754
	if (cr6.eq) goto loc_82D6E754;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82D6E754:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d6e7a0
	if (cr6.eq) goto loc_82D6E7A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6e7a0
	if (!cr6.eq) goto loc_82D6E7A0;
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(ctx.r31.u32, 65535, xer);
	// bgt cr6,0x82d6e7a0
	if (cr6.gt) goto loc_82D6E7A0;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// beq cr6,0x82d6e788
	if (cr6.eq) goto loc_82D6E788;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D6E788:
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D6E7A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6E7C0"))) PPC_WEAK_FUNC(sub_82D6E7C0);
PPC_FUNC_IMPL(__imp__sub_82D6E7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D6E7C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x831cc4f0
	ctx.lr = 0x82D6E808;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x82d6e820
	if (!cr6.lt) goto loc_82D6E820;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D6E820:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc540
	ctx.lr = 0x82D6E828;
	sub_831CC540(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,232
	ctx.r6.s64 = ctx.r1.s64 + 232;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6c448
	ctx.lr = 0x82D6E844;
	sub_82D6C448(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6E850;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6e86c
	if (cr6.eq) goto loc_82D6E86C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E86C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E86C:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r30,r1,97
	ctx.r30.s64 = ctx.r1.s64 + 97;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82d6e880
	if (cr6.eq) goto loc_82D6E880;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82D6E880:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cd210
	ctx.lr = 0x82D6E894;
	sub_831CD210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d6b850
	ctx.lr = 0x82D6E8A4;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6e8bc
	if (cr6.eq) goto loc_82D6E8BC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82D6E8BC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d6e908
	if (cr6.eq) goto loc_82D6E908;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6e908
	if (!cr6.eq) goto loc_82D6E908;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82d6e908
	if (cr6.gt) goto loc_82D6E908;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// beq cr6,0x82d6e8f0
	if (cr6.eq) goto loc_82D6E8F0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D6E8F0:
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// std r10,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r10.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D6E908:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// std r10,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r10.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6E928"))) PPC_WEAK_FUNC(sub_82D6E928);
PPC_FUNC_IMPL(__imp__sub_82D6E928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D6E930;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x831cc4f0
	ctx.lr = 0x82D6E970;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d6e988
	if (!cr6.lt) goto loc_82D6E988;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D6E988:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc540
	ctx.lr = 0x82D6E990;
	sub_831CC540(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,232
	ctx.r6.s64 = ctx.r1.s64 + 232;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6c448
	ctx.lr = 0x82D6E9AC;
	sub_82D6C448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x831cd468
	ctx.lr = 0x82D6E9C0;
	sub_831CD468(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6E9CC;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6e9e8
	if (cr6.eq) goto loc_82D6E9E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6E9E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6E9E8:
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d6b850
	ctx.lr = 0x82D6E9F4;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6ea0c
	if (cr6.eq) goto loc_82D6EA0C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82D6EA0C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d6ea40
	if (cr6.eq) goto loc_82D6EA40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6ea40
	if (!cr6.eq) goto loc_82D6EA40;
	// ld r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D6EA40:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6EA60"))) PPC_WEAK_FUNC(sub_82D6EA60);
PPC_FUNC_IMPL(__imp__sub_82D6EA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D6EA68;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x831cc4f0
	ctx.lr = 0x82D6EAA8;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d6eac0
	if (!cr6.lt) goto loc_82D6EAC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D6EAC0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc540
	ctx.lr = 0x82D6EAC8;
	sub_831CC540(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,232
	ctx.r6.s64 = ctx.r1.s64 + 232;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6c448
	ctx.lr = 0x82D6EAE4;
	sub_82D6C448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x831cd210
	ctx.lr = 0x82D6EAF8;
	sub_831CD210(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6EB04;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6eb20
	if (cr6.eq) goto loc_82D6EB20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6EB20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6EB20:
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d6b850
	ctx.lr = 0x82D6EB2C;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6eb44
	if (cr6.eq) goto loc_82D6EB44;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82D6EB44:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d6eb78
	if (cr6.eq) goto loc_82D6EB78;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6eb78
	if (!cr6.eq) goto loc_82D6EB78;
	// ld r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D6EB78:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6EB98"))) PPC_WEAK_FUNC(sub_82D6EB98);
PPC_FUNC_IMPL(__imp__sub_82D6EB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D6EBA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x831cc4f0
	ctx.lr = 0x82D6EBE0;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d6ebf8
	if (!cr6.lt) goto loc_82D6EBF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D6EBF8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc540
	ctx.lr = 0x82D6EC00;
	sub_831CC540(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,232
	ctx.r6.s64 = ctx.r1.s64 + 232;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6c448
	ctx.lr = 0x82D6EC1C;
	sub_82D6C448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x831cd590
	ctx.lr = 0x82D6EC30;
	sub_831CD590(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6EC3C;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6ec58
	if (cr6.eq) goto loc_82D6EC58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6EC58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6EC58:
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d6b850
	ctx.lr = 0x82D6EC64;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6ec7c
	if (cr6.eq) goto loc_82D6EC7C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82D6EC7C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d6ecb0
	if (cr6.eq) goto loc_82D6ECB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6ecb0
	if (!cr6.eq) goto loc_82D6ECB0;
	// ld r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r30,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r30.u64);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D6ECB0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6ECD0"))) PPC_WEAK_FUNC(sub_82D6ECD0);
PPC_FUNC_IMPL(__imp__sub_82D6ECD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D6ECD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x831cc4f0
	ctx.lr = 0x82D6ED18;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d6ed30
	if (!cr6.lt) goto loc_82D6ED30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D6ED30:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc540
	ctx.lr = 0x82D6ED38;
	sub_831CC540(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,232
	ctx.r6.s64 = ctx.r1.s64 + 232;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d6c448
	ctx.lr = 0x82D6ED54;
	sub_82D6C448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x831cd6c0
	ctx.lr = 0x82D6ED68;
	sub_831CD6C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6ED74;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6ed90
	if (cr6.eq) goto loc_82D6ED90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6ED90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6ED90:
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d6b850
	ctx.lr = 0x82D6ED9C;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6edb4
	if (cr6.eq) goto loc_82D6EDB4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82D6EDB4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d6ede8
	if (cr6.eq) goto loc_82D6EDE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6ede8
	if (!cr6.eq) goto loc_82D6EDE8;
	// ld r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r30,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r30.u64);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D6EDE8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6EE08"))) PPC_WEAK_FUNC(sub_82D6EE08);
PPC_FUNC_IMPL(__imp__sub_82D6EE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D6EE10;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x831cc4f0
	ctx.lr = 0x82D6EE4C;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82d6ee64
	if (!cr6.lt) goto loc_82D6EE64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D6EE64:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cc540
	ctx.lr = 0x82D6EE6C;
	sub_831CC540(ctx, base);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,2048
	ctx.r7.s64 = 2048;
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d6c448
	ctx.lr = 0x82D6EE88;
	sub_82D6C448(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6EE94;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6eeb0
	if (cr6.eq) goto loc_82D6EEB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6EEB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6EEB0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cd210
	ctx.lr = 0x82D6EEC4;
	sub_831CD210(ctx, base);
	// clrldi r31,r3,32
	ctx.r31.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d6b850
	ctx.lr = 0x82D6EED4;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6eeec
	if (cr6.eq) goto loc_82D6EEEC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82D6EEEC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d6ef20
	if (cr6.eq) goto loc_82D6EF20;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d6ef20
	if (!cr6.eq) goto loc_82D6EF20;
	// ld r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D6EF20:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6EF40"))) PPC_WEAK_FUNC(sub_82D6EF40);
PPC_FUNC_IMPL(__imp__sub_82D6EF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D6EF48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d6ef6c
	if (!cr6.gt) goto loc_82D6EF6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82D6EF6C;
	sub_831CC150(ctx, base);
loc_82D6EF6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82d6f01c
	if (!cr6.lt) goto loc_82D6F01C;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D6EFA0;
	sub_82595718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d6efe0
	if (cr6.eq) goto loc_82D6EFE0;
loc_82D6EFB8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6efd0
	if (cr6.eq) goto loc_82D6EFD0;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82D6EFD0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d6efb8
	if (!cr6.eq) goto loc_82D6EFB8;
loc_82D6EFE0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r29,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 3;
	// beq cr6,0x82d6f004
	if (cr6.eq) goto loc_82D6F004;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82D6F004;
	sub_825952B8(ctx, base);
loc_82D6F004:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
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
loc_82D6F01C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D6F024"))) PPC_WEAK_FUNC(sub_82D6F024);
PPC_FUNC_IMPL(__imp__sub_82D6F024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D6F028"))) PPC_WEAK_FUNC(sub_82D6F028);
PPC_FUNC_IMPL(__imp__sub_82D6F028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82D6F030;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm r10,r11,0,18,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,12288
	cr6.compare<int32_t>(ctx.r10.s32, 12288, xer);
	// bne cr6,0x82d6f05c
	if (!cr6.eq) goto loc_82D6F05C;
	// bl 0x82d6c948
	ctx.lr = 0x82D6F054;
	sub_82D6C948(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82D6F05C:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8246bb28
	ctx.lr = 0x82D6F068;
	sub_8246BB28(ctx, base);
	// bl 0x824737f8
	ctx.lr = 0x82D6F06C;
	sub_824737F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f0a0
	if (cr6.eq) goto loc_82D6F0A0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D6F084;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6f0a0
	if (cr6.eq) goto loc_82D6F0A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F0A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6F0A0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F0B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// mr r14,r17
	ctx.r14.u64 = ctx.r17.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6F0D0;
	sub_82D6B850(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r23,43
	ctx.r23.s64 = 43;
	// li r22,45
	ctx.r22.s64 = 45;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d6f13c
	if (!cr6.eq) goto loc_82D6F13C;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f0f8
	if (!cr6.eq) goto loc_82D6F0F8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F0F8;
	sub_82D6B7B8(ctx, base);
loc_82D6F0F8:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x82d6f10c
	if (!cr6.eq) goto loc_82D6F10C;
	// stb r23,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r23.u8);
	// b 0x82d6f130
	goto loc_82D6F130;
loc_82D6F10C:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f120
	if (!cr6.eq) goto loc_82D6F120;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F120;
	sub_82D6B7B8(ctx, base);
loc_82D6F120:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x82d6f13c
	if (!cr6.eq) goto loc_82D6F13C;
	// stb r22,0(r15)
	PPC_STORE_U8(ctx.r15.u32 + 0, ctx.r22.u8);
loc_82D6F130:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r18,r15,1
	ctx.r18.s64 = ctx.r15.s64 + 1;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6F13C;
	sub_82D6B6F8(ctx, base);
loc_82D6F13C:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x82d6f160
	if (!cr6.lt) goto loc_82D6F160;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82D6F160:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// beq cr6,0x82d6f454
	if (cr6.eq) goto loc_82D6F454;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x82d6f180
	if (!cr6.lt) goto loc_82D6F180;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82D6F180:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6f454
	if (!cr6.gt) goto loc_82D6F454;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f1a4
	if (!cr6.eq) goto loc_82D6F1A4;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// b 0x82d6f1bc
	goto loc_82D6F1BC;
loc_82D6F1A4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F1B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82D6F1BC:
	// li r27,15
	ctx.r27.s64 = 15;
	// stb r17,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r17.u8);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r17,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r17.u8);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6F1E0;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f390
	if (!cr6.eq) goto loc_82D6F390;
loc_82D6F1F0:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f204
	if (!cr6.eq) goto loc_82D6F204;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F204;
	sub_82D6B7B8(ctx, base);
loc_82D6F204:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x82d6f2d4
	if (cr6.lt) goto loc_82D6F2D4;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f228
	if (!cr6.eq) goto loc_82D6F228;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F228;
	sub_82D6B7B8(ctx, base);
loc_82D6F228:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x82d6f2d4
	if (cr6.gt) goto loc_82D6F2D4;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// cmpwi cr6,r25,36
	cr6.compare<int32_t>(ctx.r25.s32, 36, xer);
	// blt cr6,0x82d6f24c
	if (cr6.lt) goto loc_82D6F24C;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// b 0x82d6f298
	goto loc_82D6F298;
loc_82D6F24C:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f260
	if (!cr6.eq) goto loc_82D6F260;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F260;
	sub_82D6B7B8(ctx, base);
loc_82D6F260:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6f274
	if (!cr6.eq) goto loc_82D6F274;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x82d6f298
	if (cr6.eq) goto loc_82D6F298;
loc_82D6F274:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f288
	if (!cr6.eq) goto loc_82D6F288;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F288;
	sub_82D6B7B8(ctx, base);
loc_82D6F288:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stb r11,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r11.u8);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82D6F298:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82d6f2a8
	if (!cr6.lt) goto loc_82D6F2A8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6F2A8:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// beq cr6,0x82d6f33c
	if (cr6.eq) goto loc_82D6F33C;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82d6f2c4
	if (!cr6.lt) goto loc_82D6F2C4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6F2C4:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r9,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// b 0x82d6f334
	goto loc_82D6F334;
loc_82D6F2D4:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82d6f2e4
	if (!cr6.lt) goto loc_82D6F2E4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6F2E4:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f35c
	if (cr6.eq) goto loc_82D6F35C;
	// extsb r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82d6f35c
	if (cr6.eq) goto loc_82D6F35C;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f310
	if (!cr6.eq) goto loc_82D6F310;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F310;
	sub_82D6B7B8(ctx, base);
loc_82D6F310:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x82d6f35c
	if (!cr6.eq) goto loc_82D6F35C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472d98
	ctx.lr = 0x82D6F330;
	sub_82472D98(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82D6F334:
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82D6F33C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6F344;
	sub_82D6B6F8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6F350;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f1f0
	if (cr6.eq) goto loc_82D6F1F0;
loc_82D6F35C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d6f390
	if (cr6.eq) goto loc_82D6F390;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82d6f374
	if (!cr6.lt) goto loc_82D6F374;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6F374:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6f38c
	if (!cr6.gt) goto loc_82D6F38C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82d6f390
	goto loc_82D6F390;
loc_82D6F38C:
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
loc_82D6F390:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d6f3a4
	if (!cr6.lt) goto loc_82D6F3A4;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
loc_82D6F3A4:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f440
	if (!cr6.eq) goto loc_82D6F440;
loc_82D6F3B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d6f440
	if (cr6.eq) goto loc_82D6F440;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,127
	cr6.compare<int32_t>(ctx.r10.s32, 127, xer);
	// beq cr6,0x82d6f440
	if (cr6.eq) goto loc_82D6F440;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82d6f3f0
	if (cr0.eq) goto loc_82D6F3F0;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82d6f3e0
	if (!cr6.lt) goto loc_82D6F3E0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6F3E0:
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d6f418
	if (!cr6.eq) goto loc_82D6F418;
loc_82D6F3F0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82d6f420
	if (!cr6.eq) goto loc_82D6F420;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82d6f408
	if (!cr6.lt) goto loc_82D6F408;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82D6F408:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x82d6f420
	if (!cr6.lt) goto loc_82D6F420;
loc_82D6F418:
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// b 0x82d6f434
	goto loc_82D6F434;
loc_82D6F420:
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d6f434
	if (!cr6.gt) goto loc_82D6F434;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82D6F434:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f3b0
	if (cr6.eq) goto loc_82D6F3B0;
loc_82D6F440:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// blt cr6,0x82d6f534
	if (cr6.lt) goto loc_82D6F534;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416268
	ctx.lr = 0x82D6F450;
	sub_82416268(ctx, base);
	// b 0x82d6f534
	goto loc_82D6F534;
loc_82D6F454:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6F460;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f534
	if (!cr6.eq) goto loc_82D6F534;
loc_82D6F46C:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f480
	if (!cr6.eq) goto loc_82D6F480;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F480;
	sub_82D6B7B8(ctx, base);
loc_82D6F480:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x82d6f534
	if (cr6.lt) goto loc_82D6F534;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f4a4
	if (!cr6.eq) goto loc_82D6F4A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F4A4;
	sub_82D6B7B8(ctx, base);
loc_82D6F4A4:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x82d6f534
	if (cr6.gt) goto loc_82D6F534;
	// cmpwi cr6,r25,36
	cr6.compare<int32_t>(ctx.r25.s32, 36, xer);
	// blt cr6,0x82d6f4c4
	if (cr6.lt) goto loc_82D6F4C4;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// b 0x82d6f510
	goto loc_82D6F510;
loc_82D6F4C4:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f4d8
	if (!cr6.eq) goto loc_82D6F4D8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F4D8;
	sub_82D6B7B8(ctx, base);
loc_82D6F4D8:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6f4ec
	if (!cr6.eq) goto loc_82D6F4EC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x82d6f510
	if (cr6.eq) goto loc_82D6F510;
loc_82D6F4EC:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f500
	if (!cr6.eq) goto loc_82D6F500;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F500;
	sub_82D6B7B8(ctx, base);
loc_82D6F500:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stb r11,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r11.u8);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82D6F510:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6F51C;
	sub_82D6B6F8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b850
	ctx.lr = 0x82D6F528;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f46c
	if (cr6.eq) goto loc_82D6F46C;
loc_82D6F534:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// li r30,48
	ctx.r30.s64 = 48;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f554
	if (cr6.eq) goto loc_82D6F554;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x82d6f554
	if (!cr6.eq) goto loc_82D6F554;
	// stb r30,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r30.u8);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82D6F554:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f568
	if (!cr6.eq) goto loc_82D6F568;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F568;
	sub_82D6B7B8(ctx, base);
loc_82D6F568:
	// lbz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f57c
	if (!cr6.eq) goto loc_82D6F57C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F57C;
	sub_82D6B7B8(ctx, base);
loc_82D6F57C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bne cr6,0x82d6f68c
	if (!cr6.eq) goto loc_82D6F68C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f694
	if (cr6.eq) goto loc_82D6F694;
loc_82D6F594:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82D6F598:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f600
	if (!cr6.eq) goto loc_82D6F600;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f5b8
	if (!cr6.eq) goto loc_82D6F5B8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F5B8;
	sub_82D6B7B8(ctx, base);
loc_82D6F5B8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r31,5(r26)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F5D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// extsb r8,r31
	ctx.r8.s64 = ctx.r31.s8;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x82d6f600
	if (!cr6.eq) goto loc_82D6F600;
	// bl 0x831cf160
	ctx.lr = 0x82D6F5E4;
	sub_831CF160(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r9.u8);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6F600;
	sub_82D6B6F8(ctx, base);
loc_82D6F600:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x82d6f6c0
	if (!cr6.eq) goto loc_82D6F6C0;
loc_82D6F608:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f61c
	if (!cr6.eq) goto loc_82D6F61C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F61C;
	sub_82D6B7B8(ctx, base);
loc_82D6F61C:
	// lbz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f630
	if (!cr6.eq) goto loc_82D6F630;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F630;
	sub_82D6B7B8(ctx, base);
loc_82D6F630:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bne cr6,0x82d6f69c
	if (!cr6.eq) goto loc_82D6F69C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f6a4
	if (cr6.eq) goto loc_82D6F6A4;
loc_82D6F648:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82D6F64C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f6ac
	if (!cr6.eq) goto loc_82D6F6AC;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f66c
	if (!cr6.eq) goto loc_82D6F66C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6F66C;
	sub_82D6B7B8(ctx, base);
loc_82D6F66C:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6f6ac
	if (!cr6.eq) goto loc_82D6F6AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6F688;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6f608
	goto loc_82D6F608;
loc_82D6F68C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f594
	if (cr6.eq) goto loc_82D6F594;
loc_82D6F694:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82d6f598
	goto loc_82D6F598;
loc_82D6F69C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f648
	if (cr6.eq) goto loc_82D6F648;
loc_82D6F6A4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82d6f64c
	goto loc_82D6F64C;
loc_82D6F6AC:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// bge cr6,0x82d6f6c0
	if (!cr6.lt) goto loc_82D6F6C0;
	// stb r30,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r30.u8);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82D6F6C0:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82D6F6C4:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f730
	if (!cr6.eq) goto loc_82D6F730;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6f728
	if (cr6.eq) goto loc_82D6F728;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6f708
	if (cr6.eq) goto loc_82D6F708;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6f708
	if (!cr6.gt) goto loc_82D6F708;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6f718
	goto loc_82D6F718;
loc_82D6F708:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6F718:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6f728
	if (cr6.eq) goto loc_82D6F728;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6f72c
	goto loc_82D6F72C;
loc_82D6F728:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6F72C:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6F730:
	// lbz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f79c
	if (!cr6.eq) goto loc_82D6F79C;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6f794
	if (cr6.eq) goto loc_82D6F794;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6f774
	if (cr6.eq) goto loc_82D6F774;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6f774
	if (!cr6.gt) goto loc_82D6F774;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6f784
	goto loc_82D6F784;
loc_82D6F774:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F784;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6F784:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6f794
	if (cr6.eq) goto loc_82D6F794;
	// stb r3,5(r21)
	PPC_STORE_U8(ctx.r21.u32 + 5, ctx.r3.u8);
	// b 0x82d6f798
	goto loc_82D6F798;
loc_82D6F794:
	// stw r17,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r17.u32);
loc_82D6F798:
	// stb r20,4(r21)
	PPC_STORE_U8(ctx.r21.u32 + 4, ctx.r20.u8);
loc_82D6F79C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6f804
	if (!cr6.eq) goto loc_82D6F804;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f80c
	if (cr6.eq) goto loc_82D6F80C;
loc_82D6F7B4:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82D6F7B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f95c
	if (!cr6.eq) goto loc_82D6F95C;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f83c
	if (!cr6.eq) goto loc_82D6F83C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6f834
	if (cr6.eq) goto loc_82D6F834;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6f814
	if (cr6.eq) goto loc_82D6F814;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6f814
	if (!cr6.gt) goto loc_82D6F814;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6f824
	goto loc_82D6F824;
loc_82D6F804:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6f7b4
	if (cr6.eq) goto loc_82D6F7B4;
loc_82D6F80C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82d6f7b8
	goto loc_82D6F7B8;
loc_82D6F814:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F824;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6F824:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6f834
	if (cr6.eq) goto loc_82D6F834;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6f838
	goto loc_82D6F838;
loc_82D6F834:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6F838:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6F83C:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x82d6f95c
	if (cr6.lt) goto loc_82D6F95C;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f8b8
	if (!cr6.eq) goto loc_82D6F8B8;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6f8b0
	if (cr6.eq) goto loc_82D6F8B0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6f890
	if (cr6.eq) goto loc_82D6F890;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6f890
	if (!cr6.gt) goto loc_82D6F890;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6f8a0
	goto loc_82D6F8A0;
loc_82D6F890:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F8A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6F8A0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6f8b0
	if (cr6.eq) goto loc_82D6F8B0;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6f8b4
	goto loc_82D6F8B4;
loc_82D6F8B0:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6F8B4:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6F8B8:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x82d6f95c
	if (cr6.gt) goto loc_82D6F95C;
	// cmpwi cr6,r31,36
	cr6.compare<int32_t>(ctx.r31.s32, 36, xer);
	// bge cr6,0x82d6f94c
	if (!cr6.lt) goto loc_82D6F94C;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f93c
	if (!cr6.eq) goto loc_82D6F93C;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6f934
	if (cr6.eq) goto loc_82D6F934;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6f914
	if (cr6.eq) goto loc_82D6F914;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6f914
	if (!cr6.gt) goto loc_82D6F914;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6f924
	goto loc_82D6F924;
loc_82D6F914:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6F924:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6f934
	if (cr6.eq) goto loc_82D6F934;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6f938
	goto loc_82D6F938;
loc_82D6F934:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6F938:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6F93C:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r11,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r11.u8);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82D6F94C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6F958;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6f6c4
	goto loc_82D6F6C4;
loc_82D6F95C:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d70174
	if (cr6.eq) goto loc_82D70174;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6f9d4
	if (!cr6.eq) goto loc_82D6F9D4;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6f9cc
	if (cr6.eq) goto loc_82D6F9CC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6f9ac
	if (cr6.eq) goto loc_82D6F9AC;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6f9ac
	if (!cr6.gt) goto loc_82D6F9AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6f9bc
	goto loc_82D6F9BC;
loc_82D6F9AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6F9BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6F9BC:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6f9cc
	if (cr6.eq) goto loc_82D6F9CC;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6f9d0
	goto loc_82D6F9D0;
loc_82D6F9CC:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6F9D0:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6F9D4:
	// lbz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fa40
	if (!cr6.eq) goto loc_82D6FA40;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6fa38
	if (cr6.eq) goto loc_82D6FA38;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6fa18
	if (cr6.eq) goto loc_82D6FA18;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6fa18
	if (!cr6.gt) goto loc_82D6FA18;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6fa28
	goto loc_82D6FA28;
loc_82D6FA18:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FA28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FA28:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6fa38
	if (cr6.eq) goto loc_82D6FA38;
	// stb r3,5(r21)
	PPC_STORE_U8(ctx.r21.u32 + 5, ctx.r3.u8);
	// b 0x82d6fa3c
	goto loc_82D6FA3C;
loc_82D6FA38:
	// stw r17,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r17.u32);
loc_82D6FA3C:
	// stb r20,4(r21)
	PPC_STORE_U8(ctx.r21.u32 + 4, ctx.r20.u8);
loc_82D6FA40:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6faa8
	if (!cr6.eq) goto loc_82D6FAA8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6fab0
	if (cr6.eq) goto loc_82D6FAB0;
loc_82D6FA58:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82D6FA5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d70174
	if (!cr6.eq) goto loc_82D70174;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fae0
	if (!cr6.eq) goto loc_82D6FAE0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6fad8
	if (cr6.eq) goto loc_82D6FAD8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6fab8
	if (cr6.eq) goto loc_82D6FAB8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6fab8
	if (!cr6.gt) goto loc_82D6FAB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6fac8
	goto loc_82D6FAC8;
loc_82D6FAA8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6fa58
	if (cr6.eq) goto loc_82D6FA58;
loc_82D6FAB0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82d6fa5c
	goto loc_82D6FA5C;
loc_82D6FAB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FAC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FAC8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6fad8
	if (cr6.eq) goto loc_82D6FAD8;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6fadc
	goto loc_82D6FADC;
loc_82D6FAD8:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6FADC:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6FAE0:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(ctx.r11.u32, 101, xer);
	// beq cr6,0x82d6fb64
	if (cr6.eq) goto loc_82D6FB64;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fb58
	if (!cr6.eq) goto loc_82D6FB58;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6fb50
	if (cr6.eq) goto loc_82D6FB50;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6fb30
	if (cr6.eq) goto loc_82D6FB30;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6fb30
	if (!cr6.gt) goto loc_82D6FB30;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6fb40
	goto loc_82D6FB40;
loc_82D6FB30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FB40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FB40:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6fb50
	if (cr6.eq) goto loc_82D6FB50;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6fb54
	goto loc_82D6FB54;
loc_82D6FB50:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6FB54:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6FB58:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// bne cr6,0x82d70174
	if (!cr6.eq) goto loc_82D70174;
loc_82D6FB64:
	// li r11,101
	ctx.r11.s64 = 101;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r11.u8);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6FB78;
	sub_82D6B6F8(ctx, base);
	// lbz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d6fbec
	if (!cr6.eq) goto loc_82D6FBEC;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6fbe4
	if (cr6.eq) goto loc_82D6FBE4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6fbc4
	if (cr6.eq) goto loc_82D6FBC4;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6fbc4
	if (!cr6.gt) goto loc_82D6FBC4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6fbd4
	goto loc_82D6FBD4;
loc_82D6FBC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FBD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FBD4:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6fbe4
	if (cr6.eq) goto loc_82D6FBE4;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6fbe8
	goto loc_82D6FBE8;
loc_82D6FBE4:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6FBE8:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6FBEC:
	// lbz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fc58
	if (!cr6.eq) goto loc_82D6FC58;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6fc50
	if (cr6.eq) goto loc_82D6FC50;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6fc30
	if (cr6.eq) goto loc_82D6FC30;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6fc30
	if (!cr6.gt) goto loc_82D6FC30;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6fc40
	goto loc_82D6FC40;
loc_82D6FC30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FC40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FC40:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6fc50
	if (cr6.eq) goto loc_82D6FC50;
	// stb r3,5(r21)
	PPC_STORE_U8(ctx.r21.u32 + 5, ctx.r3.u8);
	// b 0x82d6fc54
	goto loc_82D6FC54;
loc_82D6FC50:
	// stw r17,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r17.u32);
loc_82D6FC54:
	// stb r20,4(r21)
	PPC_STORE_U8(ctx.r21.u32 + 4, ctx.r20.u8);
loc_82D6FC58:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6fcc0
	if (!cr6.eq) goto loc_82D6FCC0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6fcc8
	if (cr6.eq) goto loc_82D6FCC8;
loc_82D6FC70:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82D6FC74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fd3c
	if (!cr6.eq) goto loc_82D6FD3C;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fcf8
	if (!cr6.eq) goto loc_82D6FCF8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6fcf0
	if (cr6.eq) goto loc_82D6FCF0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6fcd0
	if (cr6.eq) goto loc_82D6FCD0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6fcd0
	if (!cr6.gt) goto loc_82D6FCD0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6fce0
	goto loc_82D6FCE0;
loc_82D6FCC0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6fc70
	if (cr6.eq) goto loc_82D6FC70;
loc_82D6FCC8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82d6fc74
	goto loc_82D6FC74;
loc_82D6FCD0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FCE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FCE0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6fcf0
	if (cr6.eq) goto loc_82D6FCF0;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6fcf4
	goto loc_82D6FCF4;
loc_82D6FCF0:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6FCF4:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6FCF8:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x82d6fd0c
	if (!cr6.eq) goto loc_82D6FD0C;
	// stb r23,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r23.u8);
	// b 0x82d6fd30
	goto loc_82D6FD30;
loc_82D6FD0C:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fd20
	if (!cr6.eq) goto loc_82D6FD20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b7b8
	ctx.lr = 0x82D6FD20;
	sub_82D6B7B8(ctx, base);
loc_82D6FD20:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x82d6fd3c
	if (!cr6.eq) goto loc_82D6FD3C;
	// stb r22,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r22.u8);
loc_82D6FD30:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82D6FD34:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D6FD3C;
	sub_82D6B6F8(ctx, base);
loc_82D6FD3C:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fda8
	if (!cr6.eq) goto loc_82D6FDA8;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6fda0
	if (cr6.eq) goto loc_82D6FDA0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6fd80
	if (cr6.eq) goto loc_82D6FD80;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6fd80
	if (!cr6.gt) goto loc_82D6FD80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6fd90
	goto loc_82D6FD90;
loc_82D6FD80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FD90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FD90:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6fda0
	if (cr6.eq) goto loc_82D6FDA0;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6fda4
	goto loc_82D6FDA4;
loc_82D6FDA0:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6FDA4:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6FDA8:
	// lbz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fe14
	if (!cr6.eq) goto loc_82D6FE14;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6fe0c
	if (cr6.eq) goto loc_82D6FE0C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6fdec
	if (cr6.eq) goto loc_82D6FDEC;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6fdec
	if (!cr6.gt) goto loc_82D6FDEC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6fdfc
	goto loc_82D6FDFC;
loc_82D6FDEC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FDFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FDFC:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6fe0c
	if (cr6.eq) goto loc_82D6FE0C;
	// stb r3,5(r21)
	PPC_STORE_U8(ctx.r21.u32 + 5, ctx.r3.u8);
	// b 0x82d6fe10
	goto loc_82D6FE10;
loc_82D6FE0C:
	// stw r17,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r17.u32);
loc_82D6FE10:
	// stb r20,4(r21)
	PPC_STORE_U8(ctx.r21.u32 + 4, ctx.r20.u8);
loc_82D6FE14:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d6fe7c
	if (!cr6.eq) goto loc_82D6FE7C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6fe84
	if (cr6.eq) goto loc_82D6FE84;
loc_82D6FE2C:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82D6FE30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6fec8
	if (!cr6.eq) goto loc_82D6FEC8;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6feb4
	if (!cr6.eq) goto loc_82D6FEB4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6feac
	if (cr6.eq) goto loc_82D6FEAC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6fe8c
	if (cr6.eq) goto loc_82D6FE8C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6fe8c
	if (!cr6.gt) goto loc_82D6FE8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6fe9c
	goto loc_82D6FE9C;
loc_82D6FE7C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6fe2c
	if (cr6.eq) goto loc_82D6FE2C;
loc_82D6FE84:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82d6fe30
	goto loc_82D6FE30;
loc_82D6FE8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FE9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FE9C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6feac
	if (cr6.eq) goto loc_82D6FEAC;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6feb0
	goto loc_82D6FEB0;
loc_82D6FEAC:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6FEB0:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6FEB4:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x82d6fec8
	if (!cr6.eq) goto loc_82D6FEC8;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// b 0x82d6fd34
	goto loc_82D6FD34;
loc_82D6FEC8:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6fedc
	if (cr6.eq) goto loc_82D6FEDC;
	// stb r30,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r30.u8);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82D6FEDC:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6ff48
	if (!cr6.eq) goto loc_82D6FF48;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6ff40
	if (cr6.eq) goto loc_82D6FF40;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6ff20
	if (cr6.eq) goto loc_82D6FF20;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6ff20
	if (!cr6.gt) goto loc_82D6FF20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6ff30
	goto loc_82D6FF30;
loc_82D6FF20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FF30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FF30:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6ff40
	if (cr6.eq) goto loc_82D6FF40;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d6ff44
	goto loc_82D6FF44;
loc_82D6FF40:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D6FF44:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D6FF48:
	// lbz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d6ffb4
	if (!cr6.eq) goto loc_82D6FFB4;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d6ffac
	if (cr6.eq) goto loc_82D6FFAC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d6ff8c
	if (cr6.eq) goto loc_82D6FF8C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d6ff8c
	if (!cr6.gt) goto loc_82D6FF8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d6ff9c
	goto loc_82D6FF9C;
loc_82D6FF8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D6FF9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D6FF9C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d6ffac
	if (cr6.eq) goto loc_82D6FFAC;
	// stb r3,5(r21)
	PPC_STORE_U8(ctx.r21.u32 + 5, ctx.r3.u8);
	// b 0x82d6ffb0
	goto loc_82D6FFB0;
loc_82D6FFAC:
	// stw r17,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r17.u32);
loc_82D6FFB0:
	// stb r20,4(r21)
	PPC_STORE_U8(ctx.r21.u32 + 4, ctx.r20.u8);
loc_82D6FFB4:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d7001c
	if (!cr6.eq) goto loc_82D7001C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d70024
	if (cr6.eq) goto loc_82D70024;
loc_82D6FFCC:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82D6FFD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d70174
	if (!cr6.eq) goto loc_82D70174;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d70054
	if (!cr6.eq) goto loc_82D70054;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7004c
	if (cr6.eq) goto loc_82D7004C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7002c
	if (cr6.eq) goto loc_82D7002C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7002c
	if (!cr6.gt) goto loc_82D7002C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d7003c
	goto loc_82D7003C;
loc_82D7001C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d6ffcc
	if (cr6.eq) goto loc_82D6FFCC;
loc_82D70024:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82d6ffd0
	goto loc_82D6FFD0;
loc_82D7002C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7003C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7003C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d7004c
	if (cr6.eq) goto loc_82D7004C;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d70050
	goto loc_82D70050;
loc_82D7004C:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D70050:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D70054:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x82d70174
	if (cr6.lt) goto loc_82D70174;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d700d0
	if (!cr6.eq) goto loc_82D700D0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d700c8
	if (cr6.eq) goto loc_82D700C8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d700a8
	if (cr6.eq) goto loc_82D700A8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d700a8
	if (!cr6.gt) goto loc_82D700A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d700b8
	goto loc_82D700B8;
loc_82D700A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D700B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D700B8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d700c8
	if (cr6.eq) goto loc_82D700C8;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d700cc
	goto loc_82D700CC;
loc_82D700C8:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D700CC:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D700D0:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x82d70174
	if (cr6.gt) goto loc_82D70174;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bge cr6,0x82d70164
	if (!cr6.lt) goto loc_82D70164;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d70154
	if (!cr6.eq) goto loc_82D70154;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7014c
	if (cr6.eq) goto loc_82D7014C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d7012c
	if (cr6.eq) goto loc_82D7012C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82d7012c
	if (!cr6.gt) goto loc_82D7012C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x82d7013c
	goto loc_82D7013C;
loc_82D7012C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7013C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7013C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d7014c
	if (cr6.eq) goto loc_82D7014C;
	// stb r3,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r3.u8);
	// b 0x82d70150
	goto loc_82D70150;
loc_82D7014C:
	// stw r17,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r17.u32);
loc_82D70150:
	// stb r20,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r20.u8);
loc_82D70154:
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r11,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r11.u8);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82D70164:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// bl 0x82d6b6f8
	ctx.lr = 0x82D70170;
	sub_82D6B6F8(ctx, base);
	// b 0x82d6fedc
	goto loc_82D6FEDC;
loc_82D70174:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d7018c
	if (!cr6.eq) goto loc_82D7018C;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d70190
	if (!cr6.eq) goto loc_82D70190;
loc_82D7018C:
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
loc_82D70190:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stb r17,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r17.u8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d701a8
	if (cr6.lt) goto loc_82D701A8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82D701A8;
	sub_82416268(ctx, base);
loc_82D701A8:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D701B4"))) PPC_WEAK_FUNC(sub_82D701B4);
PPC_FUNC_IMPL(__imp__sub_82D701B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D701B8"))) PPC_WEAK_FUNC(sub_82D701B8);
PPC_FUNC_IMPL(__imp__sub_82D701B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D701C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D701EC;
	sub_8259CB28(ctx, base);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D70200:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d70200
	if (!cr6.eq) goto loc_82D70200;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D70224;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D70230"))) PPC_WEAK_FUNC(sub_82D70230);
PPC_FUNC_IMPL(__imp__sub_82D70230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D70238;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D70274;
	sub_8259CB28(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d6bf68
	ctx.lr = 0x82D70284;
	sub_82D6BF68(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d702a8
	if (cr6.lt) goto loc_82D702A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D702A8;
	sub_825952B8(ctx, base);
loc_82D702A8:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D702C0"))) PPC_WEAK_FUNC(sub_82D702C0);
PPC_FUNC_IMPL(__imp__sub_82D702C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D702C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D70304;
	sub_8259CB28(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d6c008
	ctx.lr = 0x82D70314;
	sub_82D6C008(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d70338
	if (cr6.lt) goto loc_82D70338;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D70338;
	sub_825952B8(ctx, base);
loc_82D70338:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D70350"))) PPC_WEAK_FUNC(sub_82D70350);
PPC_FUNC_IMPL(__imp__sub_82D70350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D70358;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// bge cr6,0x82d703e4
	if (!cr6.lt) goto loc_82D703E4;
	// lwz r5,20(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
loc_82D70384:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82d70394
	if (cr6.lt) goto loc_82D70394;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82d70398
	goto loc_82D70398;
loc_82D70394:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D70398:
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bne cr6,0x82d703ac
	if (!cr6.eq) goto loc_82D703AC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x82d703d8
	goto loc_82D703D8;
loc_82D703AC:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82d703bc
	if (cr6.lt) goto loc_82D703BC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82d703c0
	goto loc_82D703C0;
loc_82D703BC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D703C0:
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(ctx.r11.u32, 41, xer);
	// bne cr6,0x82d703d8
	if (!cr6.eq) goto loc_82D703D8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x82d703e4
	if (cr6.eq) goto loc_82D703E4;
loc_82D703D8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x82d70384
	if (cr6.lt) goto loc_82D70384;
loc_82D703E4:
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D70408;
	sub_8259CB28(ctx, base);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D70428;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d70448
	if (cr6.lt) goto loc_82D70448;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D70448;
	sub_825952B8(ctx, base);
loc_82D70448:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D70454"))) PPC_WEAK_FUNC(sub_82D70454);
PPC_FUNC_IMPL(__imp__sub_82D70454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D70458"))) PPC_WEAK_FUNC(sub_82D70458);
PPC_FUNC_IMPL(__imp__sub_82D70458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D70460;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x82d705e8
	if (cr6.lt) goto loc_82D705E8;
loc_82D7048C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d704a0
	if (cr6.lt) goto loc_82D704A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d704a4
	goto loc_82D704A4;
loc_82D704A0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D704A4:
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d2680
	ctx.lr = 0x82D704B0;
	sub_831D2680(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d7051c
	if (!cr6.eq) goto loc_82D7051C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d704cc
	if (cr6.lt) goto loc_82D704CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d704d0
	goto loc_82D704D0;
loc_82D704CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D704D0:
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x82d7051c
	if (cr6.eq) goto loc_82D7051C;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d704ec
	if (cr6.lt) goto loc_82D704EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d704f0
	goto loc_82D704F0;
loc_82D704EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D704F0:
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82d7051c
	if (cr6.eq) goto loc_82D7051C;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d7050c
	if (cr6.lt) goto loc_82D7050C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d70510
	goto loc_82D70510;
loc_82D7050C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D70510:
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(ctx.r11.u32, 101, xer);
	// bne cr6,0x82d705e8
	if (!cr6.eq) goto loc_82D705E8;
loc_82D7051C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d70530
	if (cr6.lt) goto loc_82D70530;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d70534
	goto loc_82D70534;
loc_82D70530:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D70534:
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x82d70574
	if (!cr6.eq) goto loc_82D70574;
	// addic. r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82d70574
	if (cr0.lt) goto loc_82D70574;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d70558
	if (cr6.lt) goto loc_82D70558;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d7055c
	goto loc_82D7055C;
loc_82D70558:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D7055C:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x831d2680
	ctx.lr = 0x82D7056C;
	sub_831D2680(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d705e8
	if (!cr6.eq) goto loc_82D705E8;
loc_82D70574:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d70588
	if (cr6.lt) goto loc_82D70588;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d7058c
	goto loc_82D7058C;
loc_82D70588:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82D7058C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d705a4
	if (cr6.lt) goto loc_82D705A4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d705a8
	goto loc_82D705A8;
loc_82D705A4:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82D705A8:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x82d705c0
	if (cr6.lt) goto loc_82D705C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d705c4
	goto loc_82D705C4;
loc_82D705C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D705C4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x82d705d4
	if (cr6.eq) goto loc_82D705D4;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82D705D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d6be20
	ctx.lr = 0x82D705E0;
	sub_82D6BE20(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82d7048c
	if (!cr0.lt) goto loc_82D7048C;
loc_82D705E8:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d705fc
	if (cr6.lt) goto loc_82D705FC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d70600
	goto loc_82D70600;
loc_82D705FC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82D70600:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82d70618
	if (cr6.lt) goto loc_82D70618;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d7061c
	goto loc_82D7061C;
loc_82D70618:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D7061C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d7064c
	if (cr6.eq) goto loc_82D7064C;
loc_82D70624:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d7064c
	if (cr6.eq) goto loc_82D7064C;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d70624
	if (!cr6.eq) goto loc_82D70624;
loc_82D7064C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D70658"))) PPC_WEAK_FUNC(sub_82D70658);
PPC_FUNC_IMPL(__imp__sub_82D70658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D70660;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r26.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r26.u8);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// bge cr6,0x82d70908
	if (!cr6.lt) goto loc_82D70908;
	// addi r28,r6,1
	ctx.r28.s64 = ctx.r6.s64 + 1;
loc_82D70698:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82d70914
	if (!cr6.gt) goto loc_82D70914;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d706b4
	if (cr6.lt) goto loc_82D706B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d706b8
	goto loc_82D706B8;
loc_82D706B4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D706B8:
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x82d70724
	if (!cr6.eq) goto loc_82D70724;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, xer);
	// bne cr6,0x82d70724
	if (!cr6.eq) goto loc_82D70724;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d706e0
	if (cr6.lt) goto loc_82D706E0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d706e4
	goto loc_82D706E4;
loc_82D706E0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82D706E4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x82d706fc
	if (cr6.lt) goto loc_82D706FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d70700
	goto loc_82D70700;
loc_82D706FC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D70700:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x82d70710
	if (cr6.eq) goto loc_82D70710;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82D70710:
	// li r6,45
	ctx.r6.s64 = 45;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d6be20
	ctx.lr = 0x82D70720;
	sub_82D6BE20(ctx, base);
	// b 0x82d708f0
	goto loc_82D708F0;
loc_82D70724:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d70734
	if (cr6.lt) goto loc_82D70734;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d70738
	goto loc_82D70738;
loc_82D70734:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D70738:
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d2680
	ctx.lr = 0x82D70744;
	sub_831D2680(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d70790
	if (!cr6.eq) goto loc_82D70790;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d70760
	if (cr6.lt) goto loc_82D70760;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d70764
	goto loc_82D70764;
loc_82D70760:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D70764:
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x82d70790
	if (cr6.eq) goto loc_82D70790;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d70780
	if (cr6.lt) goto loc_82D70780;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d70784
	goto loc_82D70784;
loc_82D70780:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D70784:
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(ctx.r11.u32, 101, xer);
	// bne cr6,0x82d70908
	if (!cr6.eq) goto loc_82D70908;
loc_82D70790:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d707a4
	if (cr6.lt) goto loc_82D707A4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d707a8
	goto loc_82D707A8;
loc_82D707A4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82D707A8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d707c0
	if (cr6.lt) goto loc_82D707C0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d707c4
	goto loc_82D707C4;
loc_82D707C0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82D707C4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x82d707dc
	if (cr6.lt) goto loc_82D707DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d707e0
	goto loc_82D707E0;
loc_82D707DC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D707E0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x82d707f0
	if (cr6.eq) goto loc_82D707F0;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82D707F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d6be20
	ctx.lr = 0x82D707FC;
	sub_82D6BE20(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x82d708f0
	if (!cr6.lt) goto loc_82D708F0;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82d70920
	if (!cr6.gt) goto loc_82D70920;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d70824
	if (cr6.lt) goto loc_82D70824;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d70828
	goto loc_82D70828;
loc_82D70824:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82D70828:
	// lbzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,101
	cr6.compare<uint32_t>(ctx.r10.u32, 101, xer);
	// bne cr6,0x82d708f0
	if (!cr6.eq) goto loc_82D708F0;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x82d7092c
	if (!cr6.gt) goto loc_82D7092C;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d7084c
	if (cr6.lt) goto loc_82D7084C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d70850
	goto loc_82D70850;
loc_82D7084C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D70850:
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// beq cr6,0x82d7087c
	if (cr6.eq) goto loc_82D7087C;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d7086c
	if (cr6.lt) goto loc_82D7086C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d70870
	goto loc_82D70870;
loc_82D7086C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D70870:
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x82d708f0
	if (!cr6.eq) goto loc_82D708F0;
loc_82D7087C:
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d7088c
	if (cr6.lt) goto loc_82D7088C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d70890
	goto loc_82D70890;
loc_82D7088C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D70890:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// blt cr6,0x82d708ac
	if (cr6.lt) goto loc_82D708AC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d708b0
	goto loc_82D708B0;
loc_82D708AC:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82D708B0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x82d708c8
	if (cr6.lt) goto loc_82D708C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d708cc
	goto loc_82D708CC;
loc_82D708C8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D708CC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x82d708dc
	if (cr6.eq) goto loc_82D708DC;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82D708DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d6be20
	ctx.lr = 0x82D708E8;
	sub_82D6BE20(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82D708F0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d70698
	if (cr6.lt) goto loc_82D70698;
loc_82D70908:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D70914:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9148
	ctx.r3.s64 = ctx.r11.s64 + 9148;
	// bl 0x831cc188
	ctx.lr = 0x82D70920;
	sub_831CC188(ctx, base);
loc_82D70920:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9148
	ctx.r3.s64 = ctx.r11.s64 + 9148;
	// bl 0x831cc188
	ctx.lr = 0x82D7092C;
	sub_831CC188(ctx, base);
loc_82D7092C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9148
	ctx.r3.s64 = ctx.r11.s64 + 9148;
	// bl 0x831cc188
	ctx.lr = 0x82D70938;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82D70938"))) PPC_WEAK_FUNC(sub_82D70938);
PPC_FUNC_IMPL(__imp__sub_82D70938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d70968
	if (!cr6.lt) goto loc_82D70968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82D70968:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
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
	// blt cr6,0x82d70998
	if (cr6.lt) goto loc_82D70998;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82D70998:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x82d709a4
	if (!cr6.lt) goto loc_82D709A4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82D709A4:
	// b 0x82d6ef40
	sub_82D6EF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D709A8"))) PPC_WEAK_FUNC(sub_82D709A8);
PPC_FUNC_IMPL(__imp__sub_82D709A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D709AC"))) PPC_WEAK_FUNC(sub_82D709AC);
PPC_FUNC_IMPL(__imp__sub_82D709AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D709B0"))) PPC_WEAK_FUNC(sub_82D709B0);
PPC_FUNC_IMPL(__imp__sub_82D709B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D709B8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x82d6f028
	ctx.lr = 0x82D709F8;
	sub_82D6F028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x831cd918
	ctx.lr = 0x82D70A0C;
	sub_831CD918(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d70a28
	if (cr6.eq) goto loc_82D70A28;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831d4580
	ctx.lr = 0x82D70A24;
	sub_831D4580(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_82D70A28:
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d6b850
	ctx.lr = 0x82D70A34;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d70a4c
	if (cr6.eq) goto loc_82D70A4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82D70A4C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d70a84
	if (cr6.eq) goto loc_82D70A84;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d70a84
	if (!cr6.eq) goto loc_82D70A84;
	// ld r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D70A84:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D70AA8"))) PPC_WEAK_FUNC(sub_82D70AA8);
PPC_FUNC_IMPL(__imp__sub_82D70AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D70AB0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x82d6f028
	ctx.lr = 0x82D70AF0;
	sub_82D6F028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x831cd940
	ctx.lr = 0x82D70B04;
	sub_831CD940(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d70b20
	if (cr6.eq) goto loc_82D70B20;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831d4580
	ctx.lr = 0x82D70B1C;
	sub_831D4580(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82D70B20:
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d6b850
	ctx.lr = 0x82D70B2C;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d70b44
	if (cr6.eq) goto loc_82D70B44;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82D70B44:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d70b7c
	if (cr6.eq) goto loc_82D70B7C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d70b7c
	if (!cr6.eq) goto loc_82D70B7C;
	// ld r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// stfd f31,0(r29)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f31.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D70B7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D70BA0"))) PPC_WEAK_FUNC(sub_82D70BA0);
PPC_FUNC_IMPL(__imp__sub_82D70BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D70BA8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x82d6f028
	ctx.lr = 0x82D70BE8;
	sub_82D6F028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x831cd9f0
	ctx.lr = 0x82D70BFC;
	sub_831CD9F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d70c18
	if (cr6.eq) goto loc_82D70C18;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831d4580
	ctx.lr = 0x82D70C14;
	sub_831D4580(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82D70C18:
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d6b850
	ctx.lr = 0x82D70C24;
	sub_82D6B850(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d70c3c
	if (cr6.eq) goto loc_82D70C3C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82D70C3C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d70c74
	if (cr6.eq) goto loc_82D70C74;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d70c74
	if (!cr6.eq) goto loc_82D70C74;
	// ld r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// stfd f31,0(r29)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f31.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D70C74:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D70C98"))) PPC_WEAK_FUNC(sub_82D70C98);
PPC_FUNC_IMPL(__imp__sub_82D70C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D70CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d70350
	ctx.lr = 0x82D70CC4;
	sub_82D70350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82d721e0
	ctx.lr = 0x82D70CD4;
	sub_82D721E0(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a7fd0
	ctx.lr = 0x82D70CF0;
	sub_827A7FD0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d70d10
	if (cr6.lt) goto loc_82D70D10;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D70D10;
	sub_825952B8(ctx, base);
loc_82D70D10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D70D18"))) PPC_WEAK_FUNC(sub_82D70D18);
PPC_FUNC_IMPL(__imp__sub_82D70D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D70D20;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d70d40
	if (cr6.lt) goto loc_82D70D40;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D70D40:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_82D70D54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d70d54
	if (!cr6.eq) goto loc_82D70D54;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82D70D78;
	sub_82472FC0(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r31.u64);
	// addi r8,r10,-30032
	ctx.r8.s64 = ctx.r10.s64 + -30032;
	// addi r7,r9,-19992
	ctx.r7.s64 = ctx.r9.s64 + -19992;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82473310
	ctx.lr = 0x82D70DA4;
	sub_82473310(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r4,-32235
	ctx.r4.s64 = -2112552960;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r4,-30108
	ctx.r11.s64 = ctx.r4.s64 + -30108;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x82a79508
	ctx.lr = 0x82D70DCC;
	sub_82A79508(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82d70de0
	if (cr6.lt) goto loc_82D70DE0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82D70DE0;
	sub_82416268(ctx, base);
loc_82D70DE0:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x831cd1e0
	ctx.lr = 0x82D70DFC;
	sub_831CD1E0(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// ld r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D70E1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d6c1d0
	ctx.lr = 0x82D70E28;
	sub_82D6C1D0(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lfd f31,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x82d6b678
	ctx.lr = 0x82D70E34;
	sub_82D6B678(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// addi r7,r8,15320
	ctx.r7.s64 = ctx.r8.s64 + 15320;
	// stw r7,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82D70E48;
	sub_831CCF00(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D70E58"))) PPC_WEAK_FUNC(sub_82D70E58);
PPC_FUNC_IMPL(__imp__sub_82D70E58) {
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
	// bge cr6,0x82d70e90
	if (!cr6.lt) goto loc_82D70E90;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82d70e94
	if (!cr6.gt) goto loc_82D70E94;
loc_82D70E90:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D70E94:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d70ef0
	if (cr6.eq) goto loc_82D70EF0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 3;
	// bne cr6,0x82d70ec4
	if (!cr6.eq) goto loc_82D70EC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d70938
	ctx.lr = 0x82D70EC4;
	sub_82D70938(ctx, base);
loc_82D70EC4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d70f24
	if (cr6.eq) goto loc_82D70F24;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x82d70f24
	goto loc_82D70F24;
loc_82D70EF0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d70f08
	if (!cr6.eq) goto loc_82D70F08;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d70938
	ctx.lr = 0x82D70F08;
	sub_82D70938(ctx, base);
loc_82D70F08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d70f24
	if (cr6.eq) goto loc_82D70F24;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82D70F24:
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

__attribute__((alias("__imp__sub_82D70F48"))) PPC_WEAK_FUNC(sub_82D70F48);
PPC_FUNC_IMPL(__imp__sub_82D70F48) {
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
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x82d70fa8
	if (!cr6.gt) goto loc_82D70FA8;
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d70fa8
	if (cr6.lt) goto loc_82D70FA8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ab5c48
	ctx.lr = 0x82D70FA4;
	sub_82AB5C48(ctx, base);
	// b 0x82d70fb8
	goto loc_82D70FB8;
loc_82D70FA8:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82D70FB8;
	sub_825A1DA8(ctx, base);
loc_82D70FB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x8292a448
	ctx.lr = 0x82D70FD8;
	sub_8292A448(ctx, base);
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

__attribute__((alias("__imp__sub_82D70FF0"))) PPC_WEAK_FUNC(sub_82D70FF0);
PPC_FUNC_IMPL(__imp__sub_82D70FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D70FF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d7107c
	if (cr6.eq) goto loc_82D7107C;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82D71018:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d71030
	if (cr6.lt) goto loc_82D71030;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d71034
	goto loc_82D71034;
loc_82D71030:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D71034:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D71044;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d71070
	if (cr6.eq) goto loc_82D71070;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82D71068;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r11.u32);
loc_82D71070:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82d71018
	if (!cr6.eq) goto loc_82D71018;
loc_82D7107C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d7109c
	if (cr6.lt) goto loc_82D7109C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D7109C;
	sub_825952B8(ctx, base);
loc_82D7109C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D710BC"))) PPC_WEAK_FUNC(sub_82D710BC);
PPC_FUNC_IMPL(__imp__sub_82D710BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D710C0"))) PPC_WEAK_FUNC(sub_82D710C0);
PPC_FUNC_IMPL(__imp__sub_82D710C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D710C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d7114c
	if (cr6.eq) goto loc_82D7114C;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82D710E8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d71100
	if (cr6.lt) goto loc_82D71100;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d71104
	goto loc_82D71104;
loc_82D71100:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D71104:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D71114;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d71140
	if (cr6.eq) goto loc_82D71140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// bl 0x8259cb28
	ctx.lr = 0x82D71138;
	sub_8259CB28(ctx, base);
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// stfd f0,32(r26)
	PPC_STORE_U64(ctx.r26.u32 + 32, ctx.f0.u64);
loc_82D71140:
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82d710e8
	if (!cr6.eq) goto loc_82D710E8;
loc_82D7114C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d7116c
	if (cr6.lt) goto loc_82D7116C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D7116C;
	sub_825952B8(ctx, base);
loc_82D7116C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7118C"))) PPC_WEAK_FUNC(sub_82D7118C);
PPC_FUNC_IMPL(__imp__sub_82D7118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D71190"))) PPC_WEAK_FUNC(sub_82D71190);
PPC_FUNC_IMPL(__imp__sub_82D71190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D71198;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d711e0
	if (cr6.eq) goto loc_82D711E0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82D711B4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D711C8;
	sub_8259CB28(ctx, base);
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// stfd f0,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.f0.u64);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d711b4
	if (!cr6.eq) goto loc_82D711B4;
loc_82D711E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D711EC"))) PPC_WEAK_FUNC(sub_82D711EC);
PPC_FUNC_IMPL(__imp__sub_82D711EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D711F0"))) PPC_WEAK_FUNC(sub_82D711F0);
PPC_FUNC_IMPL(__imp__sub_82D711F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D711F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D71238;
	sub_8259CB28(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d70230
	ctx.lr = 0x82D7124C;
	sub_82D70230(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d71278
	if (!cr6.eq) goto loc_82D71278;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d712cc
	if (cr6.lt) goto loc_82D712CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82d712c4
	goto loc_82D712C4;
loc_82D71278:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82D71298;
	sub_8259CB28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d70ff0
	ctx.lr = 0x82D712A8;
	sub_82D70FF0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d712cc
	if (cr6.lt) goto loc_82D712CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82D712C4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D712CC;
	sub_825952B8(ctx, base);
loc_82D712CC:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D712E4"))) PPC_WEAK_FUNC(sub_82D712E4);
PPC_FUNC_IMPL(__imp__sub_82D712E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D712E8"))) PPC_WEAK_FUNC(sub_82D712E8);
PPC_FUNC_IMPL(__imp__sub_82D712E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D712F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D71330;
	sub_8259CB28(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d702c0
	ctx.lr = 0x82D71344;
	sub_82D702C0(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d71370
	if (!cr6.eq) goto loc_82D71370;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d713c4
	if (cr6.lt) goto loc_82D713C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82d713bc
	goto loc_82D713BC;
loc_82D71370:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82D71390;
	sub_8259CB28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d710c0
	ctx.lr = 0x82D713A0;
	sub_82D710C0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d713c4
	if (cr6.lt) goto loc_82D713C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82D713BC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D713C4;
	sub_825952B8(ctx, base);
loc_82D713C4:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D713DC"))) PPC_WEAK_FUNC(sub_82D713DC);
PPC_FUNC_IMPL(__imp__sub_82D713DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D713E0"))) PPC_WEAK_FUNC(sub_82D713E0);
PPC_FUNC_IMPL(__imp__sub_82D713E0) {
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
	// beq cr6,0x82d71434
	if (cr6.eq) goto loc_82D71434;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D7142C;
	sub_8259CB28(ctx, base);
	// lfd f0,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// stfd f0,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.f0.u64);
loc_82D71434:
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

__attribute__((alias("__imp__sub_82D7144C"))) PPC_WEAK_FUNC(sub_82D7144C);
PPC_FUNC_IMPL(__imp__sub_82D7144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D71450"))) PPC_WEAK_FUNC(sub_82D71450);
PPC_FUNC_IMPL(__imp__sub_82D71450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D71458;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d714bc
	if (cr6.eq) goto loc_82D714BC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82D7147C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d714ac
	if (cr6.eq) goto loc_82D714AC;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D714A4;
	sub_8259CB28(ctx, base);
	// lfd f0,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// stfd f0,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.f0.u64);
loc_82D714AC:
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d7147c
	if (!cr6.eq) goto loc_82D7147C;
loc_82D714BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D714C8"))) PPC_WEAK_FUNC(sub_82D714C8);
PPC_FUNC_IMPL(__imp__sub_82D714C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D714D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,40(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82d6bba0
	ctx.lr = 0x82D714F4;
	sub_82D6BBA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d6c340
	ctx.lr = 0x82D7150C;
	sub_82D6C340(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d70e58
	ctx.lr = 0x82D71528;
	sub_82D70E58(ctx, base);
	// li r6,94
	ctx.r6.s64 = 94;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d6bba0
	ctx.lr = 0x82D71540;
	sub_82D6BBA0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82d6c340
	ctx.lr = 0x82D71558;
	sub_82D6C340(ctx, base);
	// lis r7,-31971
	ctx.r7.s64 = -2095251456;
	// li r6,94
	ctx.r6.s64 = 94;
	// addi r5,r7,8352
	ctx.r5.s64 = ctx.r7.s64 + 8352;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d70e58
	ctx.lr = 0x82D71578;
	sub_82D70E58(ctx, base);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d6bba0
	ctx.lr = 0x82D71590;
	sub_82D6BBA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d6c340
	ctx.lr = 0x82D715A8;
	sub_82D6C340(ctx, base);
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r9,47
	ctx.r9.s64 = 47;
	// addi r8,r10,-19088
	ctx.r8.s64 = ctx.r10.s64 + -19088;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d70e58
	ctx.lr = 0x82D715C8;
	sub_82D70E58(ctx, base);
	// li r6,42
	ctx.r6.s64 = 42;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d6bba0
	ctx.lr = 0x82D715E0;
	sub_82D6BBA0(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d6c340
	ctx.lr = 0x82D715F4;
	sub_82D6C340(ctx, base);
	// lis r7,-32041
	ctx.r7.s64 = -2099838976;
	// li r6,42
	ctx.r6.s64 = 42;
	// addi r5,r7,-19096
	ctx.r5.s64 = ctx.r7.s64 + -19096;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d70e58
	ctx.lr = 0x82D71614;
	sub_82D70E58(ctx, base);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d6bba0
	ctx.lr = 0x82D7162C;
	sub_82D6BBA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d6c340
	ctx.lr = 0x82D71644;
	sub_82D6C340(ctx, base);
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r9,45
	ctx.r9.s64 = 45;
	// addi r8,r10,-19104
	ctx.r8.s64 = ctx.r10.s64 + -19104;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d70e58
	ctx.lr = 0x82D71664;
	sub_82D70E58(ctx, base);
	// li r6,43
	ctx.r6.s64 = 43;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d6bba0
	ctx.lr = 0x82D7167C;
	sub_82D6BBA0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82d6c340
	ctx.lr = 0x82D71694;
	sub_82D6C340(ctx, base);
	// lis r6,-32041
	ctx.r6.s64 = -2099838976;
	// li r5,43
	ctx.r5.s64 = 43;
	// addi r4,r6,-19112
	ctx.r4.s64 = ctx.r6.s64 + -19112;
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d70e58
	ctx.lr = 0x82D716B4;
	sub_82D70E58(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,61
	ctx.r6.s64 = 61;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d6bba0
	ctx.lr = 0x82D716CC;
	sub_82D6BBA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d6c340
	ctx.lr = 0x82D716E4;
	sub_82D6C340(ctx, base);
	// lis r10,-32041
	ctx.r10.s64 = -2099838976;
	// li r9,61
	ctx.r9.s64 = 61;
	// addi r8,r10,-18944
	ctx.r8.s64 = ctx.r10.s64 + -18944;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d70e58
	ctx.lr = 0x82D71704;
	sub_82D70E58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7170C"))) PPC_WEAK_FUNC(sub_82D7170C);
PPC_FUNC_IMPL(__imp__sub_82D7170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D71710"))) PPC_WEAK_FUNC(sub_82D71710);
PPC_FUNC_IMPL(__imp__sub_82D71710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D71718;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a8c428
	ctx.lr = 0x82D7173C;
	sub_82A8C428(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x831cd1e0
	ctx.lr = 0x82D7174C;
	sub_831CD1E0(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D71770;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d6c0a8
	ctx.lr = 0x82D7177C;
	sub_82D6C0A8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82D71788;
	sub_82A79BF8(ctx, base);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82d7179c
	if (!cr6.lt) goto loc_82D7179C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82D7179C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_82D717B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d717b4
	if (!cr6.eq) goto loc_82D717B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D717D8;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d717ec
	if (cr6.lt) goto loc_82D717EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82D717EC;
	sub_82416268(ctx, base);
loc_82D717EC:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x82a79160
	ctx.lr = 0x82D71800;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82D71814;
	sub_831CCF00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D71824"))) PPC_WEAK_FUNC(sub_82D71824);
PPC_FUNC_IMPL(__imp__sub_82D71824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D71828"))) PPC_WEAK_FUNC(sub_82D71828);
PPC_FUNC_IMPL(__imp__sub_82D71828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82D71830;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d719ac
	if (cr6.eq) goto loc_82D719AC;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r21,2
	ctx.r21.s64 = 2;
	// li r23,15
	ctx.r23.s64 = 15;
loc_82D71860:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82D71864:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d7187c
	if (cr6.lt) goto loc_82D7187C;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82d71880
	goto loc_82D71880;
loc_82D7187C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82D71880:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574d38
	ctx.lr = 0x82D7188C;
	sub_82574D38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d7199c
	if (cr6.eq) goto loc_82D7199C;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r29,1
	ctx.r29.s64 = 1;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d718e0
	if (!cr6.gt) goto loc_82D718E0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d718c4
	if (cr6.lt) goto loc_82D718C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d718c8
	goto loc_82D718C8;
loc_82D718C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D718C8:
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d2660
	ctx.lr = 0x82D718D4;
	sub_831D2660(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_82D718E0:
	// addic. r11,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x82d71928
	if (!cr0.gt) goto loc_82D71928;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d719b4
	if (!cr6.gt) goto loc_82D719B4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d7190c
	if (cr6.lt) goto loc_82D7190C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d71910
	goto loc_82D71910;
loc_82D7190C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D71910:
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d2660
	ctx.lr = 0x82D7191C;
	sub_831D2660(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_82D71928:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d71990
	if (cr6.eq) goto loc_82D71990;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f1,32(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r28.u32 + 32);
	// bl 0x82d71710
	ctx.lr = 0x82D71948;
	sub_82D71710(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a7fd0
	ctx.lr = 0x82D71964;
	sub_827A7FD0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d71980
	if (cr6.lt) goto loc_82D71980;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D71980;
	sub_825952B8(ctx, base);
loc_82D71980:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// b 0x82d71864
	goto loc_82D71864;
loc_82D71990:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82d71864
	goto loc_82D71864;
loc_82D7199C:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d71860
	if (!cr6.eq) goto loc_82D71860;
loc_82D719AC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82D719B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,9148
	ctx.r3.s64 = ctx.r11.s64 + 9148;
	// bl 0x831cc188
	ctx.lr = 0x82D719C0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82D719C0"))) PPC_WEAK_FUNC(sub_82D719C0);
PPC_FUNC_IMPL(__imp__sub_82D719C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D719C8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x82d71c14
	if (cr6.eq) goto loc_82D71C14;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r6,r5,-1
	ctx.r6.s64 = ctx.r5.s64 + -1;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82d70458
	ctx.lr = 0x82D71A24;
	sub_82D70458(ctx, base);
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x82D71A3C;
	sub_8259CB28(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d71a74
	if (cr6.eq) goto loc_82D71A74;
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r29,3
	ctx.r29.s64 = 3;
	// bl 0x82d70658
	ctx.lr = 0x82D71A60;
	sub_82D70658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82D71A74;
	sub_8259CB28(ctx, base);
loc_82D71A74:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d71a8c
	if (cr6.eq) goto loc_82D71A8C;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x8387e8e0
	ctx.lr = 0x82D71A8C;
	sub_8387E8E0(ctx, base);
loc_82D71A8C:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d71aa0
	if (cr6.eq) goto loc_82D71AA0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82D71AA0;
	sub_8387E8E0(ctx, base);
loc_82D71AA0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d71ab4
	if (!cr6.lt) goto loc_82D71AB4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82D71AB4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82D71ABC;
	sub_837B0C10(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d71ad0
	if (!cr6.lt) goto loc_82D71AD0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82D71AD0:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82D71AD8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d70d18
	ctx.lr = 0x82D71AE4;
	sub_82D70D18(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82d70d18
	ctx.lr = 0x82D71AF4;
	sub_82D70D18(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D71B04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r24,2
	ctx.r24.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d71b28
	if (cr6.lt) goto loc_82D71B28;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82D71B28;
	sub_825952B8(ctx, base);
loc_82D71B28:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x82d71b50
	if (cr6.lt) goto loc_82D71B50;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82D71B50;
	sub_825952B8(ctx, base);
loc_82D71B50:
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// bl 0x82d71710
	ctx.lr = 0x82D71B7C;
	sub_82D71710(ctx, base);
	// add r11,r23,r29
	ctx.r11.u64 = ctx.r23.u64 + ctx.r29.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// subf r4,r23,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r23.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827a7fd0
	ctx.lr = 0x82D71B9C;
	sub_827A7FD0(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d71bb8
	if (cr6.lt) goto loc_82D71BB8;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82D71BB8;
	sub_825952B8(ctx, base);
loc_82D71BB8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x82d71be0
	if (cr6.lt) goto loc_82D71BE0;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82D71BE0;
	sub_825952B8(ctx, base);
loc_82D71BE0:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x82d71c24
	if (cr6.lt) goto loc_82D71C24;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82D71C08;
	sub_825952B8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D71C14:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d70c98
	ctx.lr = 0x82D71C24;
	sub_82D70C98(ctx, base);
loc_82D71C24:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D71C30"))) PPC_WEAK_FUNC(sub_82D71C30);
PPC_FUNC_IMPL(__imp__sub_82D71C30) {
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
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x837e8478
	ctx.lr = 0x82D71C74;
	sub_837E8478(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82d71c9c
	if (cr6.eq) goto loc_82D71C9C;
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
	// bl 0x82e95620
	ctx.lr = 0x82D71C98;
	sub_82E95620(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82D71C9C:
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

__attribute__((alias("__imp__sub_82D71CB8"))) PPC_WEAK_FUNC(sub_82D71CB8);
PPC_FUNC_IMPL(__imp__sub_82D71CB8) {
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
	// beq cr6,0x82d71d04
	if (cr6.eq) goto loc_82D71D04;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ee4770
	ctx.lr = 0x82D71CEC;
	sub_82EE4770(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ee46e0
	ctx.lr = 0x82D71D00;
	sub_82EE46E0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82D71D04:
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

__attribute__((alias("__imp__sub_82D71D1C"))) PPC_WEAK_FUNC(sub_82D71D1C);
PPC_FUNC_IMPL(__imp__sub_82D71D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D71D20"))) PPC_WEAK_FUNC(sub_82D71D20);
PPC_FUNC_IMPL(__imp__sub_82D71D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D71D28;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 | 26214;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d71d4c
	if (!cr6.gt) goto loc_82D71D4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82D71D4C;
	sub_831CC150(ctx, base);
loc_82D71D4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,40
	ctx.r27.s64 = 40;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82d71e04
	if (!cr6.lt) goto loc_82D71E04;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x82D71D8C;
	sub_82595718(ctx, base);
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
	// bl 0x82d71450
	ctx.lr = 0x82D71DB0;
	sub_82D71450(ctx, base);
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
	// beq cr6,0x82d71de4
	if (cr6.eq) goto loc_82D71DE4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82cbd208
	ctx.lr = 0x82D71DD4;
	sub_82CBD208(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D71DE4;
	sub_825952B8(ctx, base);
loc_82D71DE4:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82D71E04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D71E0C"))) PPC_WEAK_FUNC(sub_82D71E0C);
PPC_FUNC_IMPL(__imp__sub_82D71E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D71E10"))) PPC_WEAK_FUNC(sub_82D71E10);
PPC_FUNC_IMPL(__imp__sub_82D71E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D71E18;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d71e3c
	if (cr6.lt) goto loc_82D71E3C;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82d71e40
	goto loc_82D71E40;
loc_82D71E3C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82D71E40:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82D71E58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d71e58
	if (!cr6.eq) goto loc_82D71E58;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82D71E7C;
	sub_82472FC0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a79b20
	ctx.lr = 0x82D71E90;
	sub_82A79B20(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d71ea4
	if (cr6.lt) goto loc_82D71EA4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82D71EA4;
	sub_82416268(ctx, base);
loc_82D71EA4:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82d6e130
	ctx.lr = 0x82D71ECC;
	sub_82D6E130(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82d71f38
	if (cr6.eq) goto loc_82D71F38;
loc_82D71EF4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x82D71F00;
	sub_8291FDC8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d6e130
	ctx.lr = 0x82D71F10;
	sub_82D6E130(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82d71ef4
	if (!cr6.eq) goto loc_82D71EF4;
loc_82D71F38:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d71f58
	if (cr6.lt) goto loc_82D71F58;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D71F58;
	sub_825952B8(ctx, base);
loc_82D71F58:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x82D71F6C;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82D71F80;
	sub_831CCF00(ctx, base);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d71f9c
	if (cr6.lt) goto loc_82D71F9C;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D71F9C;
	sub_825952B8(ctx, base);
loc_82D71F9C:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D71FB0"))) PPC_WEAK_FUNC(sub_82D71FB0);
PPC_FUNC_IMPL(__imp__sub_82D71FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,40
	ctx.r9.s64 = 40;
	// ori r8,r10,26214
	ctx.r8.u64 = ctx.r10.u64 | 26214;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d71fe4
	if (!cr6.lt) goto loc_82D71FE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82D71FE4:
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
	// blt cr6,0x82d72014
	if (cr6.lt) goto loc_82D72014;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82D72014:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d72020
	if (!cr6.lt) goto loc_82D72020;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82D72020:
	// b 0x82d71d20
	sub_82D71D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D72024"))) PPC_WEAK_FUNC(sub_82D72024);
PPC_FUNC_IMPL(__imp__sub_82D72024) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D72028"))) PPC_WEAK_FUNC(sub_82D72028);
PPC_FUNC_IMPL(__imp__sub_82D72028) {
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
	// bge cr6,0x82d72060
	if (!cr6.lt) goto loc_82D72060;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82d72064
	if (!cr6.gt) goto loc_82D72064;
loc_82D72060:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D72064:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d720a4
	if (cr6.eq) goto loc_82D720A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 5;
	// bne cr6,0x82d72094
	if (!cr6.eq) goto loc_82D72094;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afff80
	ctx.lr = 0x82D72094;
	sub_82AFFF80(ctx, base);
loc_82D72094:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82d720c0
	goto loc_82D720C0;
loc_82D720A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d720bc
	if (!cr6.eq) goto loc_82D720BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afff80
	ctx.lr = 0x82D720BC;
	sub_82AFFF80(ctx, base);
loc_82D720BC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82D720C0:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82affd70
	ctx.lr = 0x82D720CC;
	sub_82AFFD70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
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

__attribute__((alias("__imp__sub_82D720F0"))) PPC_WEAK_FUNC(sub_82D720F0);
PPC_FUNC_IMPL(__imp__sub_82D720F0) {
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
	// bge cr6,0x82d72128
	if (!cr6.lt) goto loc_82D72128;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82d7212c
	if (!cr6.gt) goto loc_82D7212C;
loc_82D72128:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D7212C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d72190
	if (cr6.eq) goto loc_82D72190;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82d72160
	if (!cr6.eq) goto loc_82D72160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d71fb0
	ctx.lr = 0x82D72160;
	sub_82D71FB0(ctx, base);
loc_82D72160:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d713e0
	ctx.lr = 0x82D72180;
	sub_82D713E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82d721c4
	goto loc_82D721C4;
loc_82D72190:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d721a8
	if (!cr6.eq) goto loc_82D721A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d71fb0
	ctx.lr = 0x82D721A8;
	sub_82D71FB0(ctx, base);
loc_82D721A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82d713e0
	ctx.lr = 0x82D721B8;
	sub_82D713E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D721C4:
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

__attribute__((alias("__imp__sub_82D721DC"))) PPC_WEAK_FUNC(sub_82D721DC);
PPC_FUNC_IMPL(__imp__sub_82D721DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D721E0"))) PPC_WEAK_FUNC(sub_82D721E0);
PPC_FUNC_IMPL(__imp__sub_82D721E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D721E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,36(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d7246c
	if (cr6.eq) goto loc_82D7246C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r23,2
	ctx.r23.s64 = 2;
	// addi r24,r11,-30304
	ctx.r24.s64 = ctx.r11.s64 + -30304;
loc_82D7221C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82d7245c
	if (!cr6.gt) goto loc_82D7245C;
loc_82D7222C:
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82d72240
	if (cr6.lt) goto loc_82D72240;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d72244
	goto loc_82D72244;
loc_82D72240:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D72244:
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// bne cr6,0x82d7244c
	if (!cr6.eq) goto loc_82D7244C;
	// addic. r9,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r9.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// blt 0x82d72290
	if (cr0.lt) goto loc_82D72290;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82d72278
	if (cr6.lt) goto loc_82D72278;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d7227c
	goto loc_82D7227C;
loc_82D72278:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D7227C:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r6,101
	cr6.compare<uint32_t>(ctx.r6.u32, 101, xer);
	// bne cr6,0x82d72290
	if (!cr6.eq) goto loc_82D72290;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82D72290:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d7244c
	if (!cr6.eq) goto loc_82D7244C;
	// cmpwi cr6,r8,45
	cr6.compare<int32_t>(ctx.r8.s32, 45, xer);
	// bne cr6,0x82d722ec
	if (!cr6.eq) goto loc_82D722EC;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82d722b4
	if (!cr6.lt) goto loc_82D722B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d722e0
	goto loc_82D722E0;
loc_82D722B4:
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82d722c4
	if (cr6.lt) goto loc_82D722C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d722c8
	goto loc_82D722C8;
loc_82D722C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D722C8:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x831d2680
	ctx.lr = 0x82D722D8;
	sub_831D2680(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_82D722E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d7244c
	if (!cr6.eq) goto loc_82D7244C;
loc_82D722EC:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82D7230C;
	sub_8259CB28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d719c0
	ctx.lr = 0x82D72320;
	sub_82D719C0(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82D7233C;
	sub_8259CC28(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x82D7234C;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82D7235C;
	sub_825A1DA8(ctx, base);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82D7237C;
	sub_8259CB28(ctx, base);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8259cb28
	ctx.lr = 0x82D7239C;
	sub_8259CB28(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r25,68
	ctx.r3.s64 = ctx.r25.s64 + 68;
	// bl 0x82e8b5c8
	ctx.lr = 0x82D723A8;
	sub_82E8B5C8(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d723c4
	if (cr6.lt) goto loc_82D723C4;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x825952b8
	ctx.lr = 0x82D723C4;
	sub_825952B8(ctx, base);
loc_82D723C4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// blt cr6,0x82d723ec
	if (cr6.lt) goto loc_82D723EC;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82D723EC;
	sub_825952B8(ctx, base);
loc_82D723EC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x82d72414
	if (cr6.lt) goto loc_82D72414;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D72414;
	sub_825952B8(ctx, base);
loc_82D72414:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r27,36(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82d72440
	if (cr6.lt) goto loc_82D72440;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82D72440;
	sub_825952B8(ctx, base);
loc_82D72440:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82D7244C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82d7222c
	if (cr6.lt) goto loc_82D7222C;
loc_82D7245C:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d7221c
	if (!cr6.eq) goto loc_82D7221C;
loc_82D7246C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D72474"))) PPC_WEAK_FUNC(sub_82D72474);
PPC_FUNC_IMPL(__imp__sub_82D72474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D72478"))) PPC_WEAK_FUNC(sub_82D72478);
PPC_FUNC_IMPL(__imp__sub_82D72478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82D72480;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d70350
	ctx.lr = 0x82D724AC;
	sub_82D70350(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r23,160(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82d72f38
	ctx.lr = 0x82D724BC;
	sub_82D72F38(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d724d0
	if (!cr6.lt) goto loc_82D724D0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_82D724D0:
	// bl 0x831d82e8
	ctx.lr = 0x82D724D4;
	sub_831D82E8(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D724E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r30,r10,-30288
	ctx.r30.s64 = ctx.r10.s64 + -30288;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ab6970
	ctx.lr = 0x82D724FC;
	sub_82AB6970(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x82D72510;
	sub_825A1DA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x8292a448
	ctx.lr = 0x82D72530;
	sub_8292A448(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d71710
	ctx.lr = 0x82D72540;
	sub_82D71710(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8292a568
	ctx.lr = 0x82D72554;
	sub_8292A568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82d70f48
	ctx.lr = 0x82D72564;
	sub_82D70F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-18
	ctx.r5.s64 = ctx.r30.s64 + -18;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82d701b8
	ctx.lr = 0x82D72574;
	sub_82D701B8(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
	// bl 0x82e8b5c8
	ctx.lr = 0x82D72580;
	sub_82E8B5C8(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x837e3e90
	ctx.lr = 0x82D72588;
	sub_837E3E90(ctx, base);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r22,2
	ctx.r22.s64 = 2;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d725a8
	if (cr6.lt) goto loc_82D725A8;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82D725A8;
	sub_825952B8(ctx, base);
loc_82D725A8:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r28,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r28.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// blt cr6,0x82d725d0
	if (cr6.lt) goto loc_82D725D0;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82D725D0;
	sub_825952B8(ctx, base);
loc_82D725D0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x82d725f8
	if (cr6.lt) goto loc_82D725F8;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82D725F8;
	sub_825952B8(ctx, base);
loc_82D725F8:
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
	// blt cr6,0x82d72620
	if (cr6.lt) goto loc_82D72620;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82D72620;
	sub_825952B8(ctx, base);
loc_82D72620:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x82d72648
	if (cr6.lt) goto loc_82D72648;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82D72648;
	sub_825952B8(ctx, base);
loc_82D72648:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r30,16(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x82d71710
	ctx.lr = 0x82D72668;
	sub_82D71710(ctx, base);
	// add r11,r30,r23
	ctx.r11.u64 = ctx.r30.u64 + ctx.r23.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// subf r4,r30,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r30.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x827a7fd0
	ctx.lr = 0x82D72688;
	sub_827A7FD0(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d726a4
	if (cr6.lt) goto loc_82D726A4;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82D726A4;
	sub_825952B8(ctx, base);
loc_82D726A4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// blt cr6,0x82d726cc
	if (cr6.lt) goto loc_82D726CC;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82D726CC;
	sub_825952B8(ctx, base);
loc_82D726CC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D726D8"))) PPC_WEAK_FUNC(sub_82D726D8);
PPC_FUNC_IMPL(__imp__sub_82D726D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D726E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D7271C;
	sub_8259CB28(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// bl 0x82d711f0
	ctx.lr = 0x82D72734;
	sub_82D711F0(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r28
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, xer);
	// beq cr6,0x82d72768
	if (cr6.eq) goto loc_82D72768;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830fa750
	ctx.lr = 0x82D72750;
	sub_830FA750(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82aff248
	ctx.lr = 0x82D72764;
	sub_82AFF248(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82D72768:
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82D72788;
	sub_8259CB28(ctx, base);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d72028
	ctx.lr = 0x82D72798;
	sub_82D72028(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d727b8
	if (cr6.lt) goto loc_82D727B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D727B8;
	sub_825952B8(ctx, base);
loc_82D727B8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D727C0"))) PPC_WEAK_FUNC(sub_82D727C0);
PPC_FUNC_IMPL(__imp__sub_82D727C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D727C8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r25,15
	ctx.r25.s64 = 15;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D72808;
	sub_8259CB28(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// bl 0x82d712e8
	ctx.lr = 0x82D72820;
	sub_82D712E8(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// beq cr6,0x82d72854
	if (cr6.eq) goto loc_82D72854;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d71190
	ctx.lr = 0x82D7283C;
	sub_82D71190(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cbd208
	ctx.lr = 0x82D72850;
	sub_82CBD208(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82D72854:
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82D72874;
	sub_8259CB28(ctx, base);
	// stfd f31,160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f31.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d720f0
	ctx.lr = 0x82D72884;
	sub_82D720F0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d728a4
	if (cr6.lt) goto loc_82D728A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D728A4;
	sub_825952B8(ctx, base);
loc_82D728A4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D728B0"))) PPC_WEAK_FUNC(sub_82D728B0);
PPC_FUNC_IMPL(__imp__sub_82D728B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D728B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d72930
	if (cr6.eq) goto loc_82D72930;
loc_82D728D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d728ec
	if (cr6.lt) goto loc_82D728EC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d728f0
	goto loc_82D728F0;
loc_82D728EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82D728F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574d38
	ctx.lr = 0x82D728FC;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d72920
	if (cr6.eq) goto loc_82D72920;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d72478
	ctx.lr = 0x82D7291C;
	sub_82D72478(ctx, base);
	// b 0x82d728d4
	goto loc_82D728D4;
loc_82D72920:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d728d4
	if (!cr6.eq) goto loc_82D728D4;
loc_82D72930:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D72938"))) PPC_WEAK_FUNC(sub_82D72938);
PPC_FUNC_IMPL(__imp__sub_82D72938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D72940;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r28,r11,-30204
	ctx.r28.s64 = ctx.r11.s64 + -30204;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
	// bl 0x8259cc28
	ctx.lr = 0x82D72974;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r5,r11,5640
	ctx.r5.s64 = ctx.r11.s64 + 5640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72988;
	sub_82D726D8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d729a8
	if (cr6.lt) goto loc_82D729A8;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82D729A8;
	sub_825952B8(ctx, base);
loc_82D729A8:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r4,r28,-72
	ctx.r4.s64 = ctx.r28.s64 + -72;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D729D0;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r5,r11,5840
	ctx.r5.s64 = ctx.r11.s64 + 5840;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D729E4;
	sub_82D726D8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72a00
	if (cr6.lt) goto loc_82D72A00;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82D72A00;
	sub_825952B8(ctx, base);
loc_82D72A00:
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72A28;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r5,r11,5848
	ctx.r5.s64 = ctx.r11.s64 + 5848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72A3C;
	sub_82D726D8(ctx, base);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72a58
	if (cr6.lt) goto loc_82D72A58;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x82D72A58;
	sub_825952B8(ctx, base);
loc_82D72A58:
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// addi r4,r28,-56
	ctx.r4.s64 = ctx.r28.s64 + -56;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72A80;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r5,r11,15880
	ctx.r5.s64 = ctx.r11.s64 + 15880;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72A94;
	sub_82D726D8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72ab0
	if (cr6.lt) goto loc_82D72AB0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82D72AB0;
	sub_825952B8(ctx, base);
loc_82D72AB0:
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72AD8;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r5,r11,16496
	ctx.r5.s64 = ctx.r11.s64 + 16496;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72AEC;
	sub_82D726D8(ctx, base);
	// lwz r10,548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72b08
	if (cr6.lt) goto loc_82D72B08;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x825952b8
	ctx.lr = 0x82D72B08;
	sub_825952B8(ctx, base);
loc_82D72B08:
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72B30;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r5,r11,16952
	ctx.r5.s64 = ctx.r11.s64 + 16952;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72B44;
	sub_82D726D8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72b60
	if (cr6.lt) goto loc_82D72B60;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x82D72B60;
	sub_825952B8(ctx, base);
loc_82D72B60:
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r30,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72B88;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r5,r11,6448
	ctx.r5.s64 = ctx.r11.s64 + 6448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72B9C;
	sub_82D726D8(ctx, base);
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72bb8
	if (cr6.lt) goto loc_82D72BB8;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x825952b8
	ctx.lr = 0x82D72BB8;
	sub_825952B8(ctx, base);
loc_82D72BB8:
	// stw r30,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72BE0;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r5,r11,6672
	ctx.r5.s64 = ctx.r11.s64 + 6672;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72BF4;
	sub_82D726D8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72c10
	if (cr6.lt) goto loc_82D72C10;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82D72C10;
	sub_825952B8(ctx, base);
loc_82D72C10:
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72C38;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r5,r11,9608
	ctx.r5.s64 = ctx.r11.s64 + 9608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72C4C;
	sub_82D726D8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72c68
	if (cr6.lt) goto loc_82D72C68;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82D72C68;
	sub_825952B8(ctx, base);
loc_82D72C68:
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72C90;
	sub_8259CC28(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r5,r11,-29184
	ctx.r5.s64 = ctx.r11.s64 + -29184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72CA4;
	sub_82D726D8(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72cc0
	if (cr6.lt) goto loc_82D72CC0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82D72CC0;
	sub_825952B8(ctx, base);
loc_82D72CC0:
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72CE8;
	sub_8259CC28(ctx, base);
	// lis r11,-32041
	ctx.r11.s64 = -2099838976;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r5,r11,-19080
	ctx.r5.s64 = ctx.r11.s64 + -19080;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72CFC;
	sub_82D726D8(ctx, base);
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72d18
	if (cr6.lt) goto loc_82D72D18;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x82D72D18;
	sub_825952B8(ctx, base);
loc_82D72D18:
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72D40;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r5,r11,6896
	ctx.r5.s64 = ctx.r11.s64 + 6896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72D54;
	sub_82D726D8(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72d70
	if (cr6.lt) goto loc_82D72D70;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x825952b8
	ctx.lr = 0x82D72D70;
	sub_825952B8(ctx, base);
loc_82D72D70:
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r30,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72D98;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r5,r11,7400
	ctx.r5.s64 = ctx.r11.s64 + 7400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72DAC;
	sub_82D726D8(ctx, base);
	// lwz r10,516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72dc8
	if (cr6.lt) goto loc_82D72DC8;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x825952b8
	ctx.lr = 0x82D72DC8;
	sub_825952B8(ctx, base);
loc_82D72DC8:
	// stw r30,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r30,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r30.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D72DF0;
	sub_8259CC28(ctx, base);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r5,r11,7800
	ctx.r5.s64 = ctx.r11.s64 + 7800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d726d8
	ctx.lr = 0x82D72E04;
	sub_82D726D8(ctx, base);
	// lwz r10,580(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d72e20
	if (cr6.lt) goto loc_82D72E20;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x825952b8
	ctx.lr = 0x82D72E20;
	sub_825952B8(ctx, base);
loc_82D72E20:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D72E28"))) PPC_WEAK_FUNC(sub_82D72E28);
PPC_FUNC_IMPL(__imp__sub_82D72E28) {
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
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r9,-30196
	ctx.r4.s64 = ctx.r9.s64 + -30196;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82D72E64;
	sub_8259CC28(ctx, base);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,-30024(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r8.u32 + -30024);
	// bl 0x82d727c0
	ctx.lr = 0x82D72E78;
	sub_82D727C0(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82d72e98
	if (cr6.lt) goto loc_82D72E98;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D72E98;
	sub_825952B8(ctx, base);
loc_82D72E98:
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

__attribute__((alias("__imp__sub_82D72EAC"))) PPC_WEAK_FUNC(sub_82D72EAC);
PPC_FUNC_IMPL(__imp__sub_82D72EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D72EB0"))) PPC_WEAK_FUNC(sub_82D72EB0);
PPC_FUNC_IMPL(__imp__sub_82D72EB0) {
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
	// li r10,10
	ctx.r10.s64 = 10;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// bl 0x82d72938
	ctx.lr = 0x82D72F10;
	sub_82D72938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d72e28
	ctx.lr = 0x82D72F18;
	sub_82D72E28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d714c8
	ctx.lr = 0x82D72F20;
	sub_82D714C8(ctx, base);
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

__attribute__((alias("__imp__sub_82D72F38"))) PPC_WEAK_FUNC(sub_82D72F38);
PPC_FUNC_IMPL(__imp__sub_82D72F38) {
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
	// bl 0x82d6ba98
	ctx.lr = 0x82D72F58;
	sub_82D6BA98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d728b0
	ctx.lr = 0x82D72F64;
	sub_82D728B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d721e0
	ctx.lr = 0x82D72F70;
	sub_82D721E0(ctx, base);
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

__attribute__((alias("__imp__sub_82D72F88"))) PPC_WEAK_FUNC(sub_82D72F88);
PPC_FUNC_IMPL(__imp__sub_82D72F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82D72F90;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x82d70350
	ctx.lr = 0x82D72FE8;
	sub_82D70350(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// addi r4,r24,28
	ctx.r4.s64 = ctx.r24.s64 + 28;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cb28
	ctx.lr = 0x82D73010;
	sub_8259CB28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r20,192(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82d6ba98
	ctx.lr = 0x82D73020;
	sub_82D6BA98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82d728b0
	ctx.lr = 0x82D7302C;
	sub_82D728B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82d721e0
	ctx.lr = 0x82D73038;
	sub_82D721E0(ctx, base);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r24,56
	ctx.r4.s64 = ctx.r24.s64 + 56;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cb28
	ctx.lr = 0x82D73058;
	sub_8259CB28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82d71e10
	ctx.lr = 0x82D7306C;
	sub_82D71E10(ctx, base);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cb28
	ctx.lr = 0x82D7308C;
	sub_8259CB28(ctx, base);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d71e10
	ctx.lr = 0x82D730A0;
	sub_82D71E10(ctx, base);
	// lwz r17,160(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r16,164(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r14,2
	ctx.r14.s64 = 2;
	// subf r10,r17,r16
	ctx.r10.s64 = ctx.r16.s64 - ctx.r17.s64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// divw r25,r10,r11
	ctx.r25.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// lwz r15,148(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r19,144(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// ble cr6,0x82d73178
	if (!cr6.gt) goto loc_82D73178;
	// subf r10,r19,r15
	ctx.r10.s64 = ctx.r15.s64 - ctx.r19.s64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// divw r18,r10,r11
	ctx.r18.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// subf r21,r19,r17
	ctx.r21.s64 = ctx.r17.s64 - ctx.r19.s64;
loc_82D730DC:
	// cmplw cr6,r18,r26
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r26.u32, xer);
	// ble cr6,0x82d7328c
	if (!cr6.gt) goto loc_82D7328C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d730f8
	if (cr6.lt) goto loc_82D730F8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82d730fc
	goto loc_82D730FC;
loc_82D730F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82D730FC:
	// bl 0x831d82e8
	ctx.lr = 0x82D73100;
	sub_831D82E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// ble cr6,0x82d73298
	if (!cr6.gt) goto loc_82D73298;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// add r4,r21,r28
	ctx.r4.u64 = ctx.r21.u64 + ctx.r28.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cb28
	ctx.lr = 0x82D7312C;
	sub_8259CB28(ctx, base);
	// stfd f31,304(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.f31.u64);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d720f0
	ctx.lr = 0x82D7313C;
	sub_82D720F0(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d73158
	if (cr6.lt) goto loc_82D73158;
	// stw r14,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82D73158;
	sub_825952B8(ctx, base);
loc_82D73158:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// cmpw cr6,r26,r25
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, xer);
	// blt cr6,0x82d730dc
	if (cr6.lt) goto loc_82D730DC;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82D73178:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d71828
	ctx.lr = 0x82D73188;
	sub_82D71828(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subf r4,r11,r22
	ctx.r4.s64 = ctx.r22.s64 - ctx.r11.s64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// bl 0x827a7fd0
	ctx.lr = 0x82D731AC;
	sub_827A7FD0(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d731c8
	if (cr6.lt) goto loc_82D731C8;
	// stw r14,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82D731C8;
	sub_825952B8(ctx, base);
loc_82D731C8:
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
	// blt cr6,0x82d731f0
	if (cr6.lt) goto loc_82D731F0;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82D731F0;
	sub_825952B8(ctx, base);
loc_82D731F0:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// beq cr6,0x82d73228
	if (cr6.eq) goto loc_82D73228;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x838adab0
	ctx.lr = 0x82D73218;
	sub_838ADAB0(ctx, base);
	// stw r14,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825952b8
	ctx.lr = 0x82D73228;
	sub_825952B8(ctx, base);
loc_82D73228:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x82d73254
	if (cr6.eq) goto loc_82D73254;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x838adab0
	ctx.lr = 0x82D73244;
	sub_838ADAB0(ctx, base);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82D73254;
	sub_825952B8(ctx, base);
loc_82D73254:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82d73280
	if (cr6.eq) goto loc_82D73280;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82cbd208
	ctx.lr = 0x82D73270;
	sub_82CBD208(ctx, base);
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82D73280;
	sub_825952B8(ctx, base);
loc_82D73280:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82D7328C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D73298;
	sub_831CC188(ctx, base);
loc_82D73298:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D732A4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82D732A4"))) PPC_WEAK_FUNC(sub_82D732A4);
PPC_FUNC_IMPL(__imp__sub_82D732A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D732A8"))) PPC_WEAK_FUNC(sub_82D732A8);
PPC_FUNC_IMPL(__imp__sub_82D732A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D732B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,68(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r4,68
	ctx.r29.s64 = ctx.r4.s64 + 68;
	// lwz r4,72(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d732f8
	if (cr6.eq) goto loc_82D732F8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ee4770
	ctx.lr = 0x82D732E0;
	sub_82EE4770(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82ee46e0
	ctx.lr = 0x82D732F4;
	sub_82EE46E0(ctx, base);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
loc_82D732F8:
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d71828
	ctx.lr = 0x82D73308;
	sub_82D71828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d6bd20
	ctx.lr = 0x82D73314;
	sub_82D6BD20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d6ba98
	ctx.lr = 0x82D73320;
	sub_82D6BA98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d728b0
	ctx.lr = 0x82D7332C;
	sub_82D728B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d721e0
	ctx.lr = 0x82D73338;
	sub_82D721E0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D73360;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d73380
	if (cr6.lt) goto loc_82D73380;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D73380;
	sub_825952B8(ctx, base);
loc_82D73380:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D73398"))) PPC_WEAK_FUNC(sub_82D73398);
PPC_FUNC_IMPL(__imp__sub_82D73398) {
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
	// bl 0x82d641d8
	ctx.lr = 0x82D733B0;
	sub_82D641D8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-29884
	ctx.r10.s64 = ctx.r11.s64 + -29884;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D733D4"))) PPC_WEAK_FUNC(sub_82D733D4);
PPC_FUNC_IMPL(__imp__sub_82D733D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D733D8"))) PPC_WEAK_FUNC(sub_82D733D8);
PPC_FUNC_IMPL(__imp__sub_82D733D8) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-29884
	ctx.r10.s64 = ctx.r11.s64 + -29884;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d63d40
	ctx.lr = 0x82D73404;
	sub_82D63D40(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d7341c
	if (cr6.eq) goto loc_82D7341C;
	// bl 0x82416268
	ctx.lr = 0x82D73418;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D7341C:
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

__attribute__((alias("__imp__sub_82D73434"))) PPC_WEAK_FUNC(sub_82D73434);
PPC_FUNC_IMPL(__imp__sub_82D73434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73438"))) PPC_WEAK_FUNC(sub_82D73438);
PPC_FUNC_IMPL(__imp__sub_82D73438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D73440;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,72(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r29,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x82d73498
	if (!cr0.gt) goto loc_82D73498;
loc_82D73464:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d632c0
	ctx.lr = 0x82D73470;
	sub_82D632C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7348c
	if (cr6.eq) goto loc_82D7348C;
	// bl 0x82d63c28
	ctx.lr = 0x82D7347C;
	sub_82D63C28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d7348c
	if (cr6.eq) goto loc_82D7348C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82D7348C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x82d73464
	if (cr6.lt) goto loc_82D73464;
loc_82D73498:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D734A4"))) PPC_WEAK_FUNC(sub_82D734A4);
PPC_FUNC_IMPL(__imp__sub_82D734A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D734A8"))) PPC_WEAK_FUNC(sub_82D734A8);
PPC_FUNC_IMPL(__imp__sub_82D734A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d64b90
	ctx.lr = 0x82D734C8;
	sub_82D64B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d73438
	ctx.lr = 0x82D734D0;
	sub_82D73438(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82d734f8
	if (cr6.eq) goto loc_82D734F8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// ble cr6,0x82d73564
	if (!cr6.gt) goto loc_82D73564;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bgt cr6,0x82d73564
	if (cr6.gt) goto loc_82D73564;
loc_82D734F8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82d73568
	if (cr6.eq) goto loc_82D73568;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// twllei r11,0
	// lhz r6,14(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 14);
	// lwz r7,92(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lhz r5,10(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// mullw r6,r4,r9
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lhz r8,6(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// subf r4,r6,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r6.s64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r6,r7,r11
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r11.s32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// sth r6,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r6.u16);
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// twlgei r11,-1
	// b 0x82d73568
	goto loc_82D73568;
loc_82D73564:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D73568:
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

__attribute__((alias("__imp__sub_82D73580"))) PPC_WEAK_FUNC(sub_82D73580);
PPC_FUNC_IMPL(__imp__sub_82D73580) {
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
	// bl 0x82d641d8
	ctx.lr = 0x82D73598;
	sub_82D641D8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-29708
	ctx.r10.s64 = ctx.r11.s64 + -29708;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D735BC"))) PPC_WEAK_FUNC(sub_82D735BC);
PPC_FUNC_IMPL(__imp__sub_82D735BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D735C0"))) PPC_WEAK_FUNC(sub_82D735C0);
PPC_FUNC_IMPL(__imp__sub_82D735C0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-29708
	ctx.r10.s64 = ctx.r11.s64 + -29708;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d63d40
	ctx.lr = 0x82D735EC;
	sub_82D63D40(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d73604
	if (cr6.eq) goto loc_82D73604;
	// bl 0x82416268
	ctx.lr = 0x82D73600;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D73604:
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

__attribute__((alias("__imp__sub_82D7361C"))) PPC_WEAK_FUNC(sub_82D7361C);
PPC_FUNC_IMPL(__imp__sub_82D7361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73620"))) PPC_WEAK_FUNC(sub_82D73620);
PPC_FUNC_IMPL(__imp__sub_82D73620) {
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
	// bl 0x82d641d8
	ctx.lr = 0x82D73638;
	sub_82D641D8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-29508
	ctx.r10.s64 = ctx.r11.s64 + -29508;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D7365C"))) PPC_WEAK_FUNC(sub_82D7365C);
PPC_FUNC_IMPL(__imp__sub_82D7365C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73660"))) PPC_WEAK_FUNC(sub_82D73660);
PPC_FUNC_IMPL(__imp__sub_82D73660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhz r4,6(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// subf r9,r3,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r3.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D7369C"))) PPC_WEAK_FUNC(sub_82D7369C);
PPC_FUNC_IMPL(__imp__sub_82D7369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D736A0"))) PPC_WEAK_FUNC(sub_82D736A0);
PPC_FUNC_IMPL(__imp__sub_82D736A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D736DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D736F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
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

__attribute__((alias("__imp__sub_82D73718"))) PPC_WEAK_FUNC(sub_82D73718);
PPC_FUNC_IMPL(__imp__sub_82D73718) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-29508
	ctx.r10.s64 = ctx.r11.s64 + -29508;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d63d40
	ctx.lr = 0x82D73744;
	sub_82D63D40(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d7375c
	if (cr6.eq) goto loc_82D7375C;
	// bl 0x82416268
	ctx.lr = 0x82D73758;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D7375C:
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

__attribute__((alias("__imp__sub_82D73774"))) PPC_WEAK_FUNC(sub_82D73774);
PPC_FUNC_IMPL(__imp__sub_82D73774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73778"))) PPC_WEAK_FUNC(sub_82D73778);
PPC_FUNC_IMPL(__imp__sub_82D73778) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x82d632c0
	ctx.lr = 0x82D737A0;
	sub_82D632C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d737b8
	if (!cr6.eq) goto loc_82D737B8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D737B8:
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D737E0"))) PPC_WEAK_FUNC(sub_82D737E0);
PPC_FUNC_IMPL(__imp__sub_82D737E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d73800
	if (cr6.lt) goto loc_82D73800;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D73800:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_82D73818:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d73818
	if (!cr6.eq) goto loc_82D73818;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D7383C;
	sub_8259CC28(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r10,-29604
	ctx.r4.s64 = ctx.r10.s64 + -29604;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x82D73854;
	sub_82574D38(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82d73890
	if (!cr6.eq) goto loc_82D73890;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d7387c
	if (cr6.lt) goto loc_82D7387C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D7387C;
	sub_825952B8(ctx, base);
loc_82D7387C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D73890:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d738ac
	if (cr6.lt) goto loc_82D738AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D738AC;
	sub_825952B8(ctx, base);
loc_82D738AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D738C0"))) PPC_WEAK_FUNC(sub_82D738C0);
PPC_FUNC_IMPL(__imp__sub_82D738C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D738C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r29,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x82d73930
	if (cr0.eq) goto loc_82D73930;
loc_82D738F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82d632c0
	ctx.lr = 0x82D738FC;
	sub_82D632C0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d73924
	if (cr6.eq) goto loc_82D73924;
	// bl 0x82d737e0
	ctx.lr = 0x82D7390C;
	sub_82D737E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d73924
	if (cr6.eq) goto loc_82D73924;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835977d8
	ctx.lr = 0x82D73924;
	sub_835977D8(ctx, base);
loc_82D73924:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82d738f0
	if (cr6.lt) goto loc_82D738F0;
loc_82D73930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D73938"))) PPC_WEAK_FUNC(sub_82D73938);
PPC_FUNC_IMPL(__imp__sub_82D73938) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82d738c0
	ctx.lr = 0x82D73960;
	sub_82D738C0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82d739a4
	if (!cr0.eq) goto loc_82D739A4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d7398c
	if (cr6.eq) goto loc_82D7398C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D7398C;
	sub_825952B8(ctx, base);
loc_82D7398C:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82D739A4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d739b8
	if (!cr6.eq) goto loc_82D739B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D739B8;
	sub_831CC188(ctx, base);
loc_82D739B8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// bl 0x825952b8
	ctx.lr = 0x82D739D4;
	sub_825952B8(ctx, base);
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

__attribute__((alias("__imp__sub_82D739EC"))) PPC_WEAK_FUNC(sub_82D739EC);
PPC_FUNC_IMPL(__imp__sub_82D739EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D739F0"))) PPC_WEAK_FUNC(sub_82D739F0);
PPC_FUNC_IMPL(__imp__sub_82D739F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,92(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lhz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// bl 0x82d738c0
	ctx.lr = 0x82D73A34;
	sub_82D738C0(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bge cr6,0x82d73aec
	if (!cr6.lt) goto loc_82D73AEC;
	// subf r11,r4,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82D73A5C:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// bne cr6,0x82d73a9c
	if (!cr6.eq) goto loc_82D73A9C;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
	// b 0x82d73ae4
	goto loc_82D73AE4;
loc_82D73A9C:
	// lwz r9,-4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bne cr6,0x82d73ac8
	if (!cr6.eq) goto loc_82D73AC8;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
	// b 0x82d73ae4
	goto loc_82D73AE4;
loc_82D73AC8:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
loc_82D73AE4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82d73a5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D73A5C;
loc_82D73AEC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d73b04
	if (cr6.eq) goto loc_82D73B04;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D73B04;
	sub_825952B8(ctx, base);
loc_82D73B04:
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

__attribute__((alias("__imp__sub_82D73B1C"))) PPC_WEAK_FUNC(sub_82D73B1C);
PPC_FUNC_IMPL(__imp__sub_82D73B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73B20"))) PPC_WEAK_FUNC(sub_82D73B20);
PPC_FUNC_IMPL(__imp__sub_82D73B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D73B28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,72(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-29616
	ctx.r4.s64 = ctx.r11.s64 + -29616;
	// bl 0x82d63520
	ctx.lr = 0x82D73B44;
	sub_82D63520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d73b5c
	if (cr6.eq) goto loc_82D73B5C;
	// bl 0x831d88a0
	ctx.lr = 0x82D73B50;
	sub_831D88A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d73b74
	if (!cr6.eq) goto loc_82D73B74;
loc_82D73B5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D73B74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d739f0
	ctx.lr = 0x82D73B80;
	sub_82D739F0(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// twllei r31,0
	// twllei r31,0
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// divwu r4,r5,r31
	ctx.r4.u32 = PPCDivide(ctx.r5.u32, ctx.r31.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// divwu r11,r3,r31
	ctx.r11.u32 = PPCDivide(ctx.r3.u32, ctx.r31.u32);
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r29.u16);
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// subf. r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82d73bdc
	if (cr0.eq) goto loc_82D73BDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d73778
	ctx.lr = 0x82D73BD4;
	sub_82D73778(ctx, base);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
loc_82D73BDC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D73BF0"))) PPC_WEAK_FUNC(sub_82D73BF0);
PPC_FUNC_IMPL(__imp__sub_82D73BF0) {
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
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82d73c64
	if (cr6.gt) goto loc_82D73C64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d73c64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D73C64;
	// bdzf 4*cr6+eq,0x82d73c4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D73C4C;
	// bdzf 4*cr6+eq,0x82d73c40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D73C40;
	// bdzf 4*cr6+eq,0x82d73c40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D73C40;
	// bne cr6,0x82d73c40
	if (!cr6.eq) goto loc_82D73C40;
loc_82D73C40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d739f0
	ctx.lr = 0x82D73C48;
	sub_82D739F0(ctx, base);
	// b 0x82d73c54
	goto loc_82D73C54;
loc_82D73C4C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d73b20
	ctx.lr = 0x82D73C54;
	sub_82D73B20(ctx, base);
loc_82D73C54:
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_82D73C64:
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

__attribute__((alias("__imp__sub_82D73C7C"))) PPC_WEAK_FUNC(sub_82D73C7C);
PPC_FUNC_IMPL(__imp__sub_82D73C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73C80"))) PPC_WEAK_FUNC(sub_82D73C80);
PPC_FUNC_IMPL(__imp__sub_82D73C80) {
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
	// bl 0x82d641d8
	ctx.lr = 0x82D73C98;
	sub_82D641D8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-29332
	ctx.r10.s64 = ctx.r11.s64 + -29332;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D73CBC"))) PPC_WEAK_FUNC(sub_82D73CBC);
PPC_FUNC_IMPL(__imp__sub_82D73CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73CC0"))) PPC_WEAK_FUNC(sub_82D73CC0);
PPC_FUNC_IMPL(__imp__sub_82D73CC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lhz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwz r7,92(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lhz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lhz r9,6(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r10,r8,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D73D08"))) PPC_WEAK_FUNC(sub_82D73D08);
PPC_FUNC_IMPL(__imp__sub_82D73D08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D73D44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// bl 0x82d63210
	ctx.lr = 0x82D73D54;
	sub_82D63210(ctx, base);
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
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

__attribute__((alias("__imp__sub_82D73D74"))) PPC_WEAK_FUNC(sub_82D73D74);
PPC_FUNC_IMPL(__imp__sub_82D73D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73D78"))) PPC_WEAK_FUNC(sub_82D73D78);
PPC_FUNC_IMPL(__imp__sub_82D73D78) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-29332
	ctx.r10.s64 = ctx.r11.s64 + -29332;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d63d40
	ctx.lr = 0x82D73DA4;
	sub_82D63D40(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d73dbc
	if (cr6.eq) goto loc_82D73DBC;
	// bl 0x82416268
	ctx.lr = 0x82D73DB8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D73DBC:
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

__attribute__((alias("__imp__sub_82D73DD4"))) PPC_WEAK_FUNC(sub_82D73DD4);
PPC_FUNC_IMPL(__imp__sub_82D73DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73DD8"))) PPC_WEAK_FUNC(sub_82D73DD8);
PPC_FUNC_IMPL(__imp__sub_82D73DD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831021a0
	ctx.lr = 0x82D73DF4;
	sub_831021A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d73e54
	if (cr6.eq) goto loc_82D73E54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d74890
	ctx.lr = 0x82D73E0C;
	sub_82D74890(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d73e20
	if (cr6.lt) goto loc_82D73E20;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d73e24
	goto loc_82D73E24;
loc_82D73E20:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82D73E24:
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x83102a08
	ctx.lr = 0x82D73E34;
	sub_83102A08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d73e54
	if (cr6.lt) goto loc_82D73E54;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D73E54;
	sub_825952B8(ctx, base);
loc_82D73E54:
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

__attribute__((alias("__imp__sub_82D73E6C"))) PPC_WEAK_FUNC(sub_82D73E6C);
PPC_FUNC_IMPL(__imp__sub_82D73E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73E70"))) PPC_WEAK_FUNC(sub_82D73E70);
PPC_FUNC_IMPL(__imp__sub_82D73E70) {
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
	// bl 0x831021a0
	ctx.lr = 0x82D73E84;
	sub_831021A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d73ee0
	if (cr6.eq) goto loc_82D73EE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d746c0
	ctx.lr = 0x82D73E9C;
	sub_82D746C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d73eb0
	if (!cr6.lt) goto loc_82D73EB0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82D73EB0:
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,13
	ctx.r4.u64 = ctx.r4.u64 | 13;
	// bl 0x83102a08
	ctx.lr = 0x82D73EC0;
	sub_83102A08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d73ee0
	if (cr6.lt) goto loc_82D73EE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D73EE0;
	sub_825952B8(ctx, base);
loc_82D73EE0:
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

__attribute__((alias("__imp__sub_82D73EF4"))) PPC_WEAK_FUNC(sub_82D73EF4);
PPC_FUNC_IMPL(__imp__sub_82D73EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D73EF8"))) PPC_WEAK_FUNC(sub_82D73EF8);
PPC_FUNC_IMPL(__imp__sub_82D73EF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831021a0
	ctx.lr = 0x82D73F14;
	sub_831021A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d73f78
	if (cr6.eq) goto loc_82D73F78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d741e0
	ctx.lr = 0x82D73F28;
	sub_82D741E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d746c0
	ctx.lr = 0x82D73F34;
	sub_82D746C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d73f48
	if (!cr6.lt) goto loc_82D73F48;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82D73F48:
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,13
	ctx.r4.u64 = ctx.r4.u64 | 13;
	// bl 0x83102a08
	ctx.lr = 0x82D73F58;
	sub_83102A08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d73f78
	if (cr6.lt) goto loc_82D73F78;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D73F78;
	sub_825952B8(ctx, base);
loc_82D73F78:
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

__attribute__((alias("__imp__sub_82D73F90"))) PPC_WEAK_FUNC(sub_82D73F90);
PPC_FUNC_IMPL(__imp__sub_82D73F90) {
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
	// bl 0x831021a0
	ctx.lr = 0x82D73FA4;
	sub_831021A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d74000
	if (cr6.eq) goto loc_82D74000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d746c0
	ctx.lr = 0x82D73FBC;
	sub_82D746C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d73fd0
	if (!cr6.lt) goto loc_82D73FD0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82D73FD0:
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,12
	ctx.r4.u64 = ctx.r4.u64 | 12;
	// bl 0x83102a08
	ctx.lr = 0x82D73FE0;
	sub_83102A08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d74000
	if (cr6.lt) goto loc_82D74000;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D74000;
	sub_825952B8(ctx, base);
loc_82D74000:
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

__attribute__((alias("__imp__sub_82D74014"))) PPC_WEAK_FUNC(sub_82D74014);
PPC_FUNC_IMPL(__imp__sub_82D74014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74018"))) PPC_WEAK_FUNC(sub_82D74018);
PPC_FUNC_IMPL(__imp__sub_82D74018) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831021a0
	ctx.lr = 0x82D74034;
	sub_831021A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d74098
	if (cr6.eq) goto loc_82D74098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d741e0
	ctx.lr = 0x82D74048;
	sub_82D741E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d746c0
	ctx.lr = 0x82D74054;
	sub_82D746C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d74068
	if (!cr6.lt) goto loc_82D74068;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82D74068:
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,12
	ctx.r4.u64 = ctx.r4.u64 | 12;
	// bl 0x83102a08
	ctx.lr = 0x82D74078;
	sub_83102A08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d74098
	if (cr6.lt) goto loc_82D74098;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D74098;
	sub_825952B8(ctx, base);
loc_82D74098:
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

__attribute__((alias("__imp__sub_82D740B0"))) PPC_WEAK_FUNC(sub_82D740B0);
PPC_FUNC_IMPL(__imp__sub_82D740B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831021a0
	ctx.lr = 0x82D740CC;
	sub_831021A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d74130
	if (cr6.eq) goto loc_82D74130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d741e0
	ctx.lr = 0x82D740E0;
	sub_82D741E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d746c0
	ctx.lr = 0x82D740EC;
	sub_82D746C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d74100
	if (!cr6.lt) goto loc_82D74100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82D74100:
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,14
	ctx.r4.u64 = ctx.r4.u64 | 14;
	// bl 0x83102a08
	ctx.lr = 0x82D74110;
	sub_83102A08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d74130
	if (cr6.lt) goto loc_82D74130;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D74130;
	sub_825952B8(ctx, base);
loc_82D74130:
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

__attribute__((alias("__imp__sub_82D74148"))) PPC_WEAK_FUNC(sub_82D74148);
PPC_FUNC_IMPL(__imp__sub_82D74148) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831021a0
	ctx.lr = 0x82D74164;
	sub_831021A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d741c8
	if (cr6.eq) goto loc_82D741C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d741e0
	ctx.lr = 0x82D74178;
	sub_82D741E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d746c0
	ctx.lr = 0x82D74184;
	sub_82D746C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d74198
	if (!cr6.lt) goto loc_82D74198;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82D74198:
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,15
	ctx.r4.u64 = ctx.r4.u64 | 15;
	// bl 0x83102a08
	ctx.lr = 0x82D741A8;
	sub_83102A08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d741c8
	if (cr6.lt) goto loc_82D741C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D741C8;
	sub_825952B8(ctx, base);
loc_82D741C8:
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

__attribute__((alias("__imp__sub_82D741E0"))) PPC_WEAK_FUNC(sub_82D741E0);
PPC_FUNC_IMPL(__imp__sub_82D741E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r10,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r10.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r10,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r10.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r6,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r6.u32);
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// stw r4,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// stw r9,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
loc_82D74244:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// beq cr6,0x82d74268
	if (cr6.eq) goto loc_82D74268;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x82d74244
	if (cr6.lt) goto loc_82D74244;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82D74268:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,-60
	ctx.r10.s64 = ctx.r1.s64 + -60;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74278"))) PPC_WEAK_FUNC(sub_82D74278);
PPC_FUNC_IMPL(__imp__sub_82D74278) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74280"))) PPC_WEAK_FUNC(sub_82D74280);
PPC_FUNC_IMPL(__imp__sub_82D74280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D74288;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,16(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x82d742c4
	if (!cr6.gt) goto loc_82D742C4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// subf r28,r29,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bgt cr6,0x82d742c8
	if (cr6.gt) goto loc_82D742C8;
loc_82D742C4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82D742C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82470cf8
	ctx.lr = 0x82D742D4;
	sub_82470CF8(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d742e8
	if (!cr6.eq) goto loc_82D742E8;
	// li r27,4
	ctx.r27.s64 = 4;
	// b 0x82d74494
	goto loc_82D74494;
loc_82D742E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r8,r9,0,23,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C0;
	// cmpwi cr6,r8,64
	cr6.compare<int32_t>(ctx.r8.s32, 64, xer);
	// beq cr6,0x82d74394
	if (cr6.eq) goto loc_82D74394;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82d74394
	if (cr6.eq) goto loc_82D74394;
loc_82D7430C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d7436c
	if (cr6.eq) goto loc_82D7436C;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82d7436c
	if (!cr6.gt) goto loc_82D7436C;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82d74384
	goto loc_82D74384;
loc_82D7436C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D74384;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D74384:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d743a8
	if (cr6.eq) goto loc_82D743A8;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x82d7430c
	if (!cr0.eq) goto loc_82D7430C;
loc_82D74394:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d74414
	if (cr6.lt) goto loc_82D74414;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d74418
	goto loc_82D74418;
loc_82D743A8:
	// li r27,4
	ctx.r27.s64 = 4;
loc_82D743AC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82d74480
	if (cr6.eq) goto loc_82D74480;
loc_82D743B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d74450
	if (cr6.eq) goto loc_82D74450;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82d74450
	if (!cr6.gt) goto loc_82D74450;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82d74468
	goto loc_82D74468;
loc_82D74414:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D74418:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrldi r30,r29,32
	ctx.r30.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D74440;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpd cr6,r3,r30
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r30.s64, xer);
	// beq cr6,0x82d743ac
	if (cr6.eq) goto loc_82D743AC;
	// li r27,4
	ctx.r27.s64 = 4;
	// b 0x82d74480
	goto loc_82D74480;
loc_82D74450:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D74468;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D74468:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d7447c
	if (cr6.eq) goto loc_82D7447C;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x82d743b4
	if (!cr0.eq) goto loc_82D743B4;
	// b 0x82d74480
	goto loc_82D74480;
loc_82D7447C:
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
loc_82D74480:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// std r10,32(r9)
	PPC_STORE_U64(ctx.r9.u32 + 32, ctx.r10.u64);
loc_82D74494:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82d744cc
	if (cr6.eq) goto loc_82D744CC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d744c0
	if (!cr6.eq) goto loc_82D744C0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82D744C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8246c218
	ctx.lr = 0x82D744CC;
	sub_8246C218(ctx, base);
loc_82D744CC:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82d744f4
	if (cr6.eq) goto loc_82D744F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82470818
	ctx.lr = 0x82D744F4;
	sub_82470818(ctx, base);
loc_82D744F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d7451c
	if (cr6.eq) goto loc_82D7451C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7451C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7451C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D74528"))) PPC_WEAK_FUNC(sub_82D74528);
PPC_FUNC_IMPL(__imp__sub_82D74528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D74530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d74590
	if (cr6.eq) goto loc_82D74590;
loc_82D74548:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D74550:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d74550
	if (!cr6.eq) goto loc_82D74550;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D7457C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d74590
	if (cr6.eq) goto loc_82D74590;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d74548
	if (!cr6.eq) goto loc_82D74548;
loc_82D74590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D7459C"))) PPC_WEAK_FUNC(sub_82D7459C);
PPC_FUNC_IMPL(__imp__sub_82D7459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D745A0"))) PPC_WEAK_FUNC(sub_82D745A0);
PPC_FUNC_IMPL(__imp__sub_82D745A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D745A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82470cf8
	ctx.lr = 0x82D745C4;
	sub_82470CF8(ctx, base);
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d74670
	if (cr6.eq) goto loc_82D74670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8246bb28
	ctx.lr = 0x82D745E4;
	sub_8246BB28(ctx, base);
	// bl 0x824714d8
	ctx.lr = 0x82D745E8;
	sub_824714D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d7461c
	if (cr6.eq) goto loc_82D7461C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8246b968
	ctx.lr = 0x82D74600;
	sub_8246B968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d7461c
	if (cr6.eq) goto loc_82D7461C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D7461C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D7461C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,32(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lbz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bctrl 
	ctx.lr = 0x82D74660;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d74670
	if (cr6.eq) goto loc_82D74670;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82D74670:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82d746a8
	if (cr6.eq) goto loc_82D746A8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d7469c
	if (!cr6.eq) goto loc_82D7469C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82D7469C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8246c218
	ctx.lr = 0x82D746A8;
	sub_8246C218(ctx, base);
loc_82D746A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472f48
	ctx.lr = 0x82D746B0;
	sub_82472F48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D746BC"))) PPC_WEAK_FUNC(sub_82D746BC);
PPC_FUNC_IMPL(__imp__sub_82D746BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D746C0"))) PPC_WEAK_FUNC(sub_82D746C0);
PPC_FUNC_IMPL(__imp__sub_82D746C0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,2328
	ctx.r10.s64 = ctx.r11.s64 + 2328;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82D746E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x82d74708
	if (cr6.eq) goto loc_82D74708;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d746e0
	if (!cr6.eq) goto loc_82D746E0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-29105
	ctx.r4.s64 = ctx.r11.s64 + -29105;
	// b 0x82d74724
	goto loc_82D74724;
loc_82D74708:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d74720
	if (!cr6.eq) goto loc_82D74720;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-29105
	ctx.r4.s64 = ctx.r11.s64 + -29105;
	// b 0x82d74724
	goto loc_82D74724;
loc_82D74720:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82D74724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82D7472C;
	sub_837B0C10(ctx, base);
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

__attribute__((alias("__imp__sub_82D74744"))) PPC_WEAK_FUNC(sub_82D74744);
PPC_FUNC_IMPL(__imp__sub_82D74744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74748"))) PPC_WEAK_FUNC(sub_82D74748);
PPC_FUNC_IMPL(__imp__sub_82D74748) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,2328
	ctx.r31.s64 = ctx.r11.s64 + 2328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// bl 0x82d74528
	ctx.lr = 0x82D74770;
	sub_82D74528(ctx, base);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d74794
	if (!cr6.eq) goto loc_82D74794;
	// li r3,7
	ctx.r3.s64 = 7;
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
loc_82D74794:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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

__attribute__((alias("__imp__sub_82D747AC"))) PPC_WEAK_FUNC(sub_82D747AC);
PPC_FUNC_IMPL(__imp__sub_82D747AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D747B0"))) PPC_WEAK_FUNC(sub_82D747B0);
PPC_FUNC_IMPL(__imp__sub_82D747B0) {
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
	// li r11,7
	ctx.r11.s64 = 7;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-29043
	ctx.r4.s64 = ctx.r10.s64 + -29043;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8259cc28
	ctx.lr = 0x82D747EC;
	sub_8259CC28(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82D74810"))) PPC_WEAK_FUNC(sub_82D74810);
PPC_FUNC_IMPL(__imp__sub_82D74810) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r4,r8,-29043
	ctx.r4.s64 = ctx.r8.s64 + -29043;
	// bl 0x8259cc28
	ctx.lr = 0x82D74864;
	sub_8259CC28(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82D7488C"))) PPC_WEAK_FUNC(sub_82D7488C);
PPC_FUNC_IMPL(__imp__sub_82D7488C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74890"))) PPC_WEAK_FUNC(sub_82D74890);
PPC_FUNC_IMPL(__imp__sub_82D74890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D74898;
	__savegprlr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a8c428
	ctx.lr = 0x82D748B4;
	sub_82A8C428(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,-28448
	ctx.r31.s64 = ctx.r11.s64 + -28448;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r27,44(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r26,40(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r25,36(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lbz r24,4(r29)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82473550
	ctx.lr = 0x82D748E0;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82474050
	ctx.lr = 0x82D748E8;
	sub_82474050(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82473550
	ctx.lr = 0x82D748F0;
	sub_82473550(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d745a0
	ctx.lr = 0x82D748F8;
	sub_82D745A0(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82473550
	ctx.lr = 0x82D74900;
	sub_82473550(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d74280
	ctx.lr = 0x82D74908;
	sub_82D74280(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82473550
	ctx.lr = 0x82D74910;
	sub_82473550(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82474170
	ctx.lr = 0x82D74918;
	sub_82474170(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// bl 0x82473550
	ctx.lr = 0x82D74920;
	sub_82473550(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82474170
	ctx.lr = 0x82D74928;
	sub_82474170(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82473550
	ctx.lr = 0x82D74930;
	sub_82473550(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82474170
	ctx.lr = 0x82D74938;
	sub_82474170(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// bl 0x82473550
	ctx.lr = 0x82D74940;
	sub_82473550(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82D7494C;
	sub_82A79BF8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d74960
	if (!cr6.lt) goto loc_82D74960;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82D74960:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
loc_82D74978:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d74978
	if (!cr6.eq) goto loc_82D74978;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D7499C;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d749b0
	if (cr6.lt) goto loc_82D749B0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82D749B0;
	sub_82416268(ctx, base);
loc_82D749B0:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x82D749C4;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82D749D8;
	sub_831CCF00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D749E4"))) PPC_WEAK_FUNC(sub_82D749E4);
PPC_FUNC_IMPL(__imp__sub_82D749E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D749E8"))) PPC_WEAK_FUNC(sub_82D749E8);
PPC_FUNC_IMPL(__imp__sub_82D749E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D749F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r27,15
	ctx.r27.s64 = 15;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r27,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// bl 0x825359d8
	ctx.lr = 0x82D74A3C;
	sub_825359D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82539ae8
	ctx.lr = 0x82D74A44;
	sub_82539AE8(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
loc_82D74A54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d74a54
	if (!cr6.eq) goto loc_82D74A54;
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
	// bl 0x824208c8
	ctx.lr = 0x82D74A7C;
	sub_824208C8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8253a788
	ctx.lr = 0x82D74A90;
	sub_8253A788(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d74aa8
	if (cr6.lt) goto loc_82D74AA8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x82D74AA8;
	sub_8386D088(ctx, base);
loc_82D74AA8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// beq cr6,0x82d74b70
	if (cr6.eq) goto loc_82D74B70;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-28556
	ctx.r30.s64 = ctx.r11.s64 + -28556;
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// bl 0x82536d88
	ctx.lr = 0x82D74AD8;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82D74ADC;
	sub_825347E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82D74AEC;
	sub_82536D88(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x82D74AF0;
	sub_82534B10(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82D74B00;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82D74B04;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D74B0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d74b0c
	if (!cr6.eq) goto loc_82D74B0C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D74B30;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82D74B3C;
	sub_82536D88(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x82D74B40;
	sub_82534850(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82D74B50;
	sub_82536D88(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x82D74B54;
	sub_82534850(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x82D74B64;
	sub_82536D88(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x82D74B68;
	sub_82534850(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_82D74B70:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82450e18
	ctx.lr = 0x82D74B78;
	sub_82450E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82D74B80;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D74B8C"))) PPC_WEAK_FUNC(sub_82D74B8C);
PPC_FUNC_IMPL(__imp__sub_82D74B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74B90"))) PPC_WEAK_FUNC(sub_82D74B90);
PPC_FUNC_IMPL(__imp__sub_82D74B90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-18900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74BA8"))) PPC_WEAK_FUNC(sub_82D74BA8);
PPC_FUNC_IMPL(__imp__sub_82D74BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-18900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D74BC0"))) PPC_WEAK_FUNC(sub_82D74BC0);
PPC_FUNC_IMPL(__imp__sub_82D74BC0) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d74c10
	if (!cr6.eq) goto loc_82D74C10;
	// bl 0x82e6f960
	ctx.lr = 0x82D74BE4;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa50
	ctx.lr = 0x82D74BEC;
	sub_82E6FA50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d74c10
	if (cr6.eq) goto loc_82D74C10;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r11,-18900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18900, ctx.r11.u32);
loc_82D74C10:
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

__attribute__((alias("__imp__sub_82D74C24"))) PPC_WEAK_FUNC(sub_82D74C24);
PPC_FUNC_IMPL(__imp__sub_82D74C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D74C28"))) PPC_WEAK_FUNC(sub_82D74C28);
PPC_FUNC_IMPL(__imp__sub_82D74C28) {
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
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,-18900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18900, ctx.r11.u32);
	// lhz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d74c58
	if (cr6.eq) goto loc_82D74C58;
	// bl 0x82d39100
	ctx.lr = 0x82D74C58;
	sub_82D39100(ctx, base);
loc_82D74C58:
	// lbz r11,118(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 118);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d74c70
	if (!cr6.eq) goto loc_82D74C70;
	// bl 0x82d86078
	ctx.lr = 0x82D74C68;
	sub_82D86078(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82b80648
	ctx.lr = 0x82D74C70;
	sub_82B80648(ctx, base);
loc_82D74C70:
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

__attribute__((alias("__imp__sub_82D74C88"))) PPC_WEAK_FUNC(sub_82D74C88);
PPC_FUNC_IMPL(__imp__sub_82D74C88) {
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
	// bl 0x83103328
	ctx.lr = 0x82D74CA8;
	sub_83103328(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27124
	ctx.r9.s64 = ctx.r11.s64 + -27124;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// li r6,-4352
	ctx.r6.s64 = -4352;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// addi r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 + 120;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// sth r6,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r6.u16);
	// stb r11,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r11.u8);
	// stb r11,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r11.u8);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// beq cr6,0x82d74d24
	if (cr6.eq) goto loc_82D74D24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
loc_82D74D24:
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

