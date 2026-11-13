#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82561750"))) PPC_WEAK_FUNC(sub_82561750);
PPC_FUNC_IMPL(__imp__sub_82561750) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82532be0
	ctx.lr = 0x8256176C;
	sub_82532BE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8256178C"))) PPC_WEAK_FUNC(sub_8256178C);
PPC_FUNC_IMPL(__imp__sub_8256178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561790"))) PPC_WEAK_FUNC(sub_82561790);
PPC_FUNC_IMPL(__imp__sub_82561790) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82532ba0
	ctx.lr = 0x825617AC;
	sub_82532BA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825617CC"))) PPC_WEAK_FUNC(sub_825617CC);
PPC_FUNC_IMPL(__imp__sub_825617CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825617D0"))) PPC_WEAK_FUNC(sub_825617D0);
PPC_FUNC_IMPL(__imp__sub_825617D0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82532c20
	ctx.lr = 0x825617EC;
	sub_82532C20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8256180C"))) PPC_WEAK_FUNC(sub_8256180C);
PPC_FUNC_IMPL(__imp__sub_8256180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561810"))) PPC_WEAK_FUNC(sub_82561810);
PPC_FUNC_IMPL(__imp__sub_82561810) {
	PPC_FUNC_PROLOGUE();
	// b 0x82532c60
	sub_82532C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561814"))) PPC_WEAK_FUNC(sub_82561814);
PPC_FUNC_IMPL(__imp__sub_82561814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561818"))) PPC_WEAK_FUNC(sub_82561818);
PPC_FUNC_IMPL(__imp__sub_82561818) {
	PPC_FUNC_PROLOGUE();
	// b 0x82532d78
	sub_82532D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256181C"))) PPC_WEAK_FUNC(sub_8256181C);
PPC_FUNC_IMPL(__imp__sub_8256181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561820"))) PPC_WEAK_FUNC(sub_82561820);
PPC_FUNC_IMPL(__imp__sub_82561820) {
	PPC_FUNC_PROLOGUE();
	// b 0x82532e10
	sub_82532E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561824"))) PPC_WEAK_FUNC(sub_82561824);
PPC_FUNC_IMPL(__imp__sub_82561824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561828"))) PPC_WEAK_FUNC(sub_82561828);
PPC_FUNC_IMPL(__imp__sub_82561828) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561830"))) PPC_WEAK_FUNC(sub_82561830);
PPC_FUNC_IMPL(__imp__sub_82561830) {
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
	// addi r30,r11,12840
	ctx.r30.s64 = ctx.r11.s64 + 12840;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x831d3450
	ctx.lr = 0x82561858;
	sub_831D3450(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825618a8
	if (!cr6.eq) goto loc_825618A8;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3450
	ctx.lr = 0x8256186C;
	sub_831D3450(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825618a8
	if (!cr6.eq) goto loc_825618A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3450
	ctx.lr = 0x82561880;
	sub_831D3450(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825618a8
	if (!cr6.eq) goto loc_825618A8;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82561894;
	sub_831CEEB0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x825618c4
	if (!cr6.eq) goto loc_825618C4;
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_825618A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825618AC:
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
loc_825618C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825618ac
	goto loc_825618AC;
}

__attribute__((alias("__imp__sub_825618CC"))) PPC_WEAK_FUNC(sub_825618CC);
PPC_FUNC_IMPL(__imp__sub_825618CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825618D0"))) PPC_WEAK_FUNC(sub_825618D0);
PPC_FUNC_IMPL(__imp__sub_825618D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825618DC"))) PPC_WEAK_FUNC(sub_825618DC);
PPC_FUNC_IMPL(__imp__sub_825618DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825618E0"))) PPC_WEAK_FUNC(sub_825618E0);
PPC_FUNC_IMPL(__imp__sub_825618E0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8256191c
	if (cr6.eq) goto loc_8256191C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8256191c
	if (cr6.eq) goto loc_8256191C;
	// bl 0x82576620
	ctx.lr = 0x8256190C;
	sub_82576620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// bl 0x82532be0
	ctx.lr = 0x8256191C;
	sub_82532BE0(ctx, base);
loc_8256191C:
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

__attribute__((alias("__imp__sub_82561930"))) PPC_WEAK_FUNC(sub_82561930);
PPC_FUNC_IMPL(__imp__sub_82561930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82561938;
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
	// bl 0x82575868
	ctx.lr = 0x8256194C;
	sub_82575868(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82575a40
	ctx.lr = 0x82561954;
	sub_82575A40(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82561984
	if (cr6.eq) goto loc_82561984;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82561984
	if (cr6.eq) goto loc_82561984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82576620
	ctx.lr = 0x82561974;
	sub_82576620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// bl 0x82532be0
	ctx.lr = 0x82561984;
	sub_82532BE0(ctx, base);
loc_82561984:
	// sth r29,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r29.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561990"))) PPC_WEAK_FUNC(sub_82561990);
PPC_FUNC_IMPL(__imp__sub_82561990) {
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
	// bl 0x825750f8
	ctx.lr = 0x825619B0;
	sub_825750F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825619c4
	if (cr6.eq) goto loc_825619C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82561a5c
	goto loc_82561A5C;
loc_825619C4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82561a58
	if (cr6.lt) goto loc_82561A58;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82561a58
	if (cr6.lt) goto loc_82561A58;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825619f4
	if (cr6.lt) goto loc_825619F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825619f8
	goto loc_825619F8;
loc_825619F4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825619F8:
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82561a10
	if (cr6.lt) goto loc_82561A10;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82561a14
	goto loc_82561A14;
loc_82561A10:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82561A14:
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82561a58
	if (!cr6.eq) goto loc_82561A58;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82561a58
	if (!cr6.eq) goto loc_82561A58;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d47d0
	ctx.lr = 0x82561A38;
	sub_831D47D0(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x831d47d0
	ctx.lr = 0x82561A48;
	sub_831D47D0(ctx, base);
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x82561a5c
	goto loc_82561A5C;
loc_82561A58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82561A5C:
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

__attribute__((alias("__imp__sub_82561A74"))) PPC_WEAK_FUNC(sub_82561A74);
PPC_FUNC_IMPL(__imp__sub_82561A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561A78"))) PPC_WEAK_FUNC(sub_82561A78);
PPC_FUNC_IMPL(__imp__sub_82561A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82561A80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82561aa4
	if (cr6.lt) goto loc_82561AA4;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82561aa8
	goto loc_82561AA8;
loc_82561AA4:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82561AA8:
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82561ac0
	if (cr6.lt) goto loc_82561AC0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82561ac4
	goto loc_82561AC4;
loc_82561AC0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82561AC4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82561b98
	if (cr6.lt) goto loc_82561B98;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82561b24
	if (!cr6.eq) goto loc_82561B24;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r8,58
	cr6.compare<uint32_t>(ctx.r8.u32, 58, xer);
	// bne cr6,0x82561b24
	if (!cr6.eq) goto loc_82561B24;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d47d0
	ctx.lr = 0x82561AF4;
	sub_831D47D0(ctx, base);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x831d47d0
	ctx.lr = 0x82561B04;
	sub_831D47D0(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// beq cr6,0x82561b18
	if (cr6.eq) goto loc_82561B18;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82561B18:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82561b98
	goto loc_82561B98;
loc_82561B24:
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,46
	cr6.compare<uint32_t>(ctx.r8.u32, 46, xer);
	// bne cr6,0x82561b5c
	if (!cr6.eq) goto loc_82561B5C;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x82561b48
	if (cr6.eq) goto loc_82561B48;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82561b4c
	if (!cr6.eq) goto loc_82561B4C;
loc_82561B48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82561B4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82561b5c
	if (cr6.eq) goto loc_82561B5C;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82561B5C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// bne cr6,0x82561b98
	if (!cr6.eq) goto loc_82561B98;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x82561b84
	if (cr6.eq) goto loc_82561B84;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82561b88
	if (!cr6.eq) goto loc_82561B88;
loc_82561B84:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82561B88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82561b98
	if (cr6.eq) goto loc_82561B98;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82561B98:
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r11,r30,r9
	ctx.r11.u64 = ctx.r30.u64 + ctx.r9.u64;
loc_82561BA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82561bc4
	if (cr6.eq) goto loc_82561BC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82561ba0
	if (cr6.eq) goto loc_82561BA0;
loc_82561BC4:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561BD4"))) PPC_WEAK_FUNC(sub_82561BD4);
PPC_FUNC_IMPL(__imp__sub_82561BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561BD8"))) PPC_WEAK_FUNC(sub_82561BD8);
PPC_FUNC_IMPL(__imp__sub_82561BD8) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82561bf8
	if (cr6.lt) goto loc_82561BF8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82561BF8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82561c14
	if (!cr6.eq) goto loc_82561C14;
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
loc_82561C14:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r10,12856
	ctx.r4.s64 = ctx.r10.s64 + 12856;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831cef50
	ctx.lr = 0x82561C28;
	sub_831CEF50(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82561C40"))) PPC_WEAK_FUNC(sub_82561C40);
PPC_FUNC_IMPL(__imp__sub_82561C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82561c54
	if (cr6.lt) goto loc_82561C54;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82561C54:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82532c60
	sub_82532C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561C5C"))) PPC_WEAK_FUNC(sub_82561C5C);
PPC_FUNC_IMPL(__imp__sub_82561C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561C60"))) PPC_WEAK_FUNC(sub_82561C60);
PPC_FUNC_IMPL(__imp__sub_82561C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82561a78
	sub_82561A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561C64"))) PPC_WEAK_FUNC(sub_82561C64);
PPC_FUNC_IMPL(__imp__sub_82561C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561C68"))) PPC_WEAK_FUNC(sub_82561C68);
PPC_FUNC_IMPL(__imp__sub_82561C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82561C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82561cac
	if (cr6.eq) goto loc_82561CAC;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82561c9c
	if (cr6.lt) goto loc_82561C9C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82561C9C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825764f8
	ctx.lr = 0x82561CA8;
	sub_825764F8(ctx, base);
	// stb r28,69(r30)
	PPC_STORE_U8(ctx.r30.u32 + 69, ctx.r28.u8);
loc_82561CAC:
	// addi r11,r29,72
	ctx.r11.s64 = ctx.r29.s64 + 72;
	// addi r31,r30,72
	ctx.r31.s64 = ctx.r30.s64 + 72;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82561ce0
	if (cr6.eq) goto loc_82561CE0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82561cd0
	if (cr6.lt) goto loc_82561CD0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82561CD0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825764f8
	ctx.lr = 0x82561CDC;
	sub_825764F8(ctx, base);
	// stb r28,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r28.u8);
loc_82561CE0:
	// lhz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,144(r30)
	PPC_STORE_U16(ctx.r30.u32 + 144, ctx.r11.u16);
	// lhz r10,146(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 146);
	// sth r10,146(r30)
	PPC_STORE_U16(ctx.r30.u32 + 146, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561CFC"))) PPC_WEAK_FUNC(sub_82561CFC);
PPC_FUNC_IMPL(__imp__sub_82561CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561D00"))) PPC_WEAK_FUNC(sub_82561D00);
PPC_FUNC_IMPL(__imp__sub_82561D00) {
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
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82561d28
	if (cr6.lt) goto loc_82561D28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82561D28:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824914c8
	ctx.lr = 0x82561D34;
	sub_824914C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532be0
	ctx.lr = 0x82561D3C;
	sub_82532BE0(ctx, base);
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

__attribute__((alias("__imp__sub_82561D50"))) PPC_WEAK_FUNC(sub_82561D50);
PPC_FUNC_IMPL(__imp__sub_82561D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82561D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82575868
	ctx.lr = 0x82561D68;
	sub_82575868(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82575a40
	ctx.lr = 0x82561D70;
	sub_82575A40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,144(r30)
	PPC_STORE_U16(ctx.r30.u32 + 144, ctx.r11.u16);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x82561dbc
	if (cr6.eq) goto loc_82561DBC;
loc_82561D88:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82561d9c
	if (cr6.lt) goto loc_82561D9C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82561da0
	goto loc_82561DA0;
loc_82561D9C:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
loc_82561DA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824914c8
	ctx.lr = 0x82561DA8;
	sub_824914C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82532be0
	ctx.lr = 0x82561DB0;
	sub_82532BE0(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82561d88
	if (!cr6.eq) goto loc_82561D88;
loc_82561DBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561DC4"))) PPC_WEAK_FUNC(sub_82561DC4);
PPC_FUNC_IMPL(__imp__sub_82561DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561DC8"))) PPC_WEAK_FUNC(sub_82561DC8);
PPC_FUNC_IMPL(__imp__sub_82561DC8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82533080
	ctx.lr = 0x82561DE4;
	sub_82533080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420030
	ctx.lr = 0x82561DF0;
	sub_82420030(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82561e04
	if (cr6.lt) goto loc_82561E04;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8386d088
	ctx.lr = 0x82561E04;
	sub_8386D088(ctx, base);
loc_82561E04:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// blt cr6,0x82561e2c
	if (cr6.lt) goto loc_82561E2C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82561E2C;
	sub_8386D088(ctx, base);
loc_82561E2C:
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

__attribute__((alias("__imp__sub_82561E44"))) PPC_WEAK_FUNC(sub_82561E44);
PPC_FUNC_IMPL(__imp__sub_82561E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561E48"))) PPC_WEAK_FUNC(sub_82561E48);
PPC_FUNC_IMPL(__imp__sub_82561E48) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82533340
	ctx.lr = 0x82561E64;
	sub_82533340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420030
	ctx.lr = 0x82561E70;
	sub_82420030(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82561e84
	if (cr6.lt) goto loc_82561E84;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8386d088
	ctx.lr = 0x82561E84;
	sub_8386D088(ctx, base);
loc_82561E84:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// blt cr6,0x82561eac
	if (cr6.lt) goto loc_82561EAC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82561EAC;
	sub_8386D088(ctx, base);
loc_82561EAC:
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

__attribute__((alias("__imp__sub_82561EC4"))) PPC_WEAK_FUNC(sub_82561EC4);
PPC_FUNC_IMPL(__imp__sub_82561EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561EC8"))) PPC_WEAK_FUNC(sub_82561EC8);
PPC_FUNC_IMPL(__imp__sub_82561EC8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825331c0
	ctx.lr = 0x82561EE4;
	sub_825331C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420030
	ctx.lr = 0x82561EF0;
	sub_82420030(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82561f04
	if (cr6.lt) goto loc_82561F04;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8386d088
	ctx.lr = 0x82561F04;
	sub_8386D088(ctx, base);
loc_82561F04:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// blt cr6,0x82561f2c
	if (cr6.lt) goto loc_82561F2C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82561F2C;
	sub_8386D088(ctx, base);
loc_82561F2C:
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

__attribute__((alias("__imp__sub_82561F44"))) PPC_WEAK_FUNC(sub_82561F44);
PPC_FUNC_IMPL(__imp__sub_82561F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561F48"))) PPC_WEAK_FUNC(sub_82561F48);
PPC_FUNC_IMPL(__imp__sub_82561F48) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82533240
	ctx.lr = 0x82561F64;
	sub_82533240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420030
	ctx.lr = 0x82561F70;
	sub_82420030(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82561f84
	if (cr6.lt) goto loc_82561F84;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8386d088
	ctx.lr = 0x82561F84;
	sub_8386D088(ctx, base);
loc_82561F84:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// blt cr6,0x82561fac
	if (cr6.lt) goto loc_82561FAC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82561FAC;
	sub_8386D088(ctx, base);
loc_82561FAC:
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

__attribute__((alias("__imp__sub_82561FC4"))) PPC_WEAK_FUNC(sub_82561FC4);
PPC_FUNC_IMPL(__imp__sub_82561FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561FC8"))) PPC_WEAK_FUNC(sub_82561FC8);
PPC_FUNC_IMPL(__imp__sub_82561FC8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825332c0
	ctx.lr = 0x82561FE4;
	sub_825332C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420030
	ctx.lr = 0x82561FF0;
	sub_82420030(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82562004
	if (cr6.lt) goto loc_82562004;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8386d088
	ctx.lr = 0x82562004;
	sub_8386D088(ctx, base);
loc_82562004:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// blt cr6,0x8256202c
	if (cr6.lt) goto loc_8256202C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x8256202C;
	sub_8386D088(ctx, base);
loc_8256202C:
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

__attribute__((alias("__imp__sub_82562044"))) PPC_WEAK_FUNC(sub_82562044);
PPC_FUNC_IMPL(__imp__sub_82562044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562048"))) PPC_WEAK_FUNC(sub_82562048);
PPC_FUNC_IMPL(__imp__sub_82562048) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576848
	ctx.lr = 0x82562068;
	sub_82576848(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12708
	ctx.r4.s64 = ctx.r11.s64 + 12708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82575200
	ctx.lr = 0x8256207C;
	sub_82575200(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8256209c
	if (!cr6.eq) goto loc_8256209C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825620ec
	if (cr6.lt) goto loc_825620EC;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82562098;
	sub_8386D088(ctx, base);
	// b 0x825620ec
	goto loc_825620EC;
loc_8256209C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825620A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825620a0
	if (!cr6.eq) goto loc_825620A0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x825620e8
	if (!cr6.eq) goto loc_825620E8;
	// bl 0x8241ff70
	ctx.lr = 0x825620D0;
	sub_8241FF70(ctx, base);
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
loc_825620E8:
	// bl 0x8241ff70
	ctx.lr = 0x825620EC;
	sub_8241FF70(ctx, base);
loc_825620EC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82562104"))) PPC_WEAK_FUNC(sub_82562104);
PPC_FUNC_IMPL(__imp__sub_82562104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562108"))) PPC_WEAK_FUNC(sub_82562108);
PPC_FUNC_IMPL(__imp__sub_82562108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8256211c
	if (cr6.lt) goto loc_8256211C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8256211C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82562048
	sub_82562048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562124"))) PPC_WEAK_FUNC(sub_82562124);
PPC_FUNC_IMPL(__imp__sub_82562124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562128"))) PPC_WEAK_FUNC(sub_82562128);
PPC_FUNC_IMPL(__imp__sub_82562128) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,12714
	ctx.r4.s64 = ctx.r11.s64 + 12714;
	// bl 0x82576848
	ctx.lr = 0x82562148;
	sub_82576848(ctx, base);
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

__attribute__((alias("__imp__sub_82562160"))) PPC_WEAK_FUNC(sub_82562160);
PPC_FUNC_IMPL(__imp__sub_82562160) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82532c60
	ctx.lr = 0x8256217C;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562274
	if (cr6.eq) goto loc_82562274;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82562198
	if (!cr6.eq) goto loc_82562198;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825621b4
	goto loc_825621B4;
loc_82562198:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,12856
	ctx.r4.s64 = ctx.r11.s64 + 12856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x825621AC;
	sub_831CEF50(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_825621B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82562274
	if (!cr6.eq) goto loc_82562274;
	// bl 0x8250da80
	ctx.lr = 0x825621C4;
	sub_8250DA80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825621e0
	if (cr6.eq) goto loc_825621E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8256b9b8
	ctx.lr = 0x825621D4;
	sub_8256B9B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82562298
	if (!cr6.eq) goto loc_82562298;
loc_825621E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824693f0
	ctx.lr = 0x825621F0;
	sub_824693F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82532d78
	ctx.lr = 0x825621F8;
	sub_82532D78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82532be0
	ctx.lr = 0x82562200;
	sub_82532BE0(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r30,r11,-19136
	ctx.r30.s64 = ctx.r11.s64 + -19136;
	// lwz r31,-19136(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19136);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8256226c
	if (cr6.eq) goto loc_8256226C;
loc_82562218:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82562260
	if (!cr6.gt) goto loc_82562260;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562238
	if (cr6.lt) goto loc_82562238;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8256223c
	goto loc_8256223C;
loc_82562238:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8256223C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82562250
	if (!cr6.lt) goto loc_82562250;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82562250:
	// bl 0x831d3450
	ctx.lr = 0x82562254;
	sub_831D3450(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82562290
	if (!cr6.eq) goto loc_82562290;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82562260:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82562218
	if (!cr6.eq) goto loc_82562218;
loc_8256226C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82562274;
	sub_824200A8(ctx, base);
loc_82562274:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82562278:
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
loc_82562290:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82562298;
	sub_824200A8(ctx, base);
loc_82562298:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82562278
	goto loc_82562278;
}

__attribute__((alias("__imp__sub_825622A0"))) PPC_WEAK_FUNC(sub_825622A0);
PPC_FUNC_IMPL(__imp__sub_825622A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825622A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x825766d0
	ctx.lr = 0x825622C0;
	sub_825766D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825766d0
	ctx.lr = 0x825622C8;
	sub_825766D0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bne cr6,0x825622f0
	if (!cr6.eq) goto loc_825622F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,12756
	ctx.r11.s64 = ctx.r11.s64 + 12756;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// b 0x82562350
	goto loc_82562350;
loc_825622F0:
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bne cr6,0x82562310
	if (!cr6.eq) goto loc_82562310;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,12756
	ctx.r11.s64 = ctx.r11.s64 + 12756;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x82562350
	goto loc_82562350;
loc_82562310:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82562328
	if (!cr6.eq) goto loc_82562328;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,12756
	ctx.r11.s64 = ctx.r11.s64 + 12756;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82562350
	goto loc_82562350;
loc_82562328:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x82562340
	if (!cr6.eq) goto loc_82562340;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,12756
	ctx.r11.s64 = ctx.r11.s64 + 12756;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82562350
	goto loc_82562350;
loc_82562340:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bne cr6,0x82562358
	if (!cr6.eq) goto loc_82562358;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,12756
	ctx.r4.s64 = ctx.r11.s64 + 12756;
loc_82562350:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825764f8
	ctx.lr = 0x82562358;
	sub_825764F8(ctx, base);
loc_82562358:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562370
	if (cr6.lt) goto loc_82562370;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82562374
	goto loc_82562374;
loc_82562370:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82562374:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82576848
	ctx.lr = 0x8256237C;
	sub_82576848(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8256e6a8
	ctx.lr = 0x82562394;
	sub_8256E6A8(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825623a8
	if (cr6.lt) goto loc_825623A8;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x8386d088
	ctx.lr = 0x825623A8;
	sub_8386D088(ctx, base);
loc_825623A8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stb r27,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r27.u8);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82562538
	if (cr6.eq) goto loc_82562538;
	// bl 0x82569228
	ctx.lr = 0x825623D0;
	sub_82569228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82561dc8
	ctx.lr = 0x825623E0;
	sub_82561DC8(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825623f4
	if (cr6.lt) goto loc_825623F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825623F4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82569590
	ctx.lr = 0x82562400;
	sub_82569590(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x824200a8
	ctx.lr = 0x8256240C;
	sub_824200A8(ctx, base);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825624dc
	if (cr6.eq) goto loc_825624DC;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8256242c
	if (!cr6.lt) goto loc_8256242C;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
loc_8256242C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x824693f0
	ctx.lr = 0x82562438;
	sub_824693F0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82564920
	ctx.lr = 0x82562440;
	sub_82564920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x824200a8
	ctx.lr = 0x82562454;
	sub_824200A8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825624dc
	if (cr6.eq) goto loc_825624DC;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562470
	if (cr6.lt) goto loc_82562470;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82562474
	goto loc_82562474;
loc_82562470:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82562474:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82576848
	ctx.lr = 0x8256247C;
	sub_82576848(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r7,2
	ctx.r7.s64 = 2;
	// bl 0x8256e6a8
	ctx.lr = 0x82562494;
	sub_8256E6A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8241ff70
	ctx.lr = 0x825624A8;
	sub_8241FF70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825624dc
	if (!cr6.eq) goto loc_825624DC;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241ff70
	ctx.lr = 0x825624C8;
	sub_8241FF70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241ff70
	ctx.lr = 0x825624D0;
	sub_8241FF70(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825624DC:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r31,152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825624f0
	if (!cr6.lt) goto loc_825624F0;
	// addi r31,r1,152
	ctx.r31.s64 = ctx.r1.s64 + 152;
loc_825624F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82575868
	ctx.lr = 0x825624F8;
	sub_82575868(ctx, base);
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// bl 0x82575a40
	ctx.lr = 0x82562500;
	sub_82575A40(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82562530
	if (cr6.eq) goto loc_82562530;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562530
	if (cr6.eq) goto loc_82562530;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82576620
	ctx.lr = 0x82562520;
	sub_82576620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,69(r28)
	PPC_STORE_U8(ctx.r28.u32 + 69, ctx.r11.u8);
	// bl 0x82532be0
	ctx.lr = 0x82562530;
	sub_82532BE0(ctx, base);
loc_82562530:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r27,144(r28)
	PPC_STORE_U16(ctx.r28.u32 + 144, ctx.r27.u16);
loc_82562538:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82562550
	if (cr6.lt) goto loc_82562550;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8386d088
	ctx.lr = 0x82562550;
	sub_8386D088(ctx, base);
loc_82562550:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// blt cr6,0x82562570
	if (cr6.lt) goto loc_82562570;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8386d088
	ctx.lr = 0x82562570;
	sub_8386D088(ctx, base);
loc_82562570:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256257C"))) PPC_WEAK_FUNC(sub_8256257C);
PPC_FUNC_IMPL(__imp__sub_8256257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562580"))) PPC_WEAK_FUNC(sub_82562580);
PPC_FUNC_IMPL(__imp__sub_82562580) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82562638
	if (cr6.eq) goto loc_82562638;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82562638
	if (cr6.eq) goto loc_82562638;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x82562638
	if (cr6.eq) goto loc_82562638;
	// bl 0x82532c60
	ctx.lr = 0x825625B8;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562638
	if (cr6.eq) goto loc_82562638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82561688
	ctx.lr = 0x825625CC;
	sub_82561688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82562638
	if (!cr6.eq) goto loc_82562638;
	// bl 0x8250da80
	ctx.lr = 0x825625DC;
	sub_8250DA80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82562610
	if (cr6.eq) goto loc_82562610;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8256b9e8
	ctx.lr = 0x825625EC;
	sub_8256B9E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562610
	if (cr6.eq) goto loc_82562610;
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
loc_82562610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562160
	ctx.lr = 0x82562618;
	sub_82562160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
loc_82562638:
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

__attribute__((alias("__imp__sub_82562650"))) PPC_WEAK_FUNC(sub_82562650);
PPC_FUNC_IMPL(__imp__sub_82562650) {
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
	// beq cr6,0x825626b0
	if (cr6.eq) goto loc_825626B0;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82562690
	if (cr6.lt) goto loc_82562690;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82562690;
	sub_8386D088(ctx, base);
loc_82562690:
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
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r11,-40
	ctx.r9.s64 = ctx.r11.s64 + -40;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_825626B0:
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

__attribute__((alias("__imp__sub_825626C8"))) PPC_WEAK_FUNC(sub_825626C8);
PPC_FUNC_IMPL(__imp__sub_825626C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82562700
	if (cr6.eq) goto loc_82562700;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825333c0
	ctx.lr = 0x825626F8;
	sub_825333C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82562700;
	sub_8386D088(ctx, base);
loc_82562700:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82562724"))) PPC_WEAK_FUNC(sub_82562724);
PPC_FUNC_IMPL(__imp__sub_82562724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562728"))) PPC_WEAK_FUNC(sub_82562728);
PPC_FUNC_IMPL(__imp__sub_82562728) {
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
	// bge cr6,0x82562760
	if (!cr6.lt) goto loc_82562760;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82562764
	if (!cr6.gt) goto loc_82562764;
loc_82562760:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82562764:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825627bc
	if (cr6.eq) goto loc_825627BC;
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
	// bne cr6,0x82562798
	if (!cr6.eq) goto loc_82562798;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82533658
	ctx.lr = 0x82562798;
	sub_82533658(ctx, base);
loc_82562798:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825627e8
	if (cr6.eq) goto loc_825627E8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x825627e4
	goto loc_825627E4;
loc_825627BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825627d4
	if (!cr6.eq) goto loc_825627D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82533658
	ctx.lr = 0x825627D4;
	sub_82533658(ctx, base);
loc_825627D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825627e8
	if (cr6.eq) goto loc_825627E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825627E4:
	// bl 0x825767c8
	ctx.lr = 0x825627E8;
	sub_825767C8(ctx, base);
loc_825627E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
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

__attribute__((alias("__imp__sub_8256280C"))) PPC_WEAK_FUNC(sub_8256280C);
PPC_FUNC_IMPL(__imp__sub_8256280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562810"))) PPC_WEAK_FUNC(sub_82562810);
PPC_FUNC_IMPL(__imp__sub_82562810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82562818;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x825334f0
	ctx.lr = 0x82562834;
	sub_825334F0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562848
	if (cr6.lt) goto loc_82562848;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82562848:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x825628a4
	if (!cr6.lt) goto loc_825628A4;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8256286C:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x82562888
	if (cr6.eq) goto loc_82562888;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x8256288c
	if (!cr6.eq) goto loc_8256288C;
loc_82562888:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8256288C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8256289c
	if (cr6.eq) goto loc_8256289C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8256289C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8256286c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8256286C;
loc_825628A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82533568
	ctx.lr = 0x825628AC;
	sub_82533568(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x825628c8
	if (cr6.eq) goto loc_825628C8;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x825628cc
	if (!cr6.eq) goto loc_825628CC;
loc_825628C8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825628CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r30,15
	ctx.r30.s64 = 15;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8256291c
	if (cr6.eq) goto loc_8256291C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-2392
	ctx.r4.s64 = ctx.r11.s64 + -2392;
	// bl 0x82576848
	ctx.lr = 0x825628EC;
	sub_82576848(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82562728
	ctx.lr = 0x825628F8;
	sub_82562728(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8256290c
	if (cr6.lt) goto loc_8256290C;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8386d088
	ctx.lr = 0x8256290C;
	sub_8386D088(ctx, base);
loc_8256290C:
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
loc_8256291C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x825629d8
	if (cr6.eq) goto loc_825629D8;
loc_82562928:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x82562944
	if (cr6.eq) goto loc_82562944;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x82562948
	if (!cr6.eq) goto loc_82562948;
loc_82562944:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82562948:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562998
	if (cr6.eq) goto loc_82562998;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, xer);
	// beq cr6,0x82562994
	if (cr6.eq) goto loc_82562994;
	// subf r5,r4,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82576748
	ctx.lr = 0x82562968;
	sub_82576748(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82562728
	ctx.lr = 0x82562974;
	sub_82562728(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562988
	if (cr6.lt) goto loc_82562988;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8386d088
	ctx.lr = 0x82562988;
	sub_8386D088(ctx, base);
loc_82562988:
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stb r28,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r28.u8);
loc_82562994:
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
loc_82562998:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82562928
	if (!cr6.eq) goto loc_82562928;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, xer);
	// beq cr6,0x825629d8
	if (cr6.eq) goto loc_825629D8;
	// subf r5,r4,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82576748
	ctx.lr = 0x825629B8;
	sub_82576748(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82562728
	ctx.lr = 0x825629C4;
	sub_82562728(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825629d8
	if (cr6.lt) goto loc_825629D8;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x8386d088
	ctx.lr = 0x825629D8;
	sub_8386D088(ctx, base);
loc_825629D8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825629E0"))) PPC_WEAK_FUNC(sub_825629E0);
PPC_FUNC_IMPL(__imp__sub_825629E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825629E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bge cr6,0x82562a04
	if (!cr6.lt) goto loc_82562A04;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82562A04:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r8,28
	ctx.r8.s64 = 28;
	// addi r31,r11,-19136
	ctx.r31.s64 = ctx.r11.s64 + -19136;
	// lwz r11,-19136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19136);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82562a38
	if (cr6.gt) goto loc_82562A38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x825320a8
	ctx.lr = 0x82562A34;
	sub_825320A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82562A38:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82562A3C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82562a3c
	if (!cr6.eq) goto loc_82562A3C;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824208c8
	ctx.lr = 0x82562A68;
	sub_824208C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562A70"))) PPC_WEAK_FUNC(sub_82562A70);
PPC_FUNC_IMPL(__imp__sub_82562A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82562A78;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82562810
	ctx.lr = 0x82562AA4;
	sub_82562810(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82562810
	ctx.lr = 0x82562ABC;
	sub_82562810(ctx, base);
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// addi r11,r21,8
	ctx.r11.s64 = ctx.r21.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82562ad0
	if (cr6.lt) goto loc_82562AD0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82562AD0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82532c60
	ctx.lr = 0x82562AD8;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r20,96(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562b50
	if (cr6.eq) goto loc_82562B50;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82562b00
	if (cr6.lt) goto loc_82562B00;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82562B00:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82532c60
	ctx.lr = 0x82562B08;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562b50
	if (cr6.eq) goto loc_82562B50;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82561990
	ctx.lr = 0x82562B20;
	sub_82561990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82562b50
	if (!cr6.eq) goto loc_82562B50;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// bl 0x825626c8
	ctx.lr = 0x82562B3C;
	sub_825626C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825626c8
	ctx.lr = 0x82562B44;
	sub_825626C8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82562B50:
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, xer);
	// beq cr6,0x82562b9c
	if (cr6.eq) goto loc_82562B9C;
	// subf r28,r23,r20
	ctx.r28.s64 = ctx.r20.s64 - ctx.r23.s64;
loc_82562B6C:
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmplw cr6,r4,r22
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r22.u32, xer);
	// beq cr6,0x82562b9c
	if (cr6.eq) goto loc_82562B9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82561990
	ctx.lr = 0x82562B80;
	sub_82561990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562b9c
	if (cr6.eq) goto loc_82562B9C;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// bne cr6,0x82562b6c
	if (!cr6.eq) goto loc_82562B6C;
loc_82562B9C:
	// li r11,40
	ctx.r11.s64 = 40;
	// subf r10,r23,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r23.s64;
	// divw r26,r10,r11
	ctx.r26.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x82562bf8
	if (!cr6.eq) goto loc_82562BF8;
	// subf r10,r20,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r20.s64;
	// divw r9,r10,r11
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x82562bf8
	if (!cr6.eq) goto loc_82562BF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,12716
	ctx.r11.s64 = ctx.r11.s64 + 12716;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x82561930
	ctx.lr = 0x82562BD8;
	sub_82561930(ctx, base);
	// stw r29,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825626c8
	ctx.lr = 0x82562BE4;
	sub_825626C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825626c8
	ctx.lr = 0x82562BEC;
	sub_825626C8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82562BF8:
	// subf r10,r20,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r20.s64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// divw r9,r10,r11
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// subf. r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r25,15
	ctx.r25.s64 = 15;
	// beq 0x82562c74
	if (cr0.eq) goto loc_82562C74;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,12716
	ctx.r28.s64 = ctx.r11.s64 + 12716;
loc_82562C2C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82576848
	ctx.lr = 0x82562C38;
	sub_82576848(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82562728
	ctx.lr = 0x82562C44;
	sub_82562728(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562c58
	if (cr6.lt) goto loc_82562C58;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8386d088
	ctx.lr = 0x82562C58;
	sub_8386D088(ctx, base);
loc_82562C58:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// bne 0x82562c2c
	if (!cr0.eq) goto loc_82562C2C;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82562C74:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bge cr6,0x82562cb0
	if (!cr6.lt) goto loc_82562CB0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r30,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r30.s64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_82562C90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82562728
	ctx.lr = 0x82562C9C;
	sub_82562728(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x82562c90
	if (!cr0.eq) goto loc_82562C90;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82562CB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82561d50
	ctx.lr = 0x82562CBC;
	sub_82561D50(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r29,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r29.u32);
	// beq cr6,0x82562d0c
	if (cr6.eq) goto loc_82562D0C;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// beq cr6,0x82562d04
	if (cr6.eq) goto loc_82562D04;
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
loc_82562CD4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562ce8
	if (cr6.lt) goto loc_82562CE8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82562CE8;
	sub_8386D088(ctx, base);
loc_82562CE8:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82562cd4
	if (!cr6.eq) goto loc_82562CD4;
loc_82562D04:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8386d088
	ctx.lr = 0x82562D0C;
	sub_8386D088(ctx, base);
loc_82562D0C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82562d58
	if (cr6.eq) goto loc_82562D58;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, xer);
	// beq cr6,0x82562d50
	if (cr6.eq) goto loc_82562D50;
	// addi r31,r23,8
	ctx.r31.s64 = ctx.r23.s64 + 8;
loc_82562D20:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562d34
	if (cr6.lt) goto loc_82562D34;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82562D34;
	sub_8386D088(ctx, base);
loc_82562D34:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bne cr6,0x82562d20
	if (!cr6.eq) goto loc_82562D20;
loc_82562D50:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8386d088
	ctx.lr = 0x82562D58;
	sub_8386D088(ctx, base);
loc_82562D58:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82562da4
	if (cr6.eq) goto loc_82562DA4;
	// cmplw cr6,r20,r22
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r22.u32, xer);
	// beq cr6,0x82562d9c
	if (cr6.eq) goto loc_82562D9C;
	// addi r31,r20,8
	ctx.r31.s64 = ctx.r20.s64 + 8;
loc_82562D6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562d80
	if (cr6.lt) goto loc_82562D80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82562D80;
	sub_8386D088(ctx, base);
loc_82562D80:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bne cr6,0x82562d6c
	if (!cr6.eq) goto loc_82562D6C;
loc_82562D9C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8386d088
	ctx.lr = 0x82562DA4;
	sub_8386D088(ctx, base);
loc_82562DA4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562DB0"))) PPC_WEAK_FUNC(sub_82562DB0);
PPC_FUNC_IMPL(__imp__sub_82562DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82562DB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82562ddc
	if (cr6.lt) goto loc_82562DDC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82562DDC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82532c60
	ctx.lr = 0x82562DE4;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562e04
	if (cr6.eq) goto loc_82562E04;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82562E04:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x82562810
	ctx.lr = 0x82562E20;
	sub_82562810(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82562810
	ctx.lr = 0x82562E38;
	sub_82562810(ctx, base);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// beq cr6,0x82562eb4
	if (cr6.eq) goto loc_82562EB4;
	// li r28,40
	ctx.r28.s64 = 40;
loc_82562E50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83300618
	ctx.lr = 0x82562E58;
	sub_83300618(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82562e88
	if (cr6.eq) goto loc_82562E88;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// ble cr6,0x82562ea8
	if (!cr6.gt) goto loc_82562EA8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82562650
	ctx.lr = 0x82562E84;
	sub_82562650(ctx, base);
	// b 0x82562ea8
	goto loc_82562EA8;
loc_82562E88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83300638
	ctx.lr = 0x82562E90;
	sub_83300638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82562ea8
	if (!cr6.eq) goto loc_82562EA8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82562728
	ctx.lr = 0x82562EA8;
	sub_82562728(ctx, base);
loc_82562EA8:
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x82562e50
	if (!cr6.eq) goto loc_82562E50;
loc_82562EB4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82561d50
	ctx.lr = 0x82562EC0;
	sub_82561D50(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82562ee8
	if (cr6.eq) goto loc_82562EE8;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825333c0
	ctx.lr = 0x82562EE0;
	sub_825333C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8386d088
	ctx.lr = 0x82562EE8;
	sub_8386D088(ctx, base);
loc_82562EE8:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82562f10
	if (cr6.eq) goto loc_82562F10;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825333c0
	ctx.lr = 0x82562F08;
	sub_825333C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386d088
	ctx.lr = 0x82562F10;
	sub_8386D088(ctx, base);
loc_82562F10:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82562F1C"))) PPC_WEAK_FUNC(sub_82562F1C);
PPC_FUNC_IMPL(__imp__sub_82562F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562F20"))) PPC_WEAK_FUNC(sub_82562F20);
PPC_FUNC_IMPL(__imp__sub_82562F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82562F28;
	__savegprlr_23(ctx, base);
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82562f44
	if (cr6.lt) goto loc_82562F44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82562F44:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82561830
	ctx.lr = 0x82562F4C;
	sub_82561830(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82563230
	if (!cr6.eq) goto loc_82563230;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// bl 0x82562810
	ctx.lr = 0x82562F74;
	sub_82562810(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r24,116(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r25,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r25.s64;
	// divw r4,r10,r11
	ctx.r4.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// bl 0x82533568
	ctx.lr = 0x82562F9C;
	sub_82533568(ctx, base);
	// cmplw cr6,r25,r24
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, xer);
	// beq cr6,0x825631d8
	if (cr6.eq) goto loc_825631D8;
	// addi r28,r25,8
	ctx.r28.s64 = ctx.r25.s64 + 8;
	// li r26,15
	ctx.r26.s64 = 15;
loc_82562FAC:
	// addi r31,r28,-8
	ctx.r31.s64 = ctx.r28.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83300618
	ctx.lr = 0x82562FB8;
	sub_83300618(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82563094
	if (cr6.eq) goto loc_82563094;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82563024
	if (!cr6.eq) goto loc_82563024;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82562fe8
	if (cr6.lt) goto loc_82562FE8;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82562fec
	goto loc_82562FEC;
loc_82562FE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82562FEC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576848
	ctx.lr = 0x82562FF4;
	sub_82576848(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82562728
	ctx.lr = 0x82563000;
	sub_82562728(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82563014
	if (cr6.lt) goto loc_82563014;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8386d088
	ctx.lr = 0x82563014;
	sub_8386D088(ctx, base);
loc_82563014:
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stb r27,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r27.u8);
	// b 0x825631c8
	goto loc_825631C8;
loc_82563024:
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// bl 0x83300618
	ctx.lr = 0x8256302C;
	sub_83300618(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82563088
	if (cr6.eq) goto loc_82563088;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8256304c
	if (cr6.lt) goto loc_8256304C;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82563050
	goto loc_82563050;
loc_8256304C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82563050:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82576848
	ctx.lr = 0x82563058;
	sub_82576848(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82562728
	ctx.lr = 0x82563064;
	sub_82562728(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82563078
	if (cr6.lt) goto loc_82563078;
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x8386d088
	ctx.lr = 0x82563078;
	sub_8386D088(ctx, base);
loc_82563078:
	// stw r26,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r26.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stb r27,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r27.u8);
	// b 0x825631c8
	goto loc_825631C8;
loc_82563088:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82562650
	ctx.lr = 0x82563090;
	sub_82562650(ctx, base);
	// b 0x825631c8
	goto loc_825631C8;
loc_82563094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83300638
	ctx.lr = 0x8256309C;
	sub_83300638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825631c8
	if (!cr6.eq) goto loc_825631C8;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r28,20
	ctx.r29.s64 = ctx.r28.s64 + 20;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bgt cr6,0x8256317c
	if (cr6.gt) goto loc_8256317C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825630cc
	if (cr6.lt) goto loc_825630CC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x825630d0
	goto loc_825630D0;
loc_825630CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_825630D0:
	// li r4,58
	ctx.r4.s64 = 58;
	// bl 0x831ceeb0
	ctx.lr = 0x825630D8;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256317c
	if (cr6.eq) goto loc_8256317C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825630f4
	if (cr6.lt) goto loc_825630F4;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x825630f8
	goto loc_825630F8;
loc_825630F4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_825630F8:
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x831ce7d8
	ctx.lr = 0x82563104;
	sub_831CE7D8(ctx, base);
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82563140
	if (!cr6.gt) goto loc_82563140;
loc_82563114:
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d47d0
	ctx.lr = 0x82563128;
	sub_831D47D0(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// lwz r9,-4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x82563114
	if (cr6.lt) goto loc_82563114;
loc_82563140:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82576848
	ctx.lr = 0x8256314C;
	sub_82576848(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82562728
	ctx.lr = 0x82563158;
	sub_82562728(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8256316c
	if (cr6.lt) goto loc_8256316C;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x8386d088
	ctx.lr = 0x8256316C;
	sub_8386D088(ctx, base);
loc_8256316C:
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stb r27,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r27.u8);
	// b 0x825631c8
	goto loc_825631C8;
loc_8256317C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82563190
	if (cr6.lt) goto loc_82563190;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82563194
	goto loc_82563194;
loc_82563190:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82563194:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82576848
	ctx.lr = 0x8256319C;
	sub_82576848(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82562728
	ctx.lr = 0x825631A8;
	sub_82562728(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825631bc
	if (cr6.lt) goto loc_825631BC;
	// lwz r3,232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x8386d088
	ctx.lr = 0x825631BC;
	sub_8386D088(ctx, base);
loc_825631BC:
	// stw r26,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r27.u32);
	// stb r27,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r27.u8);
loc_825631C8:
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// addi r11,r28,-8
	ctx.r11.s64 = ctx.r28.s64 + -8;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bne cr6,0x82562fac
	if (!cr6.eq) goto loc_82562FAC;
loc_825631D8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82561d50
	ctx.lr = 0x825631E4;
	sub_82561D50(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8256320c
	if (cr6.eq) goto loc_8256320C;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825333c0
	ctx.lr = 0x82563204;
	sub_825333C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386d088
	ctx.lr = 0x8256320C;
	sub_8386D088(ctx, base);
loc_8256320C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82563230
	if (cr6.eq) goto loc_82563230;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825333c0
	ctx.lr = 0x82563228;
	sub_825333C0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8386d088
	ctx.lr = 0x82563230;
	sub_8386D088(ctx, base);
loc_82563230:
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82563238"))) PPC_WEAK_FUNC(sub_82563238);
PPC_FUNC_IMPL(__imp__sub_82563238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82563240;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82563268
	if (cr6.lt) goto loc_82563268;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8256326c
	goto loc_8256326C;
loc_82563268:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8256326C:
	// bl 0x82532c60
	ctx.lr = 0x82563270;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8256338c
	if (cr6.eq) goto loc_8256338C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82561bd8
	ctx.lr = 0x82563284;
	sub_82561BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8256338c
	if (!cr6.eq) goto loc_8256338C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825632a4
	if (cr6.lt) goto loc_825632A4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825632a8
	goto loc_825632A8;
loc_825632A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_825632A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824693f0
	ctx.lr = 0x825632B4;
	sub_824693F0(ctx, base);
	// bl 0x8250da80
	ctx.lr = 0x825632B8;
	sub_8250DA80(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8256b6f8
	ctx.lr = 0x825632C4;
	sub_8256B6F8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825632d8
	if (!cr6.lt) goto loc_825632D8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_825632D8:
	// bl 0x82532c60
	ctx.lr = 0x825632DC;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82563324
	if (!cr6.eq) goto loc_82563324;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825632fc
	if (!cr6.lt) goto loc_825632FC;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_825632FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82561930
	ctx.lr = 0x82563308;
	sub_82561930(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x824200a8
	ctx.lr = 0x82563318;
	sub_824200A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82563324:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82562a70
	ctx.lr = 0x82563334;
	sub_82562A70(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r11,r30
	ctx.r11.u64 = ~ctx.r30.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82563374
	if (cr6.eq) goto loc_82563374;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256b0f0
	ctx.lr = 0x82563354;
	sub_8256B0F0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82563368
	if (!cr6.lt) goto loc_82563368;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_82563368:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82561930
	ctx.lr = 0x82563374;
	sub_82561930(ctx, base);
loc_82563374:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824200a8
	ctx.lr = 0x82563380;
	sub_824200A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8256338C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825633A0"))) PPC_WEAK_FUNC(sub_825633A0);
PPC_FUNC_IMPL(__imp__sub_825633A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825633A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825633d0
	if (cr6.lt) goto loc_825633D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825633d4
	goto loc_825633D4;
loc_825633D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825633D4:
	// bl 0x82532c60
	ctx.lr = 0x825633D8;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825633f8
	if (cr6.eq) goto loc_825633F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825633F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8256340c
	if (cr6.lt) goto loc_8256340C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82563410
	goto loc_82563410;
loc_8256340C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82563410:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82576848
	ctx.lr = 0x82563418;
	sub_82576848(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82576cb0
	ctx.lr = 0x82563420;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// bl 0x825766d0
	ctx.lr = 0x82563438;
	sub_825766D0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82576cb0
	ctx.lr = 0x82563440;
	sub_82576CB0(ctx, base);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r31,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r31.u8);
	// sth r31,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r31.u16);
	// sth r31,242(r1)
	PPC_STORE_U16(ctx.r1.u32 + 242, ctx.r31.u16);
	// bl 0x8250da80
	ctx.lr = 0x82563454;
	sub_8250DA80(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8256b7c0
	ctx.lr = 0x8256345C;
	sub_8256B7C0(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82563470
	if (!cr6.lt) goto loc_82563470;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82563470:
	// bl 0x82532c60
	ctx.lr = 0x82563474;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825634a4
	if (!cr6.eq) goto loc_825634A4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82562db0
	ctx.lr = 0x82563490;
	sub_82562DB0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r11,r31
	ctx.r11.u64 = ~ctx.r31.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825634c4
	if (cr6.eq) goto loc_825634C4;
loc_825634A4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825634b8
	if (!cr6.lt) goto loc_825634B8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_825634B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82561930
	ctx.lr = 0x825634C4;
	sub_82561930(ctx, base);
loc_825634C4:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824200a8
	ctx.lr = 0x825634D0;
	sub_824200A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825634DC"))) PPC_WEAK_FUNC(sub_825634DC);
PPC_FUNC_IMPL(__imp__sub_825634DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825634E0"))) PPC_WEAK_FUNC(sub_825634E0);
PPC_FUNC_IMPL(__imp__sub_825634E0) {
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
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82563510
	if (cr6.lt) goto loc_82563510;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82563510:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82562580
	ctx.lr = 0x82563518;
	sub_82562580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8256352c
	if (cr6.eq) goto loc_8256352C;
	// bl 0x82564388
	ctx.lr = 0x82563528;
	sub_82564388(ctx, base);
	// b 0x82563530
	goto loc_82563530;
loc_8256352C:
	// bl 0x82564248
	ctx.lr = 0x82563530;
	sub_82564248(ctx, base);
loc_82563530:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563238
	ctx.lr = 0x82563540;
	sub_82563238(ctx, base);
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

__attribute__((alias("__imp__sub_8256355C"))) PPC_WEAK_FUNC(sub_8256355C);
PPC_FUNC_IMPL(__imp__sub_8256355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563560"))) PPC_WEAK_FUNC(sub_82563560);
PPC_FUNC_IMPL(__imp__sub_82563560) {
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
	// bl 0x82564248
	ctx.lr = 0x82563580;
	sub_82564248(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825633a0
	ctx.lr = 0x82563590;
	sub_825633A0(ctx, base);
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

__attribute__((alias("__imp__sub_825635AC"))) PPC_WEAK_FUNC(sub_825635AC);
PPC_FUNC_IMPL(__imp__sub_825635AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825635B0"))) PPC_WEAK_FUNC(sub_825635B0);
PPC_FUNC_IMPL(__imp__sub_825635B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825635B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825635e0
	if (cr6.lt) goto loc_825635E0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825635e4
	goto loc_825635E4;
loc_825635E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_825635E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82576848
	ctx.lr = 0x825635EC;
	sub_82576848(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82576cb0
	ctx.lr = 0x825635F4;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stb r30,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r30.u8);
	// bl 0x825766d0
	ctx.lr = 0x8256360C;
	sub_825766D0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82576cb0
	ctx.lr = 0x82563614;
	sub_82576CB0(ctx, base);
	// stb r30,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r30.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// sth r30,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r30.u16);
	// sth r30,242(r1)
	PPC_STORE_U16(ctx.r1.u32 + 242, ctx.r30.u16);
	// bl 0x8250da80
	ctx.lr = 0x82563628;
	sub_8250DA80(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82563640
	if (cr6.lt) goto loc_82563640;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82563644
	goto loc_82563644;
loc_82563640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82563644:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82563654
	if (!cr6.eq) goto loc_82563654;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8256366c
	goto loc_8256366C;
loc_82563654:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,12856
	ctx.r4.s64 = ctx.r11.s64 + 12856;
	// bl 0x831cef50
	ctx.lr = 0x82563664;
	sub_831CEF50(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8256366C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825636d0
	if (cr6.eq) goto loc_825636D0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8256ab50
	ctx.lr = 0x82563684;
	sub_8256AB50(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825622a0
	ctx.lr = 0x82563694;
	sub_825622A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825636b8
	if (cr6.eq) goto loc_825636B8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8256b3a0
	ctx.lr = 0x825636B4;
	sub_8256B3A0(ctx, base);
	// b 0x82563768
	goto loc_82563768;
loc_825636B8:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824200a8
	ctx.lr = 0x825636C4;
	sub_824200A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825636D0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825636e4
	if (!cr6.lt) goto loc_825636E4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_825636E4:
	// bl 0x82562160
	ctx.lr = 0x825636E8;
	sub_82562160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82563724
	if (!cr6.eq) goto loc_82563724;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82563708
	if (!cr6.lt) goto loc_82563708;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82563708:
	// bl 0x82532c60
	ctx.lr = 0x8256370C;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82563724
	if (cr6.eq) goto loc_82563724;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825634e0
	ctx.lr = 0x82563724;
	sub_825634E0(ctx, base);
loc_82563724:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8256b3a0
	ctx.lr = 0x82563730;
	sub_8256B3A0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82563744
	if (!cr6.lt) goto loc_82563744;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82563744:
	// bl 0x82562580
	ctx.lr = 0x82563748;
	sub_82562580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82563768
	if (!cr6.eq) goto loc_82563768;
	// bl 0x82564388
	ctx.lr = 0x82563758;
	sub_82564388(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82562db0
	ctx.lr = 0x82563768;
	sub_82562DB0(ctx, base);
loc_82563768:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8256377c
	if (!cr6.lt) goto loc_8256377C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_8256377C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82561930
	ctx.lr = 0x82563788;
	sub_82561930(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824200a8
	ctx.lr = 0x82563794;
	sub_824200A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825637A0"))) PPC_WEAK_FUNC(sub_825637A0);
PPC_FUNC_IMPL(__imp__sub_825637A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825637A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82491e00
	ctx.lr = 0x825637C0;
	sub_82491E00(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825637d4
	if (!cr6.lt) goto loc_825637D4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
loc_825637D4:
	// bl 0x82562048
	ctx.lr = 0x825637D8;
	sub_82562048(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,12708
	ctx.r30.s64 = ctx.r11.s64 + 12708;
	// beq cr6,0x825638b8
	if (cr6.eq) goto loc_825638B8;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82563808
	if (!cr6.lt) goto loc_82563808;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
loc_82563808:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576848
	ctx.lr = 0x82563810;
	sub_82576848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82575200
	ctx.lr = 0x82563820;
	sub_82575200(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82563838
	if (!cr6.lt) goto loc_82563838;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
loc_82563838:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576558
	ctx.lr = 0x82563840;
	sub_82576558(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bge cr6,0x82563854
	if (!cr6.lt) goto loc_82563854;
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
loc_82563854:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82575868
	ctx.lr = 0x8256385C;
	sub_82575868(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82575a40
	ctx.lr = 0x82563864;
	sub_82575A40(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82563890
	if (cr6.eq) goto loc_82563890;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82563890
	if (cr6.eq) goto loc_82563890;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576620
	ctx.lr = 0x82563884;
	sub_82576620(ctx, base);
	// stb r29,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r29.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82532be0
	ctx.lr = 0x82563890;
	sub_82532BE0(ctx, base);
loc_82563890:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// sth r28,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r28.u16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825638a8
	if (cr6.lt) goto loc_825638A8;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x825638A8;
	sub_8386D088(ctx, base);
loc_825638A8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_825638B8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825635b0
	ctx.lr = 0x825638C8;
	sub_825635B0(ctx, base);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576620
	ctx.lr = 0x825638D4;
	sub_82576620(ctx, base);
	// stb r29,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r29.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82532be0
	ctx.lr = 0x825638E0;
	sub_82532BE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576620
	ctx.lr = 0x825638EC;
	sub_82576620(ctx, base);
	// stb r29,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r29.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82532be0
	ctx.lr = 0x825638F8;
	sub_82532BE0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82561c68
	ctx.lr = 0x82563904;
	sub_82561C68(ctx, base);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824200a8
	ctx.lr = 0x82563910;
	sub_824200A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256391C"))) PPC_WEAK_FUNC(sub_8256391C);
PPC_FUNC_IMPL(__imp__sub_8256391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563920"))) PPC_WEAK_FUNC(sub_82563920);
PPC_FUNC_IMPL(__imp__sub_82563920) {
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
	// bl 0x82491e00
	ctx.lr = 0x82563938;
	sub_82491E00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825635b0
	ctx.lr = 0x82563948;
	sub_825635B0(ctx, base);
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

__attribute__((alias("__imp__sub_82563960"))) PPC_WEAK_FUNC(sub_82563960);
PPC_FUNC_IMPL(__imp__sub_82563960) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82491e00
	ctx.lr = 0x82563980;
	sub_82491E00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825635b0
	ctx.lr = 0x82563990;
	sub_825635B0(ctx, base);
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

__attribute__((alias("__imp__sub_825639AC"))) PPC_WEAK_FUNC(sub_825639AC);
PPC_FUNC_IMPL(__imp__sub_825639AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825639B0"))) PPC_WEAK_FUNC(sub_825639B0);
PPC_FUNC_IMPL(__imp__sub_825639B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825639B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8250da80
	ctx.lr = 0x825639CC;
	sub_8250DA80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82491e00
	ctx.lr = 0x825639DC;
	sub_82491E00(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825635b0
	ctx.lr = 0x825639EC;
	sub_825635B0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82563a00
	if (!cr6.lt) goto loc_82563A00;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82563A00:
	// bl 0x82532c60
	ctx.lr = 0x82563A04;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82563a24
	if (!cr6.eq) goto loc_82563A24;
	// bl 0x82564248
	ctx.lr = 0x82563A14;
	sub_82564248(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825633a0
	ctx.lr = 0x82563A24;
	sub_825633A0(ctx, base);
loc_82563A24:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8256b4c0
	ctx.lr = 0x82563A30;
	sub_8256B4C0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82563a44
	if (!cr6.lt) goto loc_82563A44;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82563A44:
	// bl 0x82562160
	ctx.lr = 0x82563A48;
	sub_82562160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82563ab4
	if (cr6.eq) goto loc_82563AB4;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82563a68
	if (!cr6.lt) goto loc_82563A68;
	// addi r30,r1,104
	ctx.r30.s64 = ctx.r1.s64 + 104;
loc_82563A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575868
	ctx.lr = 0x82563A70;
	sub_82575868(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82575a40
	ctx.lr = 0x82563A78;
	sub_82575A40(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82563aa8
	if (cr6.eq) goto loc_82563AA8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82563aa8
	if (cr6.eq) goto loc_82563AA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82576620
	ctx.lr = 0x82563A98;
	sub_82576620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// bl 0x82532be0
	ctx.lr = 0x82563AA8;
	sub_82532BE0(ctx, base);
loc_82563AA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// b 0x82563afc
	goto loc_82563AFC;
loc_82563AB4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82563ac8
	if (cr6.lt) goto loc_82563AC8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82563AC8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82532c60
	ctx.lr = 0x82563AD0;
	sub_82532C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82563af8
	if (!cr6.eq) goto loc_82563AF8;
	// bl 0x82564248
	ctx.lr = 0x82563AE0;
	sub_82564248(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82562db0
	ctx.lr = 0x82563AF0;
	sub_82562DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82563afc
	goto loc_82563AFC;
loc_82563AF8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82563AFC:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824200a8
	ctx.lr = 0x82563B08;
	sub_824200A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82563B14"))) PPC_WEAK_FUNC(sub_82563B14);
PPC_FUNC_IMPL(__imp__sub_82563B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563B18"))) PPC_WEAK_FUNC(sub_82563B18);
PPC_FUNC_IMPL(__imp__sub_82563B18) {
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
	// bl 0x825639b0
	ctx.lr = 0x82563B38;
	sub_825639B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82532ba0
	ctx.lr = 0x82563B40;
	sub_82532BA0(ctx, base);
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

__attribute__((alias("__imp__sub_82563B5C"))) PPC_WEAK_FUNC(sub_82563B5C);
PPC_FUNC_IMPL(__imp__sub_82563B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563B60"))) PPC_WEAK_FUNC(sub_82563B60);
PPC_FUNC_IMPL(__imp__sub_82563B60) {
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
	// bl 0x82491e00
	ctx.lr = 0x82563B78;
	sub_82491E00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825639b0
	ctx.lr = 0x82563B88;
	sub_825639B0(ctx, base);
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

__attribute__((alias("__imp__sub_82563BA0"))) PPC_WEAK_FUNC(sub_82563BA0);
PPC_FUNC_IMPL(__imp__sub_82563BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82563BA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r4,8
	ctx.r29.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82563bc4
	if (cr6.lt) goto loc_82563BC4;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82563BC4:
	// addi r30,r31,304
	ctx.r30.s64 = ctx.r31.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825616d8
	ctx.lr = 0x82563BD0;
	sub_825616D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825618e0
	ctx.lr = 0x82563BDC;
	sub_825618E0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r28,448(r31)
	PPC_STORE_U16(ctx.r31.u32 + 448, ctx.r28.u16);
	// bl 0x82567618
	ctx.lr = 0x82563BEC;
	sub_82567618(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r11,12972
	ctx.r30.s64 = ctx.r11.s64 + 12972;
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// bl 0x825629e0
	ctx.lr = 0x82563C00;
	sub_825629E0(ctx, base);
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x825629e0
	ctx.lr = 0x82563C0C;
	sub_825629E0(ctx, base);
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x825629e0
	ctx.lr = 0x82563C18;
	sub_825629E0(ctx, base);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x825629e0
	ctx.lr = 0x82563C24;
	sub_825629E0(ctx, base);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x825629e0
	ctx.lr = 0x82563C30;
	sub_825629E0(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x825629e0
	ctx.lr = 0x82563C3C;
	sub_825629E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825616d8
	ctx.lr = 0x82563C44;
	sub_825616D8(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825618e0
	ctx.lr = 0x82563C50;
	sub_825618E0(ctx, base);
	// sth r28,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r28.u16);
	// addi r29,r31,1216
	ctx.r29.s64 = ctx.r31.s64 + 1216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825616d8
	ctx.lr = 0x82563C60;
	sub_825616D8(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825618e0
	ctx.lr = 0x82563C6C;
	sub_825618E0(ctx, base);
	// sth r28,1360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1360, ctx.r28.u16);
	// addi r27,r31,152
	ctx.r27.s64 = ctx.r31.s64 + 152;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825616d8
	ctx.lr = 0x82563C7C;
	sub_825616D8(ctx, base);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825618e0
	ctx.lr = 0x82563C88;
	sub_825618E0(ctx, base);
	// sth r28,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r28.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// bl 0x82561c68
	ctx.lr = 0x82563C98;
	sub_82561C68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x82561c68
	ctx.lr = 0x82563CA4;
	sub_82561C68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x82561c68
	ctx.lr = 0x82563CB0;
	sub_82561C68(ctx, base);
	// addi r31,r31,1064
	ctx.r31.s64 = ctx.r31.s64 + 1064;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82561c68
	ctx.lr = 0x82563CC0;
	sub_82561C68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824914c8
	ctx.lr = 0x82563CCC;
	sub_824914C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532be0
	ctx.lr = 0x82563CD4;
	sub_82532BE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82563CDC"))) PPC_WEAK_FUNC(sub_82563CDC);
PPC_FUNC_IMPL(__imp__sub_82563CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563CE0"))) PPC_WEAK_FUNC(sub_82563CE0);
PPC_FUNC_IMPL(__imp__sub_82563CE0) {
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
	// addi r3,r3,1216
	ctx.r3.s64 = ctx.r3.s64 + 1216;
	// bl 0x824200a8
	ctx.lr = 0x82563CFC;
	sub_824200A8(ctx, base);
	// addi r3,r31,1064
	ctx.r3.s64 = ctx.r31.s64 + 1064;
	// bl 0x824200a8
	ctx.lr = 0x82563D04;
	sub_824200A8(ctx, base);
	// addi r3,r31,912
	ctx.r3.s64 = ctx.r31.s64 + 912;
	// bl 0x824200a8
	ctx.lr = 0x82563D0C;
	sub_824200A8(ctx, base);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x824200a8
	ctx.lr = 0x82563D14;
	sub_824200A8(ctx, base);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// bl 0x824200a8
	ctx.lr = 0x82563D1C;
	sub_824200A8(ctx, base);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x824200a8
	ctx.lr = 0x82563D24;
	sub_824200A8(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x824200a8
	ctx.lr = 0x82563D2C;
	sub_824200A8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x824200a8
	ctx.lr = 0x82563D34;
	sub_824200A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824200a8
	ctx.lr = 0x82563D3C;
	sub_824200A8(ctx, base);
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

__attribute__((alias("__imp__sub_82563D50"))) PPC_WEAK_FUNC(sub_82563D50);
PPC_FUNC_IMPL(__imp__sub_82563D50) {
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
	// lis r30,-31766
	ctx.r30.s64 = -2081816576;
	// lwz r31,-19120(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19120);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82563d84
	if (cr6.eq) goto loc_82563D84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82563ce0
	ctx.lr = 0x82563D7C;
	sub_82563CE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82563D84;
	sub_82416268(ctx, base);
loc_82563D84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19120(r30)
	PPC_STORE_U32(ctx.r30.u32 + -19120, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82563DA4"))) PPC_WEAK_FUNC(sub_82563DA4);
PPC_FUNC_IMPL(__imp__sub_82563DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563DA8"))) PPC_WEAK_FUNC(sub_82563DA8);
PPC_FUNC_IMPL(__imp__sub_82563DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82563DB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563DBC;
	sub_825766D0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563DC4;
	sub_82576CB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stb r30,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563DDC;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563DE4;
	sub_82576CB0(ctx, base);
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// stb r30,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r30.u8);
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// sth r30,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r30.u16);
	// sth r30,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563E00;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563E08;
	sub_82576CB0(ctx, base);
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
	// stb r30,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563E1C;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563E24;
	sub_82576CB0(ctx, base);
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// stb r30,293(r31)
	PPC_STORE_U8(ctx.r31.u32 + 293, ctx.r30.u8);
	// addi r29,r31,304
	ctx.r29.s64 = ctx.r31.s64 + 304;
	// sth r30,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r30.u16);
	// sth r30,298(r31)
	PPC_STORE_U16(ctx.r31.u32 + 298, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563E40;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563E48;
	sub_82576CB0(ctx, base);
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// stb r30,373(r31)
	PPC_STORE_U8(ctx.r31.u32 + 373, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563E5C;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563E64;
	sub_82576CB0(ctx, base);
	// stb r30,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r30.u8);
	// stb r30,445(r31)
	PPC_STORE_U8(ctx.r31.u32 + 445, ctx.r30.u8);
	// addi r29,r31,456
	ctx.r29.s64 = ctx.r31.s64 + 456;
	// sth r30,448(r31)
	PPC_STORE_U16(ctx.r31.u32 + 448, ctx.r30.u16);
	// sth r30,450(r31)
	PPC_STORE_U16(ctx.r31.u32 + 450, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563E80;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563E88;
	sub_82576CB0(ctx, base);
	// stb r30,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r30.u8);
	// stb r30,525(r31)
	PPC_STORE_U8(ctx.r31.u32 + 525, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563E9C;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563EA4;
	sub_82576CB0(ctx, base);
	// stb r30,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r30.u8);
	// stb r30,597(r31)
	PPC_STORE_U8(ctx.r31.u32 + 597, ctx.r30.u8);
	// addi r29,r31,608
	ctx.r29.s64 = ctx.r31.s64 + 608;
	// sth r30,600(r31)
	PPC_STORE_U16(ctx.r31.u32 + 600, ctx.r30.u16);
	// sth r30,602(r31)
	PPC_STORE_U16(ctx.r31.u32 + 602, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563EC0;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563EC8;
	sub_82576CB0(ctx, base);
	// stb r30,676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 676, ctx.r30.u8);
	// stb r30,677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 677, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563EDC;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563EE4;
	sub_82576CB0(ctx, base);
	// addi r29,r31,760
	ctx.r29.s64 = ctx.r31.s64 + 760;
	// stb r30,748(r31)
	PPC_STORE_U8(ctx.r31.u32 + 748, ctx.r30.u8);
	// stb r30,749(r31)
	PPC_STORE_U8(ctx.r31.u32 + 749, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r30,752(r31)
	PPC_STORE_U16(ctx.r31.u32 + 752, ctx.r30.u16);
	// sth r30,754(r31)
	PPC_STORE_U16(ctx.r31.u32 + 754, ctx.r30.u16);
	// bl 0x825766d0
	ctx.lr = 0x82563F00;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563F08;
	sub_82576CB0(ctx, base);
	// stb r30,828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 828, ctx.r30.u8);
	// stb r30,829(r31)
	PPC_STORE_U8(ctx.r31.u32 + 829, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563F1C;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563F24;
	sub_82576CB0(ctx, base);
	// stb r30,900(r31)
	PPC_STORE_U8(ctx.r31.u32 + 900, ctx.r30.u8);
	// stb r30,901(r31)
	PPC_STORE_U8(ctx.r31.u32 + 901, ctx.r30.u8);
	// addi r29,r31,912
	ctx.r29.s64 = ctx.r31.s64 + 912;
	// sth r30,904(r31)
	PPC_STORE_U16(ctx.r31.u32 + 904, ctx.r30.u16);
	// sth r30,906(r31)
	PPC_STORE_U16(ctx.r31.u32 + 906, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563F40;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563F48;
	sub_82576CB0(ctx, base);
	// stb r30,980(r31)
	PPC_STORE_U8(ctx.r31.u32 + 980, ctx.r30.u8);
	// stb r30,981(r31)
	PPC_STORE_U8(ctx.r31.u32 + 981, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563F5C;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563F64;
	sub_82576CB0(ctx, base);
	// stb r30,1052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1052, ctx.r30.u8);
	// stb r30,1053(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1053, ctx.r30.u8);
	// addi r29,r31,1064
	ctx.r29.s64 = ctx.r31.s64 + 1064;
	// sth r30,1056(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1056, ctx.r30.u16);
	// sth r30,1058(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1058, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563F80;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563F88;
	sub_82576CB0(ctx, base);
	// stb r30,1132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1132, ctx.r30.u8);
	// stb r30,1133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1133, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563F9C;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563FA4;
	sub_82576CB0(ctx, base);
	// stb r30,1204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1204, ctx.r30.u8);
	// stb r30,1205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1205, ctx.r30.u8);
	// addi r29,r31,1216
	ctx.r29.s64 = ctx.r31.s64 + 1216;
	// sth r30,1208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1208, ctx.r30.u16);
	// sth r30,1210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1210, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563FC0;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563FC8;
	sub_82576CB0(ctx, base);
	// stb r30,1284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1284, ctx.r30.u8);
	// stb r30,1285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1285, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82563FDC;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82563FE4;
	sub_82576CB0(ctx, base);
	// stb r30,1356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1356, ctx.r30.u8);
	// stb r30,1357(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1357, ctx.r30.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// sth r30,1360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1360, ctx.r30.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r30,1362(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1362, ctx.r30.u16);
	// addi r4,r11,12884
	ctx.r4.s64 = ctx.r11.s64 + 12884;
	// bl 0x82576848
	ctx.lr = 0x82564004;
	sub_82576848(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82576cb0
	ctx.lr = 0x8256400C;
	sub_82576CB0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r30.u8);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stb r10,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r10.u8);
	// bl 0x825766d0
	ctx.lr = 0x82564020;
	sub_825766D0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82576cb0
	ctx.lr = 0x82564028;
	sub_82576CB0(ctx, base);
	// stb r30,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r30.u8);
	// stb r30,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r30,226(r1)
	PPC_STORE_U16(ctx.r1.u32 + 226, ctx.r30.u16);
	// bl 0x82563ba0
	ctx.lr = 0x82564044;
	sub_82563BA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x8256404C;
	sub_824200A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564058"))) PPC_WEAK_FUNC(sub_82564058);
PPC_FUNC_IMPL(__imp__sub_82564058) {
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
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// lwz r3,-19120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825640a0
	if (!cr6.eq) goto loc_825640A0;
	// li r3,1368
	ctx.r3.s64 = 1368;
	// bl 0x82416260
	ctx.lr = 0x82564080;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825640b4
	if (cr6.eq) goto loc_825640B4;
	// bl 0x82563da8
	ctx.lr = 0x8256408C;
	sub_82563DA8(ctx, base);
	// stw r3,-19120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19120, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825640a0
	if (!cr6.eq) goto loc_825640A0;
loc_82564098:
	// bl 0x82564058
	ctx.lr = 0x8256409C;
	sub_82564058(ctx, base);
	// lwz r3,-19120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
loc_825640A0:
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
loc_825640B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19120, ctx.r11.u32);
	// b 0x82564098
	goto loc_82564098;
}

__attribute__((alias("__imp__sub_825640C0"))) PPC_WEAK_FUNC(sub_825640C0);
PPC_FUNC_IMPL(__imp__sub_825640C0) {
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
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-19120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825640f0
	if (!cr6.eq) goto loc_825640F0;
	// bl 0x82564058
	ctx.lr = 0x825640EC;
	sub_82564058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825640F0:
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// bl 0x825616d8
	ctx.lr = 0x825640F8;
	sub_825616D8(ctx, base);
	// lwz r11,-19120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8256410c
	if (!cr6.eq) goto loc_8256410C;
	// bl 0x82564058
	ctx.lr = 0x82564108;
	sub_82564058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8256410C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// bl 0x82561d00
	ctx.lr = 0x82564118;
	sub_82561D00(ctx, base);
	// lwz r11,-19120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8256412c
	if (!cr6.eq) goto loc_8256412C;
	// bl 0x82564058
	ctx.lr = 0x82564128;
	sub_82564058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8256412C:
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// bl 0x82561818
	ctx.lr = 0x82564134;
	sub_82561818(ctx, base);
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

__attribute__((alias("__imp__sub_82564150"))) PPC_WEAK_FUNC(sub_82564150);
PPC_FUNC_IMPL(__imp__sub_82564150) {
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
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-19120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82564180
	if (!cr6.eq) goto loc_82564180;
	// bl 0x82564058
	ctx.lr = 0x8256417C;
	sub_82564058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82564180:
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// bl 0x825616d8
	ctx.lr = 0x82564188;
	sub_825616D8(ctx, base);
	// lwz r11,-19120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8256419c
	if (!cr6.eq) goto loc_8256419C;
	// bl 0x82564058
	ctx.lr = 0x82564198;
	sub_82564058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8256419C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// bl 0x82561d00
	ctx.lr = 0x825641A8;
	sub_82561D00(ctx, base);
	// lwz r11,-19120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825641bc
	if (!cr6.eq) goto loc_825641BC;
	// bl 0x82564058
	ctx.lr = 0x825641B8;
	sub_82564058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825641BC:
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// bl 0x82561818
	ctx.lr = 0x825641C4;
	sub_82561818(ctx, base);
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

__attribute__((alias("__imp__sub_825641E0"))) PPC_WEAK_FUNC(sub_825641E0);
PPC_FUNC_IMPL(__imp__sub_825641E0) {
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
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// lwz r11,-19120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82564224
	if (!cr6.eq) goto loc_82564224;
	// li r3,1368
	ctx.r3.s64 = 1368;
	// bl 0x82416260
	ctx.lr = 0x82564208;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82564238
	if (cr6.eq) goto loc_82564238;
	// bl 0x82563da8
	ctx.lr = 0x82564214;
	sub_82563DA8(ctx, base);
	// stw r3,-19120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19120, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82564224
	if (!cr6.eq) goto loc_82564224;
loc_82564220:
	// bl 0x82564058
	ctx.lr = 0x82564224;
	sub_82564058(ctx, base);
loc_82564224:
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
loc_82564238:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19120, ctx.r11.u32);
	// b 0x82564220
	goto loc_82564220;
}

__attribute__((alias("__imp__sub_82564244"))) PPC_WEAK_FUNC(sub_82564244);
PPC_FUNC_IMPL(__imp__sub_82564244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564248"))) PPC_WEAK_FUNC(sub_82564248);
PPC_FUNC_IMPL(__imp__sub_82564248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r3,-19120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x82564058
	sub_82564058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256425C"))) PPC_WEAK_FUNC(sub_8256425C);
PPC_FUNC_IMPL(__imp__sub_8256425C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564260"))) PPC_WEAK_FUNC(sub_82564260);
PPC_FUNC_IMPL(__imp__sub_82564260) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r11,-19120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82564294
	if (!cr6.eq) goto loc_82564294;
	// bl 0x82564058
	ctx.lr = 0x82564280;
	sub_82564058(ctx, base);
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82564294:
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825642A8"))) PPC_WEAK_FUNC(sub_825642A8);
PPC_FUNC_IMPL(__imp__sub_825642A8) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r11,-19120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825642dc
	if (!cr6.eq) goto loc_825642DC;
	// bl 0x82564058
	ctx.lr = 0x825642C8;
	sub_82564058(ctx, base);
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825642DC:
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825642F0"))) PPC_WEAK_FUNC(sub_825642F0);
PPC_FUNC_IMPL(__imp__sub_825642F0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576848
	ctx.lr = 0x8256430C;
	sub_82576848(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82576cb0
	ctx.lr = 0x82564314;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x825766d0
	ctx.lr = 0x8256432C;
	sub_825766D0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82576cb0
	ctx.lr = 0x82564334;
	sub_82576CB0(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stb r31,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r31.u8);
	// sth r31,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r31.u16);
	// sth r31,226(r1)
	PPC_STORE_U16(ctx.r1.u32 + 226, ctx.r31.u16);
	// lwz r11,-19120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8256435c
	if (!cr6.eq) goto loc_8256435C;
	// bl 0x82564058
	ctx.lr = 0x82564358;
	sub_82564058(ctx, base);
	// b 0x82564360
	goto loc_82564360;
loc_8256435C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82564360:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82563ba0
	ctx.lr = 0x82564368;
	sub_82563BA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82564370;
	sub_824200A8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564384"))) PPC_WEAK_FUNC(sub_82564384);
PPC_FUNC_IMPL(__imp__sub_82564384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564388"))) PPC_WEAK_FUNC(sub_82564388);
PPC_FUNC_IMPL(__imp__sub_82564388) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r11,-19120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825643bc
	if (!cr6.eq) goto loc_825643BC;
	// bl 0x82564058
	ctx.lr = 0x825643A8;
	sub_82564058(ctx, base);
	// addi r3,r3,760
	ctx.r3.s64 = ctx.r3.s64 + 760;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825643BC:
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825643D0"))) PPC_WEAK_FUNC(sub_825643D0);
PPC_FUNC_IMPL(__imp__sub_825643D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82564150
	sub_82564150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825643D4"))) PPC_WEAK_FUNC(sub_825643D4);
PPC_FUNC_IMPL(__imp__sub_825643D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825643D8"))) PPC_WEAK_FUNC(sub_825643D8);
PPC_FUNC_IMPL(__imp__sub_825643D8) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r11,-19120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8256440c
	if (!cr6.eq) goto loc_8256440C;
	// bl 0x82564058
	ctx.lr = 0x825643F8;
	sub_82564058(ctx, base);
	// addi r3,r3,912
	ctx.r3.s64 = ctx.r3.s64 + 912;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8256440C:
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564420"))) PPC_WEAK_FUNC(sub_82564420);
PPC_FUNC_IMPL(__imp__sub_82564420) {
	PPC_FUNC_PROLOGUE();
	// b 0x825640c0
	sub_825640C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564424"))) PPC_WEAK_FUNC(sub_82564424);
PPC_FUNC_IMPL(__imp__sub_82564424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564428"))) PPC_WEAK_FUNC(sub_82564428);
PPC_FUNC_IMPL(__imp__sub_82564428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82564448
	if (cr6.eq) goto loc_82564448;
	// lhz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8256444c
	if (!cr6.eq) goto loc_8256444C;
loc_82564448:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8256444C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564454"))) PPC_WEAK_FUNC(sub_82564454);
PPC_FUNC_IMPL(__imp__sub_82564454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564458"))) PPC_WEAK_FUNC(sub_82564458);
PPC_FUNC_IMPL(__imp__sub_82564458) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82564490
	if (!cr6.eq) goto loc_82564490;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825644d8
	goto loc_825644D8;
loc_82564490:
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// ori r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 | 26214;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825644ac
	if (!cr6.gt) goto loc_825644AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x825644AC;
	sub_831CC150(ctx, base);
loc_825644AC:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82534518
	ctx.lr = 0x825644C0;
	sub_82534518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_825644D8:
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

__attribute__((alias("__imp__sub_825644F0"))) PPC_WEAK_FUNC(sub_825644F0);
PPC_FUNC_IMPL(__imp__sub_825644F0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r10,r11,13016
	ctx.r10.s64 = ctx.r11.s64 + 13016;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824200a8
	ctx.lr = 0x82564518;
	sub_824200A8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x824200a8
	ctx.lr = 0x82564520;
	sub_824200A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82533738
	ctx.lr = 0x82564528;
	sub_82533738(ctx, base);
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

__attribute__((alias("__imp__sub_8256453C"))) PPC_WEAK_FUNC(sub_8256453C);
PPC_FUNC_IMPL(__imp__sub_8256453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564540"))) PPC_WEAK_FUNC(sub_82564540);
PPC_FUNC_IMPL(__imp__sub_82564540) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8256456c
	if (!cr6.eq) goto loc_8256456C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825645a0
	goto loc_825645A0;
loc_8256456C:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82563b60
	ctx.lr = 0x8256457C;
	sub_82563B60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82563920
	ctx.lr = 0x82564588;
	sub_82563920(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82564590;
	sub_824200A8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x824200a8
	ctx.lr = 0x82564598;
	sub_824200A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825337b0
	ctx.lr = 0x825645A0;
	sub_825337B0(ctx, base);
loc_825645A0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825645B8"))) PPC_WEAK_FUNC(sub_825645B8);
PPC_FUNC_IMPL(__imp__sub_825645B8) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825645e4
	if (!cr6.eq) goto loc_825645E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82564618
	goto loc_82564618;
loc_825645E4:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82563b60
	ctx.lr = 0x825645F4;
	sub_82563B60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82563920
	ctx.lr = 0x82564600;
	sub_82563920(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82564608;
	sub_824200A8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x824200a8
	ctx.lr = 0x82564610;
	sub_824200A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825337c8
	ctx.lr = 0x82564618;
	sub_825337C8(ctx, base);
loc_82564618:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564630"))) PPC_WEAK_FUNC(sub_82564630);
PPC_FUNC_IMPL(__imp__sub_82564630) {
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
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r10,r11,13016
	ctx.r10.s64 = ctx.r11.s64 + 13016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824200a8
	ctx.lr = 0x82564660;
	sub_824200A8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x824200a8
	ctx.lr = 0x82564668;
	sub_824200A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82533738
	ctx.lr = 0x82564670;
	sub_82533738(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82564690
	if (cr6.eq) goto loc_82564690;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8256468C;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82564690:
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

__attribute__((alias("__imp__sub_825646A8"))) PPC_WEAK_FUNC(sub_825646A8);
PPC_FUNC_IMPL(__imp__sub_825646A8) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82576848
	ctx.lr = 0x825646C8;
	sub_82576848(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82576cb0
	ctx.lr = 0x825646D0;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// bl 0x825766d0
	ctx.lr = 0x825646E8;
	sub_825766D0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82576cb0
	ctx.lr = 0x825646F0;
	sub_82576CB0(ctx, base);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stb r31,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r31.u8);
	// sth r31,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r31.u16);
	// sth r31,242(r1)
	PPC_STORE_U16(ctx.r1.u32 + 242, ctx.r31.u16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82564730
	if (cr6.eq) goto loc_82564730;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82563960
	ctx.lr = 0x82564720;
	sub_82563960(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x824200a8
	ctx.lr = 0x82564728;
	sub_824200A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82564744
	goto loc_82564744;
loc_82564730:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82561bd8
	ctx.lr = 0x82564738;
	sub_82561BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_82564744:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825639b0
	ctx.lr = 0x82564750;
	sub_825639B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x82561c68
	ctx.lr = 0x8256475C;
	sub_82561C68(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82561790
	ctx.lr = 0x82564768;
	sub_82561790(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8256477c
	if (!cr6.lt) goto loc_8256477C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_8256477C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82533868
	ctx.lr = 0x82564784;
	sub_82533868(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824200a8
	ctx.lr = 0x8256478C;
	sub_824200A8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825647A4"))) PPC_WEAK_FUNC(sub_825647A4);
PPC_FUNC_IMPL(__imp__sub_825647A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825647A8"))) PPC_WEAK_FUNC(sub_825647A8);
PPC_FUNC_IMPL(__imp__sub_825647A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825647B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x825336d0
	ctx.lr = 0x825647C0;
	sub_825336D0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r10,r11,13016
	ctx.r10.s64 = ctx.r11.s64 + 13016;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82576848
	ctx.lr = 0x825647DC;
	sub_82576848(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x825647E4;
	sub_82576CB0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r9,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r9.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82564800;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82564808;
	sub_82576CB0(ctx, base);
	// stb r30,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r30.u8);
	// stb r30,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r30.u8);
	// addi r29,r31,160
	ctx.r29.s64 = ctx.r31.s64 + 160;
	// sth r30,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r30.u16);
	// sth r30,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82564824;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x8256482C;
	sub_82576CB0(ctx, base);
	// stb r30,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r30.u8);
	// stb r30,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82564840;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82564848;
	sub_82576CB0(ctx, base);
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// stb r30,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r30.u16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// sth r30,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r30.u16);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// bl 0x825646a8
	ctx.lr = 0x8256486C;
	sub_825646A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564878"))) PPC_WEAK_FUNC(sub_82564878);
PPC_FUNC_IMPL(__imp__sub_82564878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82564880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825336d0
	ctx.lr = 0x82564890;
	sub_825336D0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,13016
	ctx.r10.s64 = ctx.r11.s64 + 13016;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82491e00
	ctx.lr = 0x825648A8;
	sub_82491E00(ctx, base);
	// addi r29,r31,160
	ctx.r29.s64 = ctx.r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x825648B4;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x825648BC;
	sub_82576CB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// stb r30,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r30.u8);
	// stb r30,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x825648D4;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x825648DC;
	sub_82576CB0(ctx, base);
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// stb r30,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r30.u8);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// sth r30,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r30.u16);
	// sth r30,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r30.u16);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82564908
	if (cr6.lt) goto loc_82564908;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82564908:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825646a8
	ctx.lr = 0x82564914;
	sub_825646A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564920"))) PPC_WEAK_FUNC(sub_82564920);
PPC_FUNC_IMPL(__imp__sub_82564920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82564878
	ctx.lr = 0x8256493C;
	sub_82564878(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82564540
	ctx.lr = 0x82564944;
	sub_82564540(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13016
	ctx.r10.s64 = ctx.r11.s64 + 13016;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824200a8
	ctx.lr = 0x8256495C;
	sub_824200A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824200a8
	ctx.lr = 0x82564964;
	sub_824200A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82533738
	ctx.lr = 0x8256496C;
	sub_82533738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564984"))) PPC_WEAK_FUNC(sub_82564984);
PPC_FUNC_IMPL(__imp__sub_82564984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564988"))) PPC_WEAK_FUNC(sub_82564988);
PPC_FUNC_IMPL(__imp__sub_82564988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82564990;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82564b78
	if (cr6.eq) goto loc_82564B78;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,40
	ctx.r26.s64 = 40;
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// divw. r9,r10,r26
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825649dc
	if (!cr0.eq) goto loc_825649DC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825334f0
	ctx.lr = 0x825649D0;
	sub_825334F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825649DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r10,r10,r26
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r26.s32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82564a68
	if (cr6.gt) goto loc_82564A68;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x82564a20
	if (cr6.eq) goto loc_82564A20;
loc_82564A04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82576490
	ctx.lr = 0x82564A10;
	sub_82576490(ctx, base);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bne cr6,0x82564a04
	if (!cr6.eq) goto loc_82564A04;
loc_82564A20:
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825333c0
	ctx.lr = 0x82564A34;
	sub_825333C0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r8,r26
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82564A68:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r3,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r3.s64;
	// divw r6,r7,r26
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r26.s32);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82564afc
	if (cr6.gt) goto loc_82564AFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82564ab8
	if (cr6.eq) goto loc_82564AB8;
loc_82564A9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82576490
	ctx.lr = 0x82564AA8;
	sub_82576490(ctx, base);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x82564a9c
	if (!cr6.eq) goto loc_82564A9C;
loc_82564AB8:
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82564b74
	if (cr6.eq) goto loc_82564B74;
loc_82564AC8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82564adc
	if (cr6.eq) goto loc_82564ADC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825767c8
	ctx.lr = 0x82564ADC;
	sub_825767C8(ctx, base);
loc_82564ADC:
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82564ac8
	if (!cr6.eq) goto loc_82564AC8;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82564AFC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82564b18
	if (cr6.eq) goto loc_82564B18;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825333c0
	ctx.lr = 0x82564B10;
	sub_825333C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82564B18;
	sub_8386D088(ctx, base);
loc_82564B18:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r26
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// bl 0x82564458
	ctx.lr = 0x82564B30;
	sub_82564458(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82564b78
	if (cr6.eq) goto loc_82564B78;
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82564b74
	if (cr6.eq) goto loc_82564B74;
loc_82564B50:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82564b64
	if (cr6.eq) goto loc_82564B64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825767c8
	ctx.lr = 0x82564B64;
	sub_825767C8(ctx, base);
loc_82564B64:
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82564b50
	if (!cr6.eq) goto loc_82564B50;
loc_82564B74:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82564B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564B84"))) PPC_WEAK_FUNC(sub_82564B84);
PPC_FUNC_IMPL(__imp__sub_82564B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564B88"))) PPC_WEAK_FUNC(sub_82564B88);
PPC_FUNC_IMPL(__imp__sub_82564B88) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82564BB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82564BD0"))) PPC_WEAK_FUNC(sub_82564BD0);
PPC_FUNC_IMPL(__imp__sub_82564BD0) {
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
	// addi r9,r11,13048
	ctx.r9.s64 = ctx.r11.s64 + 13048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82564c04
	if (cr6.eq) goto loc_82564C04;
	// bl 0x82416268
	ctx.lr = 0x82564C00;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82564C04:
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

__attribute__((alias("__imp__sub_82564C18"))) PPC_WEAK_FUNC(sub_82564C18);
PPC_FUNC_IMPL(__imp__sub_82564C18) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// bl 0x8256ec80
	ctx.lr = 0x82564C54;
	sub_8256EC80(ctx, base);
	// ld r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,13076
	ctx.r8.s64 = ctx.r9.s64 + 13076;
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82564C90"))) PPC_WEAK_FUNC(sub_82564C90);
PPC_FUNC_IMPL(__imp__sub_82564C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82564C98;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82564ce0
	if (cr6.eq) goto loc_82564CE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82564CDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_82564CE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82561c68
	ctx.lr = 0x82564CEC;
	sub_82561C68(ctx, base);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r11,162(r30)
	PPC_STORE_U16(ctx.r30.u32 + 162, ctx.r11.u16);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82564d0c
	if (cr6.eq) goto loc_82564D0C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// sth r10,162(r30)
	PPC_STORE_U16(ctx.r30.u32 + 162, ctx.r10.u16);
loc_82564D0C:
	// rlwinm r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	// sth r27,164(r30)
	PPC_STORE_U16(ctx.r30.u32 + 164, ctx.r27.u16);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// beq cr6,0x82564d80
	if (cr6.eq) goto loc_82564D80;
	// bl 0x825730a8
	ctx.lr = 0x82564D30;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82564dc0
	if (cr6.eq) goto loc_82564DC0;
	// bl 0x825707d8
	ctx.lr = 0x82564D3C;
	sub_825707D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82564dc0
	if (cr6.eq) goto loc_82564DC0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// beq cr6,0x82564d6c
	if (cr6.eq) goto loc_82564D6C;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825703d8
	ctx.lr = 0x82564D68;
	sub_825703D8(ctx, base);
	// b 0x82564db4
	goto loc_82564DB4;
loc_82564D6C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82570420
	ctx.lr = 0x82564D7C;
	sub_82570420(ctx, base);
	// b 0x82564db4
	goto loc_82564DB4;
loc_82564D80:
	// bl 0x825730a8
	ctx.lr = 0x82564D84;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82564dc0
	if (cr6.eq) goto loc_82564DC0;
	// bl 0x8256fd48
	ctx.lr = 0x82564D90;
	sub_8256FD48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82564dc0
	if (cr6.eq) goto loc_82564DC0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82570008
	ctx.lr = 0x82564DB4;
	sub_82570008(ctx, base);
loc_82564DB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82564dd8
	if (!cr6.eq) goto loc_82564DD8;
loc_82564DC0:
	// lis r11,-29905
	ctx.r11.s64 = -1959854080;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r10,r11,64515
	ctx.r10.u64 = ctx.r11.u64 | 64515;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82564DD8:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82564df4
	if (cr6.eq) goto loc_82564DF4;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,164(r30)
	PPC_STORE_U16(ctx.r30.u32 + 164, ctx.r10.u16);
loc_82564DF4:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564E04"))) PPC_WEAK_FUNC(sub_82564E04);
PPC_FUNC_IMPL(__imp__sub_82564E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564E08"))) PPC_WEAK_FUNC(sub_82564E08);
PPC_FUNC_IMPL(__imp__sub_82564E08) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82564E38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82564e6c
	if (cr6.eq) goto loc_82564E6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sth r11,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82564E64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82564e80
	goto loc_82564E80;
loc_82564E6C:
	// lis r11,-29905
	ctx.r11.s64 = -1959854080;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,64531
	ctx.r9.u64 = ctx.r11.u64 | 64531;
	// sth r10,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r10.u16);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82564E80:
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

__attribute__((alias("__imp__sub_82564E98"))) PPC_WEAK_FUNC(sub_82564E98);
PPC_FUNC_IMPL(__imp__sub_82564E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82564EA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82564ECC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82564f08
	if (cr6.eq) goto loc_82564F08;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82564EFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82564F08:
	// lis r11,-29905
	ctx.r11.s64 = -1959854080;
	// ori r10,r11,64531
	ctx.r10.u64 = ctx.r11.u64 | 64531;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564F1C"))) PPC_WEAK_FUNC(sub_82564F1C);
PPC_FUNC_IMPL(__imp__sub_82564F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564F20"))) PPC_WEAK_FUNC(sub_82564F20);
PPC_FUNC_IMPL(__imp__sub_82564F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82564F28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82564F54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82564f90
	if (cr6.eq) goto loc_82564F90;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82564F84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82564F90:
	// lis r11,-29905
	ctx.r11.s64 = -1959854080;
	// ori r10,r11,64531
	ctx.r10.u64 = ctx.r11.u64 | 64531;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82564FA4"))) PPC_WEAK_FUNC(sub_82564FA4);
PPC_FUNC_IMPL(__imp__sub_82564FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564FA8"))) PPC_WEAK_FUNC(sub_82564FA8);
PPC_FUNC_IMPL(__imp__sub_82564FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82564FB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82564FDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82565018
	if (cr6.eq) goto loc_82565018;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8256500C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82565018:
	// lis r11,-29905
	ctx.r11.s64 = -1959854080;
	// ori r10,r11,64531
	ctx.r10.u64 = ctx.r11.u64 | 64531;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256502C"))) PPC_WEAK_FUNC(sub_8256502C);
PPC_FUNC_IMPL(__imp__sub_8256502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565030"))) PPC_WEAK_FUNC(sub_82565030);
PPC_FUNC_IMPL(__imp__sub_82565030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82565038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8256505C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82565090
	if (cr6.eq) goto loc_82565090;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82565084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82565090:
	// lis r11,-29905
	ctx.r11.s64 = -1959854080;
	// ori r10,r11,64531
	ctx.r10.u64 = ctx.r11.u64 | 64531;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825650A4"))) PPC_WEAK_FUNC(sub_825650A4);
PPC_FUNC_IMPL(__imp__sub_825650A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825650A8"))) PPC_WEAK_FUNC(sub_825650A8);
PPC_FUNC_IMPL(__imp__sub_825650A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825650D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825650fc
	if (cr6.eq) goto loc_825650FC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825650F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82565110
	goto loc_82565110;
loc_825650FC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8256510c
	if (cr6.eq) goto loc_8256510C;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_8256510C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82565110:
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

__attribute__((alias("__imp__sub_82565128"))) PPC_WEAK_FUNC(sub_82565128);
PPC_FUNC_IMPL(__imp__sub_82565128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82565164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8256517C"))) PPC_WEAK_FUNC(sub_8256517C);
PPC_FUNC_IMPL(__imp__sub_8256517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565180"))) PPC_WEAK_FUNC(sub_82565180);
PPC_FUNC_IMPL(__imp__sub_82565180) {
	PPC_FUNC_PROLOGUE();
	// b 0x82570af8
	sub_82570AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565184"))) PPC_WEAK_FUNC(sub_82565184);
PPC_FUNC_IMPL(__imp__sub_82565184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565188"))) PPC_WEAK_FUNC(sub_82565188);
PPC_FUNC_IMPL(__imp__sub_82565188) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82564c90
	ctx.lr = 0x825651A8;
	sub_82564C90(ctx, base);
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

__attribute__((alias("__imp__sub_825651C0"))) PPC_WEAK_FUNC(sub_825651C0);
PPC_FUNC_IMPL(__imp__sub_825651C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825651C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x825730a8
	ctx.lr = 0x825651F8;
	sub_825730A8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82565234
	if (cr6.eq) goto loc_82565234;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// bl 0x82564c18
	ctx.lr = 0x8256522C;
	sub_82564C18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82565238
	goto loc_82565238;
loc_82565234:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82565238:
	// std r25,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r25.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82565244;
	sub_82572FA0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82570f58
	ctx.lr = 0x82565250;
	sub_82570F58(ctx, base);
	// std r25,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r25.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82572fa0
	ctx.lr = 0x82565260;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x8256526C;
	sub_82572FA0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565278"))) PPC_WEAK_FUNC(sub_82565278);
PPC_FUNC_IMPL(__imp__sub_82565278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82565280;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x825730a8
	ctx.lr = 0x825652A4;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825652d4
	if (cr6.eq) goto loc_825652D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8256ec80
	ctx.lr = 0x825652C0;
	sub_8256EC80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,13088
	ctx.r10.s64 = ctx.r11.s64 + 13088;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x825652d8
	goto loc_825652D8;
loc_825652D4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_825652D8:
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825652E4;
	sub_82572FA0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570f58
	ctx.lr = 0x825652F0;
	sub_82570F58(ctx, base);
	// std r27,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r27.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x82565300;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8256530C;
	sub_82572FA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565318"))) PPC_WEAK_FUNC(sub_82565318);
PPC_FUNC_IMPL(__imp__sub_82565318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82565320;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x825730a8
	ctx.lr = 0x82565350;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256539c
	if (cr6.eq) goto loc_8256539C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8256ec80
	ctx.lr = 0x82565368;
	sub_8256EC80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// addi r10,r11,13100
	ctx.r10.s64 = ctx.r11.s64 + 13100;
	// std r26,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r26.u64);
	// std r29,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r29.u64);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// beq cr6,0x82565394
	if (cr6.eq) goto loc_82565394;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
loc_82565394:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x825653a4
	goto loc_825653A4;
loc_8256539C:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825653A4:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825653B0;
	sub_82572FA0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570f58
	ctx.lr = 0x825653BC;
	sub_82570F58(ctx, base);
	// std r29,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r29.u64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x825653CC;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825653D8;
	sub_82572FA0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825653E4"))) PPC_WEAK_FUNC(sub_825653E4);
PPC_FUNC_IMPL(__imp__sub_825653E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825653E8"))) PPC_WEAK_FUNC(sub_825653E8);
PPC_FUNC_IMPL(__imp__sub_825653E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825653F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x825730a8
	ctx.lr = 0x82565420;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82565468
	if (cr6.eq) goto loc_82565468;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8256ec80
	ctx.lr = 0x82565438;
	sub_8256EC80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// addi r10,r11,13112
	ctx.r10.s64 = ctx.r11.s64 + 13112;
	// std r26,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r26.u64);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82565460
	if (cr6.eq) goto loc_82565460;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
loc_82565460:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82565470
	goto loc_82565470;
loc_82565468:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82565470:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8256547C;
	sub_82572FA0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570f58
	ctx.lr = 0x82565488;
	sub_82570F58(ctx, base);
	// std r29,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r29.u64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x82565498;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825654A4;
	sub_82572FA0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825654B0"))) PPC_WEAK_FUNC(sub_825654B0);
PPC_FUNC_IMPL(__imp__sub_825654B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825654B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,112
	ctx.r3.s64 = 112;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x825730a8
	ctx.lr = 0x825654E8;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82565530
	if (cr6.eq) goto loc_82565530;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8256ec80
	ctx.lr = 0x82565500;
	sub_8256EC80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// std r27,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r27.u64);
	// addi r10,r11,13124
	ctx.r10.s64 = ctx.r11.s64 + 13124;
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82565528
	if (cr6.eq) goto loc_82565528;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
loc_82565528:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82565538
	goto loc_82565538;
loc_82565530:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82565538:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565544;
	sub_82572FA0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570f58
	ctx.lr = 0x82565550;
	sub_82570F58(ctx, base);
	// std r29,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r29.u64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x82565560;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8256556C;
	sub_82572FA0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565578"))) PPC_WEAK_FUNC(sub_82565578);
PPC_FUNC_IMPL(__imp__sub_82565578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82565580;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,104
	ctx.r3.s64 = 104;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x825730a8
	ctx.lr = 0x825655A8;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825655e8
	if (cr6.eq) goto loc_825655E8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8256ec80
	ctx.lr = 0x825655C0;
	sub_8256EC80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r10,r11,13136
	ctx.r10.s64 = ctx.r11.s64 + 13136;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825655e0
	if (cr6.eq) goto loc_825655E0;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
loc_825655E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x825655f0
	goto loc_825655F0;
loc_825655E8:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825655F0:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825655FC;
	sub_82572FA0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570f58
	ctx.lr = 0x82565608;
	sub_82570F58(ctx, base);
	// std r29,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r29.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x82565618;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565624;
	sub_82572FA0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565630"))) PPC_WEAK_FUNC(sub_82565630);
PPC_FUNC_IMPL(__imp__sub_82565630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82565638;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,104
	ctx.r3.s64 = 104;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x825730a8
	ctx.lr = 0x82565660;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825656a0
	if (cr6.eq) goto loc_825656A0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8256ec80
	ctx.lr = 0x82565678;
	sub_8256EC80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r10,r11,13148
	ctx.r10.s64 = ctx.r11.s64 + 13148;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82565698
	if (cr6.eq) goto loc_82565698;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
loc_82565698:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x825656a8
	goto loc_825656A8;
loc_825656A0:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825656A8:
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825656B4;
	sub_82572FA0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570f58
	ctx.lr = 0x825656C0;
	sub_82570F58(ctx, base);
	// std r29,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r29.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x825656D0;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825656DC;
	sub_82572FA0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825656E8"))) PPC_WEAK_FUNC(sub_825656E8);
PPC_FUNC_IMPL(__imp__sub_825656E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825656F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82565714;
	sub_82572FA0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x8258be28
	ctx.lr = 0x82565724;
	sub_8258BE28(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm r8,r9,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82565744
	if (!cr6.eq) goto loc_82565744;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x82565758
	goto loc_82565758;
loc_82565744:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8258bd68
	ctx.lr = 0x8256574C;
	sub_8258BD68(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
loc_82565758:
	// bl 0x8258be88
	ctx.lr = 0x8256575C;
	sub_8258BE88(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82565770
	if (cr6.eq) goto loc_82565770;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
loc_82565770:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x82572fa0
	ctx.lr = 0x82565788;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565794"))) PPC_WEAK_FUNC(sub_82565794);
PPC_FUNC_IMPL(__imp__sub_82565794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565798"))) PPC_WEAK_FUNC(sub_82565798);
PPC_FUNC_IMPL(__imp__sub_82565798) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825657c4
	if (cr6.eq) goto loc_825657C4;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x825657c8
	goto loc_825657C8;
loc_825657C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825657C8:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825657d8
	if (cr6.eq) goto loc_825657D8;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
loc_825657D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82565808
	if (cr6.eq) goto loc_82565808;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x825656e8
	ctx.lr = 0x825657F0;
	sub_825656E8(ctx, base);
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
loc_82565808:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82565824"))) PPC_WEAK_FUNC(sub_82565824);
PPC_FUNC_IMPL(__imp__sub_82565824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565828"))) PPC_WEAK_FUNC(sub_82565828);
PPC_FUNC_IMPL(__imp__sub_82565828) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bl 0x825651c0
	ctx.lr = 0x82565884;
	sub_825651C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825658b0
	if (cr6.eq) goto loc_825658B0;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825658b0
	if (cr6.eq) goto loc_825658B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825656e8
	ctx.lr = 0x825658AC;
	sub_825656E8(ctx, base);
	// b 0x825658b8
	goto loc_825658B8;
loc_825658B0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825658B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825658C4;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825658D0;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_825658E8"))) PPC_WEAK_FUNC(sub_825658E8);
PPC_FUNC_IMPL(__imp__sub_825658E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bl 0x82565278
	ctx.lr = 0x82565938;
	sub_82565278(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82565964
	if (cr6.eq) goto loc_82565964;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82565964
	if (cr6.eq) goto loc_82565964;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825656e8
	ctx.lr = 0x82565960;
	sub_825656E8(ctx, base);
	// b 0x8256596c
	goto loc_8256596C;
loc_82565964:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8256596C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565978;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565984;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8256599C"))) PPC_WEAK_FUNC(sub_8256599C);
PPC_FUNC_IMPL(__imp__sub_8256599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825659A0"))) PPC_WEAK_FUNC(sub_825659A0);
PPC_FUNC_IMPL(__imp__sub_825659A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bl 0x82565318
	ctx.lr = 0x82565A04;
	sub_82565318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82565798
	ctx.lr = 0x82565A14;
	sub_82565798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565A20;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565A2C;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82565A48"))) PPC_WEAK_FUNC(sub_82565A48);
PPC_FUNC_IMPL(__imp__sub_82565A48) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bl 0x825653e8
	ctx.lr = 0x82565AAC;
	sub_825653E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82565798
	ctx.lr = 0x82565ABC;
	sub_82565798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565AC8;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565AD4;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82565AF0"))) PPC_WEAK_FUNC(sub_82565AF0);
PPC_FUNC_IMPL(__imp__sub_82565AF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bl 0x825654b0
	ctx.lr = 0x82565B54;
	sub_825654B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82565798
	ctx.lr = 0x82565B64;
	sub_82565798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565B70;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565B7C;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82565B98"))) PPC_WEAK_FUNC(sub_82565B98);
PPC_FUNC_IMPL(__imp__sub_82565B98) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bl 0x82565578
	ctx.lr = 0x82565BEC;
	sub_82565578(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82565c18
	if (cr6.eq) goto loc_82565C18;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82565c18
	if (cr6.eq) goto loc_82565C18;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825656e8
	ctx.lr = 0x82565C14;
	sub_825656E8(ctx, base);
	// b 0x82565c20
	goto loc_82565C20;
loc_82565C18:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82565C20:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565C2C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82565C38;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_82565C50"))) PPC_WEAK_FUNC(sub_82565C50);
PPC_FUNC_IMPL(__imp__sub_82565C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82565630
	ctx.lr = 0x82565CA4;
	sub_82565630(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82565798
	ctx.lr = 0x82565CB4;
	sub_82565798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82565CC0;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82565CCC;
	sub_82572FA0(ctx, base);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82565CE0"))) PPC_WEAK_FUNC(sub_82565CE0);
PPC_FUNC_IMPL(__imp__sub_82565CE0) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// bl 0x8256ec80
	ctx.lr = 0x82565D1C;
	sub_8256EC80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,13160
	ctx.r10.s64 = ctx.r11.s64 + 13160;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82491e00
	ctx.lr = 0x82565D34;
	sub_82491E00(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r10,r31,244
	ctx.r10.s64 = ctx.r31.s64 + 244;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82565D48:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82565d48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82565D48;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82565D78"))) PPC_WEAK_FUNC(sub_82565D78);
PPC_FUNC_IMPL(__imp__sub_82565D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82565D80;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x825766d0
	ctx.lr = 0x82565DB0;
	sub_825766D0(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82576cb0
	ctx.lr = 0x82565DB8;
	sub_82576CB0(ctx, base);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// stb r31,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r31.u8);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825766d0
	ctx.lr = 0x82565DC8;
	sub_825766D0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82576cb0
	ctx.lr = 0x82565DD0;
	sub_82576CB0(ctx, base);
	// stb r31,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r31.u8);
	// stb r31,253(r1)
	PPC_STORE_U8(ctx.r1.u32 + 253, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r31,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r31.u16);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// sth r31,258(r1)
	PPC_STORE_U16(ctx.r1.u32 + 258, ctx.r31.u16);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// ori r7,r26,16
	ctx.r7.u64 = ctx.r26.u64 | 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82564c90
	ctx.lr = 0x82565E00;
	sub_82564C90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824200a8
	ctx.lr = 0x82565E08;
	sub_824200A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565E14"))) PPC_WEAK_FUNC(sub_82565E14);
PPC_FUNC_IMPL(__imp__sub_82565E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565E18"))) PPC_WEAK_FUNC(sub_82565E18);
PPC_FUNC_IMPL(__imp__sub_82565E18) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13172
	ctx.r10.s64 = ctx.r11.s64 + 13172;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82565e80
	if (cr6.eq) goto loc_82565E80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82565E58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82565e78
	if (cr6.eq) goto loc_82565E78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82565E78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82565E78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82565E80:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x824200a8
	ctx.lr = 0x82565E88;
	sub_824200A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,13048
	ctx.r10.s64 = ctx.r11.s64 + 13048;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82565EA8"))) PPC_WEAK_FUNC(sub_82565EA8);
PPC_FUNC_IMPL(__imp__sub_82565EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82565EB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,280
	ctx.r3.s64 = 280;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x825730a8
	ctx.lr = 0x82565EE0;
	sub_825730A8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82565f1c
	if (cr6.eq) goto loc_82565F1C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x82565ce0
	ctx.lr = 0x82565F14;
	sub_82565CE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82565f20
	goto loc_82565F20;
loc_82565F1C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82565F20:
	// std r25,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r25.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82565F2C;
	sub_82572FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82561828
	ctx.lr = 0x82565F34;
	sub_82561828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82570f58
	ctx.lr = 0x82565F40;
	sub_82570F58(ctx, base);
	// std r25,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r25.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82572fa0
	ctx.lr = 0x82565F50;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82565F5C;
	sub_82572FA0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82565F68"))) PPC_WEAK_FUNC(sub_82565F68);
PPC_FUNC_IMPL(__imp__sub_82565F68) {
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
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824200a8
	ctx.lr = 0x82565F8C;
	sub_824200A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256ed68
	ctx.lr = 0x82565F94;
	sub_8256ED68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82565fb4
	if (cr6.eq) goto loc_82565FB4;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x82565FB0;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82565FB4:
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

__attribute__((alias("__imp__sub_82565FCC"))) PPC_WEAK_FUNC(sub_82565FCC);
PPC_FUNC_IMPL(__imp__sub_82565FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565FD0"))) PPC_WEAK_FUNC(sub_82565FD0);
PPC_FUNC_IMPL(__imp__sub_82565FD0) {
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
	// bl 0x82565e18
	ctx.lr = 0x82565FF0;
	sub_82565E18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82566010
	if (cr6.eq) goto loc_82566010;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8256600C;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82566010:
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

__attribute__((alias("__imp__sub_82566028"))) PPC_WEAK_FUNC(sub_82566028);
PPC_FUNC_IMPL(__imp__sub_82566028) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bl 0x82565ea8
	ctx.lr = 0x82566084;
	sub_82565EA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825660b0
	if (cr6.eq) goto loc_825660B0;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825660b0
	if (cr6.eq) goto loc_825660B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825656e8
	ctx.lr = 0x825660AC;
	sub_825656E8(ctx, base);
	// b 0x825660b8
	goto loc_825660B8;
loc_825660B0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825660B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825660C4;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x825660D0;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_825660E8"))) PPC_WEAK_FUNC(sub_825660E8);
PPC_FUNC_IMPL(__imp__sub_825660E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825660F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,13172
	ctx.r10.s64 = ctx.r11.s64 + 13172;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r9,13045
	ctx.r4.s64 = ctx.r9.s64 + 13045;
	// bl 0x82576848
	ctx.lr = 0x82566120;
	sub_82576848(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82566128;
	sub_82576CB0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// stb r8,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r8.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825766d0
	ctx.lr = 0x82566140;
	sub_825766D0(ctx, base);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82576cb0
	ctx.lr = 0x82566148;
	sub_82576CB0(ctx, base);
	// stb r30,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r30.u8);
	// stb r30,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,152(r31)
	PPC_STORE_U16(ctx.r31.u32 + 152, ctx.r30.u16);
	// sth r30,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r30.u16);
	// sth r30,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r30.u16);
	// sth r30,162(r31)
	PPC_STORE_U16(ctx.r31.u32 + 162, ctx.r30.u16);
	// sth r30,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r30.u16);
	// sth r30,166(r31)
	PPC_STORE_U16(ctx.r31.u32 + 166, ctx.r30.u16);
	// std r30,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r30.u64);
	// std r30,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r30.u64);
	// std r30,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r30.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566180"))) PPC_WEAK_FUNC(sub_82566180);
PPC_FUNC_IMPL(__imp__sub_82566180) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x825730a8
	ctx.lr = 0x825661A0;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825661b4
	if (cr6.eq) goto loc_825661B4;
	// bl 0x825660e8
	ctx.lr = 0x825661AC;
	sub_825660E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825661b8
	if (!cr6.eq) goto loc_825661B8;
loc_825661B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825661B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825661C8"))) PPC_WEAK_FUNC(sub_825661C8);
PPC_FUNC_IMPL(__imp__sub_825661C8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,13252
	ctx.r31.s64 = ctx.r11.s64 + 13252;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82588a88
	ctx.lr = 0x825661F0;
	sub_82588A88(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r9,r10,13448
	ctx.r9.s64 = ctx.r10.s64 + 13448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x82588b60
	ctx.lr = 0x82566208;
	sub_82588B60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82588b60
	ctx.lr = 0x82566214;
	sub_82588B60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82566230"))) PPC_WEAK_FUNC(sub_82566230);
PPC_FUNC_IMPL(__imp__sub_82566230) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,13272
	ctx.r4.s64 = ctx.r11.s64 + 13272;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82578390
	ctx.lr = 0x82566254;
	sub_82578390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825662c8
	if (cr6.eq) goto loc_825662C8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257efb0
	ctx.lr = 0x82566270;
	sub_8257EFB0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825662c8
	if (cr6.eq) goto loc_825662C8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82566280:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,46
	cr6.compare<uint32_t>(ctx.r9.u32, 46, xer);
	// bne cr6,0x82566294
	if (!cr6.eq) goto loc_82566294;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x825662bc
	goto loc_825662BC;
loc_82566294:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r9,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r11,208
	ctx.r7.s64 = ctx.r11.s64 + 208;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
loc_825662BC:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82566280
	if (!cr6.eq) goto loc_82566280;
loc_825662C8:
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

__attribute__((alias("__imp__sub_825662DC"))) PPC_WEAK_FUNC(sub_825662DC);
PPC_FUNC_IMPL(__imp__sub_825662DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825662E0"))) PPC_WEAK_FUNC(sub_825662E0);
PPC_FUNC_IMPL(__imp__sub_825662E0) {
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
	// bl 0x82571900
	ctx.lr = 0x825662F0;
	sub_82571900(ctx, base);
	// bl 0x82571740
	ctx.lr = 0x825662F4;
	sub_82571740(ctx, base);
	// bl 0x82571708
	ctx.lr = 0x825662F8;
	sub_82571708(ctx, base);
	// bl 0x82570c00
	ctx.lr = 0x825662FC;
	sub_82570C00(ctx, base);
	// bl 0x8256e500
	ctx.lr = 0x82566300;
	sub_8256E500(ctx, base);
	// bl 0x8256a0f8
	ctx.lr = 0x82566304;
	sub_8256A0F8(ctx, base);
	// bl 0x82560810
	ctx.lr = 0x82566308;
	sub_82560810(ctx, base);
	// bl 0x82563d50
	ctx.lr = 0x8256630C;
	sub_82563D50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256631C"))) PPC_WEAK_FUNC(sub_8256631C);
PPC_FUNC_IMPL(__imp__sub_8256631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566320"))) PPC_WEAK_FUNC(sub_82566320);
PPC_FUNC_IMPL(__imp__sub_82566320) {
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
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// lwz r11,-18992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18992);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82566380
	if (!cr6.eq) goto loc_82566380;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// stw r11,-18992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18992, ctx.r11.u32);
	// addi r31,r9,-19096
	ctx.r31.s64 = ctx.r9.s64 + -19096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825661c8
	ctx.lr = 0x8256635C;
	sub_825661C8(ctx, base);
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,12112
	ctx.r3.s64 = ctx.r8.s64 + 12112;
	// bl 0x831cdcc8
	ctx.lr = 0x82566368;
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
loc_82566380:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-19096
	ctx.r3.s64 = ctx.r11.s64 + -19096;
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

__attribute__((alias("__imp__sub_8256639C"))) PPC_WEAK_FUNC(sub_8256639C);
PPC_FUNC_IMPL(__imp__sub_8256639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825663A0"))) PPC_WEAK_FUNC(sub_825663A0);
PPC_FUNC_IMPL(__imp__sub_825663A0) {
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
	// bl 0x82566320
	ctx.lr = 0x825663B0;
	sub_82566320(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x825663B4;
	sub_83102DB0(ctx, base);
	// bl 0x82566320
	ctx.lr = 0x825663B8;
	sub_82566320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825663C8"))) PPC_WEAK_FUNC(sub_825663C8);
PPC_FUNC_IMPL(__imp__sub_825663C8) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82563920
	ctx.lr = 0x825663EC;
	sub_82563920(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82563b60
	ctx.lr = 0x825663F8;
	sub_82563B60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824200a8
	ctx.lr = 0x82566408;
	sub_824200A8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x824200a8
	ctx.lr = 0x82566410;
	sub_824200A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256642C"))) PPC_WEAK_FUNC(sub_8256642C);
PPC_FUNC_IMPL(__imp__sub_8256642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566430"))) PPC_WEAK_FUNC(sub_82566430);
PPC_FUNC_IMPL(__imp__sub_82566430) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,13264
	ctx.r4.s64 = ctx.r11.s64 + 13264;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82578390
	ctx.lr = 0x82566454;
	sub_82578390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825664c4
	if (cr6.eq) goto loc_825664C4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82576848
	ctx.lr = 0x82566468;
	sub_82576848(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82576cb0
	ctx.lr = 0x82566470;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// bl 0x825766d0
	ctx.lr = 0x82566488;
	sub_825766D0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82576cb0
	ctx.lr = 0x82566490;
	sub_82576CB0(ctx, base);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r31,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r31,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r31.u16);
	// sth r31,242(r1)
	PPC_STORE_U16(ctx.r1.u32 + 242, ctx.r31.u16);
	// bl 0x82561818
	ctx.lr = 0x825664A8;
	sub_82561818(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82561750
	ctx.lr = 0x825664B4;
	sub_82561750(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82564420
	ctx.lr = 0x825664BC;
	sub_82564420(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824200a8
	ctx.lr = 0x825664C4;
	sub_824200A8(ctx, base);
loc_825664C4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825664D8"))) PPC_WEAK_FUNC(sub_825664D8);
PPC_FUNC_IMPL(__imp__sub_825664D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825664E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,13256
	ctx.r4.s64 = ctx.r11.s64 + 13256;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82578390
	ctx.lr = 0x825664F8;
	sub_82578390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825666e0
	if (cr6.eq) goto loc_825666E0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82576848
	ctx.lr = 0x8256650C;
	sub_82576848(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82576cb0
	ctx.lr = 0x82566514;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,421(r1)
	PPC_STORE_U8(ctx.r1.u32 + 421, ctx.r11.u8);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// stb r31,420(r1)
	PPC_STORE_U8(ctx.r1.u32 + 420, ctx.r31.u8);
	// bl 0x825766d0
	ctx.lr = 0x8256652C;
	sub_825766D0(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82576cb0
	ctx.lr = 0x82566534;
	sub_82576CB0(ctx, base);
	// stb r31,492(r1)
	PPC_STORE_U8(ctx.r1.u32 + 492, ctx.r31.u8);
	// stb r31,493(r1)
	PPC_STORE_U8(ctx.r1.u32 + 493, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r31,496(r1)
	PPC_STORE_U16(ctx.r1.u32 + 496, ctx.r31.u16);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// sth r31,498(r1)
	PPC_STORE_U16(ctx.r1.u32 + 498, ctx.r31.u16);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82562810
	ctx.lr = 0x8256655C;
	sub_82562810(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// beq cr6,0x82566610
	if (cr6.eq) goto loc_82566610;
	// li r28,15
	ctx.r28.s64 = 15;
loc_82566584:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83300618
	ctx.lr = 0x8256658C;
	sub_83300618(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825665a4
	if (cr6.eq) goto loc_825665A4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82562650
	ctx.lr = 0x825665A0;
	sub_82562650(ctx, base);
	// b 0x82566604
	goto loc_82566604;
loc_825665A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83300638
	ctx.lr = 0x825665AC;
	sub_83300638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82566604
	if (!cr6.eq) goto loc_82566604;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825665cc
	if (cr6.lt) goto loc_825665CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825665CC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82576848
	ctx.lr = 0x825665D8;
	sub_82576848(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82562728
	ctx.lr = 0x825665E4;
	sub_82562728(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825665f8
	if (cr6.lt) goto loc_825665F8;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8386d088
	ctx.lr = 0x825665F8;
	sub_8386D088(ctx, base);
loc_825665F8:
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
loc_82566604:
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82566584
	if (!cr6.eq) goto loc_82566584;
loc_82566610:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825766d0
	ctx.lr = 0x82566618;
	sub_825766D0(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82576cb0
	ctx.lr = 0x82566620;
	sub_82576CB0(ctx, base);
	// stb r31,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r31.u8);
	// stb r31,261(r1)
	PPC_STORE_U8(ctx.r1.u32 + 261, ctx.r31.u8);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x825766d0
	ctx.lr = 0x82566630;
	sub_825766D0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82576cb0
	ctx.lr = 0x82566638;
	sub_82576CB0(ctx, base);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r31,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r31.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// sth r31,336(r1)
	PPC_STORE_U16(ctx.r1.u32 + 336, ctx.r31.u16);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// sth r31,338(r1)
	PPC_STORE_U16(ctx.r1.u32 + 338, ctx.r31.u16);
	// bl 0x82561d50
	ctx.lr = 0x82566654;
	sub_82561D50(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82561818
	ctx.lr = 0x8256665C;
	sub_82561818(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82561750
	ctx.lr = 0x82566668;
	sub_82561750(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825643d0
	ctx.lr = 0x82566670;
	sub_825643D0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824200a8
	ctx.lr = 0x82566678;
	sub_824200A8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256669c
	if (cr6.eq) goto loc_8256669C;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825333c0
	ctx.lr = 0x82566694;
	sub_825333C0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x8256669C;
	sub_8386D088(ctx, base);
loc_8256669C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// beq cr6,0x825666cc
	if (cr6.eq) goto loc_825666CC;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825333c0
	ctx.lr = 0x825666C4;
	sub_825333C0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x825666CC;
	sub_8386D088(ctx, base);
loc_825666CC:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x824200a8
	ctx.lr = 0x825666E0;
	sub_824200A8(ctx, base);
loc_825666E0:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825666E8"))) PPC_WEAK_FUNC(sub_825666E8);
PPC_FUNC_IMPL(__imp__sub_825666E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825666F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// lbz r11,-19116(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + -19116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825669dc
	if (!cr6.eq) goto loc_825669DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,-19116(r9)
	PPC_STORE_U8(ctx.r9.u32 + -19116, ctx.r11.u8);
	// addi r29,r10,13280
	ctx.r29.s64 = ctx.r10.s64 + 13280;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82566b58
	ctx.lr = 0x82566720;
	sub_82566B58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825669dc
	if (cr6.eq) goto loc_825669DC;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82566a70
	ctx.lr = 0x82566758;
	sub_82566A70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82566794
	if (cr6.eq) goto loc_82566794;
loc_82566764:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 + ctx.r30.u64;
	// bl 0x82537110
	ctx.lr = 0x82566774;
	sub_82537110(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82566a70
	ctx.lr = 0x82566788;
	sub_82566A70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82566764
	if (!cr6.eq) goto loc_82566764;
loc_82566794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82566a80
	ctx.lr = 0x8256679C;
	sub_82566A80(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825669d4
	if (cr6.eq) goto loc_825669D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82579ab8
	ctx.lr = 0x825667B0;
	sub_82579AB8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x825667c4
	if (!cr6.lt) goto loc_825667C4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_825667C4:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b660
	ctx.lr = 0x825667DC;
	sub_8257B660(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825669d0
	if (cr6.eq) goto loc_825669D0;
	// bl 0x82577048
	ctx.lr = 0x825667F0;
	sub_82577048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825669cc
	if (cr6.eq) goto loc_825669CC;
	// addi r5,r29,44
	ctx.r5.s64 = ctx.r29.s64 + 44;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825793b8
	ctx.lr = 0x82566810;
	sub_825793B8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825669c4
	if (cr6.eq) goto loc_825669C4;
	// addi r5,r29,60
	ctx.r5.s64 = ctx.r29.s64 + 60;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825793b8
	ctx.lr = 0x82566834;
	sub_825793B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825669bc
	if (cr6.eq) goto loc_825669BC;
loc_82566840:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825766d0
	ctx.lr = 0x82566848;
	sub_825766D0(ctx, base);
	// addi r5,r29,72
	ctx.r5.s64 = ctx.r29.s64 + 72;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578628
	ctx.lr = 0x82566860;
	sub_82578628(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// beq cr6,0x82566980
	if (cr6.eq) goto loc_82566980;
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82575180
	ctx.lr = 0x8256687C;
	sub_82575180(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82566894
	if (cr6.eq) goto loc_82566894;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825664d8
	ctx.lr = 0x82566890;
	sub_825664D8(ctx, base);
	// b 0x8256697c
	goto loc_8256697C;
loc_82566894:
	// addi r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 + 100;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82575180
	ctx.lr = 0x825668A8;
	sub_82575180(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825668c0
	if (cr6.eq) goto loc_825668C0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82566430
	ctx.lr = 0x825668BC;
	sub_82566430(ctx, base);
	// b 0x8256697c
	goto loc_8256697C;
loc_825668C0:
	// addi r11,r29,124
	ctx.r11.s64 = ctx.r29.s64 + 124;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82575180
	ctx.lr = 0x825668D4;
	sub_82575180(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825668ec
	if (cr6.eq) goto loc_825668EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82566230
	ctx.lr = 0x825668E8;
	sub_82566230(ctx, base);
	// b 0x8256697c
	goto loc_8256697C;
loc_825668EC:
	// addi r11,r29,132
	ctx.r11.s64 = ctx.r29.s64 + 132;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82575180
	ctx.lr = 0x82566900;
	sub_82575180(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8256697c
	if (!cr6.eq) goto loc_8256697C;
	// addi r11,r29,140
	ctx.r11.s64 = ctx.r29.s64 + 140;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82575180
	ctx.lr = 0x82566920;
	sub_82575180(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8256697c
	if (cr6.eq) goto loc_8256697C;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825766d0
	ctx.lr = 0x82566934;
	sub_825766D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82578628
	ctx.lr = 0x8256694C;
	sub_82578628(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256695c
	if (cr6.eq) goto loc_8256695C;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8258bc58
	ctx.lr = 0x8256695C;
	sub_8258BC58(ctx, base);
loc_8256695C:
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82566970
	if (cr6.lt) goto loc_82566970;
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8386d088
	ctx.lr = 0x82566970;
	sub_8386D088(ctx, base);
loc_82566970:
	// stw r27,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r27.u32);
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stb r28,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r28.u8);
loc_8256697C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_82566980:
	// bl 0x8241ff70
	ctx.lr = 0x82566984;
	sub_8241FF70(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825782e8
	ctx.lr = 0x8256699C;
	sub_825782E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a18ea8
	ctx.lr = 0x825669A8;
	sub_82A18EA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x825669B0;
	sub_83102DB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82566840
	if (!cr6.eq) goto loc_82566840;
loc_825669BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825669C4;
	sub_83102DB0(ctx, base);
loc_825669C4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83102db0
	ctx.lr = 0x825669CC;
	sub_83102DB0(ctx, base);
loc_825669CC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_825669D0:
	// bl 0x8257a7a8
	ctx.lr = 0x825669D4;
	sub_8257A7A8(ctx, base);
loc_825669D4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241fe60
	ctx.lr = 0x825669DC;
	sub_8241FE60(ctx, base);
loc_825669DC:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825669E4"))) PPC_WEAK_FUNC(sub_825669E4);
PPC_FUNC_IMPL(__imp__sub_825669E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825669E8"))) PPC_WEAK_FUNC(sub_825669E8);
PPC_FUNC_IMPL(__imp__sub_825669E8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r11,13432
	ctx.r3.s64 = ctx.r11.s64 + 13432;
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// bl 0x83102db0
	ctx.lr = 0x82566A08;
	sub_83102DB0(ctx, base);
	// bl 0x825641e0
	ctx.lr = 0x82566A0C;
	sub_825641E0(ctx, base);
	// bl 0x82561490
	ctx.lr = 0x82566A10;
	sub_82561490(ctx, base);
	// bl 0x825691e8
	ctx.lr = 0x82566A14;
	sub_825691E8(ctx, base);
	// bl 0x825666e8
	ctx.lr = 0x82566A18;
	sub_825666E8(ctx, base);
	// bl 0x8256e380
	ctx.lr = 0x82566A1C;
	sub_8256E380(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825710d0
	ctx.lr = 0x82566A24;
	sub_825710D0(ctx, base);
	// bl 0x825716b0
	ctx.lr = 0x82566A28;
	sub_825716B0(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-19115(r10)
	PPC_STORE_U8(ctx.r10.u32 + -19115, ctx.r11.u8);
	// bl 0x83102db0
	ctx.lr = 0x82566A38;
	sub_83102DB0(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r10,-19112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82566a5c
	if (cr6.eq) goto loc_82566A5C;
	// lwz r9,-19112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19112);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// lwz r3,-19108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19108);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82566A5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82566A5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82566A6C"))) PPC_WEAK_FUNC(sub_82566A6C);
PPC_FUNC_IMPL(__imp__sub_82566A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566A70"))) PPC_WEAK_FUNC(sub_82566A70);
PPC_FUNC_IMPL(__imp__sub_82566A70) {
	PPC_FUNC_PROLOGUE();
	// b 0x831d7270
	sub_831D7270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566A74"))) PPC_WEAK_FUNC(sub_82566A74);
PPC_FUNC_IMPL(__imp__sub_82566A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566A78"))) PPC_WEAK_FUNC(sub_82566A78);
PPC_FUNC_IMPL(__imp__sub_82566A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x831d03a0
	sub_831D03A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566A7C"))) PPC_WEAK_FUNC(sub_82566A7C);
PPC_FUNC_IMPL(__imp__sub_82566A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566A80"))) PPC_WEAK_FUNC(sub_82566A80);
PPC_FUNC_IMPL(__imp__sub_82566A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x831d0920
	sub_831D0920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566A84"))) PPC_WEAK_FUNC(sub_82566A84);
PPC_FUNC_IMPL(__imp__sub_82566A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566A88"))) PPC_WEAK_FUNC(sub_82566A88);
PPC_FUNC_IMPL(__imp__sub_82566A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x831d7358
	sub_831D7358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566A8C"))) PPC_WEAK_FUNC(sub_82566A8C);
PPC_FUNC_IMPL(__imp__sub_82566A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566A90"))) PPC_WEAK_FUNC(sub_82566A90);
PPC_FUNC_IMPL(__imp__sub_82566A90) {
	PPC_FUNC_PROLOGUE();
	// b 0x831d7670
	sub_831D7670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566A94"))) PPC_WEAK_FUNC(sub_82566A94);
PPC_FUNC_IMPL(__imp__sub_82566A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566A98"))) PPC_WEAK_FUNC(sub_82566A98);
PPC_FUNC_IMPL(__imp__sub_82566A98) {
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
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// bl 0x82567260
	ctx.lr = 0x82566AAC;
	sub_82567260(ctx, base);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82566AC0"))) PPC_WEAK_FUNC(sub_82566AC0);
PPC_FUNC_IMPL(__imp__sub_82566AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82566AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82576848
	ctx.lr = 0x82566AE0;
	sub_82576848(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82576cb0
	ctx.lr = 0x82566AE8;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x825766d0
	ctx.lr = 0x82566B00;
	sub_825766D0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82576cb0
	ctx.lr = 0x82566B08;
	sub_82576CB0(ctx, base);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stb r31,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r31.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,226(r1)
	PPC_STORE_U16(ctx.r1.u32 + 226, ctx.r31.u16);
	// bl 0x82420160
	ctx.lr = 0x82566B24;
	sub_82420160(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82566b38
	if (!cr6.lt) goto loc_82566B38;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82566B38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82566B44;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82566B4C;
	sub_824200A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566B58"))) PPC_WEAK_FUNC(sub_82566B58);
PPC_FUNC_IMPL(__imp__sub_82566B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82566B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576848
	ctx.lr = 0x82566B74;
	sub_82576848(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82576cb0
	ctx.lr = 0x82566B7C;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x825766d0
	ctx.lr = 0x82566B94;
	sub_825766D0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82576cb0
	ctx.lr = 0x82566B9C;
	sub_82576CB0(ctx, base);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stb r31,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r31.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,226(r1)
	PPC_STORE_U16(ctx.r1.u32 + 226, ctx.r31.u16);
	// bl 0x82420160
	ctx.lr = 0x82566BB8;
	sub_82420160(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bge cr6,0x82566bcc
	if (!cr6.lt) goto loc_82566BCC;
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
loc_82566BCC:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82566be0
	if (!cr6.lt) goto loc_82566BE0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82566BE0:
	// bl 0x82562160
	ctx.lr = 0x82566BE4;
	sub_82562160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82566c58
	if (!cr6.eq) goto loc_82566C58;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82566BFC;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82566c58
	if (!cr6.eq) goto loc_82566C58;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82566C10;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82566c58
	if (!cr6.eq) goto loc_82566C58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82564878
	ctx.lr = 0x82566C24;
	sub_82564878(ctx, base);
	// bl 0x82564540
	ctx.lr = 0x82566C28;
	sub_82564540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x825644f0
	ctx.lr = 0x82566C3C;
	sub_825644F0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82566c58
	if (cr6.eq) goto loc_82566C58;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82566C4C;
	sub_824200A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82566C58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d78b8
	ctx.lr = 0x82566C64;
	sub_831D78B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82566C70;
	sub_824200A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566C7C"))) PPC_WEAK_FUNC(sub_82566C7C);
PPC_FUNC_IMPL(__imp__sub_82566C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566C80"))) PPC_WEAK_FUNC(sub_82566C80);
PPC_FUNC_IMPL(__imp__sub_82566C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82566C88;
	__savegprlr_29(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82576848
	ctx.lr = 0x82566CA0;
	sub_82576848(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82576cb0
	ctx.lr = 0x82566CA8;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x825766d0
	ctx.lr = 0x82566CC0;
	sub_825766D0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82576cb0
	ctx.lr = 0x82566CC8;
	sub_82576CB0(ctx, base);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stb r31,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r31.u8);
	// li r4,119
	ctx.r4.s64 = 119;
	// sth r31,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r31.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r31,226(r1)
	PPC_STORE_U16(ctx.r1.u32 + 226, ctx.r31.u16);
	// bl 0x831ceeb0
	ctx.lr = 0x82566CE4;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82566d40
	if (!cr6.eq) goto loc_82566D40;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82566CF8;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82566d40
	if (!cr6.eq) goto loc_82566D40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82564878
	ctx.lr = 0x82566D0C;
	sub_82564878(ctx, base);
	// bl 0x82564540
	ctx.lr = 0x82566D10;
	sub_82564540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x825644f0
	ctx.lr = 0x82566D24;
	sub_825644F0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82566d40
	if (cr6.eq) goto loc_82566D40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82566D34;
	sub_824200A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82566D40:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420160
	ctx.lr = 0x82566D4C;
	sub_82420160(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82566d60
	if (!cr6.lt) goto loc_82566D60;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_82566D60:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831d7a88
	ctx.lr = 0x82566D6C;
	sub_831D7A88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824200a8
	ctx.lr = 0x82566D78;
	sub_824200A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82566D84"))) PPC_WEAK_FUNC(sub_82566D84);
PPC_FUNC_IMPL(__imp__sub_82566D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566D88"))) PPC_WEAK_FUNC(sub_82566D88);
PPC_FUNC_IMPL(__imp__sub_82566D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82566D90;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// dcbt r0,r4
	// rlwinm r11,r6,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,745
	ctx.r10.s64 = 48824320;
	// xoris r8,r11,25974
	ctx.r8.u64 = ctx.r11.u64 ^ 1702232064;
	// rldicr r9,r5,0,59
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFFF0;
	// ori r11,r10,3805
	ctx.r11.u64 = ctx.r10.u64 | 3805;
	// mulli r10,r6,278
	ctx.r10.s64 = ctx.r6.s64 * 278;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// cmpldi cr6,r9,64
	cr6.compare<uint64_t>(ctx.r9.u64, 64, xer);
	// blt cr6,0x82567100
	if (cr6.lt) goto loc_82567100;
loc_82566DBC:
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r9,r4
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwzu r6,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// lwzu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwzu r29,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// rlwimi r30,r8,16,16,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r28,r8,16,0,15
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r28.u64 & 0xFFFFFFFF0000FFFF);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwimi r27,r9,16,16,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r26,r9,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r30,r30,24,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFF;
	// rlwinm r28,r28,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r27,r27,24,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFFFF;
	// rlwinm r26,r26,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r25,r9,16,16,31
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r25.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r24,r9,16,0,15
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r24.u64 & 0xFFFFFFFF0000FFFF);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// or r8,r27,r26
	ctx.r8.u64 = ctx.r27.u64 | ctx.r26.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// xor r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// rlwinm r7,r25,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 24) & 0xFFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r27,r24,8,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r30,r9,16,16,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFF0000);
	// or r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 | ctx.r27.u64;
	// rlwimi r28,r9,16,0,15
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r28.u64 & 0xFFFFFFFF0000FFFF);
	// xor r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// rlwinm r6,r28,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r30,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// xor r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r29.u64;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r7,128
	ctx.r7.s64 = 128;
	// dcbt r7,r9
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzu r31,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwzu r29,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwimi r6,r8,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// lwzu r28,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwimi r30,r8,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r7,r6,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// rlwinm r30,r30,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r6,r8,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r27,r8,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | ctx.r30.u64;
	// rlwinm r6,r6,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// xor r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// rlwinm r30,r27,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFF0000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// or r7,r6,r30
	ctx.r7.u64 = ctx.r6.u64 | ctx.r30.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwimi r4,r8,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r4,r4,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwimi r31,r8,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// xor r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r29.u64;
	// rlwinm r6,r31,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r7,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r6,r7,r28
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbt r4,r9
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzu r30,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwzu r29,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwimi r6,r8,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// lwzu r28,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwimi r31,r8,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r6,r6,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwimi r27,r8,16,16,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r26,r8,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r31,r31,8,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | ctx.r31.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// xor r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// rlwinm r27,r27,24,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFFFF;
	// rlwinm r26,r26,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwimi r31,r8,16,16,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r25,r8,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// or r7,r27,r26
	ctx.r7.u64 = ctx.r27.u64 | ctx.r26.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// xor r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// rlwinm r31,r31,24,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r27,r25,8,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r6,r8,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// or r7,r31,r27
	ctx.r7.u64 = ctx.r31.u64 | ctx.r27.u64;
	// rlwinm r4,r4,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// xor r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r29.u64;
	// rlwinm r6,r6,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r4,r6,r28
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// li r7,128
	ctx.r7.s64 = 128;
	// dcbt r7,r9
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwzu r31,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzu r29,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwzu r28,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwimi r4,r8,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r30,r8,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r4,r4,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r30,r30,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r27,r8,16,16,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r26,r8,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// xor r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// rlwinm r27,r27,24,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r26,r26,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwimi r30,r8,16,16,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r25,r8,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// or r4,r27,r26
	ctx.r4.u64 = ctx.r27.u64 | ctx.r26.u64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r30,r30,24,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFF;
	// rlwinm r27,r25,8,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// or r4,r30,r27
	ctx.r4.u64 = ctx.r30.u64 | ctx.r27.u64;
	// rlwinm r7,r7,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// xor r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r29.u64;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r5,r5,-64
	ctx.r5.s64 = ctx.r5.s64 + -64;
	// xor r6,r7,r28
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rldicr r7,r5,0,59
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFFF0;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpldi cr6,r7,64
	cr6.compare<uint64_t>(ctx.r7.u64, 64, xer);
	// bge cr6,0x82566dbc
	if (!cr6.lt) goto loc_82566DBC;
loc_82567100:
	// rldicr r9,r5,0,61
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFFFC;
	// cmpldi cr6,r9,16
	cr6.compare<uint64_t>(ctx.r9.u64, 16, xer);
	// blt cr6,0x825671ec
	if (cr6.lt) goto loc_825671EC;
loc_8256710C:
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r9,r4
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwzu r6,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// lwzu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwzu r29,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// rlwimi r30,r8,16,16,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r28,r8,16,0,15
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r28.u64 & 0xFFFFFFFF0000FFFF);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwimi r27,r9,16,16,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r26,r9,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r30,r30,24,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFF;
	// rlwinm r28,r28,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r27,r27,24,16,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFFFF;
	// rlwinm r26,r26,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r25,r9,16,16,31
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r25.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r24,r9,16,0,15
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r24.u64 & 0xFFFFFFFF0000FFFF);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// or r8,r27,r26
	ctx.r8.u64 = ctx.r27.u64 | ctx.r26.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// xor r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// rlwinm r7,r25,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 24) & 0xFFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r27,r24,8,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r30,r9,16,16,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFF0000);
	// or r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 | ctx.r27.u64;
	// rlwimi r28,r9,16,0,15
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r28.u64 & 0xFFFFFFFF0000FFFF);
	// xor r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// rlwinm r6,r28,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r30,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// xor r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r29.u64;
	// rldicr r7,r5,0,61
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFFFC;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpldi cr6,r7,16
	cr6.compare<uint64_t>(ctx.r7.u64, 16, xer);
	// bge cr6,0x8256710c
	if (!cr6.lt) goto loc_8256710C;
loc_825671EC:
	// cmpldi cr6,r5,4
	cr6.compare<uint64_t>(ctx.r5.u64, 4, xer);
	// blt cr6,0x82567244
	if (cr6.lt) goto loc_82567244;
	// rldicl r9,r5,62,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// mulli r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 * -4;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
loc_82567200:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r8,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r7,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r31,r31,8,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// or r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 | ctx.r31.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// xor r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// bgt cr6,0x82567200
	if (cr6.gt) goto loc_82567200;
loc_82567244:
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// ble cr6,0x82567254
	if (!cr6.gt) goto loc_82567254;
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// bl 0x831cee08
	ctx.lr = 0x82567254;
	sub_831CEE08(ctx, base);
loc_82567254:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256725C"))) PPC_WEAK_FUNC(sub_8256725C);
PPC_FUNC_IMPL(__imp__sub_8256725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567260"))) PPC_WEAK_FUNC(sub_82567260);
PPC_FUNC_IMPL(__imp__sub_82567260) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpldi cr6,r4,8
	cr6.compare<uint64_t>(ctx.r4.u64, 8, xer);
	// blt cr6,0x825672e8
	if (cr6.lt) goto loc_825672E8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-24328
	ctx.r9.s64 = -1594359808;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// ori r4,r9,61414
	ctx.r4.u64 = ctx.r9.u64 | 61414;
	// or r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x825672e8
	if (!cr6.eq) goto loc_825672E8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r3,-8
	ctx.r31.s64 = ctx.r3.s64 + -8;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82566d88
	ctx.lr = 0x825672E4;
	sub_82566D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825672E8:
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

__attribute__((alias("__imp__sub_825672FC"))) PPC_WEAK_FUNC(sub_825672FC);
PPC_FUNC_IMPL(__imp__sub_825672FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567300"))) PPC_WEAK_FUNC(sub_82567300);
PPC_FUNC_IMPL(__imp__sub_82567300) {
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
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// rlwinm r7,r8,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8256733c
	if (cr6.eq) goto loc_8256733C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82565180
	ctx.lr = 0x8256733C;
	sub_82565180(ctx, base);
loc_8256733C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82572fa0
	ctx.lr = 0x82567348;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8256735C"))) PPC_WEAK_FUNC(sub_8256735C);
PPC_FUNC_IMPL(__imp__sub_8256735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567360"))) PPC_WEAK_FUNC(sub_82567360);
PPC_FUNC_IMPL(__imp__sub_82567360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82567368;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x8256ec80
	ctx.lr = 0x82567394;
	sub_8256EC80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r9,r10,13540
	ctx.r9.s64 = ctx.r10.s64 + 13540;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82491e00
	ctx.lr = 0x825673AC;
	sub_82491E00(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r31,244
	ctx.r9.s64 = ctx.r31.s64 + 244;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_825673BC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x825673bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825673BC;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r27,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r27.u32);
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r28,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r28.u64);
	// bl 0x82572fa0
	ctx.lr = 0x825673E4;
	sub_82572FA0(ctx, base);
	// ld r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// stw r26,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r26.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// std r11,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
	// beq cr6,0x825673fc
	if (cr6.eq) goto loc_825673FC;
	// std r28,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r28.u64);
loc_825673FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82567408;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567414"))) PPC_WEAK_FUNC(sub_82567414);
PPC_FUNC_IMPL(__imp__sub_82567414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567418"))) PPC_WEAK_FUNC(sub_82567418);
PPC_FUNC_IMPL(__imp__sub_82567418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82567420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r3,280
	ctx.r30.s64 = ctx.r3.s64 + 280;
	// addi r10,r11,13540
	ctx.r10.s64 = ctx.r11.s64 + 13540;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x82567448;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82567454;
	sub_82572FA0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824200a8
	ctx.lr = 0x8256745C;
	sub_824200A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256ed68
	ctx.lr = 0x82567464;
	sub_8256ED68(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82567484
	if (cr6.eq) goto loc_82567484;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x82567480;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82567484:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256748C"))) PPC_WEAK_FUNC(sub_8256748C);
PPC_FUNC_IMPL(__imp__sub_8256748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567490"))) PPC_WEAK_FUNC(sub_82567490);
PPC_FUNC_IMPL(__imp__sub_82567490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82567498;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r31.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// bl 0x82566180
	ctx.lr = 0x825674E8;
	sub_82566180(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x825730a8
	ctx.lr = 0x82567500;
	sub_825730A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82567558
	if (cr6.eq) goto loc_82567558;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x82572fa0
	ctx.lr = 0x82567528;
	sub_82572FA0(ctx, base);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82567360
	ctx.lr = 0x82567550;
	sub_82567360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8256755c
	goto loc_8256755C;
loc_82567558:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8256755C:
	// addi r31,r30,136
	ctx.r31.s64 = ctx.r30.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82567568;
	sub_82572FA0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570f58
	ctx.lr = 0x82567574;
	sub_82570F58(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256757C"))) PPC_WEAK_FUNC(sub_8256757C);
PPC_FUNC_IMPL(__imp__sub_8256757C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567580"))) PPC_WEAK_FUNC(sub_82567580);
PPC_FUNC_IMPL(__imp__sub_82567580) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82567490
	sub_82567490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256758C"))) PPC_WEAK_FUNC(sub_8256758C);
PPC_FUNC_IMPL(__imp__sub_8256758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567590"))) PPC_WEAK_FUNC(sub_82567590);
PPC_FUNC_IMPL(__imp__sub_82567590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-18960
	ctx.r3.s64 = ctx.r11.s64 + -18960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256759C"))) PPC_WEAK_FUNC(sub_8256759C);
PPC_FUNC_IMPL(__imp__sub_8256759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825675A0"))) PPC_WEAK_FUNC(sub_825675A0);
PPC_FUNC_IMPL(__imp__sub_825675A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// stw r3,-18984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18984, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825675AC"))) PPC_WEAK_FUNC(sub_825675AC);
PPC_FUNC_IMPL(__imp__sub_825675AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825675B0"))) PPC_WEAK_FUNC(sub_825675B0);
PPC_FUNC_IMPL(__imp__sub_825675B0) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-18984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18984);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825675f0
	if (!cr6.eq) goto loc_825675F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575868
	ctx.lr = 0x825675DC;
	sub_82575868(ctx, base);
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
loc_825675F0:
	// bl 0x8256e5a0
	ctx.lr = 0x825675F4;
	sub_8256E5A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825764f8
	ctx.lr = 0x82567600;
	sub_825764F8(ctx, base);
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

__attribute__((alias("__imp__sub_82567614"))) PPC_WEAK_FUNC(sub_82567614);
PPC_FUNC_IMPL(__imp__sub_82567614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567618"))) PPC_WEAK_FUNC(sub_82567618);
PPC_FUNC_IMPL(__imp__sub_82567618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-18960
	ctx.r3.s64 = ctx.r11.s64 + -18960;
	// b 0x82576490
	sub_82576490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567634"))) PPC_WEAK_FUNC(sub_82567634);
PPC_FUNC_IMPL(__imp__sub_82567634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82567638"))) PPC_WEAK_FUNC(sub_82567638);
PPC_FUNC_IMPL(__imp__sub_82567638) {
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
	// lbz r9,97(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82567658
	if (!cr6.eq) goto loc_82567658;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82567658:
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
	// bne cr6,0x82567680
	if (!cr6.eq) goto loc_82567680;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82567680:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x825676a0
	if (!cr6.eq) goto loc_825676A0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_825676A0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825676B0"))) PPC_WEAK_FUNC(sub_825676B0);
PPC_FUNC_IMPL(__imp__sub_825676B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825676B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82567708
	if (!cr6.eq) goto loc_82567708;
loc_825676D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82575818
	ctx.lr = 0x825676E0;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825676f4
	if (cr6.eq) goto loc_825676F4;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x825676fc
	goto loc_825676FC;
loc_825676F4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825676FC:
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825676d4
	if (cr6.eq) goto loc_825676D4;
loc_82567708:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567714"))) PPC_WEAK_FUNC(sub_82567714);
PPC_FUNC_IMPL(__imp__sub_82567714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567718"))) PPC_WEAK_FUNC(sub_82567718);
PPC_FUNC_IMPL(__imp__sub_82567718) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576848
	ctx.lr = 0x82567730;
	sub_82576848(ctx, base);
	// bl 0x8256e538
	ctx.lr = 0x82567734;
	sub_8256E538(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r3,-18984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18984, ctx.r3.u32);
	// blt cr6,0x82567750
	if (cr6.lt) goto loc_82567750;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82567750;
	sub_8386D088(ctx, base);
loc_82567750:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82567760"))) PPC_WEAK_FUNC(sub_82567760);
PPC_FUNC_IMPL(__imp__sub_82567760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82567768;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x825676b0
	ctx.lr = 0x82567784;
	sub_825676B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x825677c4
	if (cr6.eq) goto loc_825677C4;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82575818
	ctx.lr = 0x825677A0;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825677c4
	if (!cr6.eq) goto loc_825677C4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825677C4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825677E4"))) PPC_WEAK_FUNC(sub_825677E4);
PPC_FUNC_IMPL(__imp__sub_825677E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825677E8"))) PPC_WEAK_FUNC(sub_825677E8);
PPC_FUNC_IMPL(__imp__sub_825677E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825677F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r4,48
	ctx.r30.s64 = ctx.r4.s64 + 48;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82567810
	if (cr6.lt) goto loc_82567810;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82567810;
	sub_8386D088(ctx, base);
loc_82567810:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8256783c
	if (cr6.lt) goto loc_8256783C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8256783C;
	sub_8386D088(ctx, base);
loc_8256783C:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567850"))) PPC_WEAK_FUNC(sub_82567850);
PPC_FUNC_IMPL(__imp__sub_82567850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82567858;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,819
	ctx.r10.s64 = 53673984;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,13106
	ctx.r9.u64 = ctx.r10.u64 | 13106;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8256789c
	if (cr6.lt) goto loc_8256789C;
	// addi r4,r7,16
	ctx.r4.s64 = ctx.r7.s64 + 16;
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// bl 0x825677e8
	ctx.lr = 0x82567888;
	sub_825677E8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8386d088
	ctx.lr = 0x82567890;
	sub_8386D088(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12808
	ctx.r3.s64 = ctx.r11.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x8256789C;
	sub_831CC150(ctx, base);
loc_8256789C:
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
	// bne cr6,0x825678cc
	if (!cr6.eq) goto loc_825678CC;
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
	// b 0x8256790c
	goto loc_8256790C;
loc_825678CC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825678f4
	if (cr6.eq) goto loc_825678F4;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256790c
	if (!cr6.eq) goto loc_8256790C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x8256790c
	goto loc_8256790C;
loc_825678F4:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256790c
	if (!cr6.eq) goto loc_8256790C;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_8256790C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82567a30
	if (!cr6.eq) goto loc_82567A30;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82567928:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x825679b0
	if (!cr6.eq) goto loc_825679B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82567970
	if (!cr6.eq) goto loc_82567970;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r29.u8);
	// stb r29,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,96(r8)
	PPC_STORE_U8(ctx.r8.u32 + 96, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82567a20
	goto loc_82567A20;
loc_82567970:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82567988
	if (!cr6.eq) goto loc_82567988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8256a678
	ctx.lr = 0x82567988;
	sub_8256A678(ctx, base);
loc_82567988:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82567638
	ctx.lr = 0x825679AC;
	sub_82567638(ctx, base);
	// b 0x82567a20
	goto loc_82567A20;
loc_825679B0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825679e4
	if (!cr6.eq) goto loc_825679E4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r29.u8);
	// stb r29,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,96(r8)
	PPC_STORE_U8(ctx.r8.u32 + 96, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82567a20
	goto loc_82567A20;
loc_825679E4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x825679fc
	if (!cr6.eq) goto loc_825679FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82567638
	ctx.lr = 0x825679FC;
	sub_82567638(ctx, base);
loc_825679FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8256a678
	ctx.lr = 0x82567A20;
	sub_8256A678(ctx, base);
loc_82567A20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82567928
	if (cr6.eq) goto loc_82567928;
loc_82567A30:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567A4C"))) PPC_WEAK_FUNC(sub_82567A4C);
PPC_FUNC_IMPL(__imp__sub_82567A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567A50"))) PPC_WEAK_FUNC(sub_82567A50);
PPC_FUNC_IMPL(__imp__sub_82567A50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x825767c8
	ctx.lr = 0x82567A78;
	sub_825767C8(ctx, base);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825767c8
	ctx.lr = 0x82567A84;
	sub_825767C8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82567aa4
	if (cr6.eq) goto loc_82567AA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825767c8
	ctx.lr = 0x82567A98;
	sub_825767C8(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x825767c8
	ctx.lr = 0x82567AA4;
	sub_825767C8(ctx, base);
loc_82567AA4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82567ab8
	if (cr6.lt) goto loc_82567AB8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8386d088
	ctx.lr = 0x82567AB8;
	sub_8386D088(ctx, base);
loc_82567AB8:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// blt cr6,0x82567ae0
	if (cr6.lt) goto loc_82567AE0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82567AE0;
	sub_8386D088(ctx, base);
loc_82567AE0:
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

__attribute__((alias("__imp__sub_82567AF8"))) PPC_WEAK_FUNC(sub_82567AF8);
PPC_FUNC_IMPL(__imp__sub_82567AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82567B00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,97(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 97);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82567b28
	if (cr6.eq) goto loc_82567B28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82567B28;
	sub_831CC188(ctx, base);
loc_82567B28:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82c5dbe8
	ctx.lr = 0x82567B34;
	sub_82C5DBE8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82567b50
	if (cr6.eq) goto loc_82567B50;
	// lwz r29,8(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82567b74
	goto loc_82567B74;
loc_82567B50:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,97(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82567b68
	if (cr6.eq) goto loc_82567B68;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82567b74
	goto loc_82567B74;
loc_82567B68:
	// lwz r29,8(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82567c60
	if (!cr6.eq) goto loc_82567C60;
loc_82567B74:
	// lbz r11,97(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 97);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82567b88
	if (!cr6.eq) goto loc_82567B88;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82567B88:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82567ba0
	if (!cr6.eq) goto loc_82567BA0;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x82567bb8
	goto loc_82567BB8;
loc_82567BA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82567bb4
	if (!cr6.eq) goto loc_82567BB4;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x82567bb8
	goto loc_82567BB8;
loc_82567BB4:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82567BB8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82567c08
	if (!cr6.eq) goto loc_82567C08;
	// lbz r11,97(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82567bdc
	if (cr6.eq) goto loc_82567BDC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82567c04
	goto loc_82567C04;
loc_82567BDC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r8,97(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82567c04
	if (!cr6.eq) goto loc_82567C04;
loc_82567BF0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,97(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82567bf0
	if (cr6.eq) goto loc_82567BF0;
loc_82567C04:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82567C08:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82567cf4
	if (!cr6.eq) goto loc_82567CF4;
	// lbz r11,97(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82567c30
	if (cr6.eq) goto loc_82567C30;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82567cf4
	goto loc_82567CF4;
loc_82567C30:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r8,97(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82567c58
	if (!cr6.eq) goto loc_82567C58;
loc_82567C44:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,97(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82567c44
	if (cr6.eq) goto loc_82567C44;
loc_82567C58:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82567cf4
	goto loc_82567CF4;
loc_82567C60:
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
	// bne cr6,0x82567c80
	if (!cr6.eq) goto loc_82567C80;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82567ca8
	goto loc_82567CA8;
loc_82567C80:
	// lbz r11,97(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 97);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82567c94
	if (!cr6.eq) goto loc_82567C94;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82567C94:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82567CA8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82567cc0
	if (!cr6.eq) goto loc_82567CC0;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82567cdc
	goto loc_82567CDC;
loc_82567CC0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82567cd8
	if (!cr6.eq) goto loc_82567CD8;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82567cdc
	goto loc_82567CDC;
loc_82567CD8:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82567CDC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,96(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 96);
	// lbz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 96);
	// stb r9,96(r25)
	PPC_STORE_U8(ctx.r25.u32 + 96, ctx.r9.u8);
	// stb r10,96(r26)
	PPC_STORE_U8(ctx.r26.u32 + 96, ctx.r10.u8);
loc_82567CF4:
	// lbz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 96);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82567e8c
	if (!cr6.eq) goto loc_82567E8C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x82567e88
	if (cr6.eq) goto loc_82567E88;
loc_82567D18:
	// lbz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82567e88
	if (!cr6.eq) goto loc_82567E88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82567dd0
	if (!cr6.eq) goto loc_82567DD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82567d58
	if (!cr6.eq) goto loc_82567D58;
	// stb r30,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8256a678
	ctx.lr = 0x82567D54;
	sub_8256A678(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82567D58:
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82567e24
	if (!cr6.eq) goto loc_82567E24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 96);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82567d84
	if (!cr6.eq) goto loc_82567D84;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 96);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82567e20
	if (cr6.eq) goto loc_82567E20;
loc_82567D84:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 96);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82567dac
	if (!cr6.eq) goto loc_82567DAC;
	// stb r30,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r28,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82567638
	ctx.lr = 0x82567DA8;
	sub_82567638(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82567DAC:
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, ctx.r30.u8);
	// bl 0x8256a678
	ctx.lr = 0x82567DCC;
	sub_8256A678(ctx, base);
	// b 0x82567e88
	goto loc_82567E88;
loc_82567DD0:
	// lbz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82567df4
	if (!cr6.eq) goto loc_82567DF4;
	// stb r30,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82567638
	ctx.lr = 0x82567DF0;
	sub_82567638(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82567DF4:
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82567e24
	if (!cr6.eq) goto loc_82567E24;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 96);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82567e40
	if (!cr6.eq) goto loc_82567E40;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 96);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82567e40
	if (!cr6.eq) goto loc_82567E40;
loc_82567E20:
	// stb r28,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r28.u8);
loc_82567E24:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82567d18
	if (!cr6.eq) goto loc_82567D18;
	// b 0x82567e88
	goto loc_82567E88;
loc_82567E40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 96);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82567e68
	if (!cr6.eq) goto loc_82567E68;
	// stb r30,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r28,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8256a678
	ctx.lr = 0x82567E64;
	sub_8256A678(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82567E68:
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, ctx.r30.u8);
	// bl 0x82567638
	ctx.lr = 0x82567E88;
	sub_82567638(ctx, base);
loc_82567E88:
	// stb r30,96(r29)
	PPC_STORE_U8(ctx.r29.u32 + 96, ctx.r30.u8);
loc_82567E8C:
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82567ea8
	if (cr6.lt) goto loc_82567EA8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82567EA8;
	sub_8386D088(ctx, base);
loc_82567EA8:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82567ed0
	if (cr6.lt) goto loc_82567ED0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82567ED0;
	sub_8386D088(ctx, base);
loc_82567ED0:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x8386d088
	ctx.lr = 0x82567EE4;
	sub_8386D088(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82567ef8
	if (cr6.eq) goto loc_82567EF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82567EF8:
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

__attribute__((alias("__imp__sub_82567F08"))) PPC_WEAK_FUNC(sub_82567F08);
PPC_FUNC_IMPL(__imp__sub_82567F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82567F10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,97(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 97);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82567fa8
	if (!cr6.eq) goto loc_82567FA8;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82567F34:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82567f08
	ctx.lr = 0x82567F40;
	sub_82567F08(ctx, base);
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r31,r27,16
	ctx.r31.s64 = ctx.r27.s64 + 16;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// blt cr6,0x82567f60
	if (cr6.lt) goto loc_82567F60;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82567F60;
	sub_8386D088(ctx, base);
loc_82567F60:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82567f84
	if (cr6.lt) goto loc_82567F84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82567F84;
	sub_8386D088(ctx, base);
loc_82567F84:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x8386d088
	ctx.lr = 0x82567F98;
	sub_8386D088(ctx, base);
	// lbz r11,97(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 97);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82567f34
	if (cr6.eq) goto loc_82567F34;
loc_82567FA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82567FB0"))) PPC_WEAK_FUNC(sub_82567FB0);
PPC_FUNC_IMPL(__imp__sub_82567FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82567FB8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r27,r5,16
	ctx.r27.s64 = ctx.r5.s64 + 16;
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82568048
	if (!cr6.eq) goto loc_82568048;
	// clrlwi r24,r6,24
	ctx.r24.u64 = ctx.r6.u32 & 0xFF;
loc_82567FEC:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82568014
	if (cr6.eq) goto loc_82568014;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82575818
	ctx.lr = 0x82568004;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82568024
	goto loc_82568024;
loc_82568014:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82575818
	ctx.lr = 0x82568020;
	sub_82575818(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82568024:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82568038
	if (cr6.eq) goto loc_82568038;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8256803c
	goto loc_8256803C;
loc_82568038:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8256803C:
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82567fec
	if (cr6.eq) goto loc_82567FEC;
loc_82568048:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825680a8
	if (cr6.eq) goto loc_825680A8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x825680a0
	if (!cr6.eq) goto loc_825680A0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82567850
	ctx.lr = 0x82568084;
	sub_82567850(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r23.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825680A0:
	// bl 0x82dbc1d0
	ctx.lr = 0x825680A4;
	sub_82DBC1D0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825680A8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82575818
	ctx.lr = 0x825680B4;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825680f4
	if (cr6.eq) goto loc_825680F4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82567850
	ctx.lr = 0x825680D8;
	sub_82567850(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r23.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825680F4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r26,13
	ctx.r3.s64 = ctx.r26.s64 + 13;
	// bl 0x825677e8
	ctx.lr = 0x82568100;
	sub_825677E8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8386d088
	ctx.lr = 0x82568108;
	sub_8386D088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568120"))) PPC_WEAK_FUNC(sub_82568120);
PPC_FUNC_IMPL(__imp__sub_82568120) {
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
	// bl 0x82567f08
	ctx.lr = 0x82568140;
	sub_82567F08(ctx, base);
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

__attribute__((alias("__imp__sub_82568174"))) PPC_WEAK_FUNC(sub_82568174);
PPC_FUNC_IMPL(__imp__sub_82568174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568178"))) PPC_WEAK_FUNC(sub_82568178);
PPC_FUNC_IMPL(__imp__sub_82568178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82568180;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r27,r6,16
	ctx.r27.s64 = ctx.r6.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825681c0
	if (!cr6.eq) goto loc_825681C0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82567850
	ctx.lr = 0x825681B4;
	sub_82567850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825681C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256820c
	if (!cr6.eq) goto loc_8256820C;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82575818
	ctx.lr = 0x825681DC;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82568380
	if (cr6.eq) goto loc_82568380;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82567850
	ctx.lr = 0x82568200;
	sub_82567850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8256820C:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82568258
	if (!cr6.eq) goto loc_82568258;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82575818
	ctx.lr = 0x82568224;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82568380
	if (cr6.eq) goto loc_82568380;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82567850
	ctx.lr = 0x8256824C;
	sub_82567850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82568258:
	// addi r25,r29,16
	ctx.r25.s64 = ctx.r29.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82575818
	ctx.lr = 0x82568268;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825682e8
	if (cr6.eq) goto loc_825682E8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbc1d0
	ctx.lr = 0x82568280;
	sub_82DBC1D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x82575818
	ctx.lr = 0x82568290;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825682e8
	if (cr6.eq) goto loc_825682E8;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825682d0
	if (cr6.eq) goto loc_825682D0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82567850
	ctx.lr = 0x825682C4;
	sub_82567850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825682D0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82567850
	ctx.lr = 0x825682DC;
	sub_82567850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825682E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82575818
	ctx.lr = 0x825682F4;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82568380
	if (cr6.eq) goto loc_82568380;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5dbe8
	ctx.lr = 0x8256830C;
	sub_82C5DBE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// beq cr6,0x82568334
	if (cr6.eq) goto loc_82568334;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82575818
	ctx.lr = 0x82568328;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82568380
	if (cr6.eq) goto loc_82568380;
loc_82568334:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82568368
	if (cr6.eq) goto loc_82568368;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82567850
	ctx.lr = 0x8256835C;
	sub_82567850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82568368:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82567850
	ctx.lr = 0x82568374;
	sub_82567850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82568380:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82567fb0
	ctx.lr = 0x82568394;
	sub_82567FB0(ctx, base);
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

__attribute__((alias("__imp__sub_825683AC"))) PPC_WEAK_FUNC(sub_825683AC);
PPC_FUNC_IMPL(__imp__sub_825683AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825683B0"))) PPC_WEAK_FUNC(sub_825683B0);
PPC_FUNC_IMPL(__imp__sub_825683B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825683B8;
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
	// bne cr6,0x82568404
	if (!cr6.eq) goto loc_82568404;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82568404
	if (!cr6.eq) goto loc_82568404;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82568120
	ctx.lr = 0x825683EC;
	sub_82568120(ctx, base);
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
loc_82568404:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82568434
	if (cr6.eq) goto loc_82568434;
loc_8256840C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c5dbe8
	ctx.lr = 0x82568418;
	sub_82C5DBE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82567af8
	ctx.lr = 0x82568428;
	sub_82567AF8(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x8256840c
	if (!cr6.eq) goto loc_8256840C;
loc_82568434:
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

__attribute__((alias("__imp__sub_82568444"))) PPC_WEAK_FUNC(sub_82568444);
PPC_FUNC_IMPL(__imp__sub_82568444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568448"))) PPC_WEAK_FUNC(sub_82568448);
PPC_FUNC_IMPL(__imp__sub_82568448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82568450;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82534518
	ctx.lr = 0x8256846C;
	sub_82534518(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// bl 0x82567a50
	ctx.lr = 0x825684A4;
	sub_82567A50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82568178
	ctx.lr = 0x825684B8;
	sub_82568178(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825684C4"))) PPC_WEAK_FUNC(sub_825684C4);
PPC_FUNC_IMPL(__imp__sub_825684C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825684C8"))) PPC_WEAK_FUNC(sub_825684C8);
PPC_FUNC_IMPL(__imp__sub_825684C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825684D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82534518
	ctx.lr = 0x825684EC;
	sub_82534518(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r29,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r29.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// beq 0x82568534
	if (cr0.eq) goto loc_82568534;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825767c8
	ctx.lr = 0x82568528;
	sub_825767C8(ctx, base);
	// addi r4,r27,40
	ctx.r4.s64 = ctx.r27.s64 + 40;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x825767c8
	ctx.lr = 0x82568534;
	sub_825767C8(ctx, base);
loc_82568534:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568178
	ctx.lr = 0x82568548;
	sub_82568178(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568554"))) PPC_WEAK_FUNC(sub_82568554);
PPC_FUNC_IMPL(__imp__sub_82568554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568558"))) PPC_WEAK_FUNC(sub_82568558);
PPC_FUNC_IMPL(__imp__sub_82568558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82568560;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825676b0
	ctx.lr = 0x82568570;
	sub_825676B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82568598
	if (cr6.eq) goto loc_82568598;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82575818
	ctx.lr = 0x8256858C;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8256863c
	if (cr6.eq) goto loc_8256863C;
loc_82568598:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825766d0
	ctx.lr = 0x825685A0;
	sub_825766D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825767c8
	ctx.lr = 0x825685B0;
	sub_825767C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825767c8
	ctx.lr = 0x825685BC;
	sub_825767C8(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82568448
	ctx.lr = 0x825685D0;
	sub_82568448(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825685e8
	if (cr6.lt) goto loc_825685E8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8386d088
	ctx.lr = 0x825685E8;
	sub_8386D088(ctx, base);
loc_825685E8:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x82568610
	if (cr6.lt) goto loc_82568610;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8386d088
	ctx.lr = 0x82568610;
	sub_8386D088(ctx, base);
loc_82568610:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// blt cr6,0x82568630
	if (cr6.lt) goto loc_82568630;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8386d088
	ctx.lr = 0x82568630;
	sub_8386D088(ctx, base);
loc_82568630:
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8256863C:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568648"))) PPC_WEAK_FUNC(sub_82568648);
PPC_FUNC_IMPL(__imp__sub_82568648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82568650;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825676b0
	ctx.lr = 0x82568660;
	sub_825676B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82568688
	if (cr6.eq) goto loc_82568688;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82575818
	ctx.lr = 0x8256867C;
	sub_82575818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8256872c
	if (cr6.eq) goto loc_8256872C;
loc_82568688:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825766d0
	ctx.lr = 0x82568690;
	sub_825766D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825767c8
	ctx.lr = 0x825686A0;
	sub_825767C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825767c8
	ctx.lr = 0x825686AC;
	sub_825767C8(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825684c8
	ctx.lr = 0x825686C0;
	sub_825684C8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825686d8
	if (cr6.lt) goto loc_825686D8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8386d088
	ctx.lr = 0x825686D8;
	sub_8386D088(ctx, base);
loc_825686D8:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x82568700
	if (cr6.lt) goto loc_82568700;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8386d088
	ctx.lr = 0x82568700;
	sub_8386D088(ctx, base);
loc_82568700:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// blt cr6,0x82568720
	if (cr6.lt) goto loc_82568720;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8386d088
	ctx.lr = 0x82568720;
	sub_8386D088(ctx, base);
loc_82568720:
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8256872C:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568738"))) PPC_WEAK_FUNC(sub_82568738);
PPC_FUNC_IMPL(__imp__sub_82568738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82568740;
	__savegprlr_26(ctx, base);
	// stwu r1,-1872(r1)
	ea = -1872 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r28,r11,-18888
	ctx.r28.s64 = ctx.r11.s64 + -18888;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82568fe0
	if (!cr6.eq) goto loc_82568FE0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r29,r11,13764
	ctx.r29.s64 = ctx.r11.s64 + 13764;
	// addi r4,r29,-168
	ctx.r4.s64 = ctx.r29.s64 + -168;
	// bl 0x82576848
	ctx.lr = 0x8256876C;
	sub_82576848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r29,-172
	ctx.r4.s64 = ctx.r29.s64 + -172;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82576848
	ctx.lr = 0x8256877C;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568788;
	sub_82568558(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82576490
	ctx.lr = 0x82568790;
	sub_82576490(ctx, base);
	// lwz r11,988(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 988);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825687a4
	if (cr6.lt) goto loc_825687A4;
	// lwz r3,968(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	// bl 0x8386d088
	ctx.lr = 0x825687A4;
	sub_8386D088(ctx, base);
loc_825687A4:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 984, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r30.u32);
	// stb r31,968(r1)
	PPC_STORE_U8(ctx.r1.u32 + 968, ctx.r31.u8);
	// blt cr6,0x825687cc
	if (cr6.lt) goto loc_825687CC;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x8386d088
	ctx.lr = 0x825687CC;
	sub_8386D088(ctx, base);
loc_825687CC:
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x825687E4;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-164
	ctx.r4.s64 = ctx.r29.s64 + -164;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// bl 0x82576848
	ctx.lr = 0x825687F4;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568800;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568808;
	sub_82576490(ctx, base);
	// lwz r11,1756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1756);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8256881c
	if (cr6.lt) goto loc_8256881C;
	// lwz r3,1736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1736);
	// bl 0x8386d088
	ctx.lr = 0x8256881C;
	sub_8386D088(ctx, base);
loc_8256881C:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r30,1756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1756, ctx.r30.u32);
	// stw r31,1752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1752, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1736, ctx.r31.u8);
	// blt cr6,0x8256883c
	if (cr6.lt) goto loc_8256883C;
	// lwz r3,296(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// bl 0x8386d088
	ctx.lr = 0x8256883C;
	sub_8386D088(ctx, base);
loc_8256883C:
	// stw r30,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r30.u32);
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r31,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568854;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-156
	ctx.r4.s64 = ctx.r29.s64 + -156;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82576848
	ctx.lr = 0x82568864;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568870;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568878;
	sub_82576490(ctx, base);
	// lwz r11,1084(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8256888c
	if (cr6.lt) goto loc_8256888C;
	// lwz r3,1064(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// bl 0x8386d088
	ctx.lr = 0x8256888C;
	sub_8386D088(ctx, base);
loc_8256888C:
	// lwz r11,412(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// stw r30,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r30.u32);
	// stw r31,1080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1080, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1064(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1064, ctx.r31.u8);
	// blt cr6,0x825688ac
	if (cr6.lt) goto loc_825688AC;
	// lwz r3,392(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// bl 0x8386d088
	ctx.lr = 0x825688AC;
	sub_8386D088(ctx, base);
loc_825688AC:
	// stw r30,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r30.u32);
	// addi r4,r29,-144
	ctx.r4.s64 = ctx.r29.s64 + -144;
	// stw r31,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r31.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r31,392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 392, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x825688C4;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-148
	ctx.r4.s64 = ctx.r29.s64 + -148;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82576848
	ctx.lr = 0x825688D4;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x825688E0;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x825688E8;
	sub_82576490(ctx, base);
	// lwz r11,1468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825688fc
	if (cr6.lt) goto loc_825688FC;
	// lwz r3,1448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1448);
	// bl 0x8386d088
	ctx.lr = 0x825688FC;
	sub_8386D088(ctx, base);
loc_825688FC:
	// lwz r11,508(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// stw r30,1468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1468, ctx.r30.u32);
	// stw r31,1464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1448, ctx.r31.u8);
	// blt cr6,0x8256891c
	if (cr6.lt) goto loc_8256891C;
	// lwz r3,488(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// bl 0x8386d088
	ctx.lr = 0x8256891C;
	sub_8386D088(ctx, base);
loc_8256891C:
	// stw r30,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// addi r4,r29,-136
	ctx.r4.s64 = ctx.r29.s64 + -136;
	// stw r31,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r31.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stb r31,488(r1)
	PPC_STORE_U8(ctx.r1.u32 + 488, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568934;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-140
	ctx.r4.s64 = ctx.r29.s64 + -140;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82576848
	ctx.lr = 0x82568944;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568950;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568958;
	sub_82576490(ctx, base);
	// lwz r11,1180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8256896c
	if (cr6.lt) goto loc_8256896C;
	// lwz r3,1160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// bl 0x8386d088
	ctx.lr = 0x8256896C;
	sub_8386D088(ctx, base);
loc_8256896C:
	// lwz r11,604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// stw r30,1180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1180, ctx.r30.u32);
	// stw r31,1176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1160, ctx.r31.u8);
	// blt cr6,0x8256898c
	if (cr6.lt) goto loc_8256898C;
	// lwz r3,584(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// bl 0x8386d088
	ctx.lr = 0x8256898C;
	sub_8386D088(ctx, base);
loc_8256898C:
	// stw r30,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r30.u32);
	// addi r4,r29,-128
	ctx.r4.s64 = ctx.r29.s64 + -128;
	// stw r31,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r31.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stb r31,584(r1)
	PPC_STORE_U8(ctx.r1.u32 + 584, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x825689A4;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x82576848
	ctx.lr = 0x825689B4;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x825689C0;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x825689C8;
	sub_82576490(ctx, base);
	// lwz r11,1660(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825689dc
	if (cr6.lt) goto loc_825689DC;
	// lwz r3,1640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1640);
	// bl 0x8386d088
	ctx.lr = 0x825689DC;
	sub_8386D088(ctx, base);
loc_825689DC:
	// lwz r11,700(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// stw r30,1660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1660, ctx.r30.u32);
	// stw r31,1656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1656, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1640, ctx.r31.u8);
	// blt cr6,0x825689fc
	if (cr6.lt) goto loc_825689FC;
	// lwz r3,680(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// bl 0x8386d088
	ctx.lr = 0x825689FC;
	sub_8386D088(ctx, base);
loc_825689FC:
	// stw r30,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r30.u32);
	// addi r4,r29,-120
	ctx.r4.s64 = ctx.r29.s64 + -120;
	// stw r31,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r31.u32);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stb r31,680(r1)
	PPC_STORE_U8(ctx.r1.u32 + 680, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568A14;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-124
	ctx.r4.s64 = ctx.r29.s64 + -124;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82576848
	ctx.lr = 0x82568A24;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568A30;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568A38;
	sub_82576490(ctx, base);
	// lwz r11,1276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568a4c
	if (cr6.lt) goto loc_82568A4C;
	// lwz r3,1256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1256);
	// bl 0x8386d088
	ctx.lr = 0x82568A4C;
	sub_8386D088(ctx, base);
loc_82568A4C:
	// lwz r11,796(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// stw r30,1276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1276, ctx.r30.u32);
	// stw r31,1272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1256, ctx.r31.u8);
	// blt cr6,0x82568a6c
	if (cr6.lt) goto loc_82568A6C;
	// lwz r3,776(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	// bl 0x8386d088
	ctx.lr = 0x82568A6C;
	sub_8386D088(ctx, base);
loc_82568A6C:
	// stw r30,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r30.u32);
	// addi r4,r29,-112
	ctx.r4.s64 = ctx.r29.s64 + -112;
	// stw r31,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r31.u32);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stb r31,776(r1)
	PPC_STORE_U8(ctx.r1.u32 + 776, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568A84;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-116
	ctx.r4.s64 = ctx.r29.s64 + -116;
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// bl 0x82576848
	ctx.lr = 0x82568A94;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568AA0;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568AA8;
	sub_82576490(ctx, base);
	// lwz r11,1564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568abc
	if (cr6.lt) goto loc_82568ABC;
	// lwz r3,1544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1544);
	// bl 0x8386d088
	ctx.lr = 0x82568ABC;
	sub_8386D088(ctx, base);
loc_82568ABC:
	// lwz r11,892(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// stw r30,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r30.u32);
	// stw r31,1560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1560, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1544, ctx.r31.u8);
	// blt cr6,0x82568adc
	if (cr6.lt) goto loc_82568ADC;
	// lwz r3,872(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// bl 0x8386d088
	ctx.lr = 0x82568ADC;
	sub_8386D088(ctx, base);
loc_82568ADC:
	// stw r30,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r30.u32);
	// addi r4,r29,-104
	ctx.r4.s64 = ctx.r29.s64 + -104;
	// stw r31,888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 888, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,872(r1)
	PPC_STORE_U8(ctx.r1.u32 + 872, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568AF4;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-108
	ctx.r4.s64 = ctx.r29.s64 + -108;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82576848
	ctx.lr = 0x82568B04;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568B10;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568B18;
	sub_82576490(ctx, base);
	// lwz r11,1372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568b2c
	if (cr6.lt) goto loc_82568B2C;
	// lwz r3,1352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1352);
	// bl 0x8386d088
	ctx.lr = 0x82568B2C;
	sub_8386D088(ctx, base);
loc_82568B2C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r30,1372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1372, ctx.r30.u32);
	// stw r31,1368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1352, ctx.r31.u8);
	// blt cr6,0x82568b4c
	if (cr6.lt) goto loc_82568B4C;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8386d088
	ctx.lr = 0x82568B4C;
	sub_8386D088(ctx, base);
loc_82568B4C:
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82568ba0
	if (cr6.eq) goto loc_82568BA0;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r27,r10,-18980
	ctx.r27.s64 = ctx.r10.s64 + -18980;
loc_82568B74:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// bl 0x82568648
	ctx.lr = 0x82568B84;
	sub_82568648(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82576490
	ctx.lr = 0x82568B8C;
	sub_82576490(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5dbe8
	ctx.lr = 0x82568B94;
	sub_82C5DBE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82568b74
	if (!cr6.eq) goto loc_82568B74;
loc_82568BA0:
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82576848
	ctx.lr = 0x82568BAC;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82576848
	ctx.lr = 0x82568BBC;
	sub_82576848(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r28,r11,-18904
	ctx.r28.s64 = ctx.r11.s64 + -18904;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568BD0;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568BD8;
	sub_82576490(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568bec
	if (cr6.lt) goto loc_82568BEC;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8386d088
	ctx.lr = 0x82568BEC;
	sub_8386D088(ctx, base);
loc_82568BEC:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// blt cr6,0x82568c0c
	if (cr6.lt) goto loc_82568C0C;
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x8386d088
	ctx.lr = 0x82568C0C;
	sub_8386D088(ctx, base);
loc_82568C0C:
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stb r31,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568C24;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82576848
	ctx.lr = 0x82568C34;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568C40;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568C48;
	sub_82576490(ctx, base);
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568c5c
	if (cr6.lt) goto loc_82568C5C;
	// lwz r3,344(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x8386d088
	ctx.lr = 0x82568C5C;
	sub_8386D088(ctx, base);
loc_82568C5C:
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// stw r30,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r30.u32);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, ctx.r31.u8);
	// blt cr6,0x82568c7c
	if (cr6.lt) goto loc_82568C7C;
	// lwz r3,440(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x8386d088
	ctx.lr = 0x82568C7C;
	sub_8386D088(ctx, base);
loc_82568C7C:
	// stw r30,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r30.u32);
	// addi r4,r29,-72
	ctx.r4.s64 = ctx.r29.s64 + -72;
	// stw r31,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r31.u32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stb r31,440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 440, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568C94;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82576848
	ctx.lr = 0x82568CA4;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568CB0;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568CB8;
	sub_82576490(ctx, base);
	// lwz r11,556(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568ccc
	if (cr6.lt) goto loc_82568CCC;
	// lwz r3,536(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// bl 0x8386d088
	ctx.lr = 0x82568CCC;
	sub_8386D088(ctx, base);
loc_82568CCC:
	// lwz r11,652(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// stw r30,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r30.u32);
	// stw r31,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,536(r1)
	PPC_STORE_U8(ctx.r1.u32 + 536, ctx.r31.u8);
	// blt cr6,0x82568cec
	if (cr6.lt) goto loc_82568CEC;
	// lwz r3,632(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// bl 0x8386d088
	ctx.lr = 0x82568CEC;
	sub_8386D088(ctx, base);
loc_82568CEC:
	// stw r30,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r30.u32);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// stw r31,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r31.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// stb r31,632(r1)
	PPC_STORE_U8(ctx.r1.u32 + 632, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568D04;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82576848
	ctx.lr = 0x82568D14;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568D20;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568D28;
	sub_82576490(ctx, base);
	// lwz r11,748(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568d3c
	if (cr6.lt) goto loc_82568D3C;
	// lwz r3,728(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 728);
	// bl 0x8386d088
	ctx.lr = 0x82568D3C;
	sub_8386D088(ctx, base);
loc_82568D3C:
	// lwz r11,844(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// stw r30,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r30.u32);
	// stw r31,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,728(r1)
	PPC_STORE_U8(ctx.r1.u32 + 728, ctx.r31.u8);
	// blt cr6,0x82568d5c
	if (cr6.lt) goto loc_82568D5C;
	// lwz r3,824(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// bl 0x8386d088
	ctx.lr = 0x82568D5C;
	sub_8386D088(ctx, base);
loc_82568D5C:
	// stw r30,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r30.u32);
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// stw r31,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r31.u32);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// stb r31,824(r1)
	PPC_STORE_U8(ctx.r1.u32 + 824, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568D74;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82576848
	ctx.lr = 0x82568D84;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568D90;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568D98;
	sub_82576490(ctx, base);
	// lwz r11,940(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568dac
	if (cr6.lt) goto loc_82568DAC;
	// lwz r3,920(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	// bl 0x8386d088
	ctx.lr = 0x82568DAC;
	sub_8386D088(ctx, base);
loc_82568DAC:
	// lwz r11,1036(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// stw r30,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r30.u32);
	// stw r31,936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 936, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,920(r1)
	PPC_STORE_U8(ctx.r1.u32 + 920, ctx.r31.u8);
	// blt cr6,0x82568dcc
	if (cr6.lt) goto loc_82568DCC;
	// lwz r3,1016(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1016);
	// bl 0x8386d088
	ctx.lr = 0x82568DCC;
	sub_8386D088(ctx, base);
loc_82568DCC:
	// stw r30,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r30.u32);
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// stw r31,1032(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1032, ctx.r31.u32);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// stb r31,1016(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1016, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568DE4;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82576848
	ctx.lr = 0x82568DF4;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568E00;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568E08;
	sub_82576490(ctx, base);
	// lwz r11,1132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568e1c
	if (cr6.lt) goto loc_82568E1C;
	// lwz r3,1112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1112);
	// bl 0x8386d088
	ctx.lr = 0x82568E1C;
	sub_8386D088(ctx, base);
loc_82568E1C:
	// lwz r11,1228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1228);
	// stw r30,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r30.u32);
	// stw r31,1128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1112, ctx.r31.u8);
	// blt cr6,0x82568e3c
	if (cr6.lt) goto loc_82568E3C;
	// lwz r3,1208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1208);
	// bl 0x8386d088
	ctx.lr = 0x82568E3C;
	sub_8386D088(ctx, base);
loc_82568E3C:
	// stw r30,1228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1228, ctx.r30.u32);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// stw r31,1224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1224, ctx.r31.u32);
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// stb r31,1208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1208, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568E54;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82576848
	ctx.lr = 0x82568E64;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568E70;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568E78;
	sub_82576490(ctx, base);
	// lwz r11,1324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568e8c
	if (cr6.lt) goto loc_82568E8C;
	// lwz r3,1304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1304);
	// bl 0x8386d088
	ctx.lr = 0x82568E8C;
	sub_8386D088(ctx, base);
loc_82568E8C:
	// lwz r11,1420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1420);
	// stw r30,1324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1324, ctx.r30.u32);
	// stw r31,1320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1320, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1304, ctx.r31.u8);
	// blt cr6,0x82568eac
	if (cr6.lt) goto loc_82568EAC;
	// lwz r3,1400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1400);
	// bl 0x8386d088
	ctx.lr = 0x82568EAC;
	sub_8386D088(ctx, base);
loc_82568EAC:
	// stw r30,1420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1420, ctx.r30.u32);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// stw r31,1416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1416, ctx.r31.u32);
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// stb r31,1400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1400, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568EC4;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82576848
	ctx.lr = 0x82568ED4;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568EE0;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568EE8;
	sub_82576490(ctx, base);
	// lwz r11,1516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1516);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568efc
	if (cr6.lt) goto loc_82568EFC;
	// lwz r3,1496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1496);
	// bl 0x8386d088
	ctx.lr = 0x82568EFC;
	sub_8386D088(ctx, base);
loc_82568EFC:
	// lwz r11,1612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// stw r30,1516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1516, ctx.r30.u32);
	// stw r31,1512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1512, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1496, ctx.r31.u8);
	// blt cr6,0x82568f1c
	if (cr6.lt) goto loc_82568F1C;
	// lwz r3,1592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1592);
	// bl 0x8386d088
	ctx.lr = 0x82568F1C;
	sub_8386D088(ctx, base);
loc_82568F1C:
	// stw r30,1612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1612, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,1608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1608, ctx.r31.u32);
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// stb r31,1592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1592, ctx.r31.u8);
	// bl 0x82576848
	ctx.lr = 0x82568F34;
	sub_82576848(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82576848
	ctx.lr = 0x82568F44;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82568558
	ctx.lr = 0x82568F50;
	sub_82568558(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82576490
	ctx.lr = 0x82568F58;
	sub_82576490(ctx, base);
	// lwz r11,1708(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1708);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82568f6c
	if (cr6.lt) goto loc_82568F6C;
	// lwz r3,1688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1688);
	// bl 0x8386d088
	ctx.lr = 0x82568F6C;
	sub_8386D088(ctx, base);
loc_82568F6C:
	// lwz r11,1804(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1804);
	// stw r30,1708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1708, ctx.r30.u32);
	// stw r31,1704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1704, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,1688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1688, ctx.r31.u8);
	// blt cr6,0x82568f8c
	if (cr6.lt) goto loc_82568F8C;
	// lwz r3,1784(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1784);
	// bl 0x8386d088
	ctx.lr = 0x82568F8C;
	sub_8386D088(ctx, base);
loc_82568F8C:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r30,1804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1804, ctx.r30.u32);
	// stb r31,1784(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1784, ctx.r31.u8);
	// stw r31,1800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1800, ctx.r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82568fe0
	if (cr6.eq) goto loc_82568FE0;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r31,r10,-18920
	ctx.r31.s64 = ctx.r10.s64 + -18920;
loc_82568FB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// bl 0x82568648
	ctx.lr = 0x82568FC4;
	sub_82568648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82576490
	ctx.lr = 0x82568FCC;
	sub_82576490(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5dbe8
	ctx.lr = 0x82568FD4;
	sub_82C5DBE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82568fb4
	if (!cr6.eq) goto loc_82568FB4;
loc_82568FE0:
	// addi r1,r1,1872
	ctx.r1.s64 = ctx.r1.s64 + 1872;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82568FE8"))) PPC_WEAK_FUNC(sub_82568FE8);
PPC_FUNC_IMPL(__imp__sub_82568FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82568FF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82569228
	ctx.lr = 0x82568FFC;
	sub_82569228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82568738
	ctx.lr = 0x82569004;
	sub_82568738(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r29,r11,-18904
	ctx.r29.s64 = ctx.r11.s64 + -18904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82567760
	ctx.lr = 0x8256901C;
	sub_82567760(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82569034
	if (cr6.eq) goto loc_82569034;
	// addi r4,r10,56
	ctx.r4.s64 = ctx.r10.s64 + 56;
loc_82569034:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82569238
	ctx.lr = 0x8256903C;
	sub_82569238(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82569044"))) PPC_WEAK_FUNC(sub_82569044);
PPC_FUNC_IMPL(__imp__sub_82569044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82569048"))) PPC_WEAK_FUNC(sub_82569048);
PPC_FUNC_IMPL(__imp__sub_82569048) {
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
	// bl 0x82569228
	ctx.lr = 0x82569060;
	sub_82569228(ctx, base);
	// bl 0x82569248
	ctx.lr = 0x82569064;
	sub_82569248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82568738
	ctx.lr = 0x8256906C;
	sub_82568738(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r30,r11,-18920
	ctx.r30.s64 = ctx.r11.s64 + -18920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82567760
	ctx.lr = 0x82569084;
	sub_82567760(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8256909c
	if (cr6.eq) goto loc_8256909C;
	// addi r3,r10,56
	ctx.r3.s64 = ctx.r10.s64 + 56;
loc_8256909C:
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

__attribute__((alias("__imp__sub_825690B4"))) PPC_WEAK_FUNC(sub_825690B4);
PPC_FUNC_IMPL(__imp__sub_825690B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825690B8"))) PPC_WEAK_FUNC(sub_825690B8);
PPC_FUNC_IMPL(__imp__sub_825690B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825690C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82569228
	ctx.lr = 0x825690D0;
	sub_82569228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82576848
	ctx.lr = 0x825690E0;
	sub_82576848(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82576848
	ctx.lr = 0x825690EC;
	sub_82576848(ctx, base);
	// bl 0x82568738
	ctx.lr = 0x825690F0;
	sub_82568738(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,-18904
	ctx.r30.s64 = ctx.r11.s64 + -18904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82567760
	ctx.lr = 0x82569108;
	sub_82567760(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82569120
	if (cr6.eq) goto loc_82569120;
	// addi r5,r10,56
	ctx.r5.s64 = ctx.r10.s64 + 56;
loc_82569120:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256a310
	ctx.lr = 0x8256912C;
	sub_8256A310(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82569140
	if (cr6.lt) goto loc_82569140;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8386d088
	ctx.lr = 0x82569140;
	sub_8386D088(ctx, base);
loc_82569140:
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// blt cr6,0x82569168
	if (cr6.lt) goto loc_82569168;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x8386d088
	ctx.lr = 0x82569168;
	sub_8386D088(ctx, base);
loc_82569168:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

