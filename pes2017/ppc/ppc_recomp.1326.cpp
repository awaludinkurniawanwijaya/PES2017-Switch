#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D5D408"))) PPC_WEAK_FUNC(sub_83D5D408);
PPC_FUNC_IMPL(__imp__sub_83D5D408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,31304
	ctx.r11.s64 = ctx.r11.s64 + 31304;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5D42C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D438;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d42c
	if (!cr0.lt) goto loc_83D5D42C;
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

__attribute__((alias("__imp__sub_83D5D458"))) PPC_WEAK_FUNC(sub_83D5D458);
PPC_FUNC_IMPL(__imp__sub_83D5D458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// addi r31,r11,128
	ctx.r31.s64 = ctx.r11.s64 + 128;
loc_83D5D47C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D488;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d47c
	if (!cr0.lt) goto loc_83D5D47C;
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

__attribute__((alias("__imp__sub_83D5D4A8"))) PPC_WEAK_FUNC(sub_83D5D4A8);
PPC_FUNC_IMPL(__imp__sub_83D5D4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,31512
	ctx.r11.s64 = ctx.r11.s64 + 31512;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5D4CC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D4D8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d4cc
	if (!cr0.lt) goto loc_83D5D4CC;
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

__attribute__((alias("__imp__sub_83D5D4F8"))) PPC_WEAK_FUNC(sub_83D5D4F8);
PPC_FUNC_IMPL(__imp__sub_83D5D4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r11,r11,31568
	ctx.r11.s64 = ctx.r11.s64 + 31568;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
loc_83D5D51C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D528;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d51c
	if (!cr0.lt) goto loc_83D5D51C;
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

__attribute__((alias("__imp__sub_83D5D548"))) PPC_WEAK_FUNC(sub_83D5D548);
PPC_FUNC_IMPL(__imp__sub_83D5D548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,27
	ctx.r30.s64 = 27;
	// addi r11,r11,31672
	ctx.r11.s64 = ctx.r11.s64 + 31672;
	// addi r31,r11,448
	ctx.r31.s64 = ctx.r11.s64 + 448;
loc_83D5D56C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D578;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d56c
	if (!cr0.lt) goto loc_83D5D56C;
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

__attribute__((alias("__imp__sub_83D5D598"))) PPC_WEAK_FUNC(sub_83D5D598);
PPC_FUNC_IMPL(__imp__sub_83D5D598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,32128
	ctx.r11.s64 = ctx.r11.s64 + 32128;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5D5BC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D5C8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d5bc
	if (!cr0.lt) goto loc_83D5D5BC;
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

__attribute__((alias("__imp__sub_83D5D5E8"))) PPC_WEAK_FUNC(sub_83D5D5E8);
PPC_FUNC_IMPL(__imp__sub_83D5D5E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,32184
	ctx.r11.s64 = ctx.r11.s64 + 32184;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5D60C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D618;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d60c
	if (!cr0.lt) goto loc_83D5D60C;
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

__attribute__((alias("__imp__sub_83D5D638"))) PPC_WEAK_FUNC(sub_83D5D638);
PPC_FUNC_IMPL(__imp__sub_83D5D638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,32256
	ctx.r11.s64 = ctx.r11.s64 + 32256;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5D65C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D668;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d65c
	if (!cr0.lt) goto loc_83D5D65C;
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

__attribute__((alias("__imp__sub_83D5D688"))) PPC_WEAK_FUNC(sub_83D5D688);
PPC_FUNC_IMPL(__imp__sub_83D5D688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,32312
	ctx.r11.s64 = ctx.r11.s64 + 32312;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5D6AC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D6B8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d6ac
	if (!cr0.lt) goto loc_83D5D6AC;
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

__attribute__((alias("__imp__sub_83D5D6D8"))) PPC_WEAK_FUNC(sub_83D5D6D8);
PPC_FUNC_IMPL(__imp__sub_83D5D6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,32384
	ctx.r11.s64 = ctx.r11.s64 + 32384;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_83D5D6FC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D708;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d6fc
	if (!cr0.lt) goto loc_83D5D6FC;
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

__attribute__((alias("__imp__sub_83D5D728"))) PPC_WEAK_FUNC(sub_83D5D728);
PPC_FUNC_IMPL(__imp__sub_83D5D728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,32472
	ctx.r11.s64 = ctx.r11.s64 + 32472;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D5D74C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D758;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d74c
	if (!cr0.lt) goto loc_83D5D74C;
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

__attribute__((alias("__imp__sub_83D5D778"))) PPC_WEAK_FUNC(sub_83D5D778);
PPC_FUNC_IMPL(__imp__sub_83D5D778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,32512
	ctx.r11.s64 = ctx.r11.s64 + 32512;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5D79C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D7A8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d79c
	if (!cr0.lt) goto loc_83D5D79C;
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

__attribute__((alias("__imp__sub_83D5D7C8"))) PPC_WEAK_FUNC(sub_83D5D7C8);
PPC_FUNC_IMPL(__imp__sub_83D5D7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,32568
	ctx.r11.s64 = ctx.r11.s64 + 32568;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5D7EC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D7F8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d7ec
	if (!cr0.lt) goto loc_83D5D7EC;
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

__attribute__((alias("__imp__sub_83D5D818"))) PPC_WEAK_FUNC(sub_83D5D818);
PPC_FUNC_IMPL(__imp__sub_83D5D818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r11,r11,32640
	ctx.r11.s64 = ctx.r11.s64 + 32640;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
loc_83D5D83C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D848;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d83c
	if (!cr0.lt) goto loc_83D5D83C;
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

__attribute__((alias("__imp__sub_83D5D868"))) PPC_WEAK_FUNC(sub_83D5D868);
PPC_FUNC_IMPL(__imp__sub_83D5D868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,32744
	ctx.r11.s64 = ctx.r11.s64 + 32744;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D5D88C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D898;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d88c
	if (!cr0.lt) goto loc_83D5D88C;
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

__attribute__((alias("__imp__sub_83D5D8B8"))) PPC_WEAK_FUNC(sub_83D5D8B8);
PPC_FUNC_IMPL(__imp__sub_83D5D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-32752
	ctx.r11.s64 = ctx.r11.s64 + -32752;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5D8DC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D8E8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d8dc
	if (!cr0.lt) goto loc_83D5D8DC;
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

__attribute__((alias("__imp__sub_83D5D908"))) PPC_WEAK_FUNC(sub_83D5D908);
PPC_FUNC_IMPL(__imp__sub_83D5D908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-32696
	ctx.r11.s64 = ctx.r11.s64 + -32696;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_83D5D92C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D938;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d92c
	if (!cr0.lt) goto loc_83D5D92C;
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

__attribute__((alias("__imp__sub_83D5D958"))) PPC_WEAK_FUNC(sub_83D5D958);
PPC_FUNC_IMPL(__imp__sub_83D5D958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-32608
	ctx.r11.s64 = ctx.r11.s64 + -32608;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5D97C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D988;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d97c
	if (!cr0.lt) goto loc_83D5D97C;
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

__attribute__((alias("__imp__sub_83D5D9A8"))) PPC_WEAK_FUNC(sub_83D5D9A8);
PPC_FUNC_IMPL(__imp__sub_83D5D9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-32552
	ctx.r11.s64 = ctx.r11.s64 + -32552;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5D9CC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5D9D8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5d9cc
	if (!cr0.lt) goto loc_83D5D9CC;
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

__attribute__((alias("__imp__sub_83D5D9F8"))) PPC_WEAK_FUNC(sub_83D5D9F8);
PPC_FUNC_IMPL(__imp__sub_83D5D9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,12
	ctx.r30.s64 = 12;
	// addi r11,r11,-32496
	ctx.r11.s64 = ctx.r11.s64 + -32496;
	// addi r31,r11,208
	ctx.r31.s64 = ctx.r11.s64 + 208;
loc_83D5DA1C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DA28;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5da1c
	if (!cr0.lt) goto loc_83D5DA1C;
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

__attribute__((alias("__imp__sub_83D5DA48"))) PPC_WEAK_FUNC(sub_83D5DA48);
PPC_FUNC_IMPL(__imp__sub_83D5DA48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r11,r11,-32280
	ctx.r11.s64 = ctx.r11.s64 + -32280;
	// addi r31,r11,128
	ctx.r31.s64 = ctx.r11.s64 + 128;
loc_83D5DA6C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DA78;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5da6c
	if (!cr0.lt) goto loc_83D5DA6C;
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

__attribute__((alias("__imp__sub_83D5DA98"))) PPC_WEAK_FUNC(sub_83D5DA98);
PPC_FUNC_IMPL(__imp__sub_83D5DA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,-32144
	ctx.r11.s64 = ctx.r11.s64 + -32144;
	// addi r31,r11,256
	ctx.r31.s64 = ctx.r11.s64 + 256;
loc_83D5DABC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DAC8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dabc
	if (!cr0.lt) goto loc_83D5DABC;
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

__attribute__((alias("__imp__sub_83D5DAE8"))) PPC_WEAK_FUNC(sub_83D5DAE8);
PPC_FUNC_IMPL(__imp__sub_83D5DAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-31880
	ctx.r11.s64 = ctx.r11.s64 + -31880;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_83D5DB0C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DB18;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5db0c
	if (!cr0.lt) goto loc_83D5DB0C;
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

__attribute__((alias("__imp__sub_83D5DB38"))) PPC_WEAK_FUNC(sub_83D5DB38);
PPC_FUNC_IMPL(__imp__sub_83D5DB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-31792
	ctx.r11.s64 = ctx.r11.s64 + -31792;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D5DB5C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DB68;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5db5c
	if (!cr0.lt) goto loc_83D5DB5C;
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

__attribute__((alias("__imp__sub_83D5DB88"))) PPC_WEAK_FUNC(sub_83D5DB88);
PPC_FUNC_IMPL(__imp__sub_83D5DB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-31752
	ctx.r11.s64 = ctx.r11.s64 + -31752;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D5DBAC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DBB8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dbac
	if (!cr0.lt) goto loc_83D5DBAC;
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

__attribute__((alias("__imp__sub_83D5DBD8"))) PPC_WEAK_FUNC(sub_83D5DBD8);
PPC_FUNC_IMPL(__imp__sub_83D5DBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-31712
	ctx.r11.s64 = ctx.r11.s64 + -31712;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5DBFC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DC08;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dbfc
	if (!cr0.lt) goto loc_83D5DBFC;
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

__attribute__((alias("__imp__sub_83D5DC28"))) PPC_WEAK_FUNC(sub_83D5DC28);
PPC_FUNC_IMPL(__imp__sub_83D5DC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r11,r11,-31640
	ctx.r11.s64 = ctx.r11.s64 + -31640;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
loc_83D5DC4C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DC58;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dc4c
	if (!cr0.lt) goto loc_83D5DC4C;
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

__attribute__((alias("__imp__sub_83D5DC78"))) PPC_WEAK_FUNC(sub_83D5DC78);
PPC_FUNC_IMPL(__imp__sub_83D5DC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-31536
	ctx.r11.s64 = ctx.r11.s64 + -31536;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D5DC9C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DCA8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dc9c
	if (!cr0.lt) goto loc_83D5DC9C;
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

__attribute__((alias("__imp__sub_83D5DCC8"))) PPC_WEAK_FUNC(sub_83D5DCC8);
PPC_FUNC_IMPL(__imp__sub_83D5DCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-31496
	ctx.r11.s64 = ctx.r11.s64 + -31496;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5DCEC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DCF8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dcec
	if (!cr0.lt) goto loc_83D5DCEC;
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

__attribute__((alias("__imp__sub_83D5DD18"))) PPC_WEAK_FUNC(sub_83D5DD18);
PPC_FUNC_IMPL(__imp__sub_83D5DD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-31424
	ctx.r11.s64 = ctx.r11.s64 + -31424;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D5DD3C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DD48;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dd3c
	if (!cr0.lt) goto loc_83D5DD3C;
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

__attribute__((alias("__imp__sub_83D5DD68"))) PPC_WEAK_FUNC(sub_83D5DD68);
PPC_FUNC_IMPL(__imp__sub_83D5DD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-31384
	ctx.r11.s64 = ctx.r11.s64 + -31384;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D5DD8C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DD98;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dd8c
	if (!cr0.lt) goto loc_83D5DD8C;
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

__attribute__((alias("__imp__sub_83D5DDB8"))) PPC_WEAK_FUNC(sub_83D5DDB8);
PPC_FUNC_IMPL(__imp__sub_83D5DDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-31344
	ctx.r11.s64 = ctx.r11.s64 + -31344;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5DDDC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DDE8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dddc
	if (!cr0.lt) goto loc_83D5DDDC;
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

__attribute__((alias("__imp__sub_83D5DE08"))) PPC_WEAK_FUNC(sub_83D5DE08);
PPC_FUNC_IMPL(__imp__sub_83D5DE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-31272
	ctx.r11.s64 = ctx.r11.s64 + -31272;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D5DE2C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DE38;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5de2c
	if (!cr0.lt) goto loc_83D5DE2C;
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

__attribute__((alias("__imp__sub_83D5DE58"))) PPC_WEAK_FUNC(sub_83D5DE58);
PPC_FUNC_IMPL(__imp__sub_83D5DE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-31232
	ctx.r11.s64 = ctx.r11.s64 + -31232;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5DE7C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DE88;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5de7c
	if (!cr0.lt) goto loc_83D5DE7C;
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

__attribute__((alias("__imp__sub_83D5DEA8"))) PPC_WEAK_FUNC(sub_83D5DEA8);
PPC_FUNC_IMPL(__imp__sub_83D5DEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r11,r11,-31176
	ctx.r11.s64 = ctx.r11.s64 + -31176;
	// addi r31,r11,112
	ctx.r31.s64 = ctx.r11.s64 + 112;
loc_83D5DECC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DED8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5decc
	if (!cr0.lt) goto loc_83D5DECC;
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

__attribute__((alias("__imp__sub_83D5DEF8"))) PPC_WEAK_FUNC(sub_83D5DEF8);
PPC_FUNC_IMPL(__imp__sub_83D5DEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-31056
	ctx.r11.s64 = ctx.r11.s64 + -31056;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_83D5DF1C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DF28;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5df1c
	if (!cr0.lt) goto loc_83D5DF1C;
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

__attribute__((alias("__imp__sub_83D5DF48"))) PPC_WEAK_FUNC(sub_83D5DF48);
PPC_FUNC_IMPL(__imp__sub_83D5DF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5DF6C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DF78;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5df6c
	if (!cr0.lt) goto loc_83D5DF6C;
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

__attribute__((alias("__imp__sub_83D5DF98"))) PPC_WEAK_FUNC(sub_83D5DF98);
PPC_FUNC_IMPL(__imp__sub_83D5DF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-30896
	ctx.r11.s64 = ctx.r11.s64 + -30896;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5DFBC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5DFC8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5dfbc
	if (!cr0.lt) goto loc_83D5DFBC;
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

__attribute__((alias("__imp__sub_83D5DFE8"))) PPC_WEAK_FUNC(sub_83D5DFE8);
PPC_FUNC_IMPL(__imp__sub_83D5DFE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-30824
	ctx.r11.s64 = ctx.r11.s64 + -30824;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5E00C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E018;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e00c
	if (!cr0.lt) goto loc_83D5E00C;
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

__attribute__((alias("__imp__sub_83D5E038"))) PPC_WEAK_FUNC(sub_83D5E038);
PPC_FUNC_IMPL(__imp__sub_83D5E038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5E05C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E068;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e05c
	if (!cr0.lt) goto loc_83D5E05C;
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

__attribute__((alias("__imp__sub_83D5E088"))) PPC_WEAK_FUNC(sub_83D5E088);
PPC_FUNC_IMPL(__imp__sub_83D5E088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-30696
	ctx.r11.s64 = ctx.r11.s64 + -30696;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5E0AC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E0B8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e0ac
	if (!cr0.lt) goto loc_83D5E0AC;
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

__attribute__((alias("__imp__sub_83D5E0D8"))) PPC_WEAK_FUNC(sub_83D5E0D8);
PPC_FUNC_IMPL(__imp__sub_83D5E0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-30624
	ctx.r11.s64 = ctx.r11.s64 + -30624;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_83D5E0FC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E108;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e0fc
	if (!cr0.lt) goto loc_83D5E0FC;
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

__attribute__((alias("__imp__sub_83D5E128"))) PPC_WEAK_FUNC(sub_83D5E128);
PPC_FUNC_IMPL(__imp__sub_83D5E128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-30584
	ctx.r11.s64 = ctx.r11.s64 + -30584;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_83D5E14C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E158;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e14c
	if (!cr0.lt) goto loc_83D5E14C;
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

__attribute__((alias("__imp__sub_83D5E178"))) PPC_WEAK_FUNC(sub_83D5E178);
PPC_FUNC_IMPL(__imp__sub_83D5E178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-30496
	ctx.r11.s64 = ctx.r11.s64 + -30496;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5E19C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E1A8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e19c
	if (!cr0.lt) goto loc_83D5E19C;
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

__attribute__((alias("__imp__sub_83D5E1C8"))) PPC_WEAK_FUNC(sub_83D5E1C8);
PPC_FUNC_IMPL(__imp__sub_83D5E1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-30440
	ctx.r11.s64 = ctx.r11.s64 + -30440;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_83D5E1EC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E1F8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e1ec
	if (!cr0.lt) goto loc_83D5E1EC;
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

__attribute__((alias("__imp__sub_83D5E218"))) PPC_WEAK_FUNC(sub_83D5E218);
PPC_FUNC_IMPL(__imp__sub_83D5E218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,27
	ctx.r30.s64 = 27;
	// addi r11,r11,-30352
	ctx.r11.s64 = ctx.r11.s64 + -30352;
	// addi r31,r11,448
	ctx.r31.s64 = ctx.r11.s64 + 448;
loc_83D5E23C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E248;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e23c
	if (!cr0.lt) goto loc_83D5E23C;
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

__attribute__((alias("__imp__sub_83D5E268"))) PPC_WEAK_FUNC(sub_83D5E268);
PPC_FUNC_IMPL(__imp__sub_83D5E268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-29896
	ctx.r11.s64 = ctx.r11.s64 + -29896;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5E28C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E298;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e28c
	if (!cr0.lt) goto loc_83D5E28C;
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

__attribute__((alias("__imp__sub_83D5E2B8"))) PPC_WEAK_FUNC(sub_83D5E2B8);
PPC_FUNC_IMPL(__imp__sub_83D5E2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,11
	ctx.r30.s64 = 11;
	// addi r11,r11,-29840
	ctx.r11.s64 = ctx.r11.s64 + -29840;
	// addi r31,r11,192
	ctx.r31.s64 = ctx.r11.s64 + 192;
loc_83D5E2DC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E2E8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e2dc
	if (!cr0.lt) goto loc_83D5E2DC;
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

__attribute__((alias("__imp__sub_83D5E308"))) PPC_WEAK_FUNC(sub_83D5E308);
PPC_FUNC_IMPL(__imp__sub_83D5E308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-29640
	ctx.r11.s64 = ctx.r11.s64 + -29640;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5E32C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E338;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e32c
	if (!cr0.lt) goto loc_83D5E32C;
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

__attribute__((alias("__imp__sub_83D5E358"))) PPC_WEAK_FUNC(sub_83D5E358);
PPC_FUNC_IMPL(__imp__sub_83D5E358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-29584
	ctx.r11.s64 = ctx.r11.s64 + -29584;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_83D5E37C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E388;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e37c
	if (!cr0.lt) goto loc_83D5E37C;
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

__attribute__((alias("__imp__sub_83D5E3A8"))) PPC_WEAK_FUNC(sub_83D5E3A8);
PPC_FUNC_IMPL(__imp__sub_83D5E3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_83D5E3CC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E3D8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e3cc
	if (!cr0.lt) goto loc_83D5E3CC;
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

__attribute__((alias("__imp__sub_83D5E3F8"))) PPC_WEAK_FUNC(sub_83D5E3F8);
PPC_FUNC_IMPL(__imp__sub_83D5E3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-29440
	ctx.r11.s64 = ctx.r11.s64 + -29440;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_83D5E41C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E428;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e41c
	if (!cr0.lt) goto loc_83D5E41C;
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

__attribute__((alias("__imp__sub_83D5E448"))) PPC_WEAK_FUNC(sub_83D5E448);
PPC_FUNC_IMPL(__imp__sub_83D5E448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,11
	ctx.r30.s64 = 11;
	// addi r11,r11,-29368
	ctx.r11.s64 = ctx.r11.s64 + -29368;
	// addi r31,r11,192
	ctx.r31.s64 = ctx.r11.s64 + 192;
loc_83D5E46C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E478;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e46c
	if (!cr0.lt) goto loc_83D5E46C;
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

__attribute__((alias("__imp__sub_83D5E498"))) PPC_WEAK_FUNC(sub_83D5E498);
PPC_FUNC_IMPL(__imp__sub_83D5E498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,233
	ctx.r30.s64 = 233;
	// addi r11,r11,-29168
	ctx.r11.s64 = ctx.r11.s64 + -29168;
	// addi r31,r11,3744
	ctx.r31.s64 = ctx.r11.s64 + 3744;
loc_83D5E4BC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E4C8;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e4bc
	if (!cr0.lt) goto loc_83D5E4BC;
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

__attribute__((alias("__imp__sub_83D5E4E8"))) PPC_WEAK_FUNC(sub_83D5E4E8);
PPC_FUNC_IMPL(__imp__sub_83D5E4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,-25416
	ctx.r11.s64 = ctx.r11.s64 + -25416;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
loc_83D5E50C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c50
	ctx.lr = 0x83D5E518;
	sub_82573C50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5e50c
	if (!cr0.lt) goto loc_83D5E50C;
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

__attribute__((alias("__imp__sub_83D5E538"))) PPC_WEAK_FUNC(sub_83D5E538);
PPC_FUNC_IMPL(__imp__sub_83D5E538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E53C"))) PPC_WEAK_FUNC(sub_83D5E53C);
PPC_FUNC_IMPL(__imp__sub_83D5E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E540"))) PPC_WEAK_FUNC(sub_83D5E540);
PPC_FUNC_IMPL(__imp__sub_83D5E540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E544"))) PPC_WEAK_FUNC(sub_83D5E544);
PPC_FUNC_IMPL(__imp__sub_83D5E544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E548"))) PPC_WEAK_FUNC(sub_83D5E548);
PPC_FUNC_IMPL(__imp__sub_83D5E548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E54C"))) PPC_WEAK_FUNC(sub_83D5E54C);
PPC_FUNC_IMPL(__imp__sub_83D5E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E550"))) PPC_WEAK_FUNC(sub_83D5E550);
PPC_FUNC_IMPL(__imp__sub_83D5E550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E554"))) PPC_WEAK_FUNC(sub_83D5E554);
PPC_FUNC_IMPL(__imp__sub_83D5E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E558"))) PPC_WEAK_FUNC(sub_83D5E558);
PPC_FUNC_IMPL(__imp__sub_83D5E558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E55C"))) PPC_WEAK_FUNC(sub_83D5E55C);
PPC_FUNC_IMPL(__imp__sub_83D5E55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E560"))) PPC_WEAK_FUNC(sub_83D5E560);
PPC_FUNC_IMPL(__imp__sub_83D5E560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E564"))) PPC_WEAK_FUNC(sub_83D5E564);
PPC_FUNC_IMPL(__imp__sub_83D5E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E568"))) PPC_WEAK_FUNC(sub_83D5E568);
PPC_FUNC_IMPL(__imp__sub_83D5E568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E56C"))) PPC_WEAK_FUNC(sub_83D5E56C);
PPC_FUNC_IMPL(__imp__sub_83D5E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E570"))) PPC_WEAK_FUNC(sub_83D5E570);
PPC_FUNC_IMPL(__imp__sub_83D5E570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E574"))) PPC_WEAK_FUNC(sub_83D5E574);
PPC_FUNC_IMPL(__imp__sub_83D5E574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E578"))) PPC_WEAK_FUNC(sub_83D5E578);
PPC_FUNC_IMPL(__imp__sub_83D5E578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E57C"))) PPC_WEAK_FUNC(sub_83D5E57C);
PPC_FUNC_IMPL(__imp__sub_83D5E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E580"))) PPC_WEAK_FUNC(sub_83D5E580);
PPC_FUNC_IMPL(__imp__sub_83D5E580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E584"))) PPC_WEAK_FUNC(sub_83D5E584);
PPC_FUNC_IMPL(__imp__sub_83D5E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E588"))) PPC_WEAK_FUNC(sub_83D5E588);
PPC_FUNC_IMPL(__imp__sub_83D5E588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E58C"))) PPC_WEAK_FUNC(sub_83D5E58C);
PPC_FUNC_IMPL(__imp__sub_83D5E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E590"))) PPC_WEAK_FUNC(sub_83D5E590);
PPC_FUNC_IMPL(__imp__sub_83D5E590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E594"))) PPC_WEAK_FUNC(sub_83D5E594);
PPC_FUNC_IMPL(__imp__sub_83D5E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E598"))) PPC_WEAK_FUNC(sub_83D5E598);
PPC_FUNC_IMPL(__imp__sub_83D5E598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E59C"))) PPC_WEAK_FUNC(sub_83D5E59C);
PPC_FUNC_IMPL(__imp__sub_83D5E59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5A0"))) PPC_WEAK_FUNC(sub_83D5E5A0);
PPC_FUNC_IMPL(__imp__sub_83D5E5A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5A4"))) PPC_WEAK_FUNC(sub_83D5E5A4);
PPC_FUNC_IMPL(__imp__sub_83D5E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5A8"))) PPC_WEAK_FUNC(sub_83D5E5A8);
PPC_FUNC_IMPL(__imp__sub_83D5E5A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5AC"))) PPC_WEAK_FUNC(sub_83D5E5AC);
PPC_FUNC_IMPL(__imp__sub_83D5E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5B0"))) PPC_WEAK_FUNC(sub_83D5E5B0);
PPC_FUNC_IMPL(__imp__sub_83D5E5B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5B4"))) PPC_WEAK_FUNC(sub_83D5E5B4);
PPC_FUNC_IMPL(__imp__sub_83D5E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5B8"))) PPC_WEAK_FUNC(sub_83D5E5B8);
PPC_FUNC_IMPL(__imp__sub_83D5E5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5BC"))) PPC_WEAK_FUNC(sub_83D5E5BC);
PPC_FUNC_IMPL(__imp__sub_83D5E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5C0"))) PPC_WEAK_FUNC(sub_83D5E5C0);
PPC_FUNC_IMPL(__imp__sub_83D5E5C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5C4"))) PPC_WEAK_FUNC(sub_83D5E5C4);
PPC_FUNC_IMPL(__imp__sub_83D5E5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5C8"))) PPC_WEAK_FUNC(sub_83D5E5C8);
PPC_FUNC_IMPL(__imp__sub_83D5E5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5CC"))) PPC_WEAK_FUNC(sub_83D5E5CC);
PPC_FUNC_IMPL(__imp__sub_83D5E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5D0"))) PPC_WEAK_FUNC(sub_83D5E5D0);
PPC_FUNC_IMPL(__imp__sub_83D5E5D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5D4"))) PPC_WEAK_FUNC(sub_83D5E5D4);
PPC_FUNC_IMPL(__imp__sub_83D5E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5D8"))) PPC_WEAK_FUNC(sub_83D5E5D8);
PPC_FUNC_IMPL(__imp__sub_83D5E5D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5DC"))) PPC_WEAK_FUNC(sub_83D5E5DC);
PPC_FUNC_IMPL(__imp__sub_83D5E5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5E0"))) PPC_WEAK_FUNC(sub_83D5E5E0);
PPC_FUNC_IMPL(__imp__sub_83D5E5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5E4"))) PPC_WEAK_FUNC(sub_83D5E5E4);
PPC_FUNC_IMPL(__imp__sub_83D5E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5E8"))) PPC_WEAK_FUNC(sub_83D5E5E8);
PPC_FUNC_IMPL(__imp__sub_83D5E5E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5EC"))) PPC_WEAK_FUNC(sub_83D5E5EC);
PPC_FUNC_IMPL(__imp__sub_83D5E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5F0"))) PPC_WEAK_FUNC(sub_83D5E5F0);
PPC_FUNC_IMPL(__imp__sub_83D5E5F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5F4"))) PPC_WEAK_FUNC(sub_83D5E5F4);
PPC_FUNC_IMPL(__imp__sub_83D5E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E5F8"))) PPC_WEAK_FUNC(sub_83D5E5F8);
PPC_FUNC_IMPL(__imp__sub_83D5E5F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E5FC"))) PPC_WEAK_FUNC(sub_83D5E5FC);
PPC_FUNC_IMPL(__imp__sub_83D5E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E600"))) PPC_WEAK_FUNC(sub_83D5E600);
PPC_FUNC_IMPL(__imp__sub_83D5E600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E604"))) PPC_WEAK_FUNC(sub_83D5E604);
PPC_FUNC_IMPL(__imp__sub_83D5E604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E608"))) PPC_WEAK_FUNC(sub_83D5E608);
PPC_FUNC_IMPL(__imp__sub_83D5E608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E60C"))) PPC_WEAK_FUNC(sub_83D5E60C);
PPC_FUNC_IMPL(__imp__sub_83D5E60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E610"))) PPC_WEAK_FUNC(sub_83D5E610);
PPC_FUNC_IMPL(__imp__sub_83D5E610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E614"))) PPC_WEAK_FUNC(sub_83D5E614);
PPC_FUNC_IMPL(__imp__sub_83D5E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E618"))) PPC_WEAK_FUNC(sub_83D5E618);
PPC_FUNC_IMPL(__imp__sub_83D5E618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E61C"))) PPC_WEAK_FUNC(sub_83D5E61C);
PPC_FUNC_IMPL(__imp__sub_83D5E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E620"))) PPC_WEAK_FUNC(sub_83D5E620);
PPC_FUNC_IMPL(__imp__sub_83D5E620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E624"))) PPC_WEAK_FUNC(sub_83D5E624);
PPC_FUNC_IMPL(__imp__sub_83D5E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E628"))) PPC_WEAK_FUNC(sub_83D5E628);
PPC_FUNC_IMPL(__imp__sub_83D5E628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E62C"))) PPC_WEAK_FUNC(sub_83D5E62C);
PPC_FUNC_IMPL(__imp__sub_83D5E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E630"))) PPC_WEAK_FUNC(sub_83D5E630);
PPC_FUNC_IMPL(__imp__sub_83D5E630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E634"))) PPC_WEAK_FUNC(sub_83D5E634);
PPC_FUNC_IMPL(__imp__sub_83D5E634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E638"))) PPC_WEAK_FUNC(sub_83D5E638);
PPC_FUNC_IMPL(__imp__sub_83D5E638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E63C"))) PPC_WEAK_FUNC(sub_83D5E63C);
PPC_FUNC_IMPL(__imp__sub_83D5E63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E640"))) PPC_WEAK_FUNC(sub_83D5E640);
PPC_FUNC_IMPL(__imp__sub_83D5E640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E644"))) PPC_WEAK_FUNC(sub_83D5E644);
PPC_FUNC_IMPL(__imp__sub_83D5E644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E648"))) PPC_WEAK_FUNC(sub_83D5E648);
PPC_FUNC_IMPL(__imp__sub_83D5E648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E64C"))) PPC_WEAK_FUNC(sub_83D5E64C);
PPC_FUNC_IMPL(__imp__sub_83D5E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E650"))) PPC_WEAK_FUNC(sub_83D5E650);
PPC_FUNC_IMPL(__imp__sub_83D5E650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E654"))) PPC_WEAK_FUNC(sub_83D5E654);
PPC_FUNC_IMPL(__imp__sub_83D5E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E658"))) PPC_WEAK_FUNC(sub_83D5E658);
PPC_FUNC_IMPL(__imp__sub_83D5E658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E65C"))) PPC_WEAK_FUNC(sub_83D5E65C);
PPC_FUNC_IMPL(__imp__sub_83D5E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E660"))) PPC_WEAK_FUNC(sub_83D5E660);
PPC_FUNC_IMPL(__imp__sub_83D5E660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E664"))) PPC_WEAK_FUNC(sub_83D5E664);
PPC_FUNC_IMPL(__imp__sub_83D5E664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E668"))) PPC_WEAK_FUNC(sub_83D5E668);
PPC_FUNC_IMPL(__imp__sub_83D5E668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E66C"))) PPC_WEAK_FUNC(sub_83D5E66C);
PPC_FUNC_IMPL(__imp__sub_83D5E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E670"))) PPC_WEAK_FUNC(sub_83D5E670);
PPC_FUNC_IMPL(__imp__sub_83D5E670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E674"))) PPC_WEAK_FUNC(sub_83D5E674);
PPC_FUNC_IMPL(__imp__sub_83D5E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E678"))) PPC_WEAK_FUNC(sub_83D5E678);
PPC_FUNC_IMPL(__imp__sub_83D5E678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E67C"))) PPC_WEAK_FUNC(sub_83D5E67C);
PPC_FUNC_IMPL(__imp__sub_83D5E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E680"))) PPC_WEAK_FUNC(sub_83D5E680);
PPC_FUNC_IMPL(__imp__sub_83D5E680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E684"))) PPC_WEAK_FUNC(sub_83D5E684);
PPC_FUNC_IMPL(__imp__sub_83D5E684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E688"))) PPC_WEAK_FUNC(sub_83D5E688);
PPC_FUNC_IMPL(__imp__sub_83D5E688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E68C"))) PPC_WEAK_FUNC(sub_83D5E68C);
PPC_FUNC_IMPL(__imp__sub_83D5E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E690"))) PPC_WEAK_FUNC(sub_83D5E690);
PPC_FUNC_IMPL(__imp__sub_83D5E690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E694"))) PPC_WEAK_FUNC(sub_83D5E694);
PPC_FUNC_IMPL(__imp__sub_83D5E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E698"))) PPC_WEAK_FUNC(sub_83D5E698);
PPC_FUNC_IMPL(__imp__sub_83D5E698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E69C"))) PPC_WEAK_FUNC(sub_83D5E69C);
PPC_FUNC_IMPL(__imp__sub_83D5E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6A0"))) PPC_WEAK_FUNC(sub_83D5E6A0);
PPC_FUNC_IMPL(__imp__sub_83D5E6A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6A4"))) PPC_WEAK_FUNC(sub_83D5E6A4);
PPC_FUNC_IMPL(__imp__sub_83D5E6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6A8"))) PPC_WEAK_FUNC(sub_83D5E6A8);
PPC_FUNC_IMPL(__imp__sub_83D5E6A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6AC"))) PPC_WEAK_FUNC(sub_83D5E6AC);
PPC_FUNC_IMPL(__imp__sub_83D5E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6B0"))) PPC_WEAK_FUNC(sub_83D5E6B0);
PPC_FUNC_IMPL(__imp__sub_83D5E6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6B4"))) PPC_WEAK_FUNC(sub_83D5E6B4);
PPC_FUNC_IMPL(__imp__sub_83D5E6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6B8"))) PPC_WEAK_FUNC(sub_83D5E6B8);
PPC_FUNC_IMPL(__imp__sub_83D5E6B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6BC"))) PPC_WEAK_FUNC(sub_83D5E6BC);
PPC_FUNC_IMPL(__imp__sub_83D5E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6C0"))) PPC_WEAK_FUNC(sub_83D5E6C0);
PPC_FUNC_IMPL(__imp__sub_83D5E6C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6C4"))) PPC_WEAK_FUNC(sub_83D5E6C4);
PPC_FUNC_IMPL(__imp__sub_83D5E6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6C8"))) PPC_WEAK_FUNC(sub_83D5E6C8);
PPC_FUNC_IMPL(__imp__sub_83D5E6C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6CC"))) PPC_WEAK_FUNC(sub_83D5E6CC);
PPC_FUNC_IMPL(__imp__sub_83D5E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6D0"))) PPC_WEAK_FUNC(sub_83D5E6D0);
PPC_FUNC_IMPL(__imp__sub_83D5E6D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6D4"))) PPC_WEAK_FUNC(sub_83D5E6D4);
PPC_FUNC_IMPL(__imp__sub_83D5E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6D8"))) PPC_WEAK_FUNC(sub_83D5E6D8);
PPC_FUNC_IMPL(__imp__sub_83D5E6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6DC"))) PPC_WEAK_FUNC(sub_83D5E6DC);
PPC_FUNC_IMPL(__imp__sub_83D5E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6E0"))) PPC_WEAK_FUNC(sub_83D5E6E0);
PPC_FUNC_IMPL(__imp__sub_83D5E6E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6E4"))) PPC_WEAK_FUNC(sub_83D5E6E4);
PPC_FUNC_IMPL(__imp__sub_83D5E6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6E8"))) PPC_WEAK_FUNC(sub_83D5E6E8);
PPC_FUNC_IMPL(__imp__sub_83D5E6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6EC"))) PPC_WEAK_FUNC(sub_83D5E6EC);
PPC_FUNC_IMPL(__imp__sub_83D5E6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6F0"))) PPC_WEAK_FUNC(sub_83D5E6F0);
PPC_FUNC_IMPL(__imp__sub_83D5E6F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6F4"))) PPC_WEAK_FUNC(sub_83D5E6F4);
PPC_FUNC_IMPL(__imp__sub_83D5E6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E6F8"))) PPC_WEAK_FUNC(sub_83D5E6F8);
PPC_FUNC_IMPL(__imp__sub_83D5E6F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E6FC"))) PPC_WEAK_FUNC(sub_83D5E6FC);
PPC_FUNC_IMPL(__imp__sub_83D5E6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E700"))) PPC_WEAK_FUNC(sub_83D5E700);
PPC_FUNC_IMPL(__imp__sub_83D5E700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E704"))) PPC_WEAK_FUNC(sub_83D5E704);
PPC_FUNC_IMPL(__imp__sub_83D5E704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E708"))) PPC_WEAK_FUNC(sub_83D5E708);
PPC_FUNC_IMPL(__imp__sub_83D5E708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E70C"))) PPC_WEAK_FUNC(sub_83D5E70C);
PPC_FUNC_IMPL(__imp__sub_83D5E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E710"))) PPC_WEAK_FUNC(sub_83D5E710);
PPC_FUNC_IMPL(__imp__sub_83D5E710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E714"))) PPC_WEAK_FUNC(sub_83D5E714);
PPC_FUNC_IMPL(__imp__sub_83D5E714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E718"))) PPC_WEAK_FUNC(sub_83D5E718);
PPC_FUNC_IMPL(__imp__sub_83D5E718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E71C"))) PPC_WEAK_FUNC(sub_83D5E71C);
PPC_FUNC_IMPL(__imp__sub_83D5E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E720"))) PPC_WEAK_FUNC(sub_83D5E720);
PPC_FUNC_IMPL(__imp__sub_83D5E720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E724"))) PPC_WEAK_FUNC(sub_83D5E724);
PPC_FUNC_IMPL(__imp__sub_83D5E724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E728"))) PPC_WEAK_FUNC(sub_83D5E728);
PPC_FUNC_IMPL(__imp__sub_83D5E728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E72C"))) PPC_WEAK_FUNC(sub_83D5E72C);
PPC_FUNC_IMPL(__imp__sub_83D5E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E730"))) PPC_WEAK_FUNC(sub_83D5E730);
PPC_FUNC_IMPL(__imp__sub_83D5E730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E734"))) PPC_WEAK_FUNC(sub_83D5E734);
PPC_FUNC_IMPL(__imp__sub_83D5E734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E738"))) PPC_WEAK_FUNC(sub_83D5E738);
PPC_FUNC_IMPL(__imp__sub_83D5E738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E73C"))) PPC_WEAK_FUNC(sub_83D5E73C);
PPC_FUNC_IMPL(__imp__sub_83D5E73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E740"))) PPC_WEAK_FUNC(sub_83D5E740);
PPC_FUNC_IMPL(__imp__sub_83D5E740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E744"))) PPC_WEAK_FUNC(sub_83D5E744);
PPC_FUNC_IMPL(__imp__sub_83D5E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E748"))) PPC_WEAK_FUNC(sub_83D5E748);
PPC_FUNC_IMPL(__imp__sub_83D5E748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E74C"))) PPC_WEAK_FUNC(sub_83D5E74C);
PPC_FUNC_IMPL(__imp__sub_83D5E74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E750"))) PPC_WEAK_FUNC(sub_83D5E750);
PPC_FUNC_IMPL(__imp__sub_83D5E750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E754"))) PPC_WEAK_FUNC(sub_83D5E754);
PPC_FUNC_IMPL(__imp__sub_83D5E754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E758"))) PPC_WEAK_FUNC(sub_83D5E758);
PPC_FUNC_IMPL(__imp__sub_83D5E758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E75C"))) PPC_WEAK_FUNC(sub_83D5E75C);
PPC_FUNC_IMPL(__imp__sub_83D5E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E760"))) PPC_WEAK_FUNC(sub_83D5E760);
PPC_FUNC_IMPL(__imp__sub_83D5E760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E764"))) PPC_WEAK_FUNC(sub_83D5E764);
PPC_FUNC_IMPL(__imp__sub_83D5E764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E768"))) PPC_WEAK_FUNC(sub_83D5E768);
PPC_FUNC_IMPL(__imp__sub_83D5E768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E76C"))) PPC_WEAK_FUNC(sub_83D5E76C);
PPC_FUNC_IMPL(__imp__sub_83D5E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E770"))) PPC_WEAK_FUNC(sub_83D5E770);
PPC_FUNC_IMPL(__imp__sub_83D5E770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E774"))) PPC_WEAK_FUNC(sub_83D5E774);
PPC_FUNC_IMPL(__imp__sub_83D5E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E778"))) PPC_WEAK_FUNC(sub_83D5E778);
PPC_FUNC_IMPL(__imp__sub_83D5E778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E77C"))) PPC_WEAK_FUNC(sub_83D5E77C);
PPC_FUNC_IMPL(__imp__sub_83D5E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E780"))) PPC_WEAK_FUNC(sub_83D5E780);
PPC_FUNC_IMPL(__imp__sub_83D5E780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E784"))) PPC_WEAK_FUNC(sub_83D5E784);
PPC_FUNC_IMPL(__imp__sub_83D5E784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E788"))) PPC_WEAK_FUNC(sub_83D5E788);
PPC_FUNC_IMPL(__imp__sub_83D5E788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E78C"))) PPC_WEAK_FUNC(sub_83D5E78C);
PPC_FUNC_IMPL(__imp__sub_83D5E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E790"))) PPC_WEAK_FUNC(sub_83D5E790);
PPC_FUNC_IMPL(__imp__sub_83D5E790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E794"))) PPC_WEAK_FUNC(sub_83D5E794);
PPC_FUNC_IMPL(__imp__sub_83D5E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E798"))) PPC_WEAK_FUNC(sub_83D5E798);
PPC_FUNC_IMPL(__imp__sub_83D5E798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E79C"))) PPC_WEAK_FUNC(sub_83D5E79C);
PPC_FUNC_IMPL(__imp__sub_83D5E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7A0"))) PPC_WEAK_FUNC(sub_83D5E7A0);
PPC_FUNC_IMPL(__imp__sub_83D5E7A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7A4"))) PPC_WEAK_FUNC(sub_83D5E7A4);
PPC_FUNC_IMPL(__imp__sub_83D5E7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7A8"))) PPC_WEAK_FUNC(sub_83D5E7A8);
PPC_FUNC_IMPL(__imp__sub_83D5E7A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7AC"))) PPC_WEAK_FUNC(sub_83D5E7AC);
PPC_FUNC_IMPL(__imp__sub_83D5E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7B0"))) PPC_WEAK_FUNC(sub_83D5E7B0);
PPC_FUNC_IMPL(__imp__sub_83D5E7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7B4"))) PPC_WEAK_FUNC(sub_83D5E7B4);
PPC_FUNC_IMPL(__imp__sub_83D5E7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7B8"))) PPC_WEAK_FUNC(sub_83D5E7B8);
PPC_FUNC_IMPL(__imp__sub_83D5E7B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7BC"))) PPC_WEAK_FUNC(sub_83D5E7BC);
PPC_FUNC_IMPL(__imp__sub_83D5E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7C0"))) PPC_WEAK_FUNC(sub_83D5E7C0);
PPC_FUNC_IMPL(__imp__sub_83D5E7C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7C4"))) PPC_WEAK_FUNC(sub_83D5E7C4);
PPC_FUNC_IMPL(__imp__sub_83D5E7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7C8"))) PPC_WEAK_FUNC(sub_83D5E7C8);
PPC_FUNC_IMPL(__imp__sub_83D5E7C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7CC"))) PPC_WEAK_FUNC(sub_83D5E7CC);
PPC_FUNC_IMPL(__imp__sub_83D5E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7D0"))) PPC_WEAK_FUNC(sub_83D5E7D0);
PPC_FUNC_IMPL(__imp__sub_83D5E7D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7D4"))) PPC_WEAK_FUNC(sub_83D5E7D4);
PPC_FUNC_IMPL(__imp__sub_83D5E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7D8"))) PPC_WEAK_FUNC(sub_83D5E7D8);
PPC_FUNC_IMPL(__imp__sub_83D5E7D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7DC"))) PPC_WEAK_FUNC(sub_83D5E7DC);
PPC_FUNC_IMPL(__imp__sub_83D5E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7E0"))) PPC_WEAK_FUNC(sub_83D5E7E0);
PPC_FUNC_IMPL(__imp__sub_83D5E7E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7E4"))) PPC_WEAK_FUNC(sub_83D5E7E4);
PPC_FUNC_IMPL(__imp__sub_83D5E7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7E8"))) PPC_WEAK_FUNC(sub_83D5E7E8);
PPC_FUNC_IMPL(__imp__sub_83D5E7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7EC"))) PPC_WEAK_FUNC(sub_83D5E7EC);
PPC_FUNC_IMPL(__imp__sub_83D5E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7F0"))) PPC_WEAK_FUNC(sub_83D5E7F0);
PPC_FUNC_IMPL(__imp__sub_83D5E7F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7F4"))) PPC_WEAK_FUNC(sub_83D5E7F4);
PPC_FUNC_IMPL(__imp__sub_83D5E7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E7F8"))) PPC_WEAK_FUNC(sub_83D5E7F8);
PPC_FUNC_IMPL(__imp__sub_83D5E7F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E7FC"))) PPC_WEAK_FUNC(sub_83D5E7FC);
PPC_FUNC_IMPL(__imp__sub_83D5E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E800"))) PPC_WEAK_FUNC(sub_83D5E800);
PPC_FUNC_IMPL(__imp__sub_83D5E800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E804"))) PPC_WEAK_FUNC(sub_83D5E804);
PPC_FUNC_IMPL(__imp__sub_83D5E804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E808"))) PPC_WEAK_FUNC(sub_83D5E808);
PPC_FUNC_IMPL(__imp__sub_83D5E808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E80C"))) PPC_WEAK_FUNC(sub_83D5E80C);
PPC_FUNC_IMPL(__imp__sub_83D5E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E810"))) PPC_WEAK_FUNC(sub_83D5E810);
PPC_FUNC_IMPL(__imp__sub_83D5E810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E814"))) PPC_WEAK_FUNC(sub_83D5E814);
PPC_FUNC_IMPL(__imp__sub_83D5E814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E818"))) PPC_WEAK_FUNC(sub_83D5E818);
PPC_FUNC_IMPL(__imp__sub_83D5E818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E81C"))) PPC_WEAK_FUNC(sub_83D5E81C);
PPC_FUNC_IMPL(__imp__sub_83D5E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E820"))) PPC_WEAK_FUNC(sub_83D5E820);
PPC_FUNC_IMPL(__imp__sub_83D5E820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E824"))) PPC_WEAK_FUNC(sub_83D5E824);
PPC_FUNC_IMPL(__imp__sub_83D5E824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E828"))) PPC_WEAK_FUNC(sub_83D5E828);
PPC_FUNC_IMPL(__imp__sub_83D5E828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E82C"))) PPC_WEAK_FUNC(sub_83D5E82C);
PPC_FUNC_IMPL(__imp__sub_83D5E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E830"))) PPC_WEAK_FUNC(sub_83D5E830);
PPC_FUNC_IMPL(__imp__sub_83D5E830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E834"))) PPC_WEAK_FUNC(sub_83D5E834);
PPC_FUNC_IMPL(__imp__sub_83D5E834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E838"))) PPC_WEAK_FUNC(sub_83D5E838);
PPC_FUNC_IMPL(__imp__sub_83D5E838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E83C"))) PPC_WEAK_FUNC(sub_83D5E83C);
PPC_FUNC_IMPL(__imp__sub_83D5E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E840"))) PPC_WEAK_FUNC(sub_83D5E840);
PPC_FUNC_IMPL(__imp__sub_83D5E840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E844"))) PPC_WEAK_FUNC(sub_83D5E844);
PPC_FUNC_IMPL(__imp__sub_83D5E844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E848"))) PPC_WEAK_FUNC(sub_83D5E848);
PPC_FUNC_IMPL(__imp__sub_83D5E848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E84C"))) PPC_WEAK_FUNC(sub_83D5E84C);
PPC_FUNC_IMPL(__imp__sub_83D5E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E850"))) PPC_WEAK_FUNC(sub_83D5E850);
PPC_FUNC_IMPL(__imp__sub_83D5E850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5E854"))) PPC_WEAK_FUNC(sub_83D5E854);
PPC_FUNC_IMPL(__imp__sub_83D5E854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5E858"))) PPC_WEAK_FUNC(sub_83D5E858);
PPC_FUNC_IMPL(__imp__sub_83D5E858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

